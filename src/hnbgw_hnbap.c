#include <osmocom/core/msgb.h>
#include <osmocom/core/utils.h>
#include <osmocom/gsm/gsm48.h>

#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "asn1helpers.h"
#include "iu_helpers.h"

#include "hnbgw.h"
#include "hnbap_common.h"
#include "hnbap_ies_defs.h"

#define IU_MSG_NUM_IES		32
#define IU_MSG_NUM_EXT_IES	32

static int hnbgw_hnbap_tx(struct hnb_context *ctx, struct msgb *msg)
{
	if (!msg)
		return -EINVAL;

	msgb_ppid(msg) = IUH_PPI_HNBAP;
	return osmo_wqueue_enqueue(&ctx->wqueue, msg);
}

static int hnbgw_tx_hnb_register_acc(struct hnb_context *ctx)
{
	HNBRegisterAccept_t accept_out;
	struct msgb *msg;
	int rc;

	/* Single required response IE: RNC-ID */
	HNBRegisterAcceptIEs_t accept = {
		.rnc_id = ctx->gw->config.rnc_id
	};

	/* encode the Information Elements */
	memset(&accept_out, 0, sizeof(accept_out));
	rc = hnbap_encode_hnbregisteraccepties(&accept_out,  &accept);
	if (rc < 0) {
		return rc;
	}

	/* generate a successfull outcome PDU */
	msg = hnbap_generate_successful_outcome(ProcedureCode_id_HNBRegister,
					       Criticality_reject,
					       &asn_DEF_HNBRegisterAccept,
					       &accept_out);

	return hnbgw_hnbap_tx(ctx, msg);
}


static int hnbgw_tx_ue_register_acc(struct ue_context *ue)
{
	UERegisterAccept_t accept_out;
	UERegisterAcceptIEs_t accept;
	struct msgb *msg;
	uint8_t encoded_imsi[10];
	size_t encoded_imsi_len;
	int rc;

	encoded_imsi_len = encode_iu_imsi(encoded_imsi,
					  sizeof(encoded_imsi), ue->imsi);

	memset(&accept, 0, sizeof(accept));
	accept.uE_Identity.present = UE_Identity_PR_iMSI;
	OCTET_STRING_fromBuf(&accept.uE_Identity.choice.iMSI,
			     (const char *)encoded_imsi, encoded_imsi_len);
	asn1_u32_to_bitstring(&accept.context_ID, &ue->context_id);

	memset(&accept_out, 0, sizeof(accept_out));
	rc = hnbap_encode_ueregisteraccepties(&accept_out, &accept);
	if (rc < 0) {
		return rc;
	}

	msg = hnbap_generate_successful_outcome(ProcedureCode_id_UERegister,
						Criticality_reject,
						&asn_DEF_UERegisterAccept,
						&accept_out);
	return hnbgw_hnbap_tx(ue->hnb, msg);
}

static int hnbgw_rx_hnb_register_req(struct hnb_context *ctx, ANY_t *in)
{
	HNBRegisterRequestIEs_t ies;
	int rc;

	rc = hnbap_decode_hnbregisterrequesties(&ies, in);
	if (rc < 0)
		return rc;

	/* copy all identity parameters from the message to ctx */
	asn1_strncpy(ctx->identity_info, &ies.hnB_Identity.hNB_Identity_Info,
			sizeof(ctx->identity_info));
	ctx->id.lac = asn1str_to_u16(&ies.lac);
	ctx->id.sac = asn1str_to_u16(&ies.sac);
	ctx->id.rac = asn1str_to_u8(&ies.rac);
	ctx->id.cid = asn1bitstr_to_u32(&ies.cellIdentity);
	//ctx->id.mcc FIXME
	//ctx->id.mnc FIXME

	DEBUGP(DMAIN, "HNB-REGISTER-REQ from %s\n", ctx->identity_info);

	/* Send HNBRegisterAccept */
	return hnbgw_tx_hnb_register_acc(ctx);
}

static int hnbgw_rx_ue_register_req(struct hnb_context *ctx, ANY_t *in)
{
	UERegisterRequestIEs_t ies;
	struct ue_context *ue;
	char imsi[16];
	int rc;

	rc = hnbap_decode_ueregisterrequesties(&ies, in);
	if (rc < 0)
		return rc;

	switch (ies.uE_Identity.present) {
	case UE_Identity_PR_iMSI:
		decode_iu_bcd(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSI.buf,
			      ies.uE_Identity.choice.iMSI.size);
		break;
	case UE_Identity_PR_iMSIDS41:
		decode_iu_bcd(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSIDS41.buf,
			      ies.uE_Identity.choice.iMSIDS41.size);
		break;
	case UE_Identity_PR_iMSIESN:
		decode_iu_bcd(imsi, sizeof(imsi), ies.uE_Identity.choice.iMSIESN.iMSIDS41.buf,
			      ies.uE_Identity.choice.iMSIESN.iMSIDS41.size);
		break;
	default:
		LOGP(DMAIN, LOGL_NOTICE, "UE-REGISTER-REQ without IMSI?!?\n");
		return -1;
	}

	DEBUGP(DMAIN, "UE-REGSITER-REQ ID_type=%d imsi=%s cause=%ld\n",
		ies.uE_Identity.present, imsi, ies.registration_Cause);

	ue = ue_context_by_imsi(imsi);
	if (!ue)
		ue = ue_context_alloc(ctx, imsi);

	/* Send UERegisterAccept */
	return hnbgw_tx_ue_register_acc(ue);
}

