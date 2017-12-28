/* Justification Table */

typedef struct {
  uint32_t jstf_script_tag;
  uint16_t jstf_script_offset;
} jstf_script_record;

typedef struct {
  uint16_t major_version;
  uint16_t minor_version;
  uint16_t jstf_script_count;
  jstf_script_record * jstf_script_records;
} jstf_header_f10;

typedef struct {
  uint32_t jstf_lang_sys_tag;
  uint16_t jstf_lang_sys_off;
} jstf_lang_sys_record;

typedef struct {
  uint16_t extender_glyph_offset;
  uint16_t def_jstf_lang_sys_offset;
  uint16_t jstf_lang_sys_offset;
  jstf_lang_sys_record * jstf_lang_sys_records;
} jstf_script;

typedef struct {
  uint16_t glyph_count;
  uint16_t * extender_glyphs;
} jstf_extender_glyph;

typedef struct {
  uint16_t jstf_priority_count;
  uint16_t * jstf_priority_offsets;
} jstf_lang_sys;

typedef struct {
  uint16_t shirnkage_enable_gsub;
  uint16_t shrinkage_disable_gsub;
  uint16_t shrinkage_enable_gpos;
  uint16_t shrinkage_disable_gpos;
  uint16_t shrinkage_jstf_max;
  uint16_t extension_enable_gsub;
  uint16_t extension_disable_gsub;
  uint16_t extension_enable_gpos;
  uint16_t extension_disable_gpos;
  uint16_t extension_jstf_max;
} jstf_priority;

typedef struct {
  uint16_t lookup_count;
  uint16_t * gsub_lookup_indices;
} jstf_gsub_mod_list;

typedef struct {
  uint16_t lookup_count;
  uint16_t * gpos_lookup_indices;
} jstf_gpos_mod_list;

typedef struct {
  uint16_t lookup_count;
  uint16_t * lookup_offsets;
} jstf_max;
