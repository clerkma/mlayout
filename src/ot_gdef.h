/* Glyph Definition Table */

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t glyph_class_def_offset;
  uint16_t attach_list_offset;
  uint16_t lig_caret_list_offset;
  uint16_t mark_attach_class_def_offset;
} ot_gdef_f10;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t glyph_class_def_offset;
  uint16_t attach_list_offset;
  uint16_t lig_caret_list_offset;
  uint16_t mark_attach_class_def_offset;
  uint16_t mark_glyph_set_def_offset;
} ot_gdef_f12;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t glyph_class_def_offset;
  uint16_t attach_list_offset;
  uint16_t lig_caret_list_offset;
  uint16_t mark_attach_class_def_offset;
  uint16_t mark_glyph_set_def_offset;
  uint32_t item_var_store_offset;
} ot_gdef_f13;

/* Attachment Point List Table */

typedef struct {
  uint16_t point_count;
  uint16_t * point_indices;
} gdef_attach_point;

typedef struct {
  uint16_t coverage_offset;
  uint16_t glyph_count;
  uint16_t * attach_point_offsets;
} gdef_attach_list;

/* Ligature Caret List Table */

typedef struct {
  uint16_t caret_count;
  uint16_t * caret_value_offsets;
} gdef_lig_glyph;

typedef struct {
  uint16_t coverage_offset;
  uint16_t lig_glyph_count;
  uint16_t * lig_glyph_offsets;
} gdef_lig_caret_list;

typedef struct {
  uint16_t caret_value_format;
  int16_t coordinate;
} gdef_caret_value_f1;

typedef struct {
  uint16_t caret_value_format;
  uint16_t caret_value_point_index;
} gdef_caret_value_f2:

typedef struct {
  uint16_t caret_value_format;
  int16_t coordinate;
  uint16_t device_offset;
} gdef_caret_value_f3;

/* Mark Glyph Sets Table */

typedef struct {
  uint16_t mark_glyph_set_table_format;
  uint16_t mark_glyph_set_count;
  uint32_t coverage_offsets;
} gdef_mark_glyph_sets;
