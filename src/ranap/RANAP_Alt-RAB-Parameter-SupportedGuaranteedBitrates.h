/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#ifndef	_RANAP_Alt_RAB_Parameter_SupportedGuaranteedBitrates_H_
#define	_RANAP_Alt_RAB_Parameter_SupportedGuaranteedBitrates_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_SupportedRAB-ParameterBitrateList.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_Alt-RAB-Parameter-SupportedGuaranteedBitrates */
typedef struct RANAP_Alt_RAB_Parameter_SupportedGuaranteedBitrates {
	A_SEQUENCE_OF(RANAP_SupportedRAB_ParameterBitrateList_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_Alt_RAB_Parameter_SupportedGuaranteedBitrates_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_Alt_RAB_Parameter_SupportedGuaranteedBitrates;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_Alt_RAB_Parameter_SupportedGuaranteedBitrates_H_ */
#include <asn_internal.h>
