#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
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
  anon_sym_int = 11,
  anon_sym_float = 12,
  anon_sym_bool = 13,
  anon_sym_text = 14,
  anon_sym_as = 15,
  anon_sym_table = 16,
  anon_sym_enum = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  sym_relationship_token = 22,
  sym_project_file = 23,
  sym_attribute_kind = 24,
  sym_cardinality_operator = 25,
  sym_primitive_type = 26,
  sym__declaration = 27,
  sym_table_definition = 28,
  sym_enum_definition = 29,
  sym_field_declaration_list = 30,
  sym_field_declaration = 31,
  sym_field_attribute_list = 32,
  sym_relationship_definition = 33,
  aux_sym_project_file_repeat1 = 34,
  aux_sym_field_declaration_list_repeat1 = 35,
  aux_sym_field_attribute_list_repeat1 = 36,
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
  [anon_sym_table] = "table",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_relationship_token] = "relationship_token",
  [sym_project_file] = "project_file",
  [sym_attribute_kind] = "attribute_kind",
  [sym_cardinality_operator] = "cardinality_operator",
  [sym_primitive_type] = "primitive_type",
  [sym__declaration] = "_declaration",
  [sym_table_definition] = "table_definition",
  [sym_enum_definition] = "enum_definition",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [sym_field_attribute_list] = "field_attribute_list",
  [sym_relationship_definition] = "relationship_definition",
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
  [anon_sym_table] = anon_sym_table,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_relationship_token] = sym_relationship_token,
  [sym_project_file] = sym_project_file,
  [sym_attribute_kind] = sym_attribute_kind,
  [sym_cardinality_operator] = sym_cardinality_operator,
  [sym_primitive_type] = sym_primitive_type,
  [sym__declaration] = sym__declaration,
  [sym_table_definition] = sym_table_definition,
  [sym_enum_definition] = sym_enum_definition,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [sym_field_attribute_list] = sym_field_attribute_list,
  [sym_relationship_definition] = sym_relationship_definition,
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
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_relationship_token] = {
    .visible = true,
    .named = true,
  },
  [sym_project_file] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
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
  [sym_relationship_definition] = {
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
  field_fields = 3,
  field_name = 4,
  field_type = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_attributes] = "attributes",
  [field_fields] = "fields",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_fields, 2},
    {field_name, 1},
  [3] =
    {field_alias, 2},
    {field_alias, 3},
    {field_fields, 4},
    {field_name, 1},
  [7] =
    {field_name, 0},
    {field_type, 1},
  [9] =
    {field_attributes, 2},
    {field_name, 0},
    {field_type, 1},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(7)
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
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 25:
      if (eof) ADVANCE(32);
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 26:
      if (eof) ADVANCE(32);
      if (lookahead == '\t') SKIP(31)
      END_STATE();
    case 27:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 28:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_table);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_relationship_token);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_relationship_token);
      if (lookahead == ':') ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_relationship_token);
      if (lookahead == ':') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'k') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == '\t') SKIP(0)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 18:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'q') ADVANCE(32);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 7},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_relationship_token] = ACTIONS(1),
  },
  [1] = {
    [sym_project_file] = STATE(27),
    [sym__declaration] = STATE(5),
    [sym_table_definition] = STATE(5),
    [sym_enum_definition] = STATE(5),
    [sym_relationship_definition] = STATE(5),
    [aux_sym_project_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_table] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(7),
    [sym_relationship_token] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_table,
    ACTIONS(16), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      sym_relationship_token,
    STATE(2), 5,
      sym__declaration,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition,
      aux_sym_project_file_repeat1,
  [20] = 3,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(3), 2,
      sym_attribute_kind,
      aux_sym_field_attribute_list_repeat1,
    ACTIONS(22), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [36] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(3), 2,
      sym_attribute_kind,
      aux_sym_field_attribute_list_repeat1,
    ACTIONS(27), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [52] = 5,
    ACTIONS(5), 1,
      anon_sym_table,
    ACTIONS(7), 1,
      anon_sym_enum,
    ACTIONS(9), 1,
      sym_relationship_token,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(2), 5,
      sym__declaration,
      sym_table_definition,
      sym_enum_definition,
      sym_relationship_definition,
      aux_sym_project_file_repeat1,
  [72] = 2,
    STATE(4), 2,
      sym_attribute_kind,
      aux_sym_field_attribute_list_repeat1,
    ACTIONS(27), 6,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
  [85] = 1,
    ACTIONS(33), 7,
      anon_sym_notnull,
      anon_sym_null,
      anon_sym_pk,
      anon_sym_primarykey,
      anon_sym_unique,
      anon_sym_increment,
      anon_sym_RBRACK,
  [95] = 2,
    STATE(15), 1,
      sym_primitive_type,
    ACTIONS(35), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_text,
  [105] = 1,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym_relationship_token,
  [112] = 1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym_relationship_token,
  [119] = 1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym_relationship_token,
  [126] = 1,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym_relationship_token,
  [133] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [144] = 1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym_relationship_token,
  [151] = 3,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_field_attribute_list,
    ACTIONS(51), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [162] = 1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
      sym_relationship_token,
  [169] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [180] = 2,
    STATE(11), 1,
      sym_cardinality_operator,
    ACTIONS(62), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
  [189] = 2,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(13), 2,
      sym_field_declaration,
      aux_sym_field_declaration_list_repeat1,
  [197] = 1,
    ACTIONS(64), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [203] = 3,
    ACTIONS(66), 1,
      anon_sym_as,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_field_declaration_list,
  [213] = 2,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_field_declaration_list,
  [220] = 1,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [225] = 1,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [230] = 1,
    ACTIONS(74), 1,
      sym_identifier,
  [234] = 1,
    ACTIONS(76), 1,
      sym_identifier,
  [238] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [242] = 1,
    ACTIONS(80), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 144,
  [SMALL_STATE(15)] = 151,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 169,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 197,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 213,
  [SMALL_STATE(23)] = 220,
  [SMALL_STATE(24)] = 225,
  [SMALL_STATE(25)] = 230,
  [SMALL_STATE(26)] = 234,
  [SMALL_STATE(27)] = 238,
  [SMALL_STATE(28)] = 242,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(26),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(28),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(18),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2), SHIFT_REPEAT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_attribute_list_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_kind, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality_operator, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_definition, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 5, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2, .production_id = 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 2, .production_id = 1),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_attribute_list, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
