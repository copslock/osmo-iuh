/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#ifndef	_RANAP_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList_H_
#define	_RANAP_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_ExtendedGuaranteedBitrate.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_Requested-RAB-Parameter-ExtendedGuaranteedBitrateList */
typedef struct RANAP_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList {
	A_SEQUENCE_OF(RANAP_ExtendedGuaranteedBitrate_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList_H_ */
#include <asn_internal.h>
