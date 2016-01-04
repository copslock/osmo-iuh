/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RUA-IEs"
 * 	found in "../../asn1/rua/RUA-IEs.asn"
 */

#include <osmocom/osmo-iuh/rua/RUA_IntraDomainNasNodeSelector.h>

static int
memb_futurecoding_constraint_7(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 15l)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_cn_Type_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0l,  1l }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_futurecoding_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  15l,  15l }	/* (SIZE(15..15)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_version_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0l,  1l }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_cn_Type_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct cn_Type, choice.gsm_Map_IDNNS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RUA_Gsm_map_IDNNS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gsm-Map-IDNNS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct cn_Type, choice.ansi_41_IDNNS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RUA_Ansi_41_IDNNS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ansi-41-IDNNS"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cn_Type_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gsm-Map-IDNNS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ansi-41-IDNNS */
};
static asn_CHOICE_specifics_t asn_SPC_cn_Type_specs_4 = {
	sizeof(struct cn_Type),
	offsetof(struct cn_Type, _asn_ctx),
	offsetof(struct cn_Type, present),
	sizeof(((struct cn_Type *)0)->present),
	asn_MAP_cn_Type_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cn_Type_4 = {
	"cn-Type",
	"cn-Type",
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
	&asn_PER_type_cn_Type_constr_4,
	asn_MBR_cn_Type_4,
	2,	/* Elements count */
	&asn_SPC_cn_Type_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_release99_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct release99, cn_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cn_Type_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-Type"
		},
};
static const ber_tlv_tag_t asn_DEF_release99_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_release99_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cn-Type */
};
static asn_SEQUENCE_specifics_t asn_SPC_release99_specs_3 = {
	sizeof(struct release99),
	offsetof(struct release99, _asn_ctx),
	asn_MAP_release99_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_release99_3 = {
	"release99",
	"release99",
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
	asn_DEF_release99_tags_3,
	sizeof(asn_DEF_release99_tags_3)
		/sizeof(asn_DEF_release99_tags_3[0]) - 1, /* 1 */
	asn_DEF_release99_tags_3,	/* Same as above */
	sizeof(asn_DEF_release99_tags_3)
		/sizeof(asn_DEF_release99_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_release99_3,
	1,	/* Elements count */
	&asn_SPC_release99_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_later_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct later, futurecoding),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_futurecoding_constraint_7,
		&asn_PER_memb_futurecoding_constr_8,
		0,
		"futurecoding"
		},
};
static const ber_tlv_tag_t asn_DEF_later_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_later_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* futurecoding */
};
static asn_SEQUENCE_specifics_t asn_SPC_later_specs_7 = {
	sizeof(struct later),
	offsetof(struct later, _asn_ctx),
	asn_MAP_later_tag2el_7,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_later_7 = {
	"later",
	"later",
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
	asn_DEF_later_tags_7,
	sizeof(asn_DEF_later_tags_7)
		/sizeof(asn_DEF_later_tags_7[0]) - 1, /* 1 */
	asn_DEF_later_tags_7,	/* Same as above */
	sizeof(asn_DEF_later_tags_7)
		/sizeof(asn_DEF_later_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_later_7,
	1,	/* Elements count */
	&asn_SPC_later_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_version_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct version, choice.release99),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_release99_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release99"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct version, choice.later),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_later_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"later"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_version_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release99 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* later */
};
static asn_CHOICE_specifics_t asn_SPC_version_specs_2 = {
	sizeof(struct version),
	offsetof(struct version, _asn_ctx),
	offsetof(struct version, present),
	sizeof(((struct version *)0)->present),
	asn_MAP_version_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_version_2 = {
	"version",
	"version",
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
	&asn_PER_type_version_constr_2,
	asn_MBR_version_2,
	2,	/* Elements count */
	&asn_SPC_version_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RUA_IntraDomainNasNodeSelector_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RUA_IntraDomainNasNodeSelector, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_version_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"version"
		},
};
static const ber_tlv_tag_t asn_DEF_RUA_IntraDomainNasNodeSelector_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RUA_IntraDomainNasNodeSelector_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* version */
};
static asn_SEQUENCE_specifics_t asn_SPC_RUA_IntraDomainNasNodeSelector_specs_1 = {
	sizeof(struct RUA_IntraDomainNasNodeSelector),
	offsetof(struct RUA_IntraDomainNasNodeSelector, _asn_ctx),
	asn_MAP_RUA_IntraDomainNasNodeSelector_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RUA_IntraDomainNasNodeSelector = {
	"RUA_IntraDomainNasNodeSelector",
	"RUA_IntraDomainNasNodeSelector",
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
	asn_DEF_RUA_IntraDomainNasNodeSelector_tags_1,
	sizeof(asn_DEF_RUA_IntraDomainNasNodeSelector_tags_1)
		/sizeof(asn_DEF_RUA_IntraDomainNasNodeSelector_tags_1[0]), /* 1 */
	asn_DEF_RUA_IntraDomainNasNodeSelector_tags_1,	/* Same as above */
	sizeof(asn_DEF_RUA_IntraDomainNasNodeSelector_tags_1)
		/sizeof(asn_DEF_RUA_IntraDomainNasNodeSelector_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RUA_IntraDomainNasNodeSelector_1,
	1,	/* Elements count */
	&asn_SPC_RUA_IntraDomainNasNodeSelector_specs_1	/* Additional specs */
};

