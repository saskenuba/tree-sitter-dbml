#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_identifier = 1,
  anon_sym_notnull = 2,
  anon_sym_null = 3,
  anon_sym_pk = 4,
  anon_sym_primarykey = 5,
  anon_sym_unique = 6,
  anon_sym_increment = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  anon_sym_DASH = 10,
  aux_sym_primitive_type_token1 = 11,
  aux_sym_primitive_type_token2 = 12,
  anon_sym_float = 13,
  anon_sym_text = 14,
  anon_sym_varchar = 15,
  anon_sym_as = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_table = 19,
  anon_sym_LBRACK = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACK = 22,
  anon_sym_indexes = 23,
  aux_sym_relationship_definition_top_level_token1 = 24,
  anon_sym_COLON = 25,
  anon_sym_ref_COLON = 26,
  aux_sym_relationship_settings_token1 = 27,
  anon_sym_setdefault = 28,
  anon_sym_setnull = 29,
  anon_sym_restrict = 30,
  anon_sym_noaction = 31,
  anon_sym_cascade = 32,
  anon_sym_DOT = 33,
  aux_sym__table_ident_token1 = 34,
  anon_sym_SLASH_SLASH = 35,
  aux_sym_comment_token1 = 36,
  anon_sym_enum = 37,
  aux_sym_tablegroup_definition_token1 = 38,
  sym_project_file = 39,
  sym_attribute_kind = 40,
  sym_cardinality_op = 41,
  sym_primitive_type = 42,
  sym_custom_type = 43,
  sym__declaration = 44,
  sym_field_declaration_list = 45,
  sym_table_definition = 46,
  sym__type_field = 47,
  sym_field_declaration = 48,
  sym_field_attribute_list = 49,
  sym_index_declaration = 50,
  sym_index_attribute_list = 51,
  sym_relationship_definition_top_level = 52,
  sym_relationship_declaration_full = 53,
  sym_relationship_declaration_inline = 54,
  sym_relationship_settings_list = 55,
  sym_relationship_settings = 56,
  sym_wot = 57,
  sym_relationship = 58,
  sym__table_ident = 59,
  sym_comment = 60,
  sym_enum_definition = 61,
  sym_enumerator_list = 62,
  sym_enumerator = 63,
  sym_tablegroup_definition = 64,
  sym_tablegroup_list = 65,
  aux_sym_project_file_repeat1 = 66,
  aux_sym_field_declaration_list_repeat1 = 67,
  aux_sym_field_attribute_list_repeat1 = 68,
  aux_sym_index_attribute_list_repeat1 = 69,
  aux_sym_relationship_settings_list_repeat1 = 70,
  aux_sym_enumerator_list_repeat1 = 71,
  aux_sym_tablegroup_list_repeat1 = 72,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_notnull] = "not null",
  [anon_sym_null] = "null",
  [anon_sym_pk] = "pk",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_unique] = "unique",
  [anon_sym_increment] = "increment",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DASH] = "-",
  [aux_sym_primitive_type_token1] = "primitive_type_token1",
  [aux_sym_primitive_type_token2] = "primitive_type_token2",
  [anon_sym_float] = "float",
  [anon_sym_text] = "text",
  [anon_sym_varchar] = "varchar",
  [anon_sym_as] = "as",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_table] = "table",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_indexes] = "indexes",
  [aux_sym_relationship_definition_top_level_token1] = "relationship_definition_top_level_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_ref_COLON] = "ref:",
  [aux_sym_relationship_settings_token1] = "relationship_settings_token1",
  [anon_sym_setdefault] = "set default",
  [anon_sym_setnull] = "set null",
  [anon_sym_restrict] = "restrict",
  [anon_sym_noaction] = "no action",
  [anon_sym_cascade] = "cascade",
  [anon_sym_DOT] = ".",
  [aux_sym__table_ident_token1] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_enum] = "enum",
  [aux_sym_tablegroup_definition_token1] = "tablegroup_definition_token1",
  [sym_project_file] = "project_file",
  [sym_attribute_kind] = "attribute_kind",
  [sym_cardinality_op] = "cardinality_op",
  [sym_primitive_type] = "primitive_type",
  [sym_custom_type] = "custom_type",
  [sym__declaration] = "_declaration",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_table_definition] = "table_definition",
  [sym__type_field] = "_type_field",
  [sym_field_declaration] = "field_declaration",
  [sym_field_attribute_list] = "field_attribute_list",
  [sym_index_declaration] = "index_declaration",
  [sym_index_attribute_list] = "index_attribute_list",
  [sym_relationship_definition_top_level] = "relationship_definition_top_level",
  [sym_relationship_declaration_full] = "relationship_declaration_full",
  [sym_relationship_declaration_inline] = "relationship_declaration_inline",
  [sym_relationship_settings_list] = "relationship_settings_list",
  [sym_relationship_settings] = "relationship_settings",
  [sym_wot] = "wot",
  [sym_relationship] = "relationship",
  [sym__table_ident] = "_table_ident",
  [sym_comment] = "comment",
  [sym_enum_definition] = "enum_definition",
  [sym_enumerator_list] = "enumerator_list",
  [sym_enumerator] = "enumerator",
  [sym_tablegroup_definition] = "tablegroup_definition",
  [sym_tablegroup_list] = "tablegroup_list",
  [aux_sym_project_file_repeat1] = "project_file_repeat1",
  [aux_sym_field_declaration_list_repeat1] = "field_declaration_list_repeat1",
  [aux_sym_field_attribute_list_repeat1] = "field_attribute_list_repeat1",
  [aux_sym_index_attribute_list_repeat1] = "index_attribute_list_repeat1",
  [aux_sym_relationship_settings_list_repeat1] = "relationship_settings_list_repeat1",
  [aux_sym_enumerator_list_repeat1] = "enumerator_list_repeat1",
  [aux_sym_tablegroup_list_repeat1] = "tablegroup_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_primitive_type_token1] = aux_sym_primitive_type_token1,
  [aux_sym_primitive_type_token2] = aux_sym_primitive_type_token2,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_varchar] = anon_sym_varchar,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_indexes] = anon_sym_indexes,
  [aux_sym_relationship_definition_top_level_token1] = aux_sym_relationship_definition_top_level_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ref_COLON] = anon_sym_ref_COLON,
  [aux_sym_relationship_settings_token1] = aux_sym_relationship_settings_token1,
  [anon_sym_setdefault] = anon_sym_setdefault,
  [anon_sym_setnull] = anon_sym_setnull,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_noaction] = anon_sym_noaction,
  [anon_sym_cascade] = anon_sym_cascade,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__table_ident_token1] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_enum] = anon_sym_enum,
  [aux_sym_tablegroup_definition_token1] = aux_sym_tablegroup_definition_token1,
  [sym_project_file] = sym_project_file,
  [sym_attribute_kind] = sym_attribute_kind,
  [sym_cardinality_op] = sym_cardinality_op,
  [sym_primitive_type] = sym_primitive_type,
  [sym_custom_type] = sym_custom_type,
  [sym__declaration] = sym__declaration,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_table_definition] = sym_table_definition,
  [sym__type_field] = sym__type_field,
  [sym_field_declaration] = sym_field_declaration,
  [sym_field_attribute_list] = sym_field_attribute_list,
  [sym_index_declaration] = sym_index_declaration,
  [sym_index_attribute_list] = sym_index_attribute_list,
  [sym_relationship_definition_top_level] = sym_relationship_definition_top_level,
  [sym_relationship_declaration_full] = sym_relationship_declaration_full,
  [sym_relationship_declaration_inline] = sym_relationship_declaration_inline,
  [sym_relationship_settings_list] = sym_relationship_settings_list,
  [sym_relationship_settings] = sym_relationship_settings,
  [sym_wot] = sym_wot,
  [sym_relationship] = sym_relationship,
  [sym__table_ident] = sym__table_ident,
  [sym_comment] = sym_comment,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enumerator_list] = sym_enumerator_list,
  [sym_enumerator] = sym_enumerator,
  [sym_tablegroup_definition] = sym_tablegroup_definition,
  [sym_tablegroup_list] = sym_tablegroup_list,
  [aux_sym_project_file_repeat1] = aux_sym_project_file_repeat1,
  [aux_sym_field_declaration_list_repeat1] = aux_sym_field_declaration_list_repeat1,
  [aux_sym_field_attribute_list_repeat1] = aux_sym_field_attribute_list_repeat1,
  [aux_sym_index_attribute_list_repeat1] = aux_sym_index_attribute_list_repeat1,
  [aux_sym_relationship_settings_list_repeat1] = aux_sym_relationship_settings_list_repeat1,
  [aux_sym_enumerator_list_repeat1] = aux_sym_enumerator_list_repeat1,
  [aux_sym_tablegroup_list_repeat1] = aux_sym_tablegroup_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_notnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_increment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitive_type_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varchar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relationship_definition_top_level_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_relationship_settings_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_setdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setnull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cascade] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__table_ident_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tablegroup_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_project_file] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_op] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_field_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__type_field] = {
    .visible = false,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_index_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_index_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_definition_top_level] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_declaration_full] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_declaration_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_settings_list] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_wot] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship] = {
    .visible = true,
    .named = true,
  },
  [sym__table_ident] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enumerator_list] = {
    .visible = true,
    .named = true,
  },
  [sym_enumerator] = {
    .visible = true,
    .named = true,
  },
  [sym_tablegroup_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_tablegroup_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_project_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_index_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relationship_settings_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enumerator_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tablegroup_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_attributes = 2,
  field_body = 3,
  field_column = 4,
  field_fields = 5,
  field_name = 6,
  field_table = 7,
  field_type = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_attributes] = "attributes",
  [field_body] = "body",
  [field_column] = "column",
  [field_fields] = "fields",
  [field_name] = "name",
  [field_table] = "table",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[11] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 4},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_fields, 2},
    {field_name, 1},
  [2] =
    {field_body, 2},
    {field_name, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_name, 0},
  [6] =
    {field_alias, 2},
    {field_alias, 3},
    {field_fields, 4},
    {field_name, 1},
  [10] =
    {field_name, 0},
    {field_type, 1},
  [12] =
    {field_column, 2},
    {field_table, 0},
  [14] =
    {field_name, 1, .inherited = true},
  [15] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [17] =
    {field_attributes, 2},
    {field_name, 0},
    {field_type, 1},
};

