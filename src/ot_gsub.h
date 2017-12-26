/* Glyph Substitution Table */

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t script_list_offset;
  uint16_t feature_list_offset;
  uint16_t lookup_list_offset;
} gsub_header_f10;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t script_list_offset;
  uint16_t feature_list_offset;
  uint16_t lookup_list_offset;
  uint32_t feature_variations_offset;
} gsub_header_f11;

/* LookupType 1: Single Substitution Subtable */

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t delta_glyph_id;
} gsub_lookup_f11;

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t glyph_count;
  uint16_t * substitute_glyph_ids;
} gsub_lookup_f12;

/* LookupType 2: Multiple Substitution Subtable */

typedef struct {
  uint16_t glyph_count;
  uint16_t * substitute_glyph_ids;
} gsub_sequence;

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t sequence_count;
  uint16_t * sequence_offsets;
} gsub_lookup_f21;

/* LookupType 3: Alternate Substitution Subtable */

typedef struct {
  uint16_t glyph_count;
  uint16_t * alternate_glyph_ids;
} gsub_alternate_set;

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t alternate_set_count;
  uint16_t * alternate_set_offsets;
} gsub_lookup_f31;

/* LookupType 4: Ligature Substitution Subtable */

typedef struct {
  uint16_t ligature_count;
  uint16_t * ligature_offsets;
} gsub_ligature_set;

typedef struct {
  uint16_t ligature_glyph;
  uint16_t component_count;
  uint16_t * component_glyph_ids;
} gsub_ligature;

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t ligature_set_count;
  uint16_t * ligature_set_offsets;
} gsub_lookup_f41;

/* LookupType 5: Contextual Substitution Subtable */

typedef struct {
  uint16_t glyph_sequence_index;
  uint16_t lookup_list_index;
} gsub_subst_lookup_record;

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t sub_rule_set_count;
  uint16_t * sub_rule_set_offset;
} gsub_lookup_f51;

typedef struct {
  uint16_t sub_rule_count;
  uint16_t * sub_rule_offsets;
} gsub_sub_rule_set;

typedef struct {
  uint16_t glyph_count;
  uint16_t substitution_count;
  uint16_t * input_sequence;
  gsub_subst_lookup_record * subst_lookup_records;
} gsub_sub_rule;

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t class_def_offset;
  uint16_t sub_class_set_count;
  uint16_t * sub_class_set_offsets;
} gsub_lookup_f52;

typedef struct {
  uint16_t sub_class_rule_count;
  uint16_t * sub_class_rule_offsets;
} gsub_sub_class_set;

typedef struct {
  uint16_t glyph_count;
  uint16_t substitution_count;
  uint16_t * input_sequence;
  gsub_subst_lookup_record * subst_lookup_records;
} gsub_sub_class;

typedef struct {
  uint16_t subst_format;
  uint16_t glyph_count;
  uint16_t substitution_count;
  uint16_t * coverage_offsets;
  gsub_subst_lookup_record * subst_lookup_records;
} gsub_lookup_f53;

/* LookupType 6: Chaining Contextual Substitution Subtable */

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t chain_sub_rule_set_count;
  uint16_t * chain_sub_rule_set_offsets;
} gsub_lookup_f61;

typedef struct {
  uint16_t chain_sub_rule_count;
  uint16_t * chain_sub_rule_offsets;
} gsub_chain_sub_rule_set;

typedef struct {
  uint16_t backtrack_glyph_count;
  uint16_t * backtrack_sequence;
  uint16_t input_glyph_count;
  uint16_t * input_sequence;
  uint16_t lookahead_glyph_count;
  uint16_t * lookahead_sequence;
  uint16_t substitution_count;
  gsub_subst_lookup_record * subst_lookup_records;
} gsub_chain_sub_rule;

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t backtrack_class_def_offset;
  uint16_t input_class_def_offset;
  uint16_t lookahead_class_def_offset;
  uint16_t chain_sub_class_set_count;
  uint16_t * chain_sub_class_set_offsets;
} gsub_lookup_f62;

typedef struct {
  uint16_t chain_sub_class_rule_count;
  uint16_t * chain_sub_class_rule_offsets;
} gsub_chain_sub_class_set;

typedef struct {
  uint16_t backtrack_glyph_count;
  uint16_t * backtrack_sequence;
  uint16_t input_glyph_count;
  uint16_t * input_sequence;
  uint16_t lookahead_glyph_count;
  uint16_t * lookahead_glyph_sequence;
  uint16_t substitution_count;
  gsub_subst_lookup_record * subst_lookup_records;
} gsub_chain_sub_class_rule;

typedef struct {
  uint16_t subst_format;
  uint16_t backtrack_glyph_count;
  uint16_t * backtrack_coverage_offsets;
  uint16_t input_glyph_count;
  uint16_t * input_coverage_offsets;
  uint16_t lookahead_glyph_count;
  uint16_t * lookahead_coverage_offsets;
  uint16_t substitution_count;
  gsub_subst_lookup_record * subst_lookup_records;
} gsub_lookup_f63;

/* LookupType 7: Extension Substitution */

typedef struct {
  uint16_t subst_format;
  uint16_t extension_lookup_type;
  uint32_t extension_offset;
} gsub_lookup_f71;

/* LookupType 8: Reverse Chaining Contextual Single Substitution Subtable */

typedef struct {
  uint16_t subst_format;
  uint16_t coverage_offset;
  uint16_t backtrack_glyph_count;
  uint16_t * backtrack_coverage_offsets;
  uint16_t lookahead_glyph_count;
  uint16_t * lookahead_coverage_offsets;
  uint16_t glyph_count;
  uint16_t * substitute_glyph_ids;
} gsub_lookup_f81;
