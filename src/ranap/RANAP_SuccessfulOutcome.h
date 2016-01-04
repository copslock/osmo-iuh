/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 */

#ifndef	_RANAP_SuccessfulOutcome_H_
#define	_RANAP_SuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_ProcedureCode.h>
#include <osmocom/osmo-iuh/ranap/RANAP_Criticality.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_SuccessfulOutcome */
typedef struct RANAP_SuccessfulOutcome {
	RANAP_ProcedureCode_t	 procedureCode;
	RANAP_Criticality_t	 criticality;
	ANY_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_SuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_SuccessfulOutcome;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_SuccessfulOutcome_H_ */
#include <asn_internal.h>
