#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  aux_sym_relationship_declaration_token1 = 24,
  anon_sym_COLON = 25,
  anon_sym_ref_COLON = 26,
  aux_sym_relationship_settings_token1 = 27,
  anon_sym_setdefault = 28,
  anon_sym_setnull = 29,
  anon_sym_restrict = 30,
  anon_sym_noaction = 31,
  anon_sym_cascade = 32,
  anon_sym_DOT = 33,
  anon_sym_SLASH_SLASH = 34,
  aux_sym_comment_token1 = 35,
  anon_sym_enum = 36,
  aux_sym_tablegroup_definition_token1 = 37,
  sym_project_file = 38,
  sym_attribute_kind = 39,
  sym_cardinality_op = 40,
  sym_primitive_type = 41,
  sym_custom_type = 42,
  sym__declaration = 43,
  sym_field_declaration_list = 44,
  sym_table_definition = 45,
  sym__type_field = 46,
  sym_field_declaration = 47,
  sym_field_attribute_list = 48,
  sym_index_declaration = 49,
  sym_index_attribute_list = 50,
  sym_relationship_declaration = 51,
  sym__relationship_body_block = 52,
  sym_relationship_body = 53,
  sym_relationship_body_inline = 54,
  sym_relationship_declaration_inline = 55,
  sym_relationship_settings_list = 56,
  sym_relationship_settings = 57,
  sym_relationship_parameter = 58,
  sym_table_field = 59,
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
  [aux_sym_relationship_declaration_token1] = "relationship_declaration_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_ref_COLON] = "ref:",
  [aux_sym_relationship_settings_token1] = "relationship_settings_token1",
  [anon_sym_setdefault] = "set default",
  [anon_sym_setnull] = "set null",
  [anon_sym_restrict] = "restrict",
  [anon_sym_noaction] = "no action",
  [anon_sym_cascade] = "cascade",
  [anon_sym_DOT] = ".",
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
  [sym_relationship_declaration] = "relationship_declaration",
  [sym__relationship_body_block] = "_relationship_body_block",
  [sym_relationship_body] = "relationship_body",
  [sym_relationship_body_inline] = "relationship_body",
  [sym_relationship_declaration_inline] = "relationship_declaration",
  [sym_relationship_settings_list] = "relationship_settings_list",
  [sym_relationship_settings] = "relationship_settings",
  [sym_relationship_parameter] = "relationship_parameter",
  [sym_table_field] = "table_field",
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
  [aux_sym_relationship_declaration_token1] = aux_sym_relationship_declaration_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ref_COLON] = anon_sym_ref_COLON,
  [aux_sym_relationship_settings_token1] = aux_sym_relationship_settings_token1,
  [anon_sym_setdefault] = anon_sym_setdefault,
  [anon_sym_setnull] = anon_sym_setnull,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_noaction] = anon_sym_noaction,
  [anon_sym_cascade] = anon_sym_cascade,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_relationship_declaration] = sym_relationship_declaration,
  [sym__relationship_body_block] = sym__relationship_body_block,
  [sym_relationship_body] = sym_relationship_body,
  [sym_relationship_body_inline] = sym_relationship_body,
  [sym_relationship_declaration_inline] = sym_relationship_declaration,
  [sym_relationship_settings_list] = sym_relationship_settings_list,
  [sym_relationship_settings] = sym_relationship_settings,
  [sym_relationship_parameter] = sym_relationship_parameter,
  [sym_table_field] = sym_table_field,
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
  [aux_sym_relationship_declaration_token1] = {
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
  [sym_relationship_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__relationship_body_block] = {
    .visible = false,
    .named = true,
  },
  [sym_relationship_body] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_body_inline] = {
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
  [sym_relationship_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_table_field] = {
    .visible = true,
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

static const TSFieldMapSlice ts_field_map_slices[13] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_fields, 2},
    {field_name, 1},
  [3] =
    {field_table, 0},
  [4] =
    {field_body, 2},
  [5] =
    {field_body, 2},
    {field_name, 1},
  [7] =
    {field_name, 0},
  [8] =
    {field_alias, 3},
    {field_fields, 4},
    {field_name, 1},
  [11] =
    {field_name, 0},
    {field_type, 1},
  [13] =
    {field_column, 2},
    {field_table, 0},
  [15] =
    {field_name, 1, .inherited = true},
  [16] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [18] =
    {field_attributes, 2},
    {field_name, 0},
    {field_type, 1},
};

