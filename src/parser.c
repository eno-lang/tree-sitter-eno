#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 20
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_key = 1,
  sym_directContinuationOperator = 2,
  sym_spacedContinuationOperator = 3,
  sym_commentOperator = 4,
  sym_copyOperator = 5,
  sym_deepCopyOperator = 6,
  sym_entryOperator = 7,
  sym_itemOperator = 8,
  sym_elementOperator = 9,
  sym_sectionOperator = 10,
  sym__endOfLine = 11,
  sym__sectionAscend = 12,
  sym__sectionDescend = 13,
  sym_document = 14,
  sym__instruction = 15,
  sym_section = 16,
  aux_sym_document_repeat1 = 17,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_key] = "key",
  [sym_directContinuationOperator] = "directContinuationOperator",
  [sym_spacedContinuationOperator] = "spacedContinuationOperator",
  [sym_commentOperator] = "commentOperator",
  [sym_copyOperator] = "copyOperator",
  [sym_deepCopyOperator] = "deepCopyOperator",
  [sym_entryOperator] = "entryOperator",
  [sym_itemOperator] = "itemOperator",
  [sym_elementOperator] = "elementOperator",
  [sym_sectionOperator] = "sectionOperator",
  [sym__endOfLine] = "_endOfLine",
  [sym__sectionAscend] = "_sectionAscend",
  [sym__sectionDescend] = "_sectionDescend",
  [sym_document] = "document",
  [sym__instruction] = "_instruction",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_directContinuationOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_spacedContinuationOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_commentOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_copyOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_deepCopyOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_entryOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_itemOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_elementOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_sectionOperator] = {
    .visible = true,
    .named = true,
  },
  [sym__endOfLine] = {
    .visible = false,
    .named = true,
  },
  [sym__sectionAscend] = {
    .visible = false,
    .named = true,
  },
  [sym__sectionDescend] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
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
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(5);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead != 0)
        ADVANCE(10);
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
      ACCEPT_TOKEN(sym_itemOperator);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_elementOperator);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_copyOperator);
      if (lookahead == '<')
        ADVANCE(11);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_entryOperator);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_commentOperator);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_spacedContinuationOperator);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_directContinuationOperator);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_deepCopyOperator);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 4},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 4},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 0, .external_lex_state = 4},
  [15] = {.lex_state = 0, .external_lex_state = 4},
  [16] = {.lex_state = 0, .external_lex_state = 4},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 13},
};

enum {
  ts_external_token__endOfLine = 0,
  ts_external_token__sectionAscend = 1,
  ts_external_token__sectionDescend = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__endOfLine] = sym__endOfLine,
  [ts_external_token__sectionAscend] = sym__sectionAscend,
  [ts_external_token__sectionDescend] = sym__sectionDescend,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__endOfLine] = true,
    [ts_external_token__sectionAscend] = true,
    [ts_external_token__sectionDescend] = true,
  },
  [2] = {
    [ts_external_token__sectionDescend] = true,
  },
  [3] = {
    [ts_external_token__endOfLine] = true,
  },
  [4] = {
    [ts_external_token__sectionAscend] = true,
    [ts_external_token__sectionDescend] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_spacedContinuationOperator] = ACTIONS(1),
    [sym_itemOperator] = ACTIONS(1),
    [sym__endOfLine] = ACTIONS(1),
    [sym_directContinuationOperator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym__sectionDescend] = ACTIONS(1),
    [sym_deepCopyOperator] = ACTIONS(1),
  },
  [1] = {
    [sym__instruction] = STATE(3),
    [sym_section] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [sym_document] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__sectionDescend] = ACTIONS(5),
  },
  [2] = {
    [sym_sectionOperator] = ACTIONS(7),
  },
  [3] = {
    [sym_section] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [sym__instruction] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__sectionDescend] = ACTIONS(5),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [5] = {
    [sym_key] = ACTIONS(13),
  },
  [6] = {
    [sym_section] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [sym__instruction] = STATE(6),
    [sym__sectionDescend] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(18),
  },
  [7] = {
    [sym__endOfLine] = ACTIONS(20),
  },
  [8] = {
    [sym_section] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [sym__instruction] = STATE(10),
    [sym__sectionAscend] = ACTIONS(22),
    [sym__sectionDescend] = ACTIONS(24),
  },
  [9] = {
    [sym__sectionDescend] = ACTIONS(26),
    [ts_builtin_sym_end] = ACTIONS(26),
  },
  [10] = {
    [sym_section] = STATE(12),
    [aux_sym_document_repeat1] = STATE(12),
    [sym__instruction] = STATE(12),
    [sym__sectionAscend] = ACTIONS(28),
    [sym__sectionDescend] = ACTIONS(24),
  },
  [11] = {
    [sym__sectionDescend] = ACTIONS(30),
    [ts_builtin_sym_end] = ACTIONS(30),
  },
  [12] = {
    [sym_section] = STATE(12),
    [aux_sym_document_repeat1] = STATE(12),
    [sym__instruction] = STATE(12),
    [sym__sectionAscend] = ACTIONS(18),
    [sym__sectionDescend] = ACTIONS(32),
  },
  [13] = {
    [sym__sectionAscend] = ACTIONS(26),
    [sym__sectionDescend] = ACTIONS(26),
  },
  [14] = {
    [sym__sectionAscend] = ACTIONS(30),
    [sym__sectionDescend] = ACTIONS(30),
  },
  [15] = {
    [sym_section] = STATE(16),
    [aux_sym_document_repeat1] = STATE(16),
    [sym__instruction] = STATE(16),
    [sym__sectionAscend] = ACTIONS(35),
    [sym__sectionDescend] = ACTIONS(24),
  },
  [16] = {
    [sym_section] = STATE(12),
    [aux_sym_document_repeat1] = STATE(12),
    [sym__instruction] = STATE(12),
    [sym__sectionAscend] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(24),
  },
  [17] = {
    [sym__endOfLine] = ACTIONS(39),
  },
  [18] = {
    [sym_key] = ACTIONS(41),
  },
  [19] = {
    [sym_sectionOperator] = ACTIONS(43),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [11] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [20] = {.count = 1, .reusable = true}, SHIFT(8),
  [22] = {.count = 1, .reusable = true}, SHIFT(9),
  [24] = {.count = 1, .reusable = true}, SHIFT(19),
  [26] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [28] = {.count = 1, .reusable = true}, SHIFT(11),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [35] = {.count = 1, .reusable = true}, SHIFT(13),
  [37] = {.count = 1, .reusable = true}, SHIFT(14),
  [39] = {.count = 1, .reusable = true}, SHIFT(15),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
};

void *tree_sitter_eno_external_scanner_create(void);
void tree_sitter_eno_external_scanner_destroy(void *);
bool tree_sitter_eno_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_eno_external_scanner_serialize(void *, char *);
void tree_sitter_eno_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eno(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_eno_external_scanner_create,
      tree_sitter_eno_external_scanner_destroy,
      tree_sitter_eno_external_scanner_scan,
      tree_sitter_eno_external_scanner_serialize,
      tree_sitter_eno_external_scanner_deserialize,
    },
  };
  return &language;
}
