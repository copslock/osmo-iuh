/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#ifndef	_RANAP_TraceInformation_H_
#define	_RANAP_TraceInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/ranap/RANAP_TraceReference.h>
#include <osmocom/ranap/RANAP_UE-ID.h>
#include <osmocom/ranap/RANAP_TracePropagationParameters.h>
#include <osmocom/ranap/RANAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_TraceInformation */
typedef struct RANAP_TraceInformation {
	RANAP_TraceReference_t	 traceReference;
	RANAP_UE_ID_t	 ue_identity;
	RANAP_TracePropagationParameters_t	*tracePropagationParameters	/* OPTIONAL */;
	RANAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_TraceInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_TraceInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_TraceInformation_H_ */
#include <asn_internal.h>