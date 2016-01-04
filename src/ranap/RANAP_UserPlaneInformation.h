/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 */

#ifndef	_RANAP_UserPlaneInformation_H_
#define	_RANAP_UserPlaneInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/ranap/RANAP_UserPlaneMode.h>
#include <osmocom/osmo-iuh/ranap/RANAP_UP-ModeVersions.h>
#include <osmocom/osmo-iuh/ranap/RANAP_ProtocolExtensionContainer.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_UserPlaneInformation */
typedef struct RANAP_UserPlaneInformation {
	RANAP_UserPlaneMode_t	 userPlaneMode;
	RANAP_UP_ModeVersions_t	 uP_ModeVersions;
	RANAP_ProtocolExtensionContainer_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_UserPlaneInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_UserPlaneInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_UserPlaneInformation_H_ */
#include <asn_internal.h>
