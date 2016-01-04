/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#include <osmocom/osmo-iuh/ranap/RANAP_TargetENB-ID.h>

static asn_TYPE_member_t asn_MBR_RANAP_TargetENB_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_TargetENB_ID, pLMNidentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_PLMNidentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pLMNidentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_TargetENB_ID, eNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANAP_ENB_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eNB-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct RANAP_TargetENB_ID, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_TargetENB_ID, selectedTAI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_TAI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"selectedTAI"
		},
};
static const int asn_MAP_RANAP_TargetENB_ID_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RANAP_TargetENB_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANAP_TargetENB_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNidentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* iE-Extensions */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* selectedTAI */
};
static asn_SEQUENCE_specifics_t asn_SPC_RANAP_TargetENB_ID_specs_1 = {
	sizeof(struct RANAP_TargetENB_ID),
	offsetof(struct RANAP_TargetENB_ID, _asn_ctx),
	asn_MAP_RANAP_TargetENB_ID_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RANAP_TargetENB_ID_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_TargetENB_ID = {
	"RANAP_TargetENB-ID",
	"RANAP_TargetENB-ID",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RANAP_TargetENB_ID_tags_1,
	sizeof(asn_DEF_RANAP_TargetENB_ID_tags_1)
		/sizeof(asn_DEF_RANAP_TargetENB_ID_tags_1[0]), /* 1 */
	asn_DEF_RANAP_TargetENB_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANAP_TargetENB_ID_tags_1)
		/sizeof(asn_DEF_RANAP_TargetENB_ID_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RANAP_TargetENB_ID_1,
	4,	/* Elements count */
	&asn_SPC_RANAP_TargetENB_ID_specs_1	/* Additional specs */
};

