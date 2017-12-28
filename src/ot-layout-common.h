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

/* Class Definition Table */

/* Device and VariationIndex Tables */

/* FeatureVariations Table */

/* ConditionSet Table */

/* Condition Table */

/* FeatureTableSubstitution Table */
