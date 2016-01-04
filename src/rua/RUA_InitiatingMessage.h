/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RUA-PDU"
 * 	found in "../../asn1/rua/RUA-PDU.asn"
 */

#ifndef	_RUA_InitiatingMessage_H_
#define	_RUA_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/rua/RUA_ProcedureCode.h>
#include <osmocom/osmo-iuh/rua/RUA_Criticality.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RUA_InitiatingMessage */
typedef struct RUA_InitiatingMessage {
	RUA_ProcedureCode_t	 procedureCode;
	RUA_Criticality_t	 criticality;
	ANY_t	 value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RUA_InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RUA_InitiatingMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _RUA_InitiatingMessage_H_ */
#include <asn_internal.h>
