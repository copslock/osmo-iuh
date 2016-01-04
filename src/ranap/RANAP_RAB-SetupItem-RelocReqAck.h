/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 */

#ifndef	_RANAP_RAB_SetupItem_RelocReqAck_H_
#define	_RANAP_RAB_SetupItem_RelocReqAck_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_RAB-ID.h>
#include <osmocom/osmo-iuh/ranap/RANAP_TransportLayerAddress.h>
#include <osmocom/osmo-iuh/ranap/RANAP_IuTransportAssociation.h>
#include <osmocom/osmo-iuh/ranap/RANAP_ProtocolExtensionContainer.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_RAB-SetupItem-RelocReqAck */
typedef struct RANAP_RAB_SetupItem_RelocReqAck {
	RANAP_RAB_ID_t	 rAB_ID;
	RANAP_TransportLayerAddress_t	*transportLayerAddress	/* OPTIONAL */;
	RANAP_IuTransportAssociation_t	*iuTransportAssociation	/* OPTIONAL */;
	RANAP_ProtocolExtensionContainer_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_RAB_SetupItem_RelocReqAck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_RAB_SetupItem_RelocReqAck;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_RAB_SetupItem_RelocReqAck_H_ */
#include <asn_internal.h>
