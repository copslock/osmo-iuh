/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#ifndef	_RANAP_Alt_RAB_Parameter_SupportedMaxBitrateInf_H_
#define	_RANAP_Alt_RAB_Parameter_SupportedMaxBitrateInf_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_Alt-RAB-Parameter-MaxBitrateType.h>
#include <osmocom/osmo-iuh/ranap/RANAP_Alt-RAB-Parameter-SupportedMaxBitrates.h>
#include <osmocom/osmo-iuh/ranap/RANAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_Alt-RAB-Parameter-SupportedMaxBitrateInf */
typedef struct RANAP_Alt_RAB_Parameter_SupportedMaxBitrateInf {
	RANAP_Alt_RAB_Parameter_MaxBitrateType_t	 altSupportedMaxBitrateType;
	RANAP_Alt_RAB_Parameter_SupportedMaxBitrates_t	*altSupportedMaxBitrates	/* OPTIONAL */;
	RANAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_Alt_RAB_Parameter_SupportedMaxBitrateInf_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_Alt_RAB_Parameter_SupportedMaxBitrateInf;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_Alt_RAB_Parameter_SupportedMaxBitrateInf_H_ */
#include <asn_internal.h>
