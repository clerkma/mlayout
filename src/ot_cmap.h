
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