static TSSymbol ts_alias_sequences[11][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(76);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') SKIP(72)
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(13)
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(15)
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(16)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '"' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 69:
      if (eof) ADVANCE(76);
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 70:
      if (eof) ADVANCE(76);
      if (lookahead == '\t') SKIP(75)
      END_STATE();
    case 71:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 72:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(71)
      END_STATE();
    case 73:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') SKIP(70)
      END_STATE();
    case 74:
      if (eof) ADVANCE(76);
      if (lookahead == '\n') SKIP(70)
      if (lookahead == '\r') SKIP(73)
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') SKIP(74)
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_relationship_definition_top_level_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_relationship_definition_top_level_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_relationship_settings_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__table_ident_token1);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_tablegroup_definition_token1);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'q') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_cascade);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_indexes);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 75},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 75},
  [14] = {.lex_state = 75},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 75},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 75},
  [20] = {.lex_state = 75},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 75},
  [23] = {.lex_state = 75},
  [24] = {.lex_state = 75},
  [25] = {.lex_state = 75},
  [26] = {.lex_state = 75},
  [27] = {.lex_state = 75},
  [28] = {.lex_state = 75},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 75},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 75},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 149},
  [93] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_primitive_type_token1] = ACTIONS(1),
    [aux_sym_primitive_type_token2] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_varchar] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_indexes] = ACTIONS(1),
    [aux_sym_relationship_definition_top_level_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_relationship_settings_token1] = ACTIONS(1),
    [anon_sym_setdefault] = ACTIONS(1),
    [anon_sym_setnull] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_noaction] = ACTIONS(1),
    [anon_sym_cascade] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(1),
    [aux_sym_tablegroup_definition_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_project_file] = STATE(87),
    [sym__declaration] = STATE(25),
    [sym_table_definition] = STATE(27),
    [sym_relationship_definition_top_level] = STATE(27),
    [sym_comment] = STATE(1),
    [sym_enum_definition] = STATE(27),
    [sym_tablegroup_definition] = STATE(27),
    [aux_sym_project_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [aux_sym_relationship_definition_top_level_token1] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(11),
    [aux_sym_tablegroup_definition_token1] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_table,
    STATE(2), 1,
      sym_comment,
    ACTIONS(15), 12,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_DOT,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [24] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_table,
    STATE(3), 1,
      sym_comment,
    ACTIONS(19), 11,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [47] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_table,
    ACTIONS(28), 1,
      aux_sym_relationship_definition_top_level_token1,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(34), 1,
      aux_sym_tablegroup_definition_token1,
    STATE(25), 1,
      sym__declaration,
    STATE(4), 2,
      sym_comment,
      aux_sym_project_file_repeat1,
    STATE(27), 4,
      sym_table_definition,
      sym_relationship_definition_top_level,
      sym_enum_definition,
      sym_tablegroup_definition,
  [79] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_table,
    ACTIONS(9), 1,
      aux_sym_relationship_definition_top_level_token1,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      aux_sym_tablegroup_definition_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_project_file_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(25), 1,
      sym__declaration,
    STATE(27), 4,
      sym_table_definition,
      sym_relationship_definition_top_level,
      sym_enum_definition,
      sym_tablegroup_definition,
  [113] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      anon_sym_ref_COLON,
    STATE(6), 1,
      sym_comment,
    STATE(58), 1,
      sym_attribute_kind,
    STATE(73), 1,
      sym_relationship_declaration_inline,
    ACTIONS(39), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [137] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      anon_sym_ref_COLON,
    STATE(7), 1,
      sym_comment,
    STATE(73), 1,
      sym_relationship_declaration_inline,
    STATE(74), 1,
      sym_attribute_kind,
    ACTIONS(39), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [161] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    STATE(17), 2,
      sym_primitive_type,
      sym_custom_type,
    ACTIONS(45), 5,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_float,
      anon_sym_text,
      anon_sym_varchar,
  [182] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_table,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_comment,
    STATE(16), 1,
      sym_relationship_settings_list,
    ACTIONS(47), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [205] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_indexes,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(53), 1,
      sym__type_field,
    STATE(52), 2,
      sym_field_declaration,
      sym_index_declaration,
  [231] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_indexes,
    STATE(53), 1,
      sym__type_field,
    STATE(11), 2,
      sym_comment,
      aux_sym_field_declaration_list_repeat1,
    STATE(52), 2,
      sym_field_declaration,
      sym_index_declaration,
  [255] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_indexes,
    STATE(10), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(53), 1,
      sym__type_field,
    STATE(52), 2,
      sym_field_declaration,
      sym_index_declaration,
  [278] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 1,
      anon_sym_table,
    STATE(13), 1,
      sym_comment,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [295] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(73), 1,
      anon_sym_table,
    STATE(14), 1,
      sym_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_comment,
    STATE(79), 1,
      sym_wot,
    ACTIONS(75), 5,
      anon_sym_setdefault,
      anon_sym_setnull,
      anon_sym_restrict,
      anon_sym_noaction,
      anon_sym_cascade,
  [329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_table,
    STATE(16), 1,
      sym_comment,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [346] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_comment,
    STATE(41), 1,
      sym_field_attribute_list,
    ACTIONS(81), 2,
      anon_sym_indexes,
      sym_identifier,
  [366] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_table,
    STATE(18), 1,
      sym_comment,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_table,
    STATE(19), 1,
      sym_comment,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [398] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(97), 1,
      anon_sym_table,
    STATE(20), 1,
      sym_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(101), 1,
      anon_sym_table,
    STATE(21), 1,
      sym_comment,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [430] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_table,
    STATE(22), 1,
      sym_comment,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [446] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_table,
    STATE(23), 1,
      sym_comment,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [462] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_table,
    STATE(24), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [478] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(117), 1,
      anon_sym_table,
    STATE(25), 1,
      sym_comment,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [494] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_table,
    STATE(26), 1,
      sym_comment,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [510] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(125), 1,
      anon_sym_table,
    STATE(27), 1,
      sym_comment,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(129), 1,
      anon_sym_table,
    STATE(28), 1,
      sym_comment,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [542] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(133), 1,
      anon_sym_table,
    STATE(29), 1,
      sym_comment,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      anon_sym_table,
    STATE(30), 1,
      sym_comment,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_definition_top_level_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [574] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym__table_ident_token1,
    STATE(31), 1,
      sym_comment,
    STATE(37), 1,
      sym_relationship,
    STATE(84), 1,
      sym__table_ident,
    STATE(91), 1,
      sym_relationship_declaration_full,
  [593] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym__table_ident_token1,
    STATE(23), 1,
      sym_relationship_declaration_full,
    STATE(32), 1,
      sym_comment,
    STATE(37), 1,
      sym_relationship,
    STATE(84), 1,
      sym__table_ident,
  [612] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_comment,
    STATE(54), 1,
      sym_cardinality_op,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [627] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_indexes,
      sym_identifier,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [642] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym__table_ident_token1,
    STATE(35), 1,
      sym_comment,
    STATE(37), 1,
      sym_relationship,
    STATE(84), 1,
      sym__table_ident,
    STATE(86), 1,
      sym_relationship_declaration_full,
  [661] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_indexes,
      sym_identifier,
    ACTIONS(149), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [676] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    STATE(56), 1,
      sym_cardinality_op,
    ACTIONS(141), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [691] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_enumerator,
    STATE(38), 2,
      sym_comment,
      aux_sym_enumerator_list_repeat1,
  [708] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym__table_ident_token1,
    STATE(26), 1,
      sym_relationship_declaration_full,
    STATE(37), 1,
      sym_relationship,
    STATE(39), 1,
      sym_comment,
    STATE(84), 1,
      sym__table_ident,
  [727] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_enumerator_list_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(72), 1,
      sym_enumerator,
  [746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_indexes,
      sym_identifier,
  [760] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym_comment,
      aux_sym_tablegroup_list_repeat1,
  [774] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_comment,
      aux_sym_relationship_settings_list_repeat1,
  [788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(44), 2,
      sym_comment,
      aux_sym_field_attribute_list_repeat1,
  [802] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_indexes,
      sym_identifier,
  [816] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_relationship_settings_list_repeat1,
    STATE(46), 1,
      sym_comment,
  [832] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym_COLON,
    STATE(47), 1,
      sym_comment,
  [848] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(48), 1,
      sym_comment,
  [864] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_tablegroup_list_repeat1,
    STATE(49), 1,
      sym_comment,
  [880] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_indexes,
      sym_identifier,
  [894] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(51), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_index_attribute_list_repeat1,
    STATE(89), 1,
      sym_index_attribute_list,
  [910] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_indexes,
      sym_identifier,
  [924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_indexes,
      sym_identifier,
  [938] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym__table_ident_token1,
    STATE(54), 1,
      sym_comment,
    STATE(75), 1,
      sym_relationship,
    STATE(84), 1,
      sym__table_ident,
  [954] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_relationship_settings_list_repeat1,
    STATE(55), 1,
      sym_comment,
  [970] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym__table_ident_token1,
    STATE(9), 1,
      sym_relationship,
    STATE(56), 1,
      sym_comment,
    STATE(84), 1,
      sym__table_ident,
  [986] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_enumerator_list_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(72), 1,
      sym_enumerator,
  [1002] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(58), 1,
      sym_comment,
  [1018] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(59), 2,
      sym_comment,
      aux_sym_index_attribute_list_repeat1,
  [1032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_indexes,
      sym_identifier,
  [1046] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(228), 1,
      anon_sym_as,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_field_declaration_list,
    STATE(61), 1,
      sym_comment,
  [1062] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_index_attribute_list_repeat1,
    STATE(62), 1,
      sym_comment,
  [1078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_tablegroup_list_repeat1,
    STATE(63), 1,
      sym_comment,
  [1091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_field_declaration_list,
    STATE(64), 1,
      sym_comment,
  [1104] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(65), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1115] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(66), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1126] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_comment,
  [1139] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      aux_sym__table_ident_token1,
    STATE(3), 1,
      sym__table_ident,
    STATE(68), 1,
      sym_comment,
  [1152] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(240), 1,
      aux_sym_relationship_settings_token1,
    STATE(55), 1,
      sym_relationship_settings,
    STATE(69), 1,
      sym_comment,
  [1165] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(70), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_tablegroup_list,
    STATE(71), 1,
      sym_comment,
  [1189] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1200] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1211] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1222] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1233] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1244] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(240), 1,
      aux_sym_relationship_settings_token1,
    STATE(66), 1,
      sym_relationship_settings,
    STATE(77), 1,
      sym_comment,
  [1257] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_enumerator_list,
    STATE(78), 1,
      sym_comment,
  [1270] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(79), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1281] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(80), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1292] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 1,
      aux_sym__table_ident_token1,
    STATE(81), 1,
      sym_comment,
  [1302] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_comment,
  [1312] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(83), 1,
      sym_comment,
  [1322] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(84), 1,
      sym_comment,
  [1332] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(85), 1,
      sym_comment,
  [1342] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_comment,
  [1352] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      sym_comment,
  [1362] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
  [1372] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_comment,
  [1382] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(90), 1,
      sym_comment,
  [1392] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_comment,
  [1402] = 1,
    ACTIONS(282), 1,
      aux_sym_comment_token1,
  [1406] = 1,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 182,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 255,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 295,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 346,
  [SMALL_STATE(18)] = 366,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 398,
  [SMALL_STATE(21)] = 414,
  [SMALL_STATE(22)] = 430,
  [SMALL_STATE(23)] = 446,
  [SMALL_STATE(24)] = 462,
  [SMALL_STATE(25)] = 478,
  [SMALL_STATE(26)] = 494,
  [SMALL_STATE(27)] = 510,
  [SMALL_STATE(28)] = 526,
  [SMALL_STATE(29)] = 542,
  [SMALL_STATE(30)] = 558,
  [SMALL_STATE(31)] = 574,
  [SMALL_STATE(32)] = 593,
  [SMALL_STATE(33)] = 612,
  [SMALL_STATE(34)] = 627,
  [SMALL_STATE(35)] = 642,
  [SMALL_STATE(36)] = 661,
  [SMALL_STATE(37)] = 676,
  [SMALL_STATE(38)] = 691,
  [SMALL_STATE(39)] = 708,
  [SMALL_STATE(40)] = 727,
  [SMALL_STATE(41)] = 746,
  [SMALL_STATE(42)] = 760,
  [SMALL_STATE(43)] = 774,
  [SMALL_STATE(44)] = 788,
  [SMALL_STATE(45)] = 802,
  [SMALL_STATE(46)] = 816,
  [SMALL_STATE(47)] = 832,
  [SMALL_STATE(48)] = 848,
  [SMALL_STATE(49)] = 864,
  [SMALL_STATE(50)] = 880,
  [SMALL_STATE(51)] = 894,
  [SMALL_STATE(52)] = 910,
  [SMALL_STATE(53)] = 924,
  [SMALL_STATE(54)] = 938,
  [SMALL_STATE(55)] = 954,
  [SMALL_STATE(56)] = 970,
  [SMALL_STATE(57)] = 986,
  [SMALL_STATE(58)] = 1002,
  [SMALL_STATE(59)] = 1018,
  [SMALL_STATE(60)] = 1032,
  [SMALL_STATE(61)] = 1046,
  [SMALL_STATE(62)] = 1062,
  [SMALL_STATE(63)] = 1078,
  [SMALL_STATE(64)] = 1091,
  [SMALL_STATE(65)] = 1104,
  [SMALL_STATE(66)] = 1115,
  [SMALL_STATE(67)] = 1126,
  [SMALL_STATE(68)] = 1139,
  [SMALL_STATE(69)] = 1152,
  [SMALL_STATE(70)] = 1165,
  [SMALL_STATE(71)] = 1176,
  [SMALL_STATE(72)] = 1189,
  [SMALL_STATE(73)] = 1200,
  [SMALL_STATE(74)] = 1211,
  [SMALL_STATE(75)] = 1222,
  [SMALL_STATE(76)] = 1233,
  [SMALL_STATE(77)] = 1244,
  [SMALL_STATE(78)] = 1257,
  [SMALL_STATE(79)] = 1270,
  [SMALL_STATE(80)] = 1281,
  [SMALL_STATE(81)] = 1292,
  [SMALL_STATE(82)] = 1302,
  [SMALL_STATE(83)] = 1312,
  [SMALL_STATE(84)] = 1322,
  [SMALL_STATE(85)] = 1332,
  [SMALL_STATE(86)] = 1342,
  [SMALL_STATE(87)] = 1352,
  [SMALL_STATE(88)] = 1362,
  [SMALL_STATE(89)] = 1372,
  [SMALL_STATE(90)] = 1382,
  [SMALL_STATE(91)] = 1392,
  [SMALL_STATE(92)] = 1402,
  [SMALL_STATE(93)] = 1406,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_ident, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_ident, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship, 3, .production_id = 7),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship, 3, .production_id = 7),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(90),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(47),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(83),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(85),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration_full, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration_full, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(82),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings_list, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_settings_list, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings_list, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_settings_list, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration_full, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration_full, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 2, .production_id = 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2, .production_id = 6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_top_level, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_definition_top_level, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tablegroup_list, 3, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tablegroup_list, 3, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator_list, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumerator_list, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_top_level, 5, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_definition_top_level, 5, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_top_level, 4, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_definition_top_level, 4, .production_id = 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition_top_level, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_definition_top_level, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tablegroup_definition, 3, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tablegroup_definition, 3, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 2), SHIFT_REPEAT(70),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, .production_id = 10),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 10),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 2, .production_id = 9), SHIFT_REPEAT(76),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 2, .production_id = 9),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_settings_list_repeat1, 2), SHIFT_REPEAT(77),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_settings_list_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2), SHIFT_REPEAT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_attribute_list, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_attribute_list, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_field, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_field, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 2), SHIFT_REPEAT(65),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_declaration, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_declaration, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_attribute_list, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1, .production_id = 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_kind, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration_inline, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 1, .production_id = 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wot, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_op, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [272] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dbml(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
