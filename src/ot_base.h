/* Baseline Table */

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t horiz_axis_offset;
  uint16_t vert_axis_offset;
} base_header_f10;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t horiz_axis_offset;
  uint16_t vert_axis_offset;
  uint32_t item_var_store_offset;
} base_header_f11;

typedef struct {
  uint16_t base_tag_list_offset;
  uint16_t base_script_list_offset;
} base_axis;

typedef struct {
  uint16_t base_tag_count;
  uint32_t * baseline_tags;
} base_tag_list;

typedef struct {
  uint32_t base_script_tag;
  uint16_t base_script_offset;
} base_script_record;

typedef struct {
  uint16_t base_script_count;
  base_script_record * base_script_records;
} base_script_list;

typedef struct {
  uint32_t base_lang_sys_tag;
  uint16_t min_max_offset;
} base_lang_sys_record;

typedef struct {
  uint16_t base_value_offset;
  uint16_t default_min_max_offset;
  uint16_t base_lang_sys_count;
  base_lang_sys_record * base_lang_sys_records;
} base_script;

typedef struct {
  uint16_t default_baseline_index;
  uint16_t base_coord_count;
  uint16_t * base_coords;
} base_values;

typedef struct {
  uint32_t feature_table_tag;
  uint16_t min_coord;
  uint16_t max_coord;
} base_feat_min_max_record;

typedef struct {
  uint16_t min_coord;
  uint16_t max_coord;
  uint16_t feat_min_max_count;
  base_feat_min_max_record * feat_min_max_records;
} base_min_max;

typedef struct {
  uint16_t base_coord_format;
  int16_t coordinate;
} base_coord_f1;

typedef struct {
  uint16_t base_coord_format;
  int16_t coordinate;
  uint16_t reference_glyph;
  uint16_t base_coord_point;
} base_coord_f2;

typedef struct {
  uint16_t base_coord_format;
  int16_t coordinate;
  uint16_t device_table;
} base_coord_f3;
