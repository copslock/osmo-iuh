/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CriticalityDiagnostics_H_
#define	_CriticalityDiagnostics_H_


#include <asn_application.h>

/* Including external dependencies */
#include <osmocom/osmo-iuh/hnbap/ProcedureCode.h>
#include <osmocom/osmo-iuh/hnbap/TriggeringMessage.h>
#include <osmocom/osmo-iuh/hnbap/Criticality.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CriticalityDiagnostics_IE_List;
struct IE_Extensions;

/* CriticalityDiagnostics */
typedef struct CriticalityDiagnostics {
	ProcedureCode_t	*procedureCode	/* OPTIONAL */;
	TriggeringMessage_t	*triggeringMessage	/* OPTIONAL */;
	Criticality_t	*procedureCriticality	/* OPTIONAL */;
	struct CriticalityDiagnostics_IE_List	*iEsCriticalityDiagnostics	/* OPTIONAL */;
	struct IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CriticalityDiagnostics;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include <osmocom/osmo-iuh/hnbap/CriticalityDiagnostics-IE-List.h>
#include <osmocom/osmo-iuh/hnbap/IE-Extensions.h>

#endif	/* _CriticalityDiagnostics_H_ */
#include <asn_internal.h>