static int hnbgw_rx_err_ind(struct hnb_context *hnb, ANY_t *in)
{
	ErrorIndicationIEs_t ies;
	int rc;

	rc = hnbap_decode_errorindicationies(&ies, in);
	if (rc < 0)
		return rc;

	LOGP(DMAIN, LOGL_NOTICE, "HNBAP ERROR.ind, cause: %s\n",
		hnbap_cause_str(&ies.cause));

	return 0;
}

static int hnbgw_rx_initiating_msg(struct hnb_context *hnb, InitiatingMessage_t *imsg)
{
	int rc;

	switch (imsg->procedureCode) {
	case ProcedureCode_id_HNBRegister:	/* 8.2 */
		rc = hnbgw_rx_hnb_register_req(hnb, &imsg->value);
		break;
	case ProcedureCode_id_HNBDe_Register:	/* 8.3 */
		break;
	case ProcedureCode_id_UERegister: 	/* 8.4 */
		rc = hnbgw_rx_ue_register_req(hnb, &imsg->value);
		break;
	case ProcedureCode_id_UEDe_Register:	/* 8.5 */
		break;
	case ProcedureCode_id_ErrorIndication:	/* 8.6 */
		rc = hnbgw_rx_err_ind(hnb, &imsg->value);
		break;
	case ProcedureCode_id_TNLUpdate:	/* 8.9 */
	case ProcedureCode_id_HNBConfigTransfer:	/* 8.10 */
	case ProcedureCode_id_RelocationComplete:	/* 8.11 */
	case ProcedureCode_id_U_RNTIQuery:	/* 8.12 */
	case ProcedureCode_id_privateMessage:
		LOGP(DMAIN, LOGL_NOTICE, "Unimplemented HNBAP Procedure %ld\n",
			imsg->procedureCode);
		break;
	default:
		LOGP(DMAIN, LOGL_NOTICE, "Unknown HNBAP Procedure %ld\n",
			imsg->procedureCode);
		break;
	}
}

static int hnbgw_rx_successful_outcome_msg(struct hnb_context *hnb, SuccessfulOutcome_t *msg)
{

}

static int hnbgw_rx_unsuccessful_outcome_msg(struct hnb_context *hnb, UnsuccessfulOutcome_t *msg)
{

}


static int _hnbgw_hnbap_rx(struct hnb_context *hnb, HNBAP_PDU_t *pdu)
{
	int rc;

	/* it's a bit odd that we can't dispatch on procedure code, but
	 * that's not possible */
	switch (pdu->present) {
	case HNBAP_PDU_PR_initiatingMessage:
		rc = hnbgw_rx_initiating_msg(hnb, &pdu->choice.initiatingMessage);
		break;
	case HNBAP_PDU_PR_successfulOutcome:
		rc = hnbgw_rx_successful_outcome_msg(hnb, &pdu->choice.successfulOutcome);
		break;
	case HNBAP_PDU_PR_unsuccessfulOutcome:
		rc = hnbgw_rx_unsuccessful_outcome_msg(hnb, &pdu->choice.unsuccessfulOutcome);
		break;
	default:
		LOGP(DMAIN, LOGL_NOTICE, "Unknown HNBAP Presence %u\n",
			pdu->present);
		return -1;
	}
}

int hnbgw_hnbap_rx(struct hnb_context *hnb, struct msgb *msg)
{
	HNBAP_PDU_t _pdu, *pdu = &_pdu;
	asn_dec_rval_t dec_ret;
	int rc;

	/* decode and handle to _hnbgw_hnbap_rx() */

	memset(pdu, 0, sizeof(*pdu));
	dec_ret = aper_decode(NULL, &asn_DEF_HNBAP_PDU, (void **) &pdu,
			      msg->data, msgb_length(msg), 0, 0);
	if (dec_ret.code != RC_OK) {
		LOGP(DMAIN, LOGL_ERROR, "Error in ASN.1 decode\n");
		return rc;
	}

	rc = _hnbgw_hnbap_rx(hnb, pdu);

	return rc;
}


int hnbgw_hnbap_init(void)
{

}
