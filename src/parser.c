#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 16
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 2
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_LF = 1,
  sym_name = 2,
  sym_token = 3,
  sym_nameOperator = 4,
  sym_sectionOperator = 5,
  sym_commentOperator = 6,
  sym_document = 7,
  sym_section = 8,
  sym__instruction = 9,
  aux_sym_section_repeat1 = 10,
  anon_alias_sym_comment = 11,
  anon_alias_sym_value = 12,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LF] = "\n",
  [sym_name] = "name",
  [sym_token] = "token",
  [sym_nameOperator] = "nameOperator",
  [sym_sectionOperator] = "sectionOperator",
  [sym_commentOperator] = "commentOperator",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym__instruction] = "_instruction",
  [aux_sym_section_repeat1] = "section_repeat1",
  [anon_alias_sym_comment] = "comment",
  [anon_alias_sym_value] = "value",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_nameOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_sectionOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_commentOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_value] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = anon_alias_sym_comment,
  },
  [2] = {
    [2] = anon_alias_sym_value,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead != '-' &&
          (lookahead < '<' || lookahead > '>') &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_sectionOperator);
      if (lookahead == '#')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_nameOperator);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_commentOperator);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || lookahead > '>') &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || lookahead > '>') &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(7);
      if (lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || lookahead > '>') &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == ':')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(9);
      if (lookahead != 0)
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 15:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_nameOperator] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(5),
    [sym_section] = STATE(6),
    [sym__instruction] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [sym_sectionOperator] = ACTIONS(7),
    [sym_commentOperator] = ACTIONS(9),
  },
  [2] = {
    [sym_nameOperator] = ACTIONS(11),
  },
  [3] = {
    [sym_name] = ACTIONS(13),
  },
  [4] = {
    [sym_token] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [7] = {
    [aux_sym_section_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(23),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(25),
    [sym_token] = ACTIONS(27),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(25),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LF] = ACTIONS(29),
  },
  [11] = {
    [sym__instruction] = STATE(14),
    [sym_name] = ACTIONS(5),
    [sym_sectionOperator] = ACTIONS(7),
    [sym_commentOperator] = ACTIONS(9),
  },
  [12] = {
    [aux_sym_section_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(23),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(33),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
  },
  [15] = {
    [aux_sym_section_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(37),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(8),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_section, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym__instruction, 2),
  [27] = {.count = 1, .reusable = false}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__instruction, 2, .alias_sequence_id = 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__instruction, 3, .alias_sequence_id = 2),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(11),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eno() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
