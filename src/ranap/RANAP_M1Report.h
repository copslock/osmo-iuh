/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#ifndef	_RANAP_M1Report_H_
#define	_RANAP_M1Report_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_MDT-Report-Parameters.h>
#include <osmocom/osmo-iuh/ranap/RANAP_Event1F-Parameters.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANAP_M1Report_PR {
	RANAP_M1Report_PR_NOTHING,	/* No components present */
	RANAP_M1Report_PR_periodic,
	RANAP_M1Report_PR_event1F,
	/* Extensions may appear below */
	
} RANAP_M1Report_PR;

/* RANAP_M1Report */
typedef struct RANAP_M1Report {
	RANAP_M1Report_PR present;
	union RANAP_M1Report_u {
		RANAP_MDT_Report_Parameters_t	 periodic;
		RANAP_Event1F_Parameters_t	 event1F;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_M1Report_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_M1Report;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_M1Report_H_ */
#include <asn_internal.h>
