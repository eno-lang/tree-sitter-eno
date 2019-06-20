#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 50
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 3
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__emptyLine = 1,
  anon_sym_LF = 2,
  sym_key = 3,
  sym_token = 4,
  sym_directContinuationOperator = 5,
  sym_spacedContinuationOperator = 6,
  sym_commentOperator = 7,
  sym_copyOperator = 8,
  sym_deepCopyOperator = 9,
  sym_entryOperator = 10,
  sym_itemOperator = 11,
  sym_elementOperator = 12,
  sym_sectionOperator = 13,
  sym__endOfLine = 14,
  sym__sectionAscend = 15,
  sym__sectionDescend = 16,
  sym_document = 17,
  sym__commentOrEmpty = 18,
  sym__instruction = 19,
  sym_comment = 20,
  sym_field = 21,
  sym_section = 22,
  aux_sym_document_repeat1 = 23,
  aux_sym_comment_repeat1 = 24,
  anon_alias_sym_template = 25,
  anon_alias_sym_comment = 26,
  anon_alias_sym_value = 27,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__emptyLine] = "_emptyLine",
  [anon_sym_LF] = "\n",
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
  [sym__commentOrEmpty] = "_commentOrEmpty",
  [sym__instruction] = "_instruction",
  [sym_comment] = "comment",
  [sym_field] = "field",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [anon_alias_sym_template] = "template",
  [anon_alias_sym_comment] = "comment",
  [anon_alias_sym_value] = "value",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__emptyLine] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [sym__commentOrEmpty] = {
    .visible = false,
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
  [aux_sym_comment_repeat1] = {
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
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_sectionOperator);
      if (lookahead == '#')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_itemOperator);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_elementOperator);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_copyOperator);
      if (lookahead == '<')
        ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_entryOperator);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_commentOperator);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_spacedContinuationOperator);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_directContinuationOperator);
      END_STATE();
    case 11:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_deepCopyOperator);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__emptyLine);
      END_STATE();
    case 15:
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '\r')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(21);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ':')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(27);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 27, .external_lex_state = 3},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 13, .external_lex_state = 4},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 4},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 4},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 4},
  [26] = {.lex_state = 13, .external_lex_state = 2},
  [27] = {.lex_state = 13, .external_lex_state = 4},
  [28] = {.lex_state = 13, .external_lex_state = 4},
  [29] = {.lex_state = 13, .external_lex_state = 4},
  [30] = {.lex_state = 13, .external_lex_state = 4},
  [31] = {.lex_state = 13, .external_lex_state = 4},
  [32] = {.lex_state = 13, .external_lex_state = 4},
  [33] = {.lex_state = 13, .external_lex_state = 4},
  [34] = {.lex_state = 13, .external_lex_state = 4},
  [35] = {.lex_state = 13, .external_lex_state = 4},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 13, .external_lex_state = 4},
  [39] = {.lex_state = 13, .external_lex_state = 4},
  [40] = {.lex_state = 13, .external_lex_state = 4},
  [41] = {.lex_state = 13, .external_lex_state = 4},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 27, .external_lex_state = 3},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 20},
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
    [sym__endOfLine] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym__emptyLine] = ACTIONS(1),
    [sym_spacedContinuationOperator] = ACTIONS(1),
    [sym__sectionDescend] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym_deepCopyOperator] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_directContinuationOperator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
    [sym_itemOperator] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
  },
  [1] = {
    [sym_comment] = STATE(5),
    [sym_field] = STATE(5),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym_document] = STATE(7),
    [sym_section] = STATE(5),
    [sym__commentOrEmpty] = STATE(5),
    [sym__instruction] = STATE(5),
    [sym_commentOperator] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(9),
    [sym_key] = ACTIONS(11),
  },
  [2] = {
    [sym_sectionOperator] = ACTIONS(13),
  },
  [3] = {
    [sym_token] = ACTIONS(15),
  },
  [4] = {
    [sym_elementOperator] = ACTIONS(17),
  },
  [5] = {
    [sym_comment] = STATE(11),
    [sym_field] = STATE(11),
    [sym__commentOrEmpty] = STATE(11),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__instruction] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [sym_section] = STATE(11),
    [sym_commentOperator] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(21),
    [sym_key] = ACTIONS(11),
  },
  [6] = {
    [aux_sym_comment_repeat1] = STATE(12),
    [sym_commentOperator] = ACTIONS(3),
    [sym__sectionDescend] = ACTIONS(23),
    [sym__emptyLine] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_key] = ACTIONS(23),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [8] = {
    [sym_key] = ACTIONS(29),
  },
  [9] = {
    [sym__endOfLine] = ACTIONS(31),
  },
  [10] = {
    [sym_token] = ACTIONS(33),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [sym_field] = STATE(11),
    [sym__commentOrEmpty] = STATE(11),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__instruction] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [sym_section] = STATE(11),
    [sym_commentOperator] = ACTIONS(35),
    [sym__sectionDescend] = ACTIONS(38),
    [sym__emptyLine] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_key] = ACTIONS(46),
  },
  [12] = {
    [aux_sym_comment_repeat1] = STATE(12),
    [sym_commentOperator] = ACTIONS(49),
    [sym__sectionDescend] = ACTIONS(52),
    [sym__emptyLine] = ACTIONS(54),
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_key] = ACTIONS(52),
  },
  [13] = {
    [sym__endOfLine] = ACTIONS(56),
    [sym_deepCopyOperator] = ACTIONS(58),
    [sym_copyOperator] = ACTIONS(60),
  },
  [14] = {
    [sym_commentOperator] = ACTIONS(62),
    [sym__sectionDescend] = ACTIONS(64),
    [sym__emptyLine] = ACTIONS(62),
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_key] = ACTIONS(64),
  },
  [15] = {
    [sym__endOfLine] = ACTIONS(66),
  },
  [16] = {
    [sym_comment] = STATE(20),
    [sym_field] = STATE(20),
    [sym__commentOrEmpty] = STATE(20),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(20),
    [aux_sym_document_repeat1] = STATE(20),
    [sym_section] = STATE(20),
    [sym__sectionDescend] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(72),
    [sym__sectionAscend] = ACTIONS(74),
    [sym_key] = ACTIONS(76),
  },
  [17] = {
    [sym_token] = ACTIONS(78),
  },
  [18] = {
    [sym_commentOperator] = ACTIONS(80),
    [sym__sectionDescend] = ACTIONS(82),
    [sym__emptyLine] = ACTIONS(80),
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_key] = ACTIONS(82),
  },
  [19] = {
    [sym_commentOperator] = ACTIONS(84),
    [sym__sectionDescend] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(84),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_key] = ACTIONS(86),
  },
  [20] = {
    [sym_comment] = STATE(28),
    [sym_field] = STATE(28),
    [sym__commentOrEmpty] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(28),
    [aux_sym_document_repeat1] = STATE(28),
    [sym_section] = STATE(28),
    [sym__sectionDescend] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(88),
    [sym__sectionAscend] = ACTIONS(90),
    [sym_key] = ACTIONS(76),
  },
  [21] = {
    [sym__endOfLine] = ACTIONS(92),
  },
  [22] = {
    [sym_commentOperator] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(96),
    [sym__emptyLine] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_key] = ACTIONS(96),
  },
  [23] = {
    [sym_comment] = STATE(25),
    [sym_field] = STATE(25),
    [sym__commentOrEmpty] = STATE(25),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(25),
    [aux_sym_document_repeat1] = STATE(25),
    [sym_section] = STATE(25),
    [sym__sectionDescend] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(98),
    [sym__sectionAscend] = ACTIONS(100),
    [sym_key] = ACTIONS(76),
  },
  [24] = {
    [sym_commentOperator] = ACTIONS(102),
    [sym__sectionDescend] = ACTIONS(104),
    [sym__emptyLine] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_key] = ACTIONS(104),
  },
  [25] = {
    [sym_comment] = STATE(28),
    [sym_field] = STATE(28),
    [sym__commentOrEmpty] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(28),
    [aux_sym_document_repeat1] = STATE(28),
    [sym_section] = STATE(28),
    [sym__sectionDescend] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(88),
    [sym__sectionAscend] = ACTIONS(106),
    [sym_key] = ACTIONS(76),
  },
  [26] = {
    [sym_commentOperator] = ACTIONS(108),
    [sym__sectionDescend] = ACTIONS(110),
    [sym__emptyLine] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_key] = ACTIONS(110),
  },
  [27] = {
    [aux_sym_comment_repeat1] = STATE(29),
    [sym_commentOperator] = ACTIONS(70),
    [sym__sectionDescend] = ACTIONS(23),
    [sym__emptyLine] = ACTIONS(25),
    [sym__sectionAscend] = ACTIONS(23),
    [sym_key] = ACTIONS(23),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [sym_field] = STATE(28),
    [sym__commentOrEmpty] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(28),
    [aux_sym_document_repeat1] = STATE(28),
    [sym_section] = STATE(28),
    [sym_commentOperator] = ACTIONS(112),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(118),
    [sym__sectionAscend] = ACTIONS(44),
    [sym_key] = ACTIONS(121),
  },
  [29] = {
    [aux_sym_comment_repeat1] = STATE(29),
    [sym_commentOperator] = ACTIONS(124),
    [sym__sectionDescend] = ACTIONS(52),
    [sym__emptyLine] = ACTIONS(54),
    [sym__sectionAscend] = ACTIONS(52),
    [sym_key] = ACTIONS(52),
  },
  [30] = {
    [sym_commentOperator] = ACTIONS(62),
    [sym__sectionDescend] = ACTIONS(64),
    [sym__emptyLine] = ACTIONS(62),
    [sym__sectionAscend] = ACTIONS(64),
    [sym_key] = ACTIONS(64),
  },
  [31] = {
    [sym_commentOperator] = ACTIONS(80),
    [sym__sectionDescend] = ACTIONS(82),
    [sym__emptyLine] = ACTIONS(80),
    [sym__sectionAscend] = ACTIONS(82),
    [sym_key] = ACTIONS(82),
  },
  [32] = {
    [sym_commentOperator] = ACTIONS(84),
    [sym__sectionDescend] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(84),
    [sym__sectionAscend] = ACTIONS(86),
    [sym_key] = ACTIONS(86),
  },
  [33] = {
    [sym_commentOperator] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(96),
    [sym__emptyLine] = ACTIONS(94),
    [sym__sectionAscend] = ACTIONS(96),
    [sym_key] = ACTIONS(96),
  },
  [34] = {
    [sym_commentOperator] = ACTIONS(102),
    [sym__sectionDescend] = ACTIONS(104),
    [sym__emptyLine] = ACTIONS(102),
    [sym__sectionAscend] = ACTIONS(104),
    [sym_key] = ACTIONS(104),
  },
  [35] = {
    [sym_commentOperator] = ACTIONS(108),
    [sym__sectionDescend] = ACTIONS(110),
    [sym__emptyLine] = ACTIONS(108),
    [sym__sectionAscend] = ACTIONS(110),
    [sym_key] = ACTIONS(110),
  },
  [36] = {
    [sym__endOfLine] = ACTIONS(127),
  },
  [37] = {
    [sym__endOfLine] = ACTIONS(129),
  },
  [38] = {
    [sym_comment] = STATE(39),
    [sym_field] = STATE(39),
    [sym__commentOrEmpty] = STATE(39),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(39),
    [aux_sym_document_repeat1] = STATE(39),
    [sym_section] = STATE(39),
    [sym__sectionDescend] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(131),
    [sym__sectionAscend] = ACTIONS(133),
    [sym_key] = ACTIONS(76),
  },
  [39] = {
    [sym_comment] = STATE(28),
    [sym_field] = STATE(28),
    [sym__commentOrEmpty] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(28),
    [aux_sym_document_repeat1] = STATE(28),
    [sym_section] = STATE(28),
    [sym__sectionDescend] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(88),
    [sym__sectionAscend] = ACTIONS(135),
    [sym_key] = ACTIONS(76),
  },
  [40] = {
    [sym_comment] = STATE(41),
    [sym_field] = STATE(41),
    [sym__commentOrEmpty] = STATE(41),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(41),
    [aux_sym_document_repeat1] = STATE(41),
    [sym_section] = STATE(41),
    [sym__sectionDescend] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(137),
    [sym__sectionAscend] = ACTIONS(139),
    [sym_key] = ACTIONS(76),
  },
  [41] = {
    [sym_comment] = STATE(28),
    [sym_field] = STATE(28),
    [sym__commentOrEmpty] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(27),
    [sym__instruction] = STATE(28),
    [aux_sym_document_repeat1] = STATE(28),
    [sym_section] = STATE(28),
    [sym__sectionDescend] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(88),
    [sym__sectionAscend] = ACTIONS(141),
    [sym_key] = ACTIONS(76),
  },
  [42] = {
    [sym_token] = ACTIONS(143),
  },
  [43] = {
    [sym_token] = ACTIONS(145),
  },
  [44] = {
    [sym__endOfLine] = ACTIONS(147),
    [sym_deepCopyOperator] = ACTIONS(149),
    [sym_copyOperator] = ACTIONS(151),
  },
  [45] = {
    [sym__endOfLine] = ACTIONS(153),
  },
  [46] = {
    [sym_elementOperator] = ACTIONS(155),
  },
  [47] = {
    [sym_key] = ACTIONS(157),
  },
  [48] = {
    [sym_token] = ACTIONS(159),
  },
  [49] = {
    [sym_sectionOperator] = ACTIONS(161),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(3),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [21] = {.count = 1, .reusable = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [27] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(3),
  [52] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [54] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [56] = {.count = 1, .reusable = true}, SHIFT(16),
  [58] = {.count = 1, .reusable = true}, SHIFT(17),
  [60] = {.count = 1, .reusable = false}, SHIFT(17),
  [62] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [64] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(18),
  [68] = {.count = 1, .reusable = true}, SHIFT(49),
  [70] = {.count = 1, .reusable = false}, SHIFT(42),
  [72] = {.count = 1, .reusable = false}, SHIFT(20),
  [74] = {.count = 1, .reusable = true}, SHIFT(19),
  [76] = {.count = 1, .reusable = true}, SHIFT(46),
  [78] = {.count = 1, .reusable = true}, SHIFT(21),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [88] = {.count = 1, .reusable = false}, SHIFT(28),
  [90] = {.count = 1, .reusable = true}, SHIFT(22),
  [92] = {.count = 1, .reusable = true}, SHIFT(23),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [98] = {.count = 1, .reusable = false}, SHIFT(25),
  [100] = {.count = 1, .reusable = true}, SHIFT(24),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 3),
  [106] = {.count = 1, .reusable = true}, SHIFT(26),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 3),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 3),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(42),
  [127] = {.count = 1, .reusable = true}, SHIFT(30),
  [129] = {.count = 1, .reusable = true}, SHIFT(31),
  [131] = {.count = 1, .reusable = false}, SHIFT(39),
  [133] = {.count = 1, .reusable = true}, SHIFT(32),
  [135] = {.count = 1, .reusable = true}, SHIFT(33),
  [137] = {.count = 1, .reusable = false}, SHIFT(41),
  [139] = {.count = 1, .reusable = true}, SHIFT(34),
  [141] = {.count = 1, .reusable = true}, SHIFT(35),
  [143] = {.count = 1, .reusable = true}, SHIFT(36),
  [145] = {.count = 1, .reusable = true}, SHIFT(37),
  [147] = {.count = 1, .reusable = true}, SHIFT(38),
  [149] = {.count = 1, .reusable = true}, SHIFT(48),
  [151] = {.count = 1, .reusable = false}, SHIFT(48),
  [153] = {.count = 1, .reusable = true}, SHIFT(40),
  [155] = {.count = 1, .reusable = true}, SHIFT(43),
  [157] = {.count = 1, .reusable = true}, SHIFT(44),
  [159] = {.count = 1, .reusable = true}, SHIFT(45),
  [161] = {.count = 1, .reusable = true}, SHIFT(47),
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
