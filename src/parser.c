#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 46
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 3
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
  sym_comment = 17,
  sym_field = 18,
  sym_section = 19,
  aux_sym_document_repeat1 = 20,
  anon_alias_sym_template = 21,
  anon_alias_sym_comment = 22,
  anon_alias_sym_value = 23,
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
  [sym_comment] = "comment",
  [sym_field] = "field",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [anon_alias_sym_template] = "template",
  [anon_alias_sym_comment] = "comment",
  [anon_alias_sym_value] = "value",
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
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
  [anon_alias_sym_value] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = anon_alias_sym_comment,
  },
  [2] = {
    [2] = anon_alias_sym_value,
  },
  [3] = {
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
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(10);
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
      if (lookahead == ':')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
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
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13, .external_lex_state = 2},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 19, .external_lex_state = 3},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 4},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 13, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 4},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 4},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 4},
  [26] = {.lex_state = 13, .external_lex_state = 4},
  [27] = {.lex_state = 13, .external_lex_state = 4},
  [28] = {.lex_state = 13, .external_lex_state = 4},
  [29] = {.lex_state = 13, .external_lex_state = 4},
  [30] = {.lex_state = 13, .external_lex_state = 4},
  [31] = {.lex_state = 13, .external_lex_state = 4},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 13, .external_lex_state = 4},
  [35] = {.lex_state = 13, .external_lex_state = 4},
  [36] = {.lex_state = 13, .external_lex_state = 4},
  [37] = {.lex_state = 13, .external_lex_state = 4},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 19, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 18},
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
    [sym_field] = STATE(5),
    [sym_section] = STATE(5),
    [sym__instruction] = STATE(5),
    [sym_comment] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [sym_document] = STATE(6),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__sectionDescend] = ACTIONS(7),
    [sym_commentOperator] = ACTIONS(9),
  },
  [2] = {
    [sym_token] = ACTIONS(11),
  },
  [3] = {
    [sym_elementOperator] = ACTIONS(13),
  },
  [4] = {
    [sym_sectionOperator] = ACTIONS(15),
  },
  [5] = {
    [sym_field] = STATE(10),
    [sym_section] = STATE(10),
    [sym__instruction] = STATE(10),
    [sym_comment] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__sectionDescend] = ACTIONS(7),
    [sym_commentOperator] = ACTIONS(9),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [7] = {
    [sym__endOfLine] = ACTIONS(21),
  },
  [8] = {
    [sym_token] = ACTIONS(23),
  },
  [9] = {
    [sym_key] = ACTIONS(25),
  },
  [10] = {
    [sym_field] = STATE(10),
    [sym_section] = STATE(10),
    [sym__instruction] = STATE(10),
    [sym_comment] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [sym_key] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(30),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(35),
  },
  [11] = {
    [sym_key] = ACTIONS(38),
    [sym__sectionDescend] = ACTIONS(38),
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_commentOperator] = ACTIONS(38),
  },
  [12] = {
    [sym__endOfLine] = ACTIONS(40),
  },
  [13] = {
    [sym__endOfLine] = ACTIONS(42),
    [sym_copyOperator] = ACTIONS(44),
    [sym_deepCopyOperator] = ACTIONS(46),
  },
  [14] = {
    [sym_key] = ACTIONS(48),
    [sym__sectionDescend] = ACTIONS(48),
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_commentOperator] = ACTIONS(48),
  },
  [15] = {
    [sym_field] = STATE(18),
    [sym_section] = STATE(18),
    [sym__instruction] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_document_repeat1] = STATE(18),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(52),
    [sym_commentOperator] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(56),
  },
  [16] = {
    [sym_token] = ACTIONS(58),
  },
  [17] = {
    [sym_key] = ACTIONS(60),
    [sym__sectionDescend] = ACTIONS(60),
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_commentOperator] = ACTIONS(60),
  },
  [18] = {
    [sym_field] = STATE(25),
    [sym_section] = STATE(25),
    [sym__instruction] = STATE(25),
    [sym_comment] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(52),
    [sym_commentOperator] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(62),
  },
  [19] = {
    [sym__endOfLine] = ACTIONS(64),
  },
  [20] = {
    [sym_key] = ACTIONS(66),
    [sym__sectionDescend] = ACTIONS(66),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_commentOperator] = ACTIONS(66),
  },
  [21] = {
    [sym_field] = STATE(23),
    [sym_section] = STATE(23),
    [sym__instruction] = STATE(23),
    [sym_comment] = STATE(23),
    [aux_sym_document_repeat1] = STATE(23),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(52),
    [sym_commentOperator] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(68),
  },
  [22] = {
    [sym_key] = ACTIONS(70),
    [sym__sectionDescend] = ACTIONS(70),
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_commentOperator] = ACTIONS(70),
  },
  [23] = {
    [sym_field] = STATE(25),
    [sym_section] = STATE(25),
    [sym__instruction] = STATE(25),
    [sym_comment] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(52),
    [sym_commentOperator] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(72),
  },
  [24] = {
    [sym_key] = ACTIONS(74),
    [sym__sectionDescend] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_commentOperator] = ACTIONS(74),
  },
  [25] = {
    [sym_field] = STATE(25),
    [sym_section] = STATE(25),
    [sym__instruction] = STATE(25),
    [sym_comment] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [sym_key] = ACTIONS(76),
    [sym__sectionDescend] = ACTIONS(79),
    [sym_commentOperator] = ACTIONS(82),
    [sym__sectionAscend] = ACTIONS(33),
  },
  [26] = {
    [sym_key] = ACTIONS(38),
    [sym__sectionDescend] = ACTIONS(38),
    [sym_commentOperator] = ACTIONS(38),
    [sym__sectionAscend] = ACTIONS(38),
  },
  [27] = {
    [sym_key] = ACTIONS(48),
    [sym__sectionDescend] = ACTIONS(48),
    [sym_commentOperator] = ACTIONS(48),
    [sym__sectionAscend] = ACTIONS(48),
  },
  [28] = {
    [sym_key] = ACTIONS(60),
    [sym__sectionDescend] = ACTIONS(60),
    [sym_commentOperator] = ACTIONS(60),
    [sym__sectionAscend] = ACTIONS(60),
  },
  [29] = {
    [sym_key] = ACTIONS(66),
    [sym__sectionDescend] = ACTIONS(66),
    [sym_commentOperator] = ACTIONS(66),
    [sym__sectionAscend] = ACTIONS(66),
  },
  [30] = {
    [sym_key] = ACTIONS(70),
    [sym__sectionDescend] = ACTIONS(70),
    [sym_commentOperator] = ACTIONS(70),
    [sym__sectionAscend] = ACTIONS(70),
  },
  [31] = {
    [sym_key] = ACTIONS(74),
    [sym__sectionDescend] = ACTIONS(74),
    [sym_commentOperator] = ACTIONS(74),
    [sym__sectionAscend] = ACTIONS(74),
  },
  [32] = {
    [sym__endOfLine] = ACTIONS(85),
  },
  [33] = {
    [sym__endOfLine] = ACTIONS(87),
  },
  [34] = {
    [sym_field] = STATE(35),
    [sym_section] = STATE(35),
    [sym__instruction] = STATE(35),
    [sym_comment] = STATE(35),
    [aux_sym_document_repeat1] = STATE(35),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(52),
    [sym_commentOperator] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(89),
  },
  [35] = {
    [sym_field] = STATE(25),
    [sym_section] = STATE(25),
    [sym__instruction] = STATE(25),
    [sym_comment] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(52),
    [sym_commentOperator] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(91),
  },
  [36] = {
    [sym_field] = STATE(37),
    [sym_section] = STATE(37),
    [sym__instruction] = STATE(37),
    [sym_comment] = STATE(37),
    [aux_sym_document_repeat1] = STATE(37),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(52),
    [sym_commentOperator] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(93),
  },
  [37] = {
    [sym_field] = STATE(25),
    [sym_section] = STATE(25),
    [sym__instruction] = STATE(25),
    [sym_comment] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(52),
    [sym_commentOperator] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(95),
  },
  [38] = {
    [sym_token] = ACTIONS(97),
  },
  [39] = {
    [sym_token] = ACTIONS(99),
  },
  [40] = {
    [sym__endOfLine] = ACTIONS(101),
    [sym_copyOperator] = ACTIONS(103),
    [sym_deepCopyOperator] = ACTIONS(105),
  },
  [41] = {
    [sym__endOfLine] = ACTIONS(107),
  },
  [42] = {
    [sym_elementOperator] = ACTIONS(109),
  },
  [43] = {
    [sym_key] = ACTIONS(111),
  },
  [44] = {
    [sym_token] = ACTIONS(113),
  },
  [45] = {
    [sym_sectionOperator] = ACTIONS(115),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(3),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [19] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3, .production_id = 1),
  [40] = {.count = 1, .reusable = true}, SHIFT(14),
  [42] = {.count = 1, .reusable = true}, SHIFT(15),
  [44] = {.count = 1, .reusable = false}, SHIFT(16),
  [46] = {.count = 1, .reusable = true}, SHIFT(16),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [50] = {.count = 1, .reusable = true}, SHIFT(42),
  [52] = {.count = 1, .reusable = true}, SHIFT(45),
  [54] = {.count = 1, .reusable = true}, SHIFT(38),
  [56] = {.count = 1, .reusable = true}, SHIFT(17),
  [58] = {.count = 1, .reusable = true}, SHIFT(19),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [62] = {.count = 1, .reusable = true}, SHIFT(20),
  [64] = {.count = 1, .reusable = true}, SHIFT(21),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [68] = {.count = 1, .reusable = true}, SHIFT(22),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 3),
  [72] = {.count = 1, .reusable = true}, SHIFT(24),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 3),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [85] = {.count = 1, .reusable = true}, SHIFT(26),
  [87] = {.count = 1, .reusable = true}, SHIFT(27),
  [89] = {.count = 1, .reusable = true}, SHIFT(28),
  [91] = {.count = 1, .reusable = true}, SHIFT(29),
  [93] = {.count = 1, .reusable = true}, SHIFT(30),
  [95] = {.count = 1, .reusable = true}, SHIFT(31),
  [97] = {.count = 1, .reusable = true}, SHIFT(32),
  [99] = {.count = 1, .reusable = true}, SHIFT(33),
  [101] = {.count = 1, .reusable = true}, SHIFT(34),
  [103] = {.count = 1, .reusable = false}, SHIFT(44),
  [105] = {.count = 1, .reusable = true}, SHIFT(44),
  [107] = {.count = 1, .reusable = true}, SHIFT(36),
  [109] = {.count = 1, .reusable = true}, SHIFT(39),
  [111] = {.count = 1, .reusable = true}, SHIFT(40),
  [113] = {.count = 1, .reusable = true}, SHIFT(41),
  [115] = {.count = 1, .reusable = true}, SHIFT(43),
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
