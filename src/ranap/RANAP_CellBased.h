/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#ifndef	_RANAP_CellBased_H_
#define	_RANAP_CellBased_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_CellIdList.h>
#include <osmocom/osmo-iuh/ranap/RANAP_IE-Extensions.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_CellBased */
typedef struct RANAP_CellBased {
	RANAP_CellIdList_t	 cellIdList;
	RANAP_IE_Extensions_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_CellBased_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_CellBased;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_CellBased_H_ */
#include <asn_internal.h>
