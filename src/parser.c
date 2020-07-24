#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_identifier = 1,
  anon_sym_notnull = 2,
  anon_sym_pk = 3,
  anon_sym_primarykey = 4,
  anon_sym_unique = 5,
  anon_sym_increment = 6,
  anon_sym_int = 7,
  anon_sym_float = 8,
  anon_sym_bool = 9,
  anon_sym_text = 10,
  anon_sym_table = 11,
  anon_sym_enum = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym_project_file = 15,
  sym_primitive_type = 16,
  sym__declaration = 17,
  sym_table_definition = 18,
  sym_enum_definition = 19,
  sym_fields_declaration_list = 20,
  sym_field_declaration = 21,
  aux_sym_project_file_repeat1 = 22,
  aux_sym_fields_declaration_list_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_notnull] = "not null",
  [anon_sym_pk] = "pk",
  [anon_sym_primarykey] = "primary key",
  [anon_sym_unique] = "unique",
  [anon_sym_increment] = "increment",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_bool] = "bool",
  [anon_sym_text] = "text",
  [anon_sym_table] = "table",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_project_file] = "project_file",
  [sym_primitive_type] = "primitive_type",
  [sym__declaration] = "_declaration",
  [sym_table_definition] = "table_definition",
  [sym_enum_definition] = "enum_definition",
  [sym_fields_declaration_list] = "fields_declaration_list",
  [sym_field_declaration] = "field_declaration",
  [aux_sym_project_file_repeat1] = "project_file_repeat1",
  [aux_sym_fields_declaration_list_repeat1] = "fields_declaration_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_pk] = anon_sym_pk,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_project_file] = sym_project_file,
  [sym_primitive_type] = sym_primitive_type,
  [sym__declaration] = sym__declaration,
  [sym_table_definition] = sym_table_definition,
  [sym_enum_definition] = sym_enum_definition,
  [sym_fields_declaration_list] = sym_fields_declaration_list,
  [sym_field_declaration] = sym_field_declaration,
  [aux_sym_project_file_repeat1] = aux_sym_project_file_repeat1,
  [aux_sym_fields_declaration_list_repeat1] = aux_sym_fields_declaration_list_repeat1,
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
  [sym_project_file] = {
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
  [sym_fields_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_project_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_fields = 1,
  field_name = 2,
  field_type = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_fields] = "fields",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_fields, 2},
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_type, 1},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'k') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(21);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
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
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'q') ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_project_file] = STATE(16),
    [sym__declaration] = STATE(2),
    [sym_table_definition] = STATE(2),
    [sym_enum_definition] = STATE(2),
    [aux_sym_project_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_table] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_table,
    ACTIONS(7), 1,
      anon_sym_enum,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__declaration,
      sym_table_definition,
      sym_enum_definition,
      aux_sym_project_file_repeat1,
  [16] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_table,
    ACTIONS(16), 1,
      anon_sym_enum,
    STATE(3), 4,
      sym__declaration,
      sym_table_definition,
      sym_enum_definition,
      aux_sym_project_file_repeat1,
  [32] = 2,
    STATE(13), 1,
      sym_primitive_type,
    ACTIONS(19), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_text,
  [42] = 3,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_field_declaration,
      aux_sym_fields_declaration_list_repeat1,
  [53] = 3,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_field_declaration,
      aux_sym_fields_declaration_list_repeat1,
  [64] = 1,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
  [70] = 2,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(5), 2,
      sym_field_declaration,
      aux_sym_fields_declaration_list_repeat1,
  [78] = 1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
  [84] = 1,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_table,
      anon_sym_enum,
  [90] = 2,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_fields_declaration_list,
  [97] = 1,
    ACTIONS(38), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [102] = 1,
    ACTIONS(40), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [107] = 1,
    ACTIONS(42), 1,
      sym_identifier,
  [111] = 1,
    ACTIONS(44), 1,
      sym_identifier,
  [115] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 97,
  [SMALL_STATE(13)] = 102,
  [SMALL_STATE(14)] = 107,
  [SMALL_STATE(15)] = 111,
  [SMALL_STATE(16)] = 115,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(14),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_file_repeat1, 2), SHIFT_REPEAT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fields_declaration_list_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fields_declaration_list_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 2, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, .production_id = 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fields_declaration_list, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2, .production_id = 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
