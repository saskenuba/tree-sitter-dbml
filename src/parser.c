#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_ref = 24,
  anon_sym_COLON = 25,
  anon_sym_DOT = 26,
  aux_sym__table_ident_token1 = 27,
  anon_sym_SLASH_SLASH = 28,
  aux_sym_comment_token1 = 29,
  anon_sym_enum = 30,
  aux_sym_tablegroup_definition_token1 = 31,
  sym_project_file = 32,
  sym_attribute_kind = 33,
  sym_cardinality_op = 34,
  sym_primitive_type = 35,
  sym_custom_type = 36,
  sym__declaration = 37,
  sym_field_declaration_list = 38,
  sym_table_definition = 39,
  sym__type_field = 40,
  sym_field_declaration = 41,
  sym_field_attribute_list = 42,
  sym_index_declaration = 43,
  sym_index_attribute_list = 44,
  sym_relationship_definition = 45,
  sym__relationship_token = 46,
  sym_relationship_declaration_short = 47,
  sym_relationship_declaration_inline = 48,
  sym_relationship = 49,
  sym__table_ident = 50,
  sym_comment = 51,
  sym_enum_definition = 52,
  sym_enumerator_list = 53,
  sym_enumerator = 54,
  sym_tablegroup_definition = 55,
  sym_tablegroup_list = 56,
  aux_sym_project_file_repeat1 = 57,
  aux_sym_field_declaration_list_repeat1 = 58,
  aux_sym_field_attribute_list_repeat1 = 59,
  aux_sym_index_attribute_list_repeat1 = 60,
  aux_sym_enumerator_list_repeat1 = 61,
  aux_sym_tablegroup_list_repeat1 = 62,
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
  [anon_sym_ref] = "ref",
  [anon_sym_COLON] = ":",
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
  [sym_relationship_definition] = "relationship_definition",
  [sym__relationship_token] = "_relationship_token",
  [sym_relationship_declaration_short] = "relationship_declaration_short",
  [sym_relationship_declaration_inline] = "relationship_declaration_inline",
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
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_relationship_definition] = sym_relationship_definition,
  [sym__relationship_token] = sym__relationship_token,
  [sym_relationship_declaration_short] = sym_relationship_declaration_short,
  [sym_relationship_declaration_inline] = sym_relationship_declaration_inline,
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
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_relationship_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__relationship_token] = {
    .visible = false,
    .named = true,
  },
  [sym_relationship_declaration_short] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_declaration_inline] = {
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
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 4},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 1},
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
    {field_name, 0},
  [5] =
    {field_column, 2},
    {field_table, 0},
  [7] =
    {field_alias, 2},
    {field_alias, 3},
    {field_fields, 4},
    {field_name, 1},
  [11] =
    {field_name, 0},
    {field_type, 1},
  [13] =
    {field_name, 1, .inherited = true},
  [14] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [16] =
    {field_name, 1},
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
      if (eof) ADVANCE(46);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(10)
      END_STATE();
    case 3:
      if (lookahead == '\t') SKIP(11)
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
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 39:
      if (eof) ADVANCE(46);
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 40:
      if (eof) ADVANCE(46);
      if (lookahead == '\t') SKIP(45)
      END_STATE();
    case 41:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(39)
      END_STATE();
    case 42:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') SKIP(41)
      END_STATE();
    case 43:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(40)
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') SKIP(43)
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__table_ident_token1);
      if (lookahead == '"') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__table_ident_token1);
      if (lookahead == '"' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 100:
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
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 19:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'q') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_indexes);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {(TSStateId)(-1)},
  [76] = {.lex_state = 96},
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
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(1),
    [aux_sym_tablegroup_definition_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_project_file] = STATE(72),
    [sym__declaration] = STATE(18),
    [sym_table_definition] = STATE(28),
    [sym_relationship_definition] = STATE(28),
    [sym__relationship_token] = STATE(8),
    [sym_comment] = STATE(1),
    [sym_enum_definition] = STATE(28),
    [sym_tablegroup_definition] = STATE(28),
    [aux_sym_project_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(9),
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_DOT,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [23] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_table,
    ACTIONS(9), 1,
      anon_sym_ref,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      aux_sym_tablegroup_definition_token1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_project_file_repeat1,
    STATE(8), 1,
      sym__relationship_token,
    STATE(18), 1,
      sym__declaration,
    STATE(28), 4,
      sym_table_definition,
      sym_relationship_definition,
      sym_enum_definition,
      sym_tablegroup_definition,
  [60] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(26), 1,
      anon_sym_ref,
    ACTIONS(29), 1,
      anon_sym_enum,
    ACTIONS(32), 1,
      aux_sym_tablegroup_definition_token1,
    STATE(8), 1,
      sym__relationship_token,
    STATE(18), 1,
      sym__declaration,
    STATE(4), 2,
      sym_comment,
      aux_sym_project_file_repeat1,
    STATE(28), 4,
      sym_table_definition,
      sym_relationship_definition,
      sym_enum_definition,
      sym_tablegroup_definition,
  [95] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(37), 1,
      anon_sym_table,
    STATE(5), 1,
      sym_comment,
    ACTIONS(35), 10,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [117] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_ref,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      sym__relationship_token,
    STATE(54), 1,
      sym_attribute_kind,
    STATE(60), 1,
      sym_relationship_definition,
    ACTIONS(39), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [144] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_ref,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      sym__relationship_token,
    STATE(43), 1,
      sym_attribute_kind,
    STATE(60), 1,
      sym_relationship_definition,
    ACTIONS(39), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [171] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      aux_sym__table_ident_token1,
    STATE(8), 1,
      sym_comment,
    STATE(31), 1,
      sym_relationship,
    STATE(35), 1,
      sym_cardinality_op,
    STATE(73), 1,
      sym__table_ident,
    STATE(15), 2,
      sym_relationship_declaration_short,
      sym_relationship_declaration_inline,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [202] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(21), 2,
      sym_primitive_type,
      sym_custom_type,
    ACTIONS(49), 5,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_float,
      anon_sym_text,
      anon_sym_varchar,
  [223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_table,
    STATE(10), 1,
      sym_comment,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [242] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(57), 1,
      anon_sym_table,
    STATE(11), 1,
      sym_comment,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [260] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      anon_sym_indexes,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(39), 1,
      sym__type_field,
    STATE(40), 2,
      sym_field_declaration,
      sym_index_declaration,
  [286] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_table,
    STATE(13), 1,
      sym_comment,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [304] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_indexes,
    STATE(39), 1,
      sym__type_field,
    STATE(14), 2,
      sym_comment,
      aux_sym_field_declaration_list_repeat1,
    STATE(40), 2,
      sym_field_declaration,
      sym_index_declaration,
  [328] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(79), 1,
      anon_sym_table,
    STATE(15), 1,
      sym_comment,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [346] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_COLON,
    STATE(16), 1,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      aux_sym__table_ident_token1,
  [365] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_indexes,
    STATE(12), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(39), 1,
      sym__type_field,
    STATE(40), 2,
      sym_field_declaration,
      sym_index_declaration,
  [388] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(89), 1,
      anon_sym_table,
    STATE(18), 1,
      sym_comment,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [404] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_table,
    STATE(19), 1,
      sym_comment,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [420] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(97), 1,
      anon_sym_table,
    STATE(20), 1,
      sym_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [436] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(36), 1,
      sym_field_attribute_list,
    ACTIONS(99), 2,
      anon_sym_indexes,
      sym_identifier,
  [456] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(107), 1,
      anon_sym_table,
    STATE(22), 1,
      sym_comment,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [472] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(23), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      aux_sym__table_ident_token1,
  [488] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(115), 1,
      anon_sym_table,
    STATE(24), 1,
      sym_comment,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [504] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_table,
    STATE(25), 1,
      sym_comment,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [520] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 1,
      anon_sym_table,
    STATE(26), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(127), 1,
      anon_sym_table,
    STATE(27), 1,
      sym_comment,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(131), 1,
      anon_sym_table,
    STATE(28), 1,
      sym_comment,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_ref,
      anon_sym_enum,
      aux_sym_tablegroup_definition_token1,
  [568] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_indexes,
      sym_identifier,
    ACTIONS(135), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_indexes,
      sym_identifier,
    ACTIONS(139), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [598] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_comment,
    STATE(44), 1,
      sym_cardinality_op,
    ACTIONS(43), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [613] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_enumerator_list_repeat1,
    STATE(59), 1,
      sym_enumerator,
  [632] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym__table_ident_token1,
    STATE(31), 1,
      sym_relationship,
    STATE(33), 1,
      sym_comment,
    STATE(67), 1,
      sym_relationship_declaration_short,
    STATE(73), 1,
      sym__table_ident,
  [651] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_enumerator,
    STATE(34), 2,
      sym_comment,
      aux_sym_enumerator_list_repeat1,
  [668] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym__table_ident_token1,
    STATE(13), 1,
      sym_relationship,
    STATE(35), 1,
      sym_comment,
    STATE(73), 1,
      sym__table_ident,
  [684] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_indexes,
      sym_identifier,
  [698] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(37), 2,
      sym_comment,
      aux_sym_field_attribute_list_repeat1,
  [712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_indexes,
      sym_identifier,
  [726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_indexes,
      sym_identifier,
  [740] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_indexes,
      sym_identifier,
  [754] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(41), 1,
      sym_comment,
  [770] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_indexes,
      sym_identifier,
  [784] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(43), 1,
      sym_comment,
  [800] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym__table_ident_token1,
    STATE(10), 1,
      sym_relationship,
    STATE(44), 1,
      sym_comment,
    STATE(73), 1,
      sym__table_ident,
  [816] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym_comment,
      aux_sym_index_attribute_list_repeat1,
  [830] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_tablegroup_list_repeat1,
  [846] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_indexes,
      sym_identifier,
  [860] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_index_attribute_list_repeat1,
    STATE(48), 1,
      sym_comment,
  [876] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_enumerator_list_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(59), 1,
      sym_enumerator,
  [892] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_comment,
      aux_sym_tablegroup_list_repeat1,
  [906] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_index_attribute_list_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(68), 1,
      sym_index_attribute_list,
  [922] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(203), 1,
      anon_sym_as,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_field_declaration_list,
    STATE(52), 1,
      sym_comment,
  [938] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(46), 1,
      aux_sym_tablegroup_list_repeat1,
    STATE(53), 1,
      sym_comment,
  [951] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [962] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_tablegroup_list,
    STATE(55), 1,
      sym_comment,
  [975] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_enumerator_list,
    STATE(56), 1,
      sym_comment,
  [988] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      aux_sym__table_ident_token1,
    STATE(5), 1,
      sym__table_ident,
    STATE(57), 1,
      sym_comment,
  [1001] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(58), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1012] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1023] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1034] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1045] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1056] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_field_declaration_list,
    STATE(63), 1,
      sym_comment,
  [1069] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
  [1079] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_comment,
  [1089] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(225), 1,
      aux_sym__table_ident_token1,
    STATE(66), 1,
      sym_comment,
  [1099] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_comment,
  [1109] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_comment,
  [1119] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
  [1129] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
  [1139] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
  [1149] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_comment,
  [1159] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(239), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym_comment,
  [1169] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_comment,
  [1179] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [1183] = 1,
    ACTIONS(245), 1,
      aux_sym_comment_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 223,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 304,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 388,
  [SMALL_STATE(19)] = 404,
  [SMALL_STATE(20)] = 420,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 456,
  [SMALL_STATE(23)] = 472,
  [SMALL_STATE(24)] = 488,
  [SMALL_STATE(25)] = 504,
  [SMALL_STATE(26)] = 520,
  [SMALL_STATE(27)] = 536,
  [SMALL_STATE(28)] = 552,
  [SMALL_STATE(29)] = 568,
  [SMALL_STATE(30)] = 583,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 613,
  [SMALL_STATE(33)] = 632,
  [SMALL_STATE(34)] = 651,
  [SMALL_STATE(35)] = 668,
  [SMALL_STATE(36)] = 684,
  [SMALL_STATE(37)] = 698,
  [SMALL_STATE(38)] = 712,
  [SMALL_STATE(39)] = 726,
  [SMALL_STATE(40)] = 740,
  [SMALL_STATE(41)] = 754,
  [SMALL_STATE(42)] = 770,
  [SMALL_STATE(43)] = 784,
  [SMALL_STATE(44)] = 800,
  [SMALL_STATE(45)] = 816,
  [SMALL_STATE(46)] = 830,
  [SMALL_STATE(47)] = 846,
  [SMALL_STATE(48)] = 860,
  [SMALL_STATE(49)] = 876,
  [SMALL_STATE(50)] = 892,
  [SMALL_STATE(51)] = 906,
  [SMALL_STATE(52)] = 922,
  [SMALL_STATE(53)] = 938,
  [SMALL_STATE(54)] = 951,
  [SMALL_STATE(55)] = 962,
  [SMALL_STATE(56)] = 975,
  [SMALL_STATE(57)] = 988,
  [SMALL_STATE(58)] = 1001,
  [SMALL_STATE(59)] = 1012,
  [SMALL_STATE(60)] = 1023,
  [SMALL_STATE(61)] = 1034,
  [SMALL_STATE(62)] = 1045,
  [SMALL_STATE(63)] = 1056,
  [SMALL_STATE(64)] = 1069,
  [SMALL_STATE(65)] = 1079,
  [SMALL_STATE(66)] = 1089,
  [SMALL_STATE(67)] = 1099,
  [SMALL_STATE(68)] = 1109,
  [SMALL_STATE(69)] = 1119,
  [SMALL_STATE(70)] = 1129,
  [SMALL_STATE(71)] = 1139,
  [SMALL_STATE(72)] = 1149,
  [SMALL_STATE(73)] = 1159,
  [SMALL_STATE(74)] = 1169,
  [SMALL_STATE(75)] = 1179,
  [SMALL_STATE(76)] = 1183,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_ident, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_ident, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(71),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(16),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(64),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(69),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship, 3, .production_id = 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship, 3, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration_short, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration_short, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition, 5, .production_id = 9),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_definition, 5, .production_id = 9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration_inline, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_declaration_inline, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(9),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(74),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relationship_definition, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relationship_token, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_token, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tablegroup_list, 3, .production_id = 7),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tablegroup_list, 3, .production_id = 7),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 5, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 2, .production_id = 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2, .production_id = 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration_list, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relationship_token, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_token, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator_list, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enumerator_list, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tablegroup_definition, 3, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tablegroup_definition, 3, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_type, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 2), SHIFT_REPEAT(58),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, .production_id = 10),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 10),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2), SHIFT_REPEAT(6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_attribute_list, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_field, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_field, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_attribute_list, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 2), SHIFT_REPEAT(62),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_declaration, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_declaration, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_attribute_list, 1),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 2, .production_id = 8), SHIFT_REPEAT(61),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 2, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enumerator, 1, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enumerator_list_repeat1, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_kind, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tablegroup_list_repeat1, 1, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_index_attribute_list_repeat1, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_op, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
