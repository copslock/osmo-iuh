/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Iurh_Signalling_TNL_AddressList_H_
#define	_Iurh_Signalling_TNL_AddressList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IP_Address;

/* Iurh-Signalling-TNL-AddressList */
typedef struct Iurh_Signalling_TNL_AddressList {
	A_SEQUENCE_OF(struct IP_Address) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Iurh_Signalling_TNL_AddressList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Iurh_Signalling_TNL_AddressList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include <osmocom/osmo-iuh/hnbap/IP-Address.h>

#endif	/* _Iurh_Signalling_TNL_AddressList_H_ */
#include <asn_internal.h>
