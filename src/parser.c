#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  anon_sym_int = 11,
  anon_sym_float = 12,
  anon_sym_bool = 13,
  anon_sym_text = 14,
  anon_sym_as = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_table = 18,
  anon_sym_enum = 19,
  anon_sym_LBRACK = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACK = 22,
  sym__relationship_token = 23,
  anon_sym_DOT = 24,
  aux_sym__table_ident_token1 = 25,
  anon_sym_SLASH_SLASH = 26,
  aux_sym_comment_token1 = 27,
  sym_project_file = 28,
  sym_attribute_kind = 29,
  sym_cardinality_op = 30,
  sym_primitive_type = 31,
  sym_custom_type = 32,
  sym__declaration = 33,
  sym_table_definition = 34,
  sym_enum_definition = 35,
  sym_field_declaration_list = 36,
  sym_field_declaration = 37,
  sym_field_attribute_list = 38,
  sym__relationship_declaration_long = 39,
  sym_relationship_definition = 40,
  sym__relationship_declaration_short = 41,
  sym__relationship_declaration_inline = 42,
  sym_table_relationship = 43,
  sym__table_ident = 44,
  sym_comment = 45,
  aux_sym_project_file_repeat1 = 46,
  aux_sym_field_declaration_list_repeat1 = 47,
  aux_sym_field_attribute_list_repeat1 = 48,
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
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_bool] = "bool",
  [anon_sym_text] = "text",
  [anon_sym_as] = "as",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_table] = "table",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym__relationship_token] = "_relationship_token",
  [anon_sym_DOT] = ".",
  [aux_sym__table_ident_token1] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_project_file] = "project_file",
  [sym_attribute_kind] = "attribute_kind",
  [sym_cardinality_op] = "cardinality_op",
  [sym_primitive_type] = "primitive_type",
  [sym_custom_type] = "custom_type",
  [sym__declaration] = "_declaration",
  [sym_table_definition] = "table_definition",
  [sym_enum_definition] = "enum_definition",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [sym_field_attribute_list] = "field_attribute_list",
  [sym__relationship_declaration_long] = "_relationship_declaration_long",
  [sym_relationship_definition] = "relationship_definition",
  [sym__relationship_declaration_short] = "_relationship_declaration_short",
  [sym__relationship_declaration_inline] = "_relationship_declaration_inline",
  [sym_table_relationship] = "table_relationship",
  [sym__table_ident] = "_table_ident",
  [sym_comment] = "comment",
  [aux_sym_project_file_repeat1] = "project_file_repeat1",
  [aux_sym_field_declaration_list_repeat1] = "field_declaration_list_repeat1",
  [aux_sym_field_attribute_list_repeat1] = "field_attribute_list_repeat1",
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
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__relationship_token] = sym__relationship_token,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__table_ident_token1] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_project_file] = sym_project_file,
  [sym_attribute_kind] = sym_attribute_kind,
  [sym_cardinality_op] = sym_cardinality_op,
  [sym_primitive_type] = sym_primitive_type,
  [sym_custom_type] = sym_custom_type,
  [sym__declaration] = sym__declaration,
  [sym_table_definition] = sym_table_definition,
  [sym_enum_definition] = sym_enum_definition,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [sym_field_attribute_list] = sym_field_attribute_list,
  [sym__relationship_declaration_long] = sym__relationship_declaration_long,
  [sym_relationship_definition] = sym_relationship_definition,
  [sym__relationship_declaration_short] = sym__relationship_declaration_short,
  [sym__relationship_declaration_inline] = sym__relationship_declaration_inline,
  [sym_table_relationship] = sym_table_relationship,
  [sym__table_ident] = sym__table_ident,
  [sym_comment] = sym_comment,
  [aux_sym_project_file_repeat1] = aux_sym_project_file_repeat1,
  [aux_sym_field_declaration_list_repeat1] = aux_sym_field_declaration_list_repeat1,
  [aux_sym_field_attribute_list_repeat1] = aux_sym_field_attribute_list_repeat1,
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
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
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
  [anon_sym_enum] = {
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
  [sym__relationship_token] = {
    .visible = false,
    .named = true,
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
  [sym_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration_list] = {
    .visible = true,
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
  [sym__relationship_declaration_long] = {
    .visible = false,
    .named = true,
  },
  [sym_relationship_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__relationship_declaration_short] = {
    .visible = false,
    .named = true,
  },
  [sym__relationship_declaration_inline] = {
    .visible = false,
    .named = true,
  },
  [sym_table_relationship] = {
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
};

enum {
  field_alias = 1,
  field_attributes = 2,
  field_column = 3,
  field_fields = 4,
  field_name = 5,
  field_table = 6,
  field_type = 7,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_attributes] = "attributes",
  [field_column] = "column",
  [field_fields] = "fields",
  [field_name] = "name",
  [field_table] = "table",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[9] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 4},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1, .inherited = true},
  [2] =
    {field_column, 2},
    {field_table, 0},
  [4] =
    {field_name, 0},
    {field_type, 1},
  [6] =
    {field_fields, 2},
    {field_fields, 3},
    {field_fields, 4},
    {field_name, 1},
  [10] =
    {field_name, 0},
  [11] =
    {field_attributes, 2},
    {field_name, 0},
    {field_type, 1},
  [14] =
    {field_alias, 2},
    {field_alias, 3},
    {field_fields, 4},
    {field_fields, 5},
    {field_fields, 6},
    {field_name, 1},
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') SKIP(54)
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(9)
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(10)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(1)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(2)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'q') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 51:
      if (eof) ADVANCE(58);
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 52:
      if (eof) ADVANCE(58);
      if (lookahead == '\t') SKIP(57)
      END_STATE();
    case 53:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') SKIP(51)
      END_STATE();
    case 54:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\r') SKIP(53)
      END_STATE();
    case 55:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') SKIP(52)
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\r') SKIP(55)
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '\\') SKIP(56)
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_null);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_pk);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_unique);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_increment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_table);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__relationship_token);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__relationship_token);
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__relationship_token);
      if (lookahead == ':') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__table_ident_token1);
      if (lookahead == '"') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__table_ident_token1);
      if (lookahead == '"' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
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
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {(TSStateId)(-1)},
  [53] = {.lex_state = 124},
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
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__relationship_token] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_project_file] = STATE(44),
    [sym__declaration] = STATE(21),
    [sym_table_definition] = STATE(25),
    [sym_enum_definition] = STATE(25),
    [sym_relationship_definition] = STATE(25),
    [sym_comment] = STATE(1),
    [aux_sym_project_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [sym__relationship_token] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      aux_sym__table_ident_token1,
    STATE(2), 1,
      sym_comment,
    STATE(22), 1,
      sym_table_relationship,
    STATE(32), 1,
      sym_cardinality_op,
    STATE(41), 1,
      sym__table_ident,
    ACTIONS(15), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    STATE(14), 3,
      sym__relationship_declaration_long,
      sym__relationship_declaration_short,
      sym__relationship_declaration_inline,
  [32] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(3), 1,
      sym_comment,
    ACTIONS(19), 11,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_table,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__relationship_token,
      anon_sym_DOT,
  [52] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(4), 1,
      sym_comment,
    ACTIONS(21), 10,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_table,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__relationship_token,
  [71] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym__relationship_token,
    STATE(5), 1,
      sym_comment,
    STATE(35), 1,
      sym_attribute_kind,
    STATE(39), 1,
      sym_relationship_definition,
    ACTIONS(23), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [95] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      sym__relationship_token,
    STATE(6), 1,
      sym_comment,
    STATE(29), 1,
      sym_attribute_kind,
    STATE(39), 1,
      sym_relationship_definition,
    ACTIONS(23), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [119] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(32), 1,
      sym_cardinality_op,
    STATE(36), 1,
      sym_field_declaration,
    STATE(42), 2,
      sym_field_declaration_list,
      sym__relationship_declaration_inline,
    ACTIONS(15), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [147] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_table,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      sym__relationship_token,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_project_file_repeat1,
    STATE(21), 1,
      sym__declaration,
    STATE(25), 3,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition,
  [177] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(32), 1,
      sym_cardinality_op,
    STATE(36), 1,
      sym_field_declaration,
    STATE(51), 2,
      sym_field_declaration_list,
      sym__relationship_declaration_inline,
    ACTIONS(15), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [205] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(32), 1,
      sym_cardinality_op,
    STATE(36), 1,
      sym_field_declaration,
    STATE(50), 2,
      sym_field_declaration_list,
      sym__relationship_declaration_inline,
    ACTIONS(15), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [233] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_table,
    ACTIONS(34), 1,
      anon_sym_enum,
    ACTIONS(37), 1,
      sym__relationship_token,
    STATE(21), 1,
      sym__declaration,
    STATE(11), 2,
      sym_comment,
      aux_sym_project_file_repeat1,
    STATE(25), 3,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition,
  [261] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(12), 1,
      sym_comment,
    STATE(23), 2,
      sym_primitive_type,
      sym_custom_type,
    ACTIONS(42), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_text,
  [281] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym_comment,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_table,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__relationship_token,
  [297] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_comment,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__relationship_token,
  [312] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_comment,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__relationship_token,
  [327] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(16), 1,
      sym_comment,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__relationship_token,
  [342] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_comment,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym__relationship_token,
  [355] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_field_declaration_list_repeat1,
    STATE(36), 1,
      sym_field_declaration,
  [374] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      sym_comment,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym__relationship_token,
  [387] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_field_declaration,
    STATE(20), 2,
      sym_comment,
      aux_sym_field_declaration_list_repeat1,
  [404] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym__relationship_token,
  [417] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(22), 1,
      sym_comment,
    STATE(30), 1,
      sym_cardinality_op,
    ACTIONS(15), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [432] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    STATE(33), 1,
      sym_field_attribute_list,
    ACTIONS(65), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [449] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym__relationship_token,
  [462] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_comment,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym__relationship_token,
  [475] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(73), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [487] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(27), 2,
      sym_comment,
      aux_sym_field_attribute_list_repeat1,
  [501] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(28), 1,
      sym_comment,
  [517] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_field_attribute_list_repeat1,
    STATE(29), 1,
      sym_comment,
  [533] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      aux_sym__table_ident_token1,
    STATE(16), 1,
      sym_table_relationship,
    STATE(30), 1,
      sym_comment,
    STATE(41), 1,
      sym__table_ident,
  [549] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(31), 1,
      sym_comment,
    ACTIONS(86), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [561] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      aux_sym__table_ident_token1,
    STATE(13), 1,
      sym_table_relationship,
    STATE(32), 1,
      sym_comment,
    STATE(41), 1,
      sym__table_ident,
  [577] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [588] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [599] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [610] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(94), 1,
      anon_sym_as,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_comment,
  [634] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(38), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [645] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      aux_sym__table_ident_token1,
    STATE(4), 1,
      sym__table_ident,
    STATE(40), 1,
      sym_comment,
  [669] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_comment,
  [679] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      sym_comment,
  [689] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(43), 1,
      sym_comment,
  [699] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
  [709] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_comment,
  [719] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_comment,
  [729] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(47), 1,
      sym_comment,
  [739] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(48), 1,
      sym_comment,
  [749] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(118), 1,
      aux_sym__table_ident_token1,
    STATE(49), 1,
      sym_comment,
  [759] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_comment,
  [769] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_comment,
  [779] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [783] = 1,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 233,
  [SMALL_STATE(12)] = 261,
  [SMALL_STATE(13)] = 281,
  [SMALL_STATE(14)] = 297,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 327,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 355,
  [SMALL_STATE(19)] = 374,
  [SMALL_STATE(20)] = 387,
  [SMALL_STATE(21)] = 404,
  [SMALL_STATE(22)] = 417,
  [SMALL_STATE(23)] = 432,
  [SMALL_STATE(24)] = 449,
  [SMALL_STATE(25)] = 462,
  [SMALL_STATE(26)] = 475,
  [SMALL_STATE(27)] = 487,
  [SMALL_STATE(28)] = 501,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 533,
  [SMALL_STATE(31)] = 549,
  [SMALL_STATE(32)] = 561,
  [SMALL_STATE(33)] = 577,
  [SMALL_STATE(34)] = 588,
  [SMALL_STATE(35)] = 599,
  [SMALL_STATE(36)] = 610,
  [SMALL_STATE(37)] = 621,
  [SMALL_STATE(38)] = 634,
  [SMALL_STATE(39)] = 645,
  [SMALL_STATE(40)] = 656,
  [SMALL_STATE(41)] = 669,
  [SMALL_STATE(42)] = 679,
  [SMALL_STATE(43)] = 689,
  [SMALL_STATE(44)] = 699,
  [SMALL_STATE(45)] = 709,
  [SMALL_STATE(46)] = 719,
  [SMALL_STATE(47)] = 729,
  [SMALL_STATE(48)] = 739,
  [SMALL_STATE(49)] = 749,
  [SMALL_STATE(50)] = 759,
  [SMALL_STATE(51)] = 769,
  [SMALL_STATE(52)] = 779,
  [SMALL_STATE(53)] = 783,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_ident, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_relationship, 3, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(48),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(43),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_declaration_inline, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition, 2, .production_id = 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_declaration_long, 4, .production_id = 6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relationship_declaration_short, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 7, .production_id = 8),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2), SHIFT_REPEAT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_kind, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_op, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
