
typedef struct {
  uint32_t sfnt_version;
  uint16_t num_tables;
  uint16_t search_range;
  uint16_t entry_selector;
  uint16_t range_shift;
} ot_offset;

typedef struct {
  uint32_t tag;
  uint32_t check_sum;
  uint32_t offset;
  uint32_t length;
} ot_table_record;

typedef struct {
  uint32_t ttc_tag;
  uint16_t major_version;
  uint16_t minor_version;
  uint32_t num_fonts;
  uint32_t * offset_table;
} ot_ttc_header_f10;

typedef struct {
  uint32_t ttc_tag;
  uint16_t major_version;
  uint16_t minor_version;
  uint32_t num_fonts;
  uint32_t * offset_table;
  uint32_t dsig_tag;
  uint32_t dsig_lenth;
  uint32_t dsig_offset;
} ot_ttc_header_f20;
