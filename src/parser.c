#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 72
#define SYMBOL_COUNT 29
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
  sym_item = 22,
  sym_list = 23,
  sym_section = 24,
  aux_sym_document_repeat1 = 25,
  aux_sym_comment_repeat1 = 26,
  aux_sym_list_repeat1 = 27,
  aux_sym_list_repeat2 = 28,
  anon_alias_sym_template = 29,
  anon_alias_sym_comment = 30,
  anon_alias_sym_value = 31,
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
  [sym_item] = "item",
  [sym_list] = "list",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_list_repeat2] = "list_repeat2",
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
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
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
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat2] = {
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

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = anon_alias_sym_comment,
  },
  [2] = {
    [2] = anon_alias_sym_value,
  },
  [3] = {
    [1] = anon_alias_sym_value,
  },
  [4] = {
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
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == '-')
        ADVANCE(4);
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
    case 28:
      if (lookahead == '\n')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(28);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 21, .external_lex_state = 3},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 27, .external_lex_state = 3},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 13, .external_lex_state = 4},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 4},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13, .external_lex_state = 4},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 13, .external_lex_state = 2},
  [34] = {.lex_state = 13, .external_lex_state = 4},
  [35] = {.lex_state = 13, .external_lex_state = 2},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 13, .external_lex_state = 4},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 13, .external_lex_state = 4},
  [41] = {.lex_state = 13, .external_lex_state = 4},
  [42] = {.lex_state = 13, .external_lex_state = 4},
  [43] = {.lex_state = 13, .external_lex_state = 4},
  [44] = {.lex_state = 13, .external_lex_state = 4},
  [45] = {.lex_state = 13, .external_lex_state = 4},
  [46] = {.lex_state = 13, .external_lex_state = 4},
  [47] = {.lex_state = 13, .external_lex_state = 4},
  [48] = {.lex_state = 13, .external_lex_state = 4},
  [49] = {.lex_state = 13, .external_lex_state = 4},
  [50] = {.lex_state = 13, .external_lex_state = 4},
  [51] = {.lex_state = 13, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 13, .external_lex_state = 4},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 13, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 13, .external_lex_state = 4},
  [60] = {.lex_state = 13, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 21, .external_lex_state = 3},
  [64] = {.lex_state = 27, .external_lex_state = 3},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 20},
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
    [sym_document] = STATE(6),
    [sym_list] = STATE(5),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym__commentOrEmpty] = STATE(5),
    [sym__instruction] = STATE(5),
    [sym_section] = STATE(5),
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
    [aux_sym_document_repeat1] = STATE(11),
    [sym_list] = STATE(11),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym__commentOrEmpty] = STATE(11),
    [sym__instruction] = STATE(11),
    [sym_section] = STATE(11),
    [sym_commentOperator] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(21),
    [sym_key] = ACTIONS(11),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [7] = {
    [aux_sym_comment_repeat1] = STATE(12),
    [sym_commentOperator] = ACTIONS(3),
    [sym__sectionDescend] = ACTIONS(25),
    [sym__emptyLine] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_key] = ACTIONS(25),
  },
  [8] = {
    [sym_key] = ACTIONS(29),
  },
  [9] = {
    [sym__endOfLine] = ACTIONS(31),
  },
  [10] = {
    [sym__endOfLine] = ACTIONS(33),
    [sym_token] = ACTIONS(35),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [sym_field] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [sym_list] = STATE(11),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym__commentOrEmpty] = STATE(11),
    [sym__instruction] = STATE(11),
    [sym_section] = STATE(11),
    [sym_commentOperator] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(40),
    [sym__emptyLine] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_key] = ACTIONS(48),
  },
  [12] = {
    [aux_sym_comment_repeat1] = STATE(12),
    [sym_commentOperator] = ACTIONS(51),
    [sym__sectionDescend] = ACTIONS(54),
    [sym__emptyLine] = ACTIONS(56),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_key] = ACTIONS(54),
  },
  [13] = {
    [sym__endOfLine] = ACTIONS(58),
    [sym_deepCopyOperator] = ACTIONS(60),
    [sym_copyOperator] = ACTIONS(62),
  },
  [14] = {
    [sym_commentOperator] = ACTIONS(64),
    [sym__sectionDescend] = ACTIONS(66),
    [sym__emptyLine] = ACTIONS(64),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_key] = ACTIONS(66),
  },
  [15] = {
    [sym_item] = STATE(20),
    [sym_comment] = STATE(21),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(21),
    [aux_sym_list_repeat1] = STATE(21),
    [aux_sym_list_repeat2] = STATE(20),
    [sym__emptyLine] = ACTIONS(68),
    [sym_itemOperator] = ACTIONS(70),
    [sym_commentOperator] = ACTIONS(72),
  },
  [16] = {
    [sym__endOfLine] = ACTIONS(74),
  },
  [17] = {
    [sym_comment] = STATE(24),
    [sym_field] = STATE(24),
    [aux_sym_document_repeat1] = STATE(24),
    [sym_list] = STATE(24),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(24),
    [sym__instruction] = STATE(24),
    [sym_section] = STATE(24),
    [sym__sectionDescend] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
    [sym__emptyLine] = ACTIONS(80),
    [sym__sectionAscend] = ACTIONS(82),
    [sym_key] = ACTIONS(84),
  },
  [18] = {
    [sym_token] = ACTIONS(86),
  },
  [19] = {
    [sym_token] = ACTIONS(88),
  },
  [20] = {
    [sym_item] = STATE(27),
    [sym_comment] = STATE(21),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(21),
    [aux_sym_list_repeat1] = STATE(21),
    [aux_sym_list_repeat2] = STATE(27),
    [sym_commentOperator] = ACTIONS(90),
    [sym__sectionDescend] = ACTIONS(92),
    [sym__emptyLine] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_key] = ACTIONS(92),
    [sym_itemOperator] = ACTIONS(96),
  },
  [21] = {
    [sym_comment] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(28),
    [aux_sym_list_repeat1] = STATE(28),
    [sym_item] = STATE(29),
    [sym__emptyLine] = ACTIONS(98),
    [sym_itemOperator] = ACTIONS(70),
    [sym_commentOperator] = ACTIONS(72),
  },
  [22] = {
    [sym_commentOperator] = ACTIONS(100),
    [sym__sectionDescend] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(100),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_key] = ACTIONS(102),
  },
  [23] = {
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionDescend] = ACTIONS(106),
    [sym__emptyLine] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_key] = ACTIONS(106),
  },
  [24] = {
    [sym_comment] = STATE(37),
    [sym_field] = STATE(37),
    [aux_sym_document_repeat1] = STATE(37),
    [sym_list] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(37),
    [sym__instruction] = STATE(37),
    [sym_section] = STATE(37),
    [sym__sectionDescend] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
    [sym__emptyLine] = ACTIONS(108),
    [sym__sectionAscend] = ACTIONS(110),
    [sym_key] = ACTIONS(84),
  },
  [25] = {
    [sym__endOfLine] = ACTIONS(112),
  },
  [26] = {
    [sym__endOfLine] = ACTIONS(114),
  },
  [27] = {
    [sym_item] = STATE(27),
    [sym_comment] = STATE(21),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(21),
    [aux_sym_list_repeat1] = STATE(21),
    [aux_sym_list_repeat2] = STATE(27),
    [sym_commentOperator] = ACTIONS(116),
    [sym__sectionDescend] = ACTIONS(119),
    [sym__emptyLine] = ACTIONS(121),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_key] = ACTIONS(119),
    [sym_itemOperator] = ACTIONS(124),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(28),
    [aux_sym_list_repeat1] = STATE(28),
    [sym__emptyLine] = ACTIONS(127),
    [sym_commentOperator] = ACTIONS(130),
    [sym_itemOperator] = ACTIONS(133),
  },
  [29] = {
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionDescend] = ACTIONS(119),
    [sym__emptyLine] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_key] = ACTIONS(119),
    [sym_itemOperator] = ACTIONS(135),
  },
  [30] = {
    [sym_commentOperator] = ACTIONS(137),
    [sym__sectionDescend] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(137),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_key] = ACTIONS(139),
  },
  [31] = {
    [sym_comment] = STATE(34),
    [sym_field] = STATE(34),
    [aux_sym_document_repeat1] = STATE(34),
    [sym_list] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(34),
    [sym__instruction] = STATE(34),
    [sym_section] = STATE(34),
    [sym__sectionDescend] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
    [sym__emptyLine] = ACTIONS(141),
    [sym__sectionAscend] = ACTIONS(143),
    [sym_key] = ACTIONS(84),
  },
  [32] = {
    [sym_commentOperator] = ACTIONS(145),
    [sym__sectionDescend] = ACTIONS(147),
    [sym__emptyLine] = ACTIONS(145),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_key] = ACTIONS(147),
    [sym_itemOperator] = ACTIONS(145),
  },
  [33] = {
    [sym_commentOperator] = ACTIONS(149),
    [sym__sectionDescend] = ACTIONS(151),
    [sym__emptyLine] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_key] = ACTIONS(151),
  },
  [34] = {
    [sym_comment] = STATE(37),
    [sym_field] = STATE(37),
    [aux_sym_document_repeat1] = STATE(37),
    [sym_list] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(37),
    [sym__instruction] = STATE(37),
    [sym_section] = STATE(37),
    [sym__sectionDescend] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
    [sym__emptyLine] = ACTIONS(108),
    [sym__sectionAscend] = ACTIONS(153),
    [sym_key] = ACTIONS(84),
  },
  [35] = {
    [sym_commentOperator] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_key] = ACTIONS(157),
  },
  [36] = {
    [aux_sym_comment_repeat1] = STATE(38),
    [sym__emptyLine] = ACTIONS(25),
    [sym_commentOperator] = ACTIONS(72),
    [sym_itemOperator] = ACTIONS(25),
  },
  [37] = {
    [sym_comment] = STATE(37),
    [sym_field] = STATE(37),
    [aux_sym_document_repeat1] = STATE(37),
    [sym_list] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(37),
    [sym__instruction] = STATE(37),
    [sym_section] = STATE(37),
    [sym_commentOperator] = ACTIONS(159),
    [sym__sectionDescend] = ACTIONS(162),
    [sym__emptyLine] = ACTIONS(165),
    [sym__sectionAscend] = ACTIONS(46),
    [sym_key] = ACTIONS(168),
  },
  [38] = {
    [aux_sym_comment_repeat1] = STATE(38),
    [sym__emptyLine] = ACTIONS(54),
    [sym_commentOperator] = ACTIONS(171),
    [sym_itemOperator] = ACTIONS(54),
  },
  [39] = {
    [sym__emptyLine] = ACTIONS(66),
    [sym_commentOperator] = ACTIONS(66),
    [sym_itemOperator] = ACTIONS(66),
  },
  [40] = {
    [sym_item] = STATE(43),
    [sym_comment] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(56),
    [aux_sym_list_repeat1] = STATE(56),
    [aux_sym_list_repeat2] = STATE(43),
    [sym_commentOperator] = ACTIONS(90),
    [sym__sectionDescend] = ACTIONS(92),
    [sym__emptyLine] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(92),
    [sym_key] = ACTIONS(92),
    [sym_itemOperator] = ACTIONS(176),
  },
  [41] = {
    [sym_commentOperator] = ACTIONS(100),
    [sym__sectionDescend] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(100),
    [sym__sectionAscend] = ACTIONS(102),
    [sym_key] = ACTIONS(102),
  },
  [42] = {
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionDescend] = ACTIONS(106),
    [sym__emptyLine] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(106),
    [sym_key] = ACTIONS(106),
  },
  [43] = {
    [sym_item] = STATE(43),
    [sym_comment] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(56),
    [aux_sym_list_repeat1] = STATE(56),
    [aux_sym_list_repeat2] = STATE(43),
    [sym_commentOperator] = ACTIONS(116),
    [sym__sectionDescend] = ACTIONS(119),
    [sym__emptyLine] = ACTIONS(178),
    [sym__sectionAscend] = ACTIONS(119),
    [sym_key] = ACTIONS(119),
    [sym_itemOperator] = ACTIONS(181),
  },
  [44] = {
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionDescend] = ACTIONS(119),
    [sym__emptyLine] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(119),
    [sym_key] = ACTIONS(119),
    [sym_itemOperator] = ACTIONS(135),
  },
  [45] = {
    [sym_commentOperator] = ACTIONS(137),
    [sym__sectionDescend] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(137),
    [sym__sectionAscend] = ACTIONS(139),
    [sym_key] = ACTIONS(139),
  },
  [46] = {
    [sym_commentOperator] = ACTIONS(145),
    [sym__sectionDescend] = ACTIONS(147),
    [sym__emptyLine] = ACTIONS(145),
    [sym__sectionAscend] = ACTIONS(147),
    [sym_key] = ACTIONS(147),
    [sym_itemOperator] = ACTIONS(145),
  },
  [47] = {
    [sym_commentOperator] = ACTIONS(149),
    [sym__sectionDescend] = ACTIONS(151),
    [sym__emptyLine] = ACTIONS(149),
    [sym__sectionAscend] = ACTIONS(151),
    [sym_key] = ACTIONS(151),
  },
  [48] = {
    [sym_commentOperator] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(155),
    [sym__sectionAscend] = ACTIONS(157),
    [sym_key] = ACTIONS(157),
  },
  [49] = {
    [aux_sym_comment_repeat1] = STATE(50),
    [sym_commentOperator] = ACTIONS(78),
    [sym__sectionDescend] = ACTIONS(25),
    [sym__emptyLine] = ACTIONS(27),
    [sym__sectionAscend] = ACTIONS(25),
    [sym_key] = ACTIONS(25),
  },
  [50] = {
    [aux_sym_comment_repeat1] = STATE(50),
    [sym_commentOperator] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(54),
    [sym__emptyLine] = ACTIONS(56),
    [sym__sectionAscend] = ACTIONS(54),
    [sym_key] = ACTIONS(54),
  },
  [51] = {
    [sym_commentOperator] = ACTIONS(64),
    [sym__sectionDescend] = ACTIONS(66),
    [sym__emptyLine] = ACTIONS(64),
    [sym__sectionAscend] = ACTIONS(66),
    [sym_key] = ACTIONS(66),
  },
  [52] = {
    [sym__endOfLine] = ACTIONS(187),
  },
  [53] = {
    [sym_item] = STATE(40),
    [sym_comment] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(56),
    [aux_sym_list_repeat1] = STATE(56),
    [aux_sym_list_repeat2] = STATE(40),
    [sym__emptyLine] = ACTIONS(189),
    [sym_itemOperator] = ACTIONS(191),
    [sym_commentOperator] = ACTIONS(72),
  },
  [54] = {
    [sym__endOfLine] = ACTIONS(193),
  },
  [55] = {
    [sym_comment] = STATE(57),
    [sym_field] = STATE(57),
    [aux_sym_document_repeat1] = STATE(57),
    [sym_list] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(57),
    [sym__instruction] = STATE(57),
    [sym_section] = STATE(57),
    [sym__sectionDescend] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
    [sym__emptyLine] = ACTIONS(195),
    [sym__sectionAscend] = ACTIONS(197),
    [sym_key] = ACTIONS(84),
  },
  [56] = {
    [sym_comment] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(28),
    [aux_sym_list_repeat1] = STATE(28),
    [sym_item] = STATE(44),
    [sym__emptyLine] = ACTIONS(98),
    [sym_itemOperator] = ACTIONS(191),
    [sym_commentOperator] = ACTIONS(72),
  },
  [57] = {
    [sym_comment] = STATE(37),
    [sym_field] = STATE(37),
    [aux_sym_document_repeat1] = STATE(37),
    [sym_list] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(37),
    [sym__instruction] = STATE(37),
    [sym_section] = STATE(37),
    [sym__sectionDescend] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
    [sym__emptyLine] = ACTIONS(108),
    [sym__sectionAscend] = ACTIONS(199),
    [sym_key] = ACTIONS(84),
  },
  [58] = {
    [sym__endOfLine] = ACTIONS(201),
  },
  [59] = {
    [sym_comment] = STATE(60),
    [sym_field] = STATE(60),
    [aux_sym_document_repeat1] = STATE(60),
    [sym_list] = STATE(60),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(60),
    [sym__instruction] = STATE(60),
    [sym_section] = STATE(60),
    [sym__sectionDescend] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
    [sym__emptyLine] = ACTIONS(203),
    [sym__sectionAscend] = ACTIONS(205),
    [sym_key] = ACTIONS(84),
  },
  [60] = {
    [sym_comment] = STATE(37),
    [sym_field] = STATE(37),
    [aux_sym_document_repeat1] = STATE(37),
    [sym_list] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(49),
    [sym__commentOrEmpty] = STATE(37),
    [sym__instruction] = STATE(37),
    [sym_section] = STATE(37),
    [sym__sectionDescend] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
    [sym__emptyLine] = ACTIONS(108),
    [sym__sectionAscend] = ACTIONS(207),
    [sym_key] = ACTIONS(84),
  },
  [61] = {
    [sym__endOfLine] = ACTIONS(209),
  },
  [62] = {
    [sym_token] = ACTIONS(211),
  },
  [63] = {
    [sym__endOfLine] = ACTIONS(213),
    [sym_token] = ACTIONS(215),
  },
  [64] = {
    [sym__endOfLine] = ACTIONS(217),
    [sym_deepCopyOperator] = ACTIONS(219),
    [sym_copyOperator] = ACTIONS(221),
  },
  [65] = {
    [sym_token] = ACTIONS(223),
  },
  [66] = {
    [sym__endOfLine] = ACTIONS(225),
  },
  [67] = {
    [sym_token] = ACTIONS(227),
  },
  [68] = {
    [sym_elementOperator] = ACTIONS(229),
  },
  [69] = {
    [sym_key] = ACTIONS(231),
  },
  [70] = {
    [sym_token] = ACTIONS(233),
  },
  [71] = {
    [sym_sectionOperator] = ACTIONS(235),
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
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [56] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [58] = {.count = 1, .reusable = true}, SHIFT(17),
  [60] = {.count = 1, .reusable = true}, SHIFT(18),
  [62] = {.count = 1, .reusable = false}, SHIFT(18),
  [64] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [66] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [68] = {.count = 1, .reusable = true}, SHIFT(21),
  [70] = {.count = 1, .reusable = true}, SHIFT(19),
  [72] = {.count = 1, .reusable = true}, SHIFT(62),
  [74] = {.count = 1, .reusable = true}, SHIFT(22),
  [76] = {.count = 1, .reusable = true}, SHIFT(71),
  [78] = {.count = 1, .reusable = false}, SHIFT(67),
  [80] = {.count = 1, .reusable = false}, SHIFT(24),
  [82] = {.count = 1, .reusable = true}, SHIFT(23),
  [84] = {.count = 1, .reusable = true}, SHIFT(68),
  [86] = {.count = 1, .reusable = true}, SHIFT(25),
  [88] = {.count = 1, .reusable = true}, SHIFT(26),
  [90] = {.count = 1, .reusable = false}, SHIFT(62),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [94] = {.count = 1, .reusable = false}, SHIFT(21),
  [96] = {.count = 1, .reusable = false}, SHIFT(19),
  [98] = {.count = 1, .reusable = true}, SHIFT(28),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [108] = {.count = 1, .reusable = false}, SHIFT(37),
  [110] = {.count = 1, .reusable = true}, SHIFT(30),
  [112] = {.count = 1, .reusable = true}, SHIFT(31),
  [114] = {.count = 1, .reusable = true}, SHIFT(32),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(62),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat2, 2),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(21),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(19),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(28),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(62),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat2, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [141] = {.count = 1, .reusable = false}, SHIFT(34),
  [143] = {.count = 1, .reusable = true}, SHIFT(33),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 3),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 3),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 4),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 4),
  [153] = {.count = 1, .reusable = true}, SHIFT(35),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 4),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 4),
  [159] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(62),
  [174] = {.count = 1, .reusable = false}, SHIFT(56),
  [176] = {.count = 1, .reusable = false}, SHIFT(65),
  [178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(56),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat2, 2), SHIFT_REPEAT(65),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(67),
  [187] = {.count = 1, .reusable = true}, SHIFT(39),
  [189] = {.count = 1, .reusable = true}, SHIFT(56),
  [191] = {.count = 1, .reusable = true}, SHIFT(65),
  [193] = {.count = 1, .reusable = true}, SHIFT(41),
  [195] = {.count = 1, .reusable = false}, SHIFT(57),
  [197] = {.count = 1, .reusable = true}, SHIFT(42),
  [199] = {.count = 1, .reusable = true}, SHIFT(45),
  [201] = {.count = 1, .reusable = true}, SHIFT(46),
  [203] = {.count = 1, .reusable = false}, SHIFT(60),
  [205] = {.count = 1, .reusable = true}, SHIFT(47),
  [207] = {.count = 1, .reusable = true}, SHIFT(48),
  [209] = {.count = 1, .reusable = true}, SHIFT(51),
  [211] = {.count = 1, .reusable = true}, SHIFT(52),
  [213] = {.count = 1, .reusable = true}, SHIFT(53),
  [215] = {.count = 1, .reusable = true}, SHIFT(54),
  [217] = {.count = 1, .reusable = true}, SHIFT(55),
  [219] = {.count = 1, .reusable = true}, SHIFT(70),
  [221] = {.count = 1, .reusable = false}, SHIFT(70),
  [223] = {.count = 1, .reusable = true}, SHIFT(58),
  [225] = {.count = 1, .reusable = true}, SHIFT(59),
  [227] = {.count = 1, .reusable = true}, SHIFT(61),
  [229] = {.count = 1, .reusable = true}, SHIFT(63),
  [231] = {.count = 1, .reusable = true}, SHIFT(64),
  [233] = {.count = 1, .reusable = true}, SHIFT(66),
  [235] = {.count = 1, .reusable = true}, SHIFT(69),
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
