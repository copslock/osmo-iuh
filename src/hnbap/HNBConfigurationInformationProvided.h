/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_HNBConfigurationInformationProvided_H_
#define	_HNBConfigurationInformationProvided_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/hnbap/PSC.h>
#include <osmocom/osmo-iuh/hnbap/CSG-ID.h>
#include <osmocom/osmo-iuh/hnbap/HNB-Cell-Access-Mode.h>
#include <osmocom/osmo-iuh/hnbap/Iurh-Signalling-TNL-AddressList.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IE_Extensions;

/* HNBConfigurationInformationProvided */
typedef struct HNBConfigurationInformationProvided {
	PSC_t	*psc	/* OPTIONAL */;
	CSG_ID_t	*cSG_ID	/* OPTIONAL */;
	HNB_Cell_Access_Mode_t	 hNB_Cell_Access_Mode;
	Iurh_Signalling_TNL_AddressList_t	 iurh_Signalling_TNL_AddressList;
	struct IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HNBConfigurationInformationProvided_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HNBConfigurationInformationProvided;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include <osmocom/osmo-iuh/hnbap/IE-Extensions.h>

#endif	/* _HNBConfigurationInformationProvided_H_ */
#include <asn_internal.h>
