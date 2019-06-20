#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 38
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 2
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

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
  anon_alias_sym_template = 20,
  anon_alias_sym_comment = 21,
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
  [anon_alias_sym_template] = "template",
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
  [anon_alias_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = anon_alias_sym_comment,
  },
  [2] = {
    [4] = anon_alias_sym_template,
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
    case 19:
      if (lookahead == '<')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
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
  [10] = {.lex_state = 19, .external_lex_state = 3},
  [11] = {.lex_state = 13, .external_lex_state = 4},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 13, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 4},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 4},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 4},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 4},
  [22] = {.lex_state = 13, .external_lex_state = 4},
  [23] = {.lex_state = 13, .external_lex_state = 4},
  [24] = {.lex_state = 13, .external_lex_state = 4},
  [25] = {.lex_state = 13, .external_lex_state = 4},
  [26] = {.lex_state = 13, .external_lex_state = 4},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 13, .external_lex_state = 4},
  [29] = {.lex_state = 13, .external_lex_state = 4},
  [30] = {.lex_state = 13, .external_lex_state = 4},
  [31] = {.lex_state = 13, .external_lex_state = 4},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 19, .external_lex_state = 3},
  [34] = {.lex_state = 0, .external_lex_state = 3},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 17},
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
    [sym_copyOperator] = ACTIONS(33),
    [sym_deepCopyOperator] = ACTIONS(35),
  },
  [11] = {
    [sym_section] = STATE(14),
    [sym__instruction] = STATE(14),
    [sym__comment] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(41),
  },
  [12] = {
    [sym_token] = ACTIONS(43),
  },
  [13] = {
    [sym_commentOperator] = ACTIONS(45),
    [sym__sectionDescend] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(45),
  },
  [14] = {
    [sym_section] = STATE(21),
    [sym__instruction] = STATE(21),
    [sym__comment] = STATE(21),
    [aux_sym_document_repeat1] = STATE(21),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(47),
  },
  [15] = {
    [sym__endOfLine] = ACTIONS(49),
  },
  [16] = {
    [sym_commentOperator] = ACTIONS(51),
    [sym__sectionDescend] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
  },
  [17] = {
    [sym_section] = STATE(19),
    [sym__instruction] = STATE(19),
    [sym__comment] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(53),
  },
  [18] = {
    [sym_commentOperator] = ACTIONS(55),
    [sym__sectionDescend] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
  },
  [19] = {
    [sym_section] = STATE(21),
    [sym__instruction] = STATE(21),
    [sym__comment] = STATE(21),
    [aux_sym_document_repeat1] = STATE(21),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(57),
  },
  [20] = {
    [sym_commentOperator] = ACTIONS(59),
    [sym__sectionDescend] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(59),
  },
  [21] = {
    [sym_section] = STATE(21),
    [sym__instruction] = STATE(21),
    [sym__comment] = STATE(21),
    [aux_sym_document_repeat1] = STATE(21),
    [sym_commentOperator] = ACTIONS(61),
    [sym__sectionAscend] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(64),
  },
  [22] = {
    [sym_commentOperator] = ACTIONS(29),
    [sym__sectionAscend] = ACTIONS(29),
    [sym__sectionDescend] = ACTIONS(29),
  },
  [23] = {
    [sym_commentOperator] = ACTIONS(45),
    [sym__sectionAscend] = ACTIONS(45),
    [sym__sectionDescend] = ACTIONS(45),
  },
  [24] = {
    [sym_commentOperator] = ACTIONS(51),
    [sym__sectionAscend] = ACTIONS(51),
    [sym__sectionDescend] = ACTIONS(51),
  },
  [25] = {
    [sym_commentOperator] = ACTIONS(55),
    [sym__sectionAscend] = ACTIONS(55),
    [sym__sectionDescend] = ACTIONS(55),
  },
  [26] = {
    [sym_commentOperator] = ACTIONS(59),
    [sym__sectionAscend] = ACTIONS(59),
    [sym__sectionDescend] = ACTIONS(59),
  },
  [27] = {
    [sym__endOfLine] = ACTIONS(67),
  },
  [28] = {
    [sym_section] = STATE(29),
    [sym__instruction] = STATE(29),
    [sym__comment] = STATE(29),
    [aux_sym_document_repeat1] = STATE(29),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(69),
  },
  [29] = {
    [sym_section] = STATE(21),
    [sym__instruction] = STATE(21),
    [sym__comment] = STATE(21),
    [aux_sym_document_repeat1] = STATE(21),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(71),
  },
  [30] = {
    [sym_section] = STATE(31),
    [sym__instruction] = STATE(31),
    [sym__comment] = STATE(31),
    [aux_sym_document_repeat1] = STATE(31),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(73),
  },
  [31] = {
    [sym_section] = STATE(21),
    [sym__instruction] = STATE(21),
    [sym__comment] = STATE(21),
    [aux_sym_document_repeat1] = STATE(21),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(75),
  },
  [32] = {
    [sym_token] = ACTIONS(77),
  },
  [33] = {
    [sym__endOfLine] = ACTIONS(79),
    [sym_copyOperator] = ACTIONS(81),
    [sym_deepCopyOperator] = ACTIONS(83),
  },
  [34] = {
    [sym__endOfLine] = ACTIONS(85),
  },
  [35] = {
    [sym_key] = ACTIONS(87),
  },
  [36] = {
    [sym_token] = ACTIONS(89),
  },
  [37] = {
    [sym_sectionOperator] = ACTIONS(91),
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
  [33] = {.count = 1, .reusable = false}, SHIFT(12),
  [35] = {.count = 1, .reusable = true}, SHIFT(12),
  [37] = {.count = 1, .reusable = true}, SHIFT(32),
  [39] = {.count = 1, .reusable = true}, SHIFT(37),
  [41] = {.count = 1, .reusable = true}, SHIFT(13),
  [43] = {.count = 1, .reusable = true}, SHIFT(15),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [47] = {.count = 1, .reusable = true}, SHIFT(16),
  [49] = {.count = 1, .reusable = true}, SHIFT(17),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [53] = {.count = 1, .reusable = true}, SHIFT(18),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(20),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 2),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [67] = {.count = 1, .reusable = true}, SHIFT(22),
  [69] = {.count = 1, .reusable = true}, SHIFT(23),
  [71] = {.count = 1, .reusable = true}, SHIFT(24),
  [73] = {.count = 1, .reusable = true}, SHIFT(25),
  [75] = {.count = 1, .reusable = true}, SHIFT(26),
  [77] = {.count = 1, .reusable = true}, SHIFT(27),
  [79] = {.count = 1, .reusable = true}, SHIFT(28),
  [81] = {.count = 1, .reusable = false}, SHIFT(36),
  [83] = {.count = 1, .reusable = true}, SHIFT(36),
  [85] = {.count = 1, .reusable = true}, SHIFT(30),
  [87] = {.count = 1, .reusable = true}, SHIFT(33),
  [89] = {.count = 1, .reusable = true}, SHIFT(34),
  [91] = {.count = 1, .reusable = true}, SHIFT(35),
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
