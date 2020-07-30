#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
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
  sym_relationship_declaration = 52,
  sym__relationship_body = 53,
  sym_relationship_body = 54,
  sym_relationship_body_inline = 55,
  sym_relationship_declaration_inline = 56,
  sym_relationship_settings_list = 57,
  sym_relationship_settings = 58,
  sym_relationship_parameter = 59,
  sym_table_field = 60,
  sym__table_ident = 61,
  sym_comment = 62,
  sym_enum_definition = 63,
  sym_enumerator_list = 64,
  sym_enumerator = 65,
  sym_tablegroup_definition = 66,
  sym_tablegroup_list = 67,
  aux_sym_project_file_repeat1 = 68,
  aux_sym_field_declaration_list_repeat1 = 69,
  aux_sym_field_attribute_list_repeat1 = 70,
  aux_sym_index_attribute_list_repeat1 = 71,
  aux_sym_relationship_body_repeat1 = 72,
  aux_sym_relationship_settings_list_repeat1 = 73,
  aux_sym_enumerator_list_repeat1 = 74,
  aux_sym_tablegroup_list_repeat1 = 75,
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
  [sym_relationship_declaration] = "relationship_declaration",
  [sym__relationship_body] = "_relationship_body",
  [sym_relationship_body] = "relationship_body",
  [sym_relationship_body_inline] = "relationship_body",
  [sym_relationship_declaration_inline] = "relationship_declaration",
  [sym_relationship_settings_list] = "relationship_settings_list",
  [sym_relationship_settings] = "relationship_settings",
  [sym_relationship_parameter] = "relationship_parameter",
  [sym_table_field] = "table_field",
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
  [aux_sym_relationship_body_repeat1] = "relationship_body_repeat1",
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
  [sym_relationship_declaration] = sym_relationship_declaration,
  [sym__relationship_body] = sym__relationship_body,
  [sym_relationship_body] = sym_relationship_body,
  [sym_relationship_body_inline] = sym_relationship_body,
  [sym_relationship_declaration_inline] = sym_relationship_declaration,
  [sym_relationship_settings_list] = sym_relationship_settings_list,
  [sym_relationship_settings] = sym_relationship_settings,
  [sym_relationship_parameter] = sym_relationship_parameter,
  [sym_table_field] = sym_table_field,
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
  [aux_sym_relationship_body_repeat1] = aux_sym_relationship_body_repeat1,
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
  [sym_relationship_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__relationship_body] = {
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
  [aux_sym_relationship_body_repeat1] = {
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
  field_field = 4,
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
  [field_field] = "field",
  [field_fields] = "fields",
  [field_name] = "name",
  [field_table] = "table",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[11] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
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
    {field_body, 1},
  [1] =
    {field_fields, 2},
    {field_name, 1},
  [3] =
    {field_body, 2},
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
    {field_field, 2},
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
      if (eof) ADVANCE(75);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') SKIP(71)
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
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
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '{') ADVANCE(81);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(92);
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
      if (lookahead == 'e') ADVANCE(83);
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
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(94);
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
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(95);
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
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(93);
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
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 68:
      if (eof) ADVANCE(75);
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 69:
      if (eof) ADVANCE(75);
      if (lookahead == '\t') SKIP(74)
      END_STATE();
    case 70:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 71:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(70)
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(72)
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') SKIP(73)
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == '}') ADVANCE(82);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
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
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
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
      ACCEPT_TOKEN(aux_sym__table_ident_token1);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == 't') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 152:
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
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 74},
  [4] = {.lex_state = 74},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 74},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 74},
  [17] = {.lex_state = 74},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 74},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 74},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 74},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 74},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 74},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 148},
  [92] = {(TSStateId)(-1)},
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
    [sym_project_file] = STATE(89),
    [sym__declaration] = STATE(30),
    [sym_table_definition] = STATE(26),
    [sym_relationship_declaration] = STATE(26),
    [sym_comment] = STATE(1),
    [sym_enum_definition] = STATE(26),
    [sym_tablegroup_definition] = STATE(26),
    [aux_sym_project_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [aux_sym_relationship_declaration_token1] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(11),
    [aux_sym_tablegroup_definition_token1] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 1,
      anon_sym_table,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_relationship_body_repeat1,
    STATE(16), 1,
      sym_relationship_settings_list,
    STATE(42), 1,
      sym_cardinality_op,
    ACTIONS(17), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [34] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_table,
    STATE(2), 1,
      aux_sym_relationship_body_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_relationship_settings_list,
    STATE(42), 1,
      sym_cardinality_op,
    ACTIONS(17), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [68] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_table,
    STATE(4), 1,
      sym_comment,
    ACTIONS(27), 12,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_relationship_declaration_token1,
      anon_sym_DOT,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [92] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      anon_sym_table,
    STATE(42), 1,
      sym_cardinality_op,
    STATE(5), 2,
      sym_comment,
      aux_sym_relationship_body_repeat1,
    ACTIONS(33), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [119] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(40), 1,
      anon_sym_table,
    STATE(6), 1,
      sym_comment,
    ACTIONS(38), 11,
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
  [142] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_table,
    ACTIONS(47), 1,
      aux_sym_relationship_declaration_token1,
    ACTIONS(50), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      aux_sym_tablegroup_definition_token1,
    STATE(30), 1,
      sym__declaration,
    STATE(7), 2,
      sym_comment,
      aux_sym_project_file_repeat1,
    STATE(26), 4,
      sym_table_definition,
      sym_relationship_declaration,
      sym_enum_definition,
      sym_tablegroup_definition,
  [174] = 10,
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
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_project_file_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(30), 1,
      sym__declaration,
    STATE(26), 4,
      sym_table_definition,
      sym_relationship_declaration,
      sym_enum_definition,
      sym_tablegroup_definition,
  [208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      anon_sym_table,
    STATE(9), 1,
      sym_comment,
    ACTIONS(31), 9,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [229] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_ref_COLON,
    STATE(10), 1,
      sym_comment,
    STATE(64), 1,
      sym_relationship_declaration_inline,
    STATE(69), 1,
      sym_attribute_kind,
    ACTIONS(58), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [253] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(60), 1,
      anon_sym_ref_COLON,
    STATE(11), 1,
      sym_comment,
    STATE(54), 1,
      sym_attribute_kind,
    STATE(64), 1,
      sym_relationship_declaration_inline,
    ACTIONS(58), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [277] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(12), 1,
      sym_comment,
    STATE(29), 2,
      sym_primitive_type,
      sym_custom_type,
    ACTIONS(64), 5,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_float,
      anon_sym_text,
      anon_sym_varchar,
  [298] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_indexes,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(53), 1,
      sym__type_field,
    STATE(52), 2,
      sym_field_declaration,
      sym_index_declaration,
  [324] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      anon_sym_indexes,
    STATE(53), 1,
      sym__type_field,
    STATE(14), 2,
      sym_comment,
      aux_sym_field_declaration_list_repeat1,
    STATE(52), 2,
      sym_field_declaration,
      sym_index_declaration,
  [348] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_indexes,
    STATE(13), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(53), 1,
      sym__type_field,
    STATE(52), 2,
      sym_field_declaration,
      sym_index_declaration,
  [371] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(82), 1,
      anon_sym_table,
    STATE(16), 1,
      sym_comment,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [388] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 1,
      anon_sym_table,
    STATE(17), 1,
      sym_comment,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [405] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym_comment,
    STATE(72), 1,
      sym_relationship_parameter,
    ACTIONS(88), 5,
      anon_sym_setdefault,
      anon_sym_setnull,
      anon_sym_restrict,
      anon_sym_noaction,
      anon_sym_cascade,
  [422] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(92), 1,
      anon_sym_table,
    STATE(19), 1,
      sym_comment,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 1,
      anon_sym_table,
    STATE(20), 1,
      sym_comment,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      anon_sym_table,
    STATE(21), 1,
      sym_comment,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [472] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 1,
      anon_sym_table,
    STATE(22), 1,
      sym_comment,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [488] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_table,
    STATE(23), 1,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [504] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(108), 1,
      anon_sym_table,
    STATE(24), 1,
      sym_comment,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 1,
      anon_sym_table,
    STATE(25), 1,
      sym_comment,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 1,
      anon_sym_table,
    STATE(26), 1,
      sym_comment,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 1,
      anon_sym_table,
    STATE(27), 1,
      sym_comment,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      anon_sym_table,
    STATE(28), 1,
      sym_comment,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [584] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(60), 1,
      sym_field_attribute_list,
    ACTIONS(126), 2,
      anon_sym_indexes,
      sym_identifier,
  [604] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(134), 1,
      anon_sym_table,
    STATE(30), 1,
      sym_comment,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [620] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(138), 1,
      anon_sym_table,
    STATE(31), 1,
      sym_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(142), 1,
      anon_sym_table,
    STATE(32), 1,
      sym_comment,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [652] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(146), 1,
      anon_sym_table,
    STATE(33), 1,
      sym_comment,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      aux_sym_relationship_declaration_token1,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [668] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_comment,
    STATE(47), 1,
      sym_cardinality_op,
    STATE(76), 1,
      sym_relationship_body_inline,
    ACTIONS(17), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [686] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_enumerator,
    STATE(35), 2,
      sym_comment,
      aux_sym_enumerator_list_repeat1,
  [703] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 1,
      aux_sym__table_ident_token1,
    STATE(3), 1,
      sym_table_field,
    STATE(25), 1,
      sym_relationship_body,
    STATE(36), 1,
      sym_comment,
    STATE(85), 1,
      sym__table_ident,
  [722] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 1,
      aux_sym__table_ident_token1,
    STATE(3), 1,
      sym_table_field,
    STATE(37), 1,
      sym_comment,
    STATE(85), 1,
      sym__table_ident,
    STATE(87), 1,
      sym_relationship_body,
  [741] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_indexes,
      sym_identifier,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [756] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_indexes,
      sym_identifier,
    ACTIONS(161), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [771] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_enumerator_list_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(68), 1,
      sym_enumerator,
  [790] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_index_attribute_list_repeat1,
  [806] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 1,
      aux_sym__table_ident_token1,
    STATE(9), 1,
      sym_table_field,
    STATE(42), 1,
      sym_comment,
    STATE(85), 1,
      sym__table_ident,
  [822] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(43), 2,
      sym_comment,
      aux_sym_field_attribute_list_repeat1,
  [836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_indexes,
      sym_identifier,
  [850] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(45), 1,
      sym_comment,
  [866] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_indexes,
      sym_identifier,
  [880] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 1,
      aux_sym__table_ident_token1,
    STATE(47), 1,
      sym_comment,
    STATE(74), 1,
      sym_table_field,
    STATE(85), 1,
      sym__table_ident,
  [896] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_tablegroup_list_repeat1,
  [912] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(49), 2,
      sym_comment,
      aux_sym_relationship_settings_list_repeat1,
  [926] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_index_attribute_list_repeat1,
    STATE(50), 1,
      sym_comment,
    STATE(90), 1,
      sym_index_attribute_list,
  [942] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym__relationship_body,
    STATE(51), 1,
      sym_comment,
  [958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_indexes,
      sym_identifier,
  [972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_indexes,
      sym_identifier,
  [986] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(54), 1,
      sym_comment,
  [1002] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_comment,
      aux_sym_index_attribute_list_repeat1,
  [1016] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_comment,
    ACTIONS(216), 2,
      anon_sym_indexes,
      sym_identifier,
  [1030] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_relationship_settings_list_repeat1,
  [1046] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_enumerator_list_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(68), 1,
      sym_enumerator,
  [1062] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_relationship_settings_list_repeat1,
    STATE(59), 1,
      sym_comment,
  [1078] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_indexes,
      sym_identifier,
  [1092] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(230), 1,
      anon_sym_as,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_field_declaration_list,
    STATE(61), 1,
      sym_comment,
  [1108] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(62), 2,
      sym_comment,
      aux_sym_tablegroup_list_repeat1,
  [1122] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1133] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1144] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_tablegroup_list,
    STATE(65), 1,
      sym_comment,
  [1157] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_enumerator_list,
    STATE(66), 1,
      sym_comment,
  [1170] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(67), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1181] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(68), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1192] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(69), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 1,
      aux_sym__table_ident_token1,
    STATE(6), 1,
      sym__table_ident,
    STATE(70), 1,
      sym_comment,
  [1216] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(71), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1227] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(72), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1238] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(255), 1,
      aux_sym_relationship_settings_token1,
    STATE(73), 1,
      sym_comment,
    STATE(79), 1,
      sym_relationship_settings,
  [1251] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1262] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(75), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1273] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(76), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1284] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_tablegroup_list_repeat1,
    STATE(77), 1,
      sym_comment,
  [1297] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(255), 1,
      aux_sym_relationship_settings_token1,
    STATE(57), 1,
      sym_relationship_settings,
    STATE(78), 1,
      sym_comment,
  [1310] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(79), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1321] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_field_declaration_list,
    STATE(80), 1,
      sym_comment,
  [1334] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(81), 1,
      sym_comment,
  [1344] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_comment,
  [1354] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(267), 1,
      aux_sym__table_ident_token1,
    STATE(83), 1,
      sym_comment,
  [1364] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
  [1374] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(85), 1,
      sym_comment,
  [1384] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(86), 1,
      sym_comment,
  [1394] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_comment,
  [1404] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
  [1414] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_comment,
  [1424] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_comment,
  [1434] = 1,
    ACTIONS(283), 1,
      aux_sym_comment_token1,
  [1438] = 1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 229,
  [SMALL_STATE(11)] = 253,
  [SMALL_STATE(12)] = 277,
  [SMALL_STATE(13)] = 298,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 348,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 422,
  [SMALL_STATE(20)] = 439,
  [SMALL_STATE(21)] = 456,
  [SMALL_STATE(22)] = 472,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 504,
  [SMALL_STATE(25)] = 520,
  [SMALL_STATE(26)] = 536,
  [SMALL_STATE(27)] = 552,
  [SMALL_STATE(28)] = 568,
  [SMALL_STATE(29)] = 584,
  [SMALL_STATE(30)] = 604,
  [SMALL_STATE(31)] = 620,
  [SMALL_STATE(32)] = 636,
  [SMALL_STATE(33)] = 652,
  [SMALL_STATE(34)] = 668,
  [SMALL_STATE(35)] = 686,
  [SMALL_STATE(36)] = 703,
  [SMALL_STATE(37)] = 722,
  [SMALL_STATE(38)] = 741,
  [SMALL_STATE(39)] = 756,
  [SMALL_STATE(40)] = 771,
  [SMALL_STATE(41)] = 790,
  [SMALL_STATE(42)] = 806,
  [SMALL_STATE(43)] = 822,
  [SMALL_STATE(44)] = 836,
  [SMALL_STATE(45)] = 850,
  [SMALL_STATE(46)] = 866,
  [SMALL_STATE(47)] = 880,
  [SMALL_STATE(48)] = 896,
  [SMALL_STATE(49)] = 912,
  [SMALL_STATE(50)] = 926,
  [SMALL_STATE(51)] = 942,
  [SMALL_STATE(52)] = 958,
  [SMALL_STATE(53)] = 972,
  [SMALL_STATE(54)] = 986,
  [SMALL_STATE(55)] = 1002,
  [SMALL_STATE(56)] = 1016,
  [SMALL_STATE(57)] = 1030,
  [SMALL_STATE(58)] = 1046,
  [SMALL_STATE(59)] = 1062,
  [SMALL_STATE(60)] = 1078,
  [SMALL_STATE(61)] = 1092,
  [SMALL_STATE(62)] = 1108,
  [SMALL_STATE(63)] = 1122,
  [SMALL_STATE(64)] = 1133,
  [SMALL_STATE(65)] = 1144,
  [SMALL_STATE(66)] = 1157,
  [SMALL_STATE(67)] = 1170,
  [SMALL_STATE(68)] = 1181,
  [SMALL_STATE(69)] = 1192,
  [SMALL_STATE(70)] = 1203,
  [SMALL_STATE(71)] = 1216,
  [SMALL_STATE(72)] = 1227,
  [SMALL_STATE(73)] = 1238,
  [SMALL_STATE(74)] = 1251,
  [SMALL_STATE(75)] = 1262,
  [SMALL_STATE(76)] = 1273,
  [SMALL_STATE(77)] = 1284,
  [SMALL_STATE(78)] = 1297,
  [SMALL_STATE(79)] = 1310,
  [SMALL_STATE(80)] = 1321,
  [SMALL_STATE(81)] = 1334,
  [SMALL_STATE(82)] = 1344,
  [SMALL_STATE(83)] = 1354,
  [SMALL_STATE(84)] = 1364,
  [SMALL_STATE(85)] = 1374,
  [SMALL_STATE(86)] = 1384,
  [SMALL_STATE(87)] = 1394,
  [SMALL_STATE(88)] = 1404,
  [SMALL_STATE(89)] = 1414,
  [SMALL_STATE(90)] = 1424,
  [SMALL_STATE(91)] = 1434,
  [SMALL_STATE(92)] = 1438,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_ident, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_ident, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_body_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_body_repeat1, 2), SHIFT_REPEAT(83),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relationship_body_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_field, 3, .production_id = 7),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_field, 3, .production_id = 7),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(86),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(51),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(81),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(88),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(82),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_body, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings_list, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_settings_list, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings_list, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_settings_list, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator_list, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumerator_list, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tablegroup_list, 3, .production_id = 8),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tablegroup_list, 3, .production_id = 8),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_body, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relationship_body, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tablegroup_definition, 3, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tablegroup_definition, 3, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 2, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2, .production_id = 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 2, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration, 2, .production_id = 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_body, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relationship_body, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 5),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 2), SHIFT_REPEAT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_attribute_list, 1),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2), SHIFT_REPEAT(10),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_attribute_list, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_attribute_list, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_settings_list_repeat1, 2), SHIFT_REPEAT(73),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_settings_list_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_field, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_field, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 2), SHIFT_REPEAT(63),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_declaration, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_declaration, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, .production_id = 10),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 10),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 2, .production_id = 9), SHIFT_REPEAT(75),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 2, .production_id = 9),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_kind, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1, .production_id = 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_parameter, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_settings, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_body_inline, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 1, .production_id = 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration_inline, 2, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_op, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
