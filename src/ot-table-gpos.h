/* Glyph Positioning Table */

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t script_list_offset;
  uint16_t feature_list_offset;
  uint16_t lookup_list_offset;
} gpos_header_f10;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t script_list_offset;
  uint16_t feature_list_offset;
  uint16_t lookup_list_offset;
  uint32_t feature_variarions_offset;
} gpos_header_f11;

typedef struct {
  int16_t x_placement;
  int16_t y_placement;
  int16_t x_advance;
  int16_t y_advance;
  uint16_t x_pla_device_offset;
  uint16_t y_pla_device_offset;
  uint16_t x_adv_device_offset;
  uint16_t y_adv_device_offset;
} gpos_value_record;

typedef struct {
  uint16_t anchor_format;
  int16_t x_coordinate;
  int16_t y_coordinate;
} gpos_anchor_f1;

typedef struct {
  uint16_t anchor_format;
  int16_t x_coordinate;
  int16_t y_coordinate;
  uint16_t anchor_point;
} gpos_anchor_f2;

typedef struct {
  uint16_t anchor_format;
  int16_t x_coordinate;
  int16_t y_coordinate;
  uint16_t x_device_offset;
  uint16_t y_device_offset;
} gpos_anchor_f3;

typedef struct {
  uint16_t mark_class;
  uint16_t mark_anchor_offset;
} gpos_mark_record;

typedef struct {
  uint16_t mark_count;
  gpos_mark_record * mark_records;
} gpos_mark_array;

/* Lookup Type 1: Single Adjustment Positioning Subtable */

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t value_format;
  gpos_value_record value_record;
} gpos_lookup_f11;

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t value_format;
  uint16_t value_count;
  gpos_value_record * value_records;
} gpos_lookup_f12;

/* Lookup Type 2: Pair Adjustment Positioning Subtable */

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t value_format1;
  uint16_t value_format2;
  uint16_t pair_set_count;
  uint16_t * pair_set_offsets;
} gpos_lookup_f21;

typedef struct {
  uint16_t second_glyph;
  gpos_value_record value_record1;
  gpos_value_record value_record2;
} gpos_pair_value_record;

typedef struct {
  uint16_t pair_value_count;
  gpos_pair_value_record * pair_value_records;
} gpos_pair_set;

typedef struct {
  gpos_value_record value_record1;
  gpos_value_record value_record2;
} gpos_class2_record;

typedef struct {
  gpos_class2_record * class2_records;
} gpos_class1_record;

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t value_format1;
  uint16_t value_format2;
  uint16_t class_def1_offset;
  uint16_t class_def2_offset;
  uint16_t class1_count;
  uint16_t class2_count;
  gpos_class1_record * class1_records;
} gpos_lookup_f22;

/* Lookup Type 3: Cursive Attachment Positioning Subtable */

typedef struct {
  uint16_t entry_anchor_offset;
  uint16_t exit_anchor_offset;
} gpos_entry_exit_record;

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t extry_exit_count;
  gpos_entry_exit_record * entry_exit_records;
} gpos_lookup_f31;

/* Lookup Type 4: Mark-to-Base Attachment Positioning Subtable */

typedef struct {
  uint16_t * base_anchor_offsets;
} gpos_base_record;

typedef struct {
  uint16_t base_count;
  gpos_base_record * base_records;
} gpos_base_array;

typedef struct {
  uint16_t pos_format;
  uint16_t mark_coverage_offset;
  uint16_t base_coveragr_offset;
  uint16_t mark_class_count;
  uint16_t mark_array_offset;
  uint16_t base_array_offset;
} gpos_lookup_f41;

/* Lookup Type 5: Mark-to-Ligature Attachment Positioning Subtable */

typedef struct {
  uint16_t * ligature_anchor_offsets;
} gpos_component_record;

typedef struct {
  uint16_t component_count;
  gpos_component_record * component_records;
} gpos_ligature_attach;

typedef struct {
  uint16_t ligature_count;
  uint16_t * ligature_attach_offsets;
} gpos_ligature_array;

typedef struct {
  uint16_t pos_format;
  uint16_t mark_coverage_offset;
  uint16_t ligature_coverage_offset;
  uint16_t mark_class_count;
  uint16_t mark_array_offset;
  uint16_t ligature_array_offset;
} gpos_lookup_f51;

