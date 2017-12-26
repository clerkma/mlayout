/* The Mathematical Typesetting Table */

typedef struct {
  int16_t value;
  uint16_t device_table;
} math_value_record;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t math_constants;
  uint16_t math_glyph_info;
  uint16_t math_variants;
} math_header;