static TSSymbol ts_alias_sequences[13][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') SKIP(68)
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(11)
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(10)
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(12)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 64:
      if (eof) ADVANCE(75);
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 65:
      if (eof) ADVANCE(75);
      if (lookahead == '\t') SKIP(73)
      END_STATE();
    case 66:
      if (eof) ADVANCE(75);
      if (lookahead == '\t') SKIP(74)
      END_STATE();
    case 67:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(64)
      END_STATE();
    case 68:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '\r') SKIP(67)
      END_STATE();
    case 69:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(65)
      END_STATE();
    case 70:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '\r') SKIP(69)
      END_STATE();
    case 71:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(66)
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(66)
      if (lookahead == '\r') SKIP(71)
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') SKIP(70)
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') SKIP(72)
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(52);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_relationship_declaration_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_relationship_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ref_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_relationship_settings_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_setdefault);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_setnull);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_noaction);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 151:
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
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 73},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 73},
  [36] = {.lex_state = 73},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 73},
  [43] = {.lex_state = 73},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 73},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 73},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 147},
  [98] = {(TSStateId)(-1)},
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
    [aux_sym_relationship_declaration_token1] = ACTIONS(1),
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
    [sym_project_file] = STATE(93),
    [sym__declaration] = STATE(29),
    [sym_table_definition] = STATE(41),
    [sym_relationship_declaration] = STATE(41),
    [sym_comment] = STATE(1),
    [sym_enum_definition] = STATE(41),
    [sym_tablegroup_definition] = STATE(41),
    [aux_sym_project_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [aux_sym_relationship_declaration_token1] = ACTIONS(9),
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
    ACTIONS(15), 11,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [23] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_table,
    ACTIONS(9), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      aux_sym_tablegroup_definition_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_project_file_repeat1,
    STATE(29), 1,
      sym__declaration,
    STATE(41), 4,
      sym_table_definition,
      sym_relationship_declaration,
      sym_enum_definition,
      sym_tablegroup_definition,
  [57] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_table,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      sym_cardinality_op,
    STATE(24), 1,
      sym_relationship_settings_list,
    ACTIONS(23), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [87] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_table,
    ACTIONS(34), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(37), 1,
      anon_sym_enum,
    ACTIONS(40), 1,
      aux_sym_tablegroup_definition_token1,
    STATE(29), 1,
      sym__declaration,
    STATE(5), 2,
      sym_comment,
      aux_sym_project_file_repeat1,
    STATE(41), 4,
      sym_table_definition,
      sym_relationship_declaration,
      sym_enum_definition,
      sym_tablegroup_definition,
  [119] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_table,
    ACTIONS(47), 1,
      anon_sym_DOT,
    STATE(6), 1,
      sym_comment,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_LBRACK,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [142] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    ACTIONS(53), 4,
      anon_sym_table,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_LBRACK,
  [165] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    STATE(14), 1,
      sym_table_field,
    STATE(26), 1,
      sym_relationship_settings_list,
    ACTIONS(59), 4,
      anon_sym_table,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [193] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      anon_sym_ref_COLON,
    STATE(9), 1,
      sym_comment,
    STATE(77), 1,
      sym_attribute_kind,
    STATE(79), 1,
      sym_relationship_declaration_inline,
    ACTIONS(61), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [217] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      anon_sym_ref_COLON,
    STATE(10), 1,
      sym_comment,
    STATE(63), 1,
      sym_attribute_kind,
    STATE(79), 1,
      sym_relationship_declaration_inline,
    ACTIONS(61), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [241] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(11), 1,
      sym_comment,
    ACTIONS(49), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [260] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_table_field,
    STATE(12), 1,
      sym_comment,
    STATE(38), 1,
      sym_relationship_body,
    ACTIONS(69), 4,
      anon_sym_table,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(13), 1,
      sym_comment,
    STATE(32), 2,
      sym_primitive_type,
      sym_custom_type,
    ACTIONS(73), 5,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_float,
      anon_sym_text,
      anon_sym_varchar,
  [306] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_table,
    STATE(14), 1,
      sym_comment,
    STATE(22), 1,
      sym_relationship_settings_list,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_comment,
    ACTIONS(43), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [348] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_indexes,
    STATE(60), 1,
      sym__type_field,
    STATE(16), 2,
      sym_comment,
      aux_sym_field_declaration_list_repeat1,
    STATE(58), 2,
      sym_field_declaration,
      sym_index_declaration,
  [372] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_indexes,
    STATE(16), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(60), 1,
      sym__type_field,
    STATE(58), 2,
      sym_field_declaration,
      sym_index_declaration,
  [398] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_indexes,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(60), 1,
      sym__type_field,
    STATE(58), 2,
      sym_field_declaration,
      sym_index_declaration,
  [424] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    STATE(24), 1,
      sym_relationship_settings_list,
    STATE(28), 1,
      sym_cardinality_op,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [448] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(101), 5,
      anon_sym_table,
      aux_sym_relationship_declaration_token1,
      sym_identifier,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(105), 1,
      anon_sym_table,
    STATE(21), 1,
      sym_comment,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [483] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_table,
    STATE(22), 1,
      sym_comment,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [500] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_table,
    STATE(23), 1,
      sym_comment,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [517] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      anon_sym_table,
    STATE(24), 1,
      sym_comment,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [534] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_comment,
    STATE(85), 1,
      sym_relationship_parameter,
    ACTIONS(115), 5,
      anon_sym_setdefault,
      anon_sym_setnull,
      anon_sym_restrict,
      anon_sym_noaction,
      anon_sym_cascade,
  [551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_table,
    STATE(26), 1,
      sym_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_table,
    STATE(27), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [584] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(14), 1,
      sym_table_field,
    STATE(26), 1,
      sym_relationship_settings_list,
    STATE(28), 1,
      sym_comment,
  [606] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(125), 1,
      anon_sym_table,
    STATE(29), 1,
      sym_comment,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(129), 1,
      anon_sym_table,
    STATE(30), 1,
      sym_comment,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(133), 1,
      anon_sym_table,
    STATE(31), 1,
      sym_comment,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [654] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    STATE(70), 1,
      sym_field_attribute_list,
    ACTIONS(135), 2,
      anon_sym_indexes,
      sym_identifier,
  [674] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(143), 1,
      anon_sym_table,
    STATE(33), 1,
      sym_comment,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [690] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(147), 1,
      anon_sym_table,
    STATE(34), 1,
      sym_comment,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [706] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(151), 1,
      anon_sym_table,
    STATE(35), 1,
      sym_comment,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [722] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      anon_sym_table,
    STATE(36), 1,
      sym_comment,
    ACTIONS(153), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [738] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    STATE(71), 1,
      sym_cardinality_op,
    STATE(86), 1,
      sym_relationship_body_inline,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [756] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(159), 1,
      anon_sym_table,
    STATE(38), 1,
      sym_comment,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      anon_sym_table,
    STATE(39), 1,
      sym_comment,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [788] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_table,
    STATE(40), 1,
      sym_comment,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [804] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_table,
    STATE(41), 1,
      sym_comment,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [820] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      anon_sym_table,
    STATE(42), 1,
      sym_comment,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(179), 1,
      anon_sym_table,
    STATE(43), 1,
      sym_comment,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [852] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_table_field,
    STATE(44), 1,
      sym_comment,
    STATE(92), 1,
      sym_relationship_body,
  [871] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_COLON,
    STATE(35), 1,
      sym__relationship_body_block,
    STATE(45), 1,
      sym_comment,
  [890] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(46), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_indexes,
      sym_identifier,
    ACTIONS(191), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [905] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_enumerator_list_repeat1,
    STATE(83), 1,
      sym_enumerator,
  [924] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_indexes,
      sym_identifier,
    ACTIONS(199), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [939] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_enumerator,
    STATE(49), 2,
      sym_comment,
      aux_sym_enumerator_list_repeat1,
  [956] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_tablegroup_list_repeat1,
  [972] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(210), 1,
      anon_sym_as,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_field_declaration_list,
    STATE(51), 1,
      sym_comment,
  [988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(52), 2,
      sym_comment,
      aux_sym_field_attribute_list_repeat1,
  [1002] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_indexes,
      sym_identifier,
  [1016] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(54), 1,
      sym_comment,
  [1032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_indexes,
      sym_identifier,
  [1046] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(56), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_index_attribute_list_repeat1,
    STATE(91), 1,
      sym_index_attribute_list,
  [1062] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [1074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_indexes,
      sym_identifier,
  [1088] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_relationship_settings_list_repeat1,
  [1104] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_indexes,
      sym_identifier,
  [1118] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(61), 2,
      sym_comment,
      aux_sym_relationship_settings_list_repeat1,
  [1132] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym__relationship_body_block,
    STATE(62), 1,
      sym_comment,
  [1148] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(63), 1,
      sym_comment,
  [1164] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_enumerator_list_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(83), 1,
      sym_enumerator,
  [1180] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(252), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_comment,
      aux_sym_tablegroup_list_repeat1,
  [1194] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(66), 2,
      sym_comment,
      aux_sym_index_attribute_list_repeat1,
  [1208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_indexes,
      sym_identifier,
  [1222] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_index_attribute_list_repeat1,
    STATE(68), 1,
      sym_comment,
  [1238] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_relationship_settings_list_repeat1,
    STATE(69), 1,
      sym_comment,
  [1254] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_indexes,
      sym_identifier,
  [1268] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
    STATE(81), 1,
      sym_table_field,
  [1281] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_tablegroup_list_repeat1,
    STATE(72), 1,
      sym_comment,
  [1294] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      aux_sym_relationship_settings_token1,
    STATE(73), 1,
      sym_comment,
    STATE(82), 1,
      sym_relationship_settings,
  [1307] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_field_declaration_list,
    STATE(74), 1,
      sym_comment,
  [1320] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1331] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_tablegroup_list,
    STATE(76), 1,
      sym_comment,
  [1344] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(77), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1355] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(78), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1366] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(79), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_enumerator_list,
    STATE(80), 1,
      sym_comment,
  [1390] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(81), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1401] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(82), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1412] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(83), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1423] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(84), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1434] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(85), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1445] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(86), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      aux_sym_relationship_settings_token1,
    STATE(59), 1,
      sym_relationship_settings,
    STATE(87), 1,
      sym_comment,
  [1469] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(88), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1480] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(89), 1,
      sym_comment,
  [1490] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_comment,
  [1500] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_comment,
  [1510] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_comment,
  [1520] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_comment,
  [1530] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(94), 1,
      sym_comment,
  [1540] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(95), 1,
      sym_comment,
  [1550] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(96), 1,
      sym_comment,
  [1560] = 1,
    ACTIONS(314), 1,
      aux_sym_comment_token1,
  [1564] = 1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 193,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 285,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 329,
  [SMALL_STATE(16)] = 348,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 398,
  [SMALL_STATE(19)] = 424,
  [SMALL_STATE(20)] = 448,
  [SMALL_STATE(21)] = 466,
  [SMALL_STATE(22)] = 483,
  [SMALL_STATE(23)] = 500,
  [SMALL_STATE(24)] = 517,
  [SMALL_STATE(25)] = 534,
  [SMALL_STATE(26)] = 551,
  [SMALL_STATE(27)] = 568,
  [SMALL_STATE(28)] = 584,
  [SMALL_STATE(29)] = 606,
  [SMALL_STATE(30)] = 622,
  [SMALL_STATE(31)] = 638,
  [SMALL_STATE(32)] = 654,
  [SMALL_STATE(33)] = 674,
  [SMALL_STATE(34)] = 690,
  [SMALL_STATE(35)] = 706,
  [SMALL_STATE(36)] = 722,
  [SMALL_STATE(37)] = 738,
  [SMALL_STATE(38)] = 756,
  [SMALL_STATE(39)] = 772,
  [SMALL_STATE(40)] = 788,
  [SMALL_STATE(41)] = 804,
  [SMALL_STATE(42)] = 820,
  [SMALL_STATE(43)] = 836,
  [SMALL_STATE(44)] = 852,
  [SMALL_STATE(45)] = 871,
  [SMALL_STATE(46)] = 890,
  [SMALL_STATE(47)] = 905,
  [SMALL_STATE(48)] = 924,
  [SMALL_STATE(49)] = 939,
  [SMALL_STATE(50)] = 956,
  [SMALL_STATE(51)] = 972,
  [SMALL_STATE(52)] = 988,
  [SMALL_STATE(53)] = 1002,
  [SMALL_STATE(54)] = 1016,
  [SMALL_STATE(55)] = 1032,
  [SMALL_STATE(56)] = 1046,
  [SMALL_STATE(57)] = 1062,
  [SMALL_STATE(58)] = 1074,
  [SMALL_STATE(59)] = 1088,
  [SMALL_STATE(60)] = 1104,
  [SMALL_STATE(61)] = 1118,
  [SMALL_STATE(62)] = 1132,
  [SMALL_STATE(63)] = 1148,
  [SMALL_STATE(64)] = 1164,
  [SMALL_STATE(65)] = 1180,
  [SMALL_STATE(66)] = 1194,
  [SMALL_STATE(67)] = 1208,
  [SMALL_STATE(68)] = 1222,
  [SMALL_STATE(69)] = 1238,
  [SMALL_STATE(70)] = 1254,
  [SMALL_STATE(71)] = 1268,
  [SMALL_STATE(72)] = 1281,
  [SMALL_STATE(73)] = 1294,
  [SMALL_STATE(74)] = 1307,
  [SMALL_STATE(75)] = 1320,
  [SMALL_STATE(76)] = 1331,
  [SMALL_STATE(77)] = 1344,
  [SMALL_STATE(78)] = 1355,
  [SMALL_STATE(79)] = 1366,
  [SMALL_STATE(80)] = 1377,
  [SMALL_STATE(81)] = 1390,
  [SMALL_STATE(82)] = 1401,
  [SMALL_STATE(83)] = 1412,
  [SMALL_STATE(84)] = 1423,
  [SMALL_STATE(85)] = 1434,
  [SMALL_STATE(86)] = 1445,
  [SMALL_STATE(87)] = 1456,
  [SMALL_STATE(88)] = 1469,
  [SMALL_STATE(89)] = 1480,
  [SMALL_STATE(90)] = 1490,
  [SMALL_STATE(91)] = 1500,
  [SMALL_STATE(92)] = 1510,
  [SMALL_STATE(93)] = 1520,
  [SMALL_STATE(94)] = 1530,
  [SMALL_STATE(95)] = 1540,
  [SMALL_STATE(96)] = 1550,
  [SMALL_STATE(97)] = 1560,
  [SMALL_STATE(98)] = 1564,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 3, .production_id = 9),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_field, 3, .production_id = 9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(96),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(45),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(95),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(89),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 1, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_field, 1, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 2, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_field, 2, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_body_block, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relationship_body_block, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(13),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(90),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_op, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cardinality_op, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings_list, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_settings_list, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings_list, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_settings_list, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator_list, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumerator_list, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tablegroup_definition, 3, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tablegroup_definition, 3, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 2, .production_id = 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2, .production_id = 8),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 2, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration, 2, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tablegroup_list, 3, .production_id = 10),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tablegroup_list, 3, .production_id = 10),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_body_block, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relationship_body_block, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_body_block, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relationship_body_block, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 3, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration, 3, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 2), SHIFT_REPEAT(88),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2), SHIFT_REPEAT(9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_attribute_list, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_attribute_list, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_field, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_field, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_settings_list_repeat1, 2), SHIFT_REPEAT(73),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_settings_list_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 2, .production_id = 11), SHIFT_REPEAT(75),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 2, .production_id = 11),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 2), SHIFT_REPEAT(78),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_declaration, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_declaration, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_attribute_list, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, .production_id = 12),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 12),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 1, .production_id = 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_kind, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body_inline, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_parameter, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration_inline, 2, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1, .production_id = 6),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [306] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