/* Lookup Type 6: Mark-to-Mark Attachment Positioning Subtable */

typedef struct {
  uint16_t * mark2_anchor_offsets;
} gpos_mark2_record;

typedef struct {
  uint16_t mark2_count;
  gpos_mark2_record * mark2_records;
} gpos_mark2_array;

typedef struct {
  uint16_t pos_format;
  uint16_t mark1_coverage_offset;
  uint16_t mark2_coverage_offset;
  uint16_t mark_class_count;
  uint16_t mark1_array_offset;
  uint16_t mark2_array_offset;
} gpos_lookup_f61;

/* Lookup Type 7: Contextual Positioning Subtables */

typedef struct {
  uint16_t sequence_index;
  uint16_t lookup_list_index;
} gpos_pos_lookup_record;

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t pos_rule_set_count;
  uint16_t * pos_rule_set_offsets;
} gpos_lookup_f71;

typedef struct {
  uint16_t pos_rule_count;
  uint16_t * pos_rule_offsets;
} gpos_pos_rule_set;

typedef struct {
  uint16_t glyph_count;
  uint16_t pos_count;
  uint16_t * input_sequence;
  uint16_t * pos_lookup_records;
} gpos_pos_rule;

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t class_def_offset;
  uint16_t pos_class_set_count;
  uint16_t * pos_class_set_offsets;
} gpos_lookup_f72;

typedef struct {
  uint16_t pos_class_rule_count;
  uint16_t * pos_class_rule_offsets;
} gpos_pos_class_set;

typedef struct {
  uint16_t glyph_count;
  uint16_t pos_count;
  uint16_t * classes;
  gpos_pos_lookup_record * gpos_pos_lookup_records;
} gpos_pos_class_rule;

typedef struct {
  uint16_t pos_format;
  uint16_t glyph_count;
  uint16_t pos_count;
  uint16_t * coverage_offsets;
  gpos_pos_lookup_record * pos_lookup_records;
} gpos_lookup_f73;

/* Lookup Type 8: Chaining Contextual Positioning Subtable */

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t chain_pos_rule_set_count;
  uint16_t * chain_pos_rule_set_offsets;
} gpos_lookup_f81;

typedef struct {
  uint16_t chin_pos_rule_count;
  uint16_t * chain_pos_rule_offsets;
} gpos_chain_pos_rule_set;

typedef struct {
  uint16_t backtrack_glyph_count;
  uint16_t * backtrack_sequence;
  uint16_t input_glyph_count;
  uint16_t * input_sequence;
  uint16_t lookahead_glyph_count;
  uint16_t * lookahead_sequence;
  uint16_t pos_count;
  gpos_pos_lookup_record * pos_lookup_records;
} gpos_chain_pos_rule;

typedef struct {
  uint16_t pos_format;
  uint16_t coverage_offset;
  uint16_t backtrack_class_def_offset;
  uint16_t input_class_def_offset;
  uint16_t lookahead_class_def_offset;
  uint16_t chain_pos_class_set_count;
  uint16_t * chain_pos_class_set_offsets;
} gpos_lookup_f82;

typedef struct {
  uint16_t chain_pos_class_rule_count;
  uint16_t * chain_pos_class_rule_offsets;
} gpos_chain_pos_class_set;

typedef struct {
  uint16_t backtracl_glyph_count;
  uint16_t * backtrack_sequence;
  uint16_t input_glyph_count;
  uint16_t * input_sequence;
  uint16_t lookahead_glyph_count;
  uint16_t * lookahead_sequence;
  uint16_t pos_count;
  gpos_pos_lookup_record * pos_lookup_records;
} gpos_chain_pos_class_rule;

typedef struct {
  uint16_t pos_format;
  uint16_t backtrack_glyph_count;
  uint16_t * backtrack_coverage_offsets;
  uint16_t input_glyph_count;
  uint16_t * input_coverage_offsets;
  uint16_t lookahead_glyph_count;
  uint16_t * lookahead_coverage_offsets;
  uint16_t pos_count;
  gpos_pos_lookup_record * pos_lookup_records;
} gpos_lookup_f83;

/* Lookup Type 9: Extension Positioning */

typedef struct {
  uint16_t pos_format;
  uint16_t extension_lookup_type;
  uint32_t extension_offset;
} gpos_lookup_f91;
