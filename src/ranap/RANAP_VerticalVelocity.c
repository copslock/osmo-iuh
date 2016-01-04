/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "../../asn1/ranap/RANAP-IEs.asn"
 */

#include <osmocom/osmo-iuh/ranap/RANAP_VerticalVelocity.h>

static int
memb_veritcalSpeed_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0l && value <= 255l)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_veritcalSpeed_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0l,  255l }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RANAP_VerticalVelocity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_VerticalVelocity, veritcalSpeed),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_veritcalSpeed_constraint_1,
		&asn_PER_memb_veritcalSpeed_constr_2,
		0,
		"veritcalSpeed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_VerticalVelocity, veritcalSpeedDirection),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_VerticalSpeedDirection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"veritcalSpeedDirection"
		},
};
static const ber_tlv_tag_t asn_DEF_RANAP_VerticalVelocity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANAP_VerticalVelocity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* veritcalSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* veritcalSpeedDirection */
};
static asn_SEQUENCE_specifics_t asn_SPC_RANAP_VerticalVelocity_specs_1 = {
	sizeof(struct RANAP_VerticalVelocity),
	offsetof(struct RANAP_VerticalVelocity, _asn_ctx),
	asn_MAP_RANAP_VerticalVelocity_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_VerticalVelocity = {
	"RANAP_VerticalVelocity",
	"RANAP_VerticalVelocity",
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
	asn_DEF_RANAP_VerticalVelocity_tags_1,
	sizeof(asn_DEF_RANAP_VerticalVelocity_tags_1)
		/sizeof(asn_DEF_RANAP_VerticalVelocity_tags_1[0]), /* 1 */
	asn_DEF_RANAP_VerticalVelocity_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANAP_VerticalVelocity_tags_1)
		/sizeof(asn_DEF_RANAP_VerticalVelocity_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RANAP_VerticalVelocity_1,
	2,	/* Elements count */
	&asn_SPC_RANAP_VerticalVelocity_specs_1	/* Additional specs */
};

