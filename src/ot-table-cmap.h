
/* Character To Glyph Index Mapping Table */

typedef struct {
  uint16_t platformID;
  uint16_t encodingID;
  uint32_t offset;
} cmap_encoding_record;

typedef struct {
  uint16_t version;
  uint16_t numTables;
  cmap_encoding_record * encodingRecords;
} ot_cmap;

/* Format 0: Byte encoding table */

typedef struct {
  uint16_t format;
  uint16_t length;
  uint16_t language;
  uint8_t glyph_id_array[256];
} cmap_subtable_f0;

/* Format 2: High-byte mapping through table */

typedef struct {
  uint16_t first_code;
  uint16_t entry_count;
  int16_t id_delta;
  uint16_t id_range_offset;
} cmap_sub_header;

typedef struct {
  uint16_t format;
  uint16_t length;
  uint16_t language;
  uint16_t sub_header_keys[256];
  cmap_sub_header * sub_headers;
  uint16_t * glyph_index_array;
} cmap_subtable_f2;

/* Format 4: Segment mapping to delta values */

typedef struct {
  uint16_t format;
  uint16_t length;
  uint16_t language;
  uint16_t seg_count_x_2;
  uint16_t search_range;
  uint16_t entry_selector;
  uint16_t range_shift;
  uint16_t * end_count;
  uint16_t reserved_pad;
  uint16_t * start_count;
  int16_t * id_delta;
  uint16_t * id_range_offset;
  uint16_t glyph_id_array;
} cmap_subtable_f4;

/* Format 6: Trimmed table mapping */

typedef struct {
  uint16_t format;
  uint16_t length;
  uint16_t language;
  uint16_t first_code;
  uint16_t entry_count;
  uint16_t * glyph_id_array;
} cmap_subtable_f6;

/* Format 8: mixed 16-bit and 32-bit coverage */

typedef struct {
  uint32_t start_char_code;
  uint32_t end_char_code;
  uint32_t start_glyph_id;
} cmap_sequential_map_group_record;

typedef struct {
  uint16_t format;
  uint16_t reserved;
  uint16_t length;
  uint16_t language;
  uint8_t is32[8192];
  uint32_t num_groups;
  cmap_sequential_map_group_record * groups;
} cmap_subtable_f8;

/* Format 10: Trimmed array */

typedef struct {
  uint16_t format;
  uint16_t reserved;
  uint32_t length;
  uint32_t language;
  uint32_t start_char_code;
  uint32_t num_chars;
  uint16_t * glyphs;
} cmap_subtable_f10;

/* Format 12: Segmented coverage */

typedef struct {
  uint16_t format;
  uint16_t reserved;
  uint32_t length;
  uint32_t language;
  uint32_t num_groups;
  cmap_sequential_map_group_record * groups;
} cmap_subtable_f12;

/* Format 13: Many-to-one range mappings */

typedef struct {
  uint32_t start_char_code;
  uint32_t end_char_code;
  uint32_t glyph_id;
} cmap_constant_map_group;

typedef struct {
  uint16_t format;
  uint16_t reserved;
  uint32_t length;
  uint32_t language;
  uint32_t num_groups;
  cmap_constant_map_group * groups;
} cmap_subtable_f13;

/* Format 14: Unicode Variation Sequences */

typedef struct {
  uint32_t var_selector: 24;
  uint32_t default_uvs_offset;
  uint32_t non_default_uvs_offset;
} cmap_variation_selector_record;

typedef struct {
  uint16_t format;
  uint32_t length;
  uint32_t num_var_selector_records;
  cmap_variation_selector_record * var_selector;
} cmap_subtable_f14;

typedef struct {
  uint32_t start_unicode_value: 24;
  uint32_t additional_count: 8;
} cmap_unicode_range;

typedef struct {
  uint32_t num_unicode_value_ranges;
  cmap_unicode_range * ranges;
} cmap_default_uvs_table;

typedef struct {
  uint32_t unicode_value: 24;
  uint16_t glyph_id;
} cmap_uvs_mapping;

typedef struct {
  uint32_t num_uvs_mappings;
  cmap_uvs_mapping * uvs_mappings;
} cmap_nondefault_uvs_table;
