/* The Mathematical Typesetting Table */

typedef struct {
  int16_t value;
  uint16_t device_table;
} math_value_record;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t off_math_constants;
  uint16_t off_math_glyph_info;
  uint16_t off_math_variants;
} math_header;

/* MathConstants Table */

typedef struct {
  int16_t script_percent_scale_down;
  int16_t script_script_percent_scale_down;
  uint16_t delimited_sub_formula_min_height;
  uint16_t display_operator_min_height;
  math_value_record math_leading;
  math_value_record axis_height;
  math_value_record accent_base_height;
  math_value_record flattened_accent_base_height;
  math_value_record subscript_shift_down;
  math_value_record subscript_top_max;
  math_value_record subscript_baseline_drop_min;
  math_value_record superscript_shift_up;
  math_value_record superscript_shift_up_cramped;
  math_value_record superscript_bottom_min;
  math_value_record superscript_baseline_drop_max;
  math_value_record sub_superscript_gap_min;
  math_value_record superscript_bottom_max_with_subscript;
  math_value_record space_after_script;
  math_value_record upper_limit_gap_min;
  math_value_record upper_limit_baseline_rise_min;
  math_value_record lower_limit_gap_min;
  math_value_record lower_limit_baseline_drop_min;
  math_value_record stack_top_shift_up;
  math_value_record stack_top_display_style_shift_up;
  math_value_record stack_bottom_shift_down;
  math_value_record stack_bottom_display_style_shift_down;
  math_value_record stack_gap_min;
  math_value_record stack_display_style_gap_min;
  math_value_record stretch_stack_top_shift_up;
  math_value_record stretch_stack_bottom_shift_down;
  math_value_record stretch_stack_gap_above_min;
  math_value_record stretch_stack_gap_below_min;
  math_value_record fraction_numerator_shift_up;
  math_value_record fraction_numerator_display_style_shift_up;
  math_value_record fraction_denominator_shift_down;
  math_value_record fraction_denominator_display_style_shift_down;
  math_value_record fraction_numerator_gap_min;
  math_value_record fraction_num_display_style_gap_min;
  math_value_record fraction_rule_thickness;
  math_value_record fraction_denominator_gap_min;
  math_value_record fraction_denom_display_style_gap_min;
  math_value_record skewed_fraction_horizontal_gap;
  math_value_record skewed_fraction_vertical_gap;
  math_value_record overbar_vertical_gap;
  math_value_record overbar_rule_thickness;
  math_value_record overbar_extra_ascender;
  math_value_record underbar_vertical_gap;
  math_value_record underbar_rule_thickness;
  math_value_record underbar_extra_descender;
  math_value_record radical_vertical_gap;
  math_value_record radical_display_style_vertical_gap;
  math_value_record radical_rule_thickness;
  math_value_record radical_extra_ascender;
  math_value_record radical_kern_before_degree;
  math_value_record radical_kern_after_degree;
  int16_t radical_degree_bottom_raise_percent;
} math_constants;

/* MathGlyphInfo Table */

typedef struct {
  uint16_t off_math_italics_correction_info;
  uint16_t off_math_top_accent_attachment;
  uint16_t off_extended_shape_coverage;
  uint16_t off_math_kern_info;
} math_glyph_info;

/* MathItalicsCorrectonInfo Table */

typedef struct {
  uint16_t coverage;
  uint16_t italics_correction_count;
  math_value_record * italics_correction;
} math_italics_correction_info;

/* MathTopAccentAttachment Table */

typedef struct {
  uint16_t top_accent_coverage;
  uint16_t top_accent_attachment_count;
  math_value_record * top_accent_attachment;
} math_top_accent_attachment;

/* MathKernInfo Table */

typedef struct math_kern_info_record math_kern_info_record;

typedef struct {
  uint16_t math_kern_coverage;
  uint16_t math_kern_count;
  math_kern_info_record * math_kern_info_records;
} math_kern_info;

typedef struct {
  uint16_t off_top_right_math_kern;
  uint16_t off_top_left_math_kern;
  uint16_t off_bottom_right_math_kern;
  uint16_t off_bottom_left_math_kern;
} math_kern_info_record;

/* MathKern Table */

typedef struct {
  uint16_t height_count;
  math_value_record * correction_height;
  math_value_record * kern_value;
} math_kern;

/* MathVariants Table */

typedef struct {
  uint16_t min_connector_overlap;
  uint16_t off_vert_glyph_coverage;
  uint16_t off_hofiz_glyph_coverage;
  uint16_t vert_glyph_count;
  uint16_t horiz_glyph_count;
  uint16_t * off_vert_glyph_construction;
  uint16_t * off_horiz_glyph_construction;
} math_variants;

/* MathGlyphConstruction Table */

typedef struct math_glyph_variant_record math_glyph_variant_record;

typedef struct {
  uint16_t off_glyph_assembly;
  uint16_t variant_count;
  math_glyph_variant_record * math_glyph_variant_records;
} math_glyph_construction;

typedef struct {
  uint16_t variant_glyph;
  uint16_t advance_measurement;
} math_glyph_variant_record;

/* GlyphAssembly Table */

typedef struct glyph_part_record glyph_part_record;

typedef struct {
  math_value_record italics_correction;
  uint16_t part_count;
  glyph_part_record * part_records;
} off_glyph_assembly;

typedef struct {
  uint16_t glyph;
  uint16_t start_connector_length;
  uint16_t end_connector_length;
  uint16_t full_advance;
  uint16_t part_flags;
} glyph_part_record;
