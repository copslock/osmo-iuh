/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "HNBAP-IEs"
 * 	found in "../../asn1/hnbap/HNBAP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include <osmocom/osmo-iuh/hnbap/HNB-GWResponse.h>

static asn_per_constraints_t asn_PER_type_HNB_GWResponse_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0l,  2l }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_HNB_GWResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HNB_GWResponse, choice.hNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HNBConfigInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hNB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HNB_GWResponse, choice.macroRNC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNC_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"macroRNC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HNB_GWResponse, choice.unknownU_RNTIIndication),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UnknownU_RNTIIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"unknownU-RNTIIndication"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_HNB_GWResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* macroRNC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* unknownU-RNTIIndication */
};
static asn_CHOICE_specifics_t asn_SPC_HNB_GWResponse_specs_1 = {
	sizeof(struct HNB_GWResponse),
	offsetof(struct HNB_GWResponse, _asn_ctx),
	offsetof(struct HNB_GWResponse, present),
	sizeof(((struct HNB_GWResponse *)0)->present),
	asn_MAP_HNB_GWResponse_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_HNB_GWResponse = {
	"HNB-GWResponse",
	"HNB-GWResponse",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_HNB_GWResponse_constr_1,
	asn_MBR_HNB_GWResponse_1,
	3,	/* Elements count */
	&asn_SPC_HNB_GWResponse_specs_1	/* Additional specs */
};

