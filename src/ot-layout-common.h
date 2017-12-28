/* OpenType Layout Common Table Formats */

/* Script List Table and Script Record */

typedef struct {
  uint32_t script_tag;
  uint16_t script_offset;
} otl_script_record;

typedef struct {
  uint16_t script_count;
  otl_script_record * script_records;
} otl_script_list;

/* Script Table and Language System Record */

typedef struct {
  uint32_t lang_sys_tag;
  uint16_t lang_sys_record;
} otl_lang_sys_record;

typedef struct {
  uint16_t default_lang_sys;
  uint16_t lang_sys_count;
  otl_lang_sys_record * lang_sys_records;
} otl_script;

/* Language System Table */

typedef struct {
  uint16_t lookup_order;
  uint16_t required_feature_index;
  uint16_t feature_index_count;
  uint16_t * feature_indices;
} otl_lang_sys;

/* Feature List Table */

typedef struct {
  uint32_t feature_tag;
  uint32_t feature_offset;
} otl_feature_record;

typedef struct {
  uint16_t feature_count;
  otl_feature_record * feature_records;
} otl_feature_list;

/* Feature Table */

typedef struct {
  uint16_t feature_params;
  uint16_t lookup_index_count;
  uint16_t lookup_list_indices;
} otl_feature;

/* Lookup List Table */

typedef struct {
  uint16_t lookup_count;
  uint16_t * lookups;
} otl_feature_list;

/* Lookup Table */

typedef struct {
  uint16_t lookup_type;
  uint16_t lookup_flag;
  uint16_t sub_table_count;
  uint16_t * sub_table_offsets;
  uint16_t mark_filtering_set;
} otl_lookup;

/* Coverage Table */

typedef struct {
  uint16_t coverage_format;
  uint16_t glyph_count;
  uint16_t * glyph_array;
} otl_coverage_f1;

typedef struct {
  uint16_t start_glyph_id;
  uint16_t end_glyph_id;
  uint16_t start_coverage_index;
} otl_range_record;

typedef struct {
  uint16_t coverage_format;
  uint16_t range_count;
  otl_range_record * range_records;
} otl_coverage_f2;

/* Class Definition Table */

typedef struct {
  uint16_t class_format;
  uint16_t start_glyph_id;
  uint16_t glyph_count;
  uint16_t * class_value_array;
} otl_class_def_f1;

typedef struct {
  uint16_t start_glyph_id;
  uint16_t end_glyph_id;
  uint16_t gclass;
} otl_class_range_record;

typedef struct {
  uint16_t class_format;
  uint16_t class_range_count;
  otl_class_range_record * class_range_records;
} otl_class_def_f2;

/* Device and VariationIndex Tables */

typedef struct {
  uint16_t start_size;
  uint16_t end_size;
  uint16_t delta_format;
  uint16_t * delate_value;
} otl_device;

typedef struct {
  uint16_t delta_set_outer_index;
  uint16_t delta_set_inner_index;
  uint16_t delta_format;
} otl_variation_index;

/* FeatureVariations Table */

typedef struct {
  uint32_t condition_set_offset;
  uint32_t feature_table_substitution_offset;
} otl_feature_variations_record;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint32_t feature_variations_record_count;
  otl_feature_variations_record * feature_variations_records;
} otl_feature_variations;

/* ConditionSet Table */

typedef struct {
  uint16_t condition_count;
  uint32_t conditions;
} otl_condition_set;

/* Condition Table */

typedef struct {
  uint16_t format;
  uint16_t axis_index;
  uint16_t filter_range_min_value;
  uint16_t filter_range_max_value;
} otl_condition_table_f1;

/* FeatureTableSubstitution Table */

typedef struct {
  uint16_t feature_index;
  uint32_t alternate_feature_table;
} otl_feature_table_substitution_record;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t substitution_count;
  otl_feature_table_substitution_record * substitutions;
} otl_feature_table_substitution;
