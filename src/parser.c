#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 26
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_key = 1,
  sym_token = 2,
  sym_directContinuationOperator = 3,
  sym_spacedContinuationOperator = 4,
  sym_commentOperator = 5,
  sym_copyOperator = 6,
  sym_deepCopyOperator = 7,
  sym_entryOperator = 8,
  sym_itemOperator = 9,
  sym_elementOperator = 10,
  sym_sectionOperator = 11,
  sym__endOfLine = 12,
  sym__sectionAscend = 13,
  sym__sectionDescend = 14,
  sym_document = 15,
  sym__instruction = 16,
  sym__comment = 17,
  sym_section = 18,
  aux_sym_document_repeat1 = 19,
  anon_alias_sym_comment = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_key] = "key",
  [sym_token] = "token",
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
  [sym__comment] = "_comment",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [anon_alias_sym_comment] = "comment",
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
  [sym_token] = {
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
  [sym__comment] = {
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
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = anon_alias_sym_comment,
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '>')
        ADVANCE(7);
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
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
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
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 13, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 13, .external_lex_state = 4},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 13, .external_lex_state = 4},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 4},
  [16] = {.lex_state = 13, .external_lex_state = 4},
  [17] = {.lex_state = 13, .external_lex_state = 4},
  [18] = {.lex_state = 13, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 13, .external_lex_state = 4},
  [21] = {.lex_state = 13, .external_lex_state = 4},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 17},
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
    [sym_section] = STATE(4),
    [sym__instruction] = STATE(4),
    [sym__comment] = STATE(4),
    [aux_sym_document_repeat1] = STATE(4),
    [sym_document] = STATE(5),
    [sym_commentOperator] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__sectionDescend] = ACTIONS(7),
  },
  [2] = {
    [sym_token] = ACTIONS(9),
  },
  [3] = {
    [sym_sectionOperator] = ACTIONS(11),
  },
  [4] = {
    [sym_section] = STATE(8),
    [sym__instruction] = STATE(8),
    [sym__comment] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [sym_commentOperator] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__sectionDescend] = ACTIONS(7),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [6] = {
    [sym__endOfLine] = ACTIONS(17),
  },
  [7] = {
    [sym_key] = ACTIONS(19),
  },
  [8] = {
    [sym_section] = STATE(8),
    [sym__instruction] = STATE(8),
    [sym__comment] = STATE(8),
    [aux_sym_document_repeat1] = STATE(8),
    [sym_commentOperator] = ACTIONS(21),
    [sym__sectionDescend] = ACTIONS(24),
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [9] = {
    [sym_commentOperator] = ACTIONS(29),
    [sym__sectionDescend] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [10] = {
    [sym__endOfLine] = ACTIONS(31),
  },
  [11] = {
    [sym_section] = STATE(13),
    [sym__instruction] = STATE(13),
    [sym__comment] = STATE(13),
    [aux_sym_document_repeat1] = STATE(13),
    [sym_commentOperator] = ACTIONS(33),
    [sym__sectionDescend] = ACTIONS(35),
    [sym__sectionAscend] = ACTIONS(37),
  },
  [12] = {
    [sym_commentOperator] = ACTIONS(39),
    [sym__sectionDescend] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [13] = {
    [sym_section] = STATE(15),
    [sym__instruction] = STATE(15),
    [sym__comment] = STATE(15),
    [aux_sym_document_repeat1] = STATE(15),
    [sym_commentOperator] = ACTIONS(33),
    [sym__sectionDescend] = ACTIONS(35),
    [sym__sectionAscend] = ACTIONS(41),
  },
  [14] = {
    [sym_commentOperator] = ACTIONS(43),
    [sym__sectionDescend] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [15] = {
    [sym_section] = STATE(15),
    [sym__instruction] = STATE(15),
    [sym__comment] = STATE(15),
    [aux_sym_document_repeat1] = STATE(15),
    [sym_commentOperator] = ACTIONS(45),
    [sym__sectionAscend] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(48),
  },
  [16] = {
    [sym_commentOperator] = ACTIONS(29),
    [sym__sectionAscend] = ACTIONS(29),
    [sym__sectionDescend] = ACTIONS(29),
  },
  [17] = {
    [sym_commentOperator] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(39),
    [sym__sectionDescend] = ACTIONS(39),
  },
  [18] = {
    [sym_commentOperator] = ACTIONS(43),
    [sym__sectionAscend] = ACTIONS(43),
    [sym__sectionDescend] = ACTIONS(43),
  },
  [19] = {
    [sym__endOfLine] = ACTIONS(51),
  },
  [20] = {
    [sym_section] = STATE(21),
    [sym__instruction] = STATE(21),
    [sym__comment] = STATE(21),
    [aux_sym_document_repeat1] = STATE(21),
    [sym_commentOperator] = ACTIONS(33),
    [sym__sectionDescend] = ACTIONS(35),
    [sym__sectionAscend] = ACTIONS(53),
  },
  [21] = {
    [sym_section] = STATE(15),
    [sym__instruction] = STATE(15),
    [sym__comment] = STATE(15),
    [aux_sym_document_repeat1] = STATE(15),
    [sym_commentOperator] = ACTIONS(33),
    [sym__sectionDescend] = ACTIONS(35),
    [sym__sectionAscend] = ACTIONS(55),
  },
  [22] = {
    [sym_token] = ACTIONS(57),
  },
  [23] = {
    [sym__endOfLine] = ACTIONS(59),
  },
  [24] = {
    [sym_key] = ACTIONS(61),
  },
  [25] = {
    [sym_sectionOperator] = ACTIONS(63),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [15] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 3, .production_id = 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(11),
  [33] = {.count = 1, .reusable = true}, SHIFT(22),
  [35] = {.count = 1, .reusable = true}, SHIFT(25),
  [37] = {.count = 1, .reusable = true}, SHIFT(12),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [41] = {.count = 1, .reusable = true}, SHIFT(14),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(16),
  [53] = {.count = 1, .reusable = true}, SHIFT(17),
  [55] = {.count = 1, .reusable = true}, SHIFT(18),
  [57] = {.count = 1, .reusable = true}, SHIFT(19),
  [59] = {.count = 1, .reusable = true}, SHIFT(20),
  [61] = {.count = 1, .reusable = true}, SHIFT(23),
  [63] = {.count = 1, .reusable = true}, SHIFT(24),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
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
