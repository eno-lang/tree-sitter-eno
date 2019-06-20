#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 96
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 3
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__emptyLine = 1,
  sym_key = 2,
  sym_token = 3,
  sym_directContinuationOperator = 4,
  sym_spacedContinuationOperator = 5,
  sym_commentOperator = 6,
  sym_copyOperator = 7,
  sym_deepCopyOperator = 8,
  sym_entryOperator = 9,
  sym_itemOperator = 10,
  sym_elementOperator = 11,
  sym_sectionOperator = 12,
  sym__endOfLine = 13,
  sym__sectionAscend = 14,
  sym__sectionDescend = 15,
  sym_document = 16,
  sym__commentOrEmpty = 17,
  sym__instruction = 18,
  sym_comment = 19,
  sym_entry = 20,
  sym_field = 21,
  sym_fieldset = 22,
  sym_item = 23,
  sym_list = 24,
  sym_section = 25,
  aux_sym_document_repeat1 = 26,
  aux_sym_comment_repeat1 = 27,
  aux_sym_fieldset_repeat1 = 28,
  aux_sym_fieldset_repeat2 = 29,
  aux_sym_list_repeat1 = 30,
  anon_alias_sym_template = 31,
  anon_alias_sym_comment = 32,
  anon_alias_sym_value = 33,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__emptyLine] = "_emptyLine",
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
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym_fieldset] = "fieldset",
  [sym_item] = "item",
  [sym_list] = "list",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_fieldset_repeat1] = "fieldset_repeat1",
  [aux_sym_fieldset_repeat2] = "fieldset_repeat2",
  [aux_sym_list_repeat1] = "list_repeat1",
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
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldset] = {
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
  [aux_sym_fieldset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldset_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
      ACCEPT_TOKEN(sym__emptyLine);
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
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(18);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(18);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == ':')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(19);
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
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '\n')
        ADVANCE(2);
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
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 21, .external_lex_state = 3},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 26, .external_lex_state = 3},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 4},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 13, .external_lex_state = 2},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13, .external_lex_state = 2},
  [35] = {.lex_state = 13, .external_lex_state = 4},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 13, .external_lex_state = 2},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 13, .external_lex_state = 4},
  [41] = {.lex_state = 13, .external_lex_state = 2},
  [42] = {.lex_state = 13, .external_lex_state = 2},
  [43] = {.lex_state = 13, .external_lex_state = 4},
  [44] = {.lex_state = 13, .external_lex_state = 2},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13, .external_lex_state = 4},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13, .external_lex_state = 4},
  [50] = {.lex_state = 13, .external_lex_state = 4},
  [51] = {.lex_state = 13, .external_lex_state = 4},
  [52] = {.lex_state = 13, .external_lex_state = 4},
  [53] = {.lex_state = 13, .external_lex_state = 4},
  [54] = {.lex_state = 13, .external_lex_state = 4},
  [55] = {.lex_state = 13, .external_lex_state = 4},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 13, .external_lex_state = 4},
  [58] = {.lex_state = 13, .external_lex_state = 4},
  [59] = {.lex_state = 13, .external_lex_state = 4},
  [60] = {.lex_state = 13, .external_lex_state = 4},
  [61] = {.lex_state = 13, .external_lex_state = 4},
  [62] = {.lex_state = 13, .external_lex_state = 4},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 13, .external_lex_state = 4},
  [67] = {.lex_state = 13, .external_lex_state = 4},
  [68] = {.lex_state = 13, .external_lex_state = 4},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 13, .external_lex_state = 4},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 13, .external_lex_state = 4},
  [80] = {.lex_state = 13, .external_lex_state = 4},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21, .external_lex_state = 3},
  [85] = {.lex_state = 26, .external_lex_state = 3},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 20},
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
    [sym__emptyLine] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym__sectionDescend] = ACTIONS(1),
    [sym_deepCopyOperator] = ACTIONS(1),
  },
  [1] = {
    [sym_comment] = STATE(6),
    [sym_section] = STATE(6),
    [sym_document] = STATE(5),
    [sym_field] = STATE(6),
    [sym_fieldset] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym__commentOrEmpty] = STATE(6),
    [sym__instruction] = STATE(6),
    [sym_list] = STATE(6),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(11),
  },
  [2] = {
    [sym_elementOperator] = ACTIONS(13),
  },
  [3] = {
    [sym_sectionOperator] = ACTIONS(15),
  },
  [4] = {
    [sym_token] = ACTIONS(17),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [6] = {
    [sym_comment] = STATE(11),
    [sym_section] = STATE(11),
    [sym_field] = STATE(11),
    [sym_fieldset] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym__commentOrEmpty] = STATE(11),
    [sym__instruction] = STATE(11),
    [sym_list] = STATE(11),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(23),
    [sym_commentOperator] = ACTIONS(11),
  },
  [7] = {
    [aux_sym_comment_repeat1] = STATE(12),
    [sym_key] = ACTIONS(25),
    [sym__sectionDescend] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__emptyLine] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(11),
  },
  [8] = {
    [sym__endOfLine] = ACTIONS(29),
    [sym_token] = ACTIONS(31),
  },
  [9] = {
    [sym_key] = ACTIONS(33),
  },
  [10] = {
    [sym__endOfLine] = ACTIONS(35),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [sym_section] = STATE(11),
    [sym_field] = STATE(11),
    [sym_fieldset] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym__commentOrEmpty] = STATE(11),
    [sym__instruction] = STATE(11),
    [sym_list] = STATE(11),
    [sym_key] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(40),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym__emptyLine] = ACTIONS(45),
    [sym_commentOperator] = ACTIONS(48),
  },
  [12] = {
    [aux_sym_comment_repeat1] = STATE(12),
    [sym_key] = ACTIONS(51),
    [sym__sectionDescend] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__emptyLine] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(55),
  },
  [13] = {
    [aux_sym_fieldset_repeat2] = STATE(19),
    [sym_comment] = STATE(21),
    [sym_entry] = STATE(19),
    [aux_sym_list_repeat1] = STATE(20),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(21),
    [sym_item] = STATE(20),
    [aux_sym_fieldset_repeat1] = STATE(21),
    [sym_key] = ACTIONS(58),
    [sym_itemOperator] = ACTIONS(60),
    [sym__emptyLine] = ACTIONS(62),
    [sym_commentOperator] = ACTIONS(64),
  },
  [14] = {
    [sym__endOfLine] = ACTIONS(66),
  },
  [15] = {
    [sym__endOfLine] = ACTIONS(68),
    [sym_copyOperator] = ACTIONS(70),
    [sym_deepCopyOperator] = ACTIONS(72),
  },
  [16] = {
    [sym_key] = ACTIONS(74),
    [sym__sectionDescend] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym__emptyLine] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(76),
  },
  [17] = {
    [sym_entryOperator] = ACTIONS(78),
  },
  [18] = {
    [sym_token] = ACTIONS(80),
  },
  [19] = {
    [aux_sym_fieldset_repeat2] = STATE(27),
    [sym_comment] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(28),
    [sym_entry] = STATE(27),
    [aux_sym_fieldset_repeat1] = STATE(28),
    [sym_key] = ACTIONS(58),
    [sym__sectionDescend] = ACTIONS(82),
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym__emptyLine] = ACTIONS(84),
    [sym_commentOperator] = ACTIONS(64),
  },
  [20] = {
    [sym_comment] = STATE(30),
    [aux_sym_comment_repeat1] = STATE(63),
    [sym__commentOrEmpty] = STATE(30),
    [sym_item] = STATE(29),
    [aux_sym_list_repeat1] = STATE(29),
    [aux_sym_fieldset_repeat1] = STATE(30),
    [sym_key] = ACTIONS(86),
    [sym__sectionDescend] = ACTIONS(86),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(88),
    [sym_commentOperator] = ACTIONS(90),
    [sym_itemOperator] = ACTIONS(60),
  },
  [21] = {
    [sym_comment] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(33),
    [sym_entry] = STATE(31),
    [sym_item] = STATE(32),
    [aux_sym_fieldset_repeat1] = STATE(33),
    [sym_key] = ACTIONS(58),
    [sym_itemOperator] = ACTIONS(60),
    [sym__emptyLine] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(64),
  },
  [22] = {
    [sym_key] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(96),
    [sym_commentOperator] = ACTIONS(96),
  },
  [23] = {
    [sym_comment] = STATE(35),
    [sym_section] = STATE(35),
    [sym_field] = STATE(35),
    [sym_fieldset] = STATE(35),
    [aux_sym_document_repeat1] = STATE(35),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(35),
    [sym__instruction] = STATE(35),
    [sym_list] = STATE(35),
    [sym_key] = ACTIONS(98),
    [sym__sectionDescend] = ACTIONS(100),
    [sym__emptyLine] = ACTIONS(102),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(106),
  },
  [24] = {
    [sym_token] = ACTIONS(108),
  },
  [25] = {
    [sym_token] = ACTIONS(110),
  },
  [26] = {
    [sym__endOfLine] = ACTIONS(112),
  },
  [27] = {
    [aux_sym_fieldset_repeat2] = STATE(27),
    [sym_comment] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(28),
    [sym_entry] = STATE(27),
    [aux_sym_fieldset_repeat1] = STATE(28),
    [sym_key] = ACTIONS(114),
    [sym__sectionDescend] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym__emptyLine] = ACTIONS(119),
    [sym_commentOperator] = ACTIONS(122),
  },
  [28] = {
    [sym_comment] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(33),
    [sym_entry] = STATE(31),
    [aux_sym_fieldset_repeat1] = STATE(33),
    [sym__emptyLine] = ACTIONS(92),
    [sym_key] = ACTIONS(58),
    [sym_commentOperator] = ACTIONS(64),
  },
  [29] = {
    [sym_comment] = STATE(30),
    [aux_sym_comment_repeat1] = STATE(63),
    [sym__commentOrEmpty] = STATE(30),
    [sym_item] = STATE(29),
    [aux_sym_list_repeat1] = STATE(29),
    [aux_sym_fieldset_repeat1] = STATE(30),
    [sym_key] = ACTIONS(125),
    [sym_itemOperator] = ACTIONS(127),
    [sym__sectionDescend] = ACTIONS(125),
    [sym__emptyLine] = ACTIONS(130),
    [sym_commentOperator] = ACTIONS(133),
    [ts_builtin_sym_end] = ACTIONS(125),
  },
  [30] = {
    [sym_comment] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(63),
    [sym__commentOrEmpty] = STATE(56),
    [sym_item] = STATE(32),
    [aux_sym_fieldset_repeat1] = STATE(56),
    [sym__emptyLine] = ACTIONS(136),
    [sym_itemOperator] = ACTIONS(138),
    [sym_commentOperator] = ACTIONS(140),
  },
  [31] = {
    [sym_key] = ACTIONS(117),
    [sym__sectionDescend] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym__emptyLine] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(142),
  },
  [32] = {
    [sym_key] = ACTIONS(125),
    [sym_itemOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(125),
    [sym__emptyLine] = ACTIONS(144),
    [sym_commentOperator] = ACTIONS(144),
    [ts_builtin_sym_end] = ACTIONS(125),
  },
  [33] = {
    [sym_comment] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(33),
    [aux_sym_fieldset_repeat1] = STATE(33),
    [sym_key] = ACTIONS(146),
    [sym_itemOperator] = ACTIONS(148),
    [sym__emptyLine] = ACTIONS(150),
    [sym_commentOperator] = ACTIONS(153),
  },
  [34] = {
    [sym_key] = ACTIONS(156),
    [sym__sectionDescend] = ACTIONS(156),
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym__emptyLine] = ACTIONS(158),
    [sym_commentOperator] = ACTIONS(158),
  },
  [35] = {
    [sym_comment] = STATE(46),
    [sym_section] = STATE(46),
    [sym_field] = STATE(46),
    [sym_fieldset] = STATE(46),
    [aux_sym_document_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(46),
    [sym__instruction] = STATE(46),
    [sym_list] = STATE(46),
    [sym_key] = ACTIONS(98),
    [sym__sectionDescend] = ACTIONS(100),
    [sym__emptyLine] = ACTIONS(160),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(162),
  },
  [36] = {
    [sym__endOfLine] = ACTIONS(164),
  },
  [37] = {
    [sym__endOfLine] = ACTIONS(166),
  },
  [38] = {
    [sym_key] = ACTIONS(168),
    [sym_itemOperator] = ACTIONS(170),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(170),
    [ts_builtin_sym_end] = ACTIONS(168),
  },
  [39] = {
    [sym_key] = ACTIONS(172),
    [sym__sectionDescend] = ACTIONS(172),
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym__emptyLine] = ACTIONS(174),
    [sym_commentOperator] = ACTIONS(174),
  },
  [40] = {
    [sym_comment] = STATE(43),
    [sym_section] = STATE(43),
    [sym_field] = STATE(43),
    [sym_fieldset] = STATE(43),
    [aux_sym_document_repeat1] = STATE(43),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(43),
    [sym__instruction] = STATE(43),
    [sym_list] = STATE(43),
    [sym_key] = ACTIONS(98),
    [sym__sectionDescend] = ACTIONS(100),
    [sym__emptyLine] = ACTIONS(176),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(178),
  },
  [41] = {
    [sym_key] = ACTIONS(180),
    [sym__sectionDescend] = ACTIONS(180),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym__emptyLine] = ACTIONS(182),
    [sym_commentOperator] = ACTIONS(182),
  },
  [42] = {
    [sym_key] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(184),
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym__emptyLine] = ACTIONS(186),
    [sym_commentOperator] = ACTIONS(186),
  },
  [43] = {
    [sym_comment] = STATE(46),
    [sym_section] = STATE(46),
    [sym_field] = STATE(46),
    [sym_fieldset] = STATE(46),
    [aux_sym_document_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(46),
    [sym__instruction] = STATE(46),
    [sym_list] = STATE(46),
    [sym_key] = ACTIONS(98),
    [sym__sectionDescend] = ACTIONS(100),
    [sym__emptyLine] = ACTIONS(160),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(188),
  },
  [44] = {
    [sym_key] = ACTIONS(190),
    [sym__sectionDescend] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym__emptyLine] = ACTIONS(192),
    [sym_commentOperator] = ACTIONS(192),
  },
  [45] = {
    [aux_sym_comment_repeat1] = STATE(47),
    [sym_key] = ACTIONS(25),
    [sym_itemOperator] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(64),
  },
  [46] = {
    [sym_comment] = STATE(46),
    [sym_section] = STATE(46),
    [sym_field] = STATE(46),
    [sym_fieldset] = STATE(46),
    [aux_sym_document_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(46),
    [sym__instruction] = STATE(46),
    [sym_list] = STATE(46),
    [sym_key] = ACTIONS(194),
    [sym__sectionDescend] = ACTIONS(197),
    [sym__emptyLine] = ACTIONS(200),
    [sym_commentOperator] = ACTIONS(203),
    [sym__sectionAscend] = ACTIONS(43),
  },
  [47] = {
    [aux_sym_comment_repeat1] = STATE(47),
    [sym_key] = ACTIONS(51),
    [sym_itemOperator] = ACTIONS(53),
    [sym__emptyLine] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(206),
  },
  [48] = {
    [sym_key] = ACTIONS(74),
    [sym_itemOperator] = ACTIONS(76),
    [sym__emptyLine] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(76),
  },
  [49] = {
    [aux_sym_fieldset_repeat2] = STATE(52),
    [sym_comment] = STATE(75),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(75),
    [sym_entry] = STATE(52),
    [aux_sym_fieldset_repeat1] = STATE(75),
    [sym_key] = ACTIONS(209),
    [sym__sectionDescend] = ACTIONS(82),
    [sym__emptyLine] = ACTIONS(211),
    [sym_commentOperator] = ACTIONS(64),
    [sym__sectionAscend] = ACTIONS(82),
  },
  [50] = {
    [sym_comment] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(63),
    [sym__commentOrEmpty] = STATE(76),
    [sym_item] = STATE(53),
    [aux_sym_list_repeat1] = STATE(53),
    [aux_sym_fieldset_repeat1] = STATE(76),
    [sym_key] = ACTIONS(86),
    [sym__sectionDescend] = ACTIONS(86),
    [sym_itemOperator] = ACTIONS(213),
    [sym__emptyLine] = ACTIONS(215),
    [sym_commentOperator] = ACTIONS(90),
    [sym__sectionAscend] = ACTIONS(86),
  },
  [51] = {
    [sym_key] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(96),
    [sym_commentOperator] = ACTIONS(96),
    [sym__sectionAscend] = ACTIONS(94),
  },
  [52] = {
    [aux_sym_fieldset_repeat2] = STATE(52),
    [sym_comment] = STATE(75),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(75),
    [sym_entry] = STATE(52),
    [aux_sym_fieldset_repeat1] = STATE(75),
    [sym_key] = ACTIONS(217),
    [sym__sectionDescend] = ACTIONS(117),
    [sym__emptyLine] = ACTIONS(220),
    [sym_commentOperator] = ACTIONS(122),
    [sym__sectionAscend] = ACTIONS(117),
  },
  [53] = {
    [sym_comment] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(63),
    [sym__commentOrEmpty] = STATE(76),
    [sym_item] = STATE(53),
    [aux_sym_list_repeat1] = STATE(53),
    [aux_sym_fieldset_repeat1] = STATE(76),
    [sym_key] = ACTIONS(125),
    [sym_itemOperator] = ACTIONS(223),
    [sym__sectionDescend] = ACTIONS(125),
    [sym__emptyLine] = ACTIONS(226),
    [sym_commentOperator] = ACTIONS(133),
    [sym__sectionAscend] = ACTIONS(125),
  },
  [54] = {
    [sym_key] = ACTIONS(117),
    [sym__sectionDescend] = ACTIONS(117),
    [sym__emptyLine] = ACTIONS(142),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionAscend] = ACTIONS(117),
  },
  [55] = {
    [sym_key] = ACTIONS(125),
    [sym_itemOperator] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(125),
    [sym__emptyLine] = ACTIONS(144),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionAscend] = ACTIONS(125),
  },
  [56] = {
    [sym_comment] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(63),
    [sym__commentOrEmpty] = STATE(56),
    [aux_sym_fieldset_repeat1] = STATE(56),
    [sym__emptyLine] = ACTIONS(229),
    [sym_commentOperator] = ACTIONS(232),
    [sym_itemOperator] = ACTIONS(146),
  },
  [57] = {
    [sym_key] = ACTIONS(156),
    [sym__sectionDescend] = ACTIONS(156),
    [sym__emptyLine] = ACTIONS(158),
    [sym_commentOperator] = ACTIONS(158),
    [sym__sectionAscend] = ACTIONS(156),
  },
  [58] = {
    [sym_key] = ACTIONS(168),
    [sym_itemOperator] = ACTIONS(170),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(170),
    [sym__sectionAscend] = ACTIONS(168),
  },
  [59] = {
    [sym_key] = ACTIONS(172),
    [sym__sectionDescend] = ACTIONS(172),
    [sym__emptyLine] = ACTIONS(174),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(172),
  },
  [60] = {
    [sym_key] = ACTIONS(180),
    [sym__sectionDescend] = ACTIONS(180),
    [sym__emptyLine] = ACTIONS(182),
    [sym_commentOperator] = ACTIONS(182),
    [sym__sectionAscend] = ACTIONS(180),
  },
  [61] = {
    [sym_key] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(184),
    [sym__emptyLine] = ACTIONS(186),
    [sym_commentOperator] = ACTIONS(186),
    [sym__sectionAscend] = ACTIONS(184),
  },
  [62] = {
    [sym_key] = ACTIONS(190),
    [sym__sectionDescend] = ACTIONS(190),
    [sym__emptyLine] = ACTIONS(192),
    [sym_commentOperator] = ACTIONS(192),
    [sym__sectionAscend] = ACTIONS(190),
  },
  [63] = {
    [aux_sym_comment_repeat1] = STATE(64),
    [sym__emptyLine] = ACTIONS(25),
    [sym_commentOperator] = ACTIONS(140),
    [sym_itemOperator] = ACTIONS(25),
  },
  [64] = {
    [aux_sym_comment_repeat1] = STATE(64),
    [sym__emptyLine] = ACTIONS(51),
    [sym_commentOperator] = ACTIONS(235),
    [sym_itemOperator] = ACTIONS(51),
  },
  [65] = {
    [sym__emptyLine] = ACTIONS(74),
    [sym_commentOperator] = ACTIONS(74),
    [sym_itemOperator] = ACTIONS(74),
  },
  [66] = {
    [aux_sym_comment_repeat1] = STATE(67),
    [sym_key] = ACTIONS(25),
    [sym__sectionDescend] = ACTIONS(25),
    [sym__emptyLine] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(25),
  },
  [67] = {
    [aux_sym_comment_repeat1] = STATE(67),
    [sym_key] = ACTIONS(51),
    [sym__sectionDescend] = ACTIONS(51),
    [sym__emptyLine] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(238),
    [sym__sectionAscend] = ACTIONS(51),
  },
  [68] = {
    [sym_key] = ACTIONS(74),
    [sym__sectionDescend] = ACTIONS(74),
    [sym__emptyLine] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(76),
    [sym__sectionAscend] = ACTIONS(74),
  },
  [69] = {
    [sym__endOfLine] = ACTIONS(241),
  },
  [70] = {
    [aux_sym_fieldset_repeat2] = STATE(49),
    [sym_comment] = STATE(72),
    [sym_entry] = STATE(49),
    [aux_sym_list_repeat1] = STATE(50),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(72),
    [sym_item] = STATE(50),
    [aux_sym_fieldset_repeat1] = STATE(72),
    [sym_key] = ACTIONS(209),
    [sym_itemOperator] = ACTIONS(213),
    [sym__emptyLine] = ACTIONS(243),
    [sym_commentOperator] = ACTIONS(64),
  },
  [71] = {
    [sym__endOfLine] = ACTIONS(245),
  },
  [72] = {
    [sym_comment] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(33),
    [sym_entry] = STATE(54),
    [sym_item] = STATE(55),
    [aux_sym_fieldset_repeat1] = STATE(33),
    [sym_key] = ACTIONS(209),
    [sym_itemOperator] = ACTIONS(213),
    [sym__emptyLine] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(64),
  },
  [73] = {
    [sym_comment] = STATE(77),
    [sym_section] = STATE(77),
    [sym_field] = STATE(77),
    [sym_fieldset] = STATE(77),
    [aux_sym_document_repeat1] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(77),
    [sym__instruction] = STATE(77),
    [sym_list] = STATE(77),
    [sym_key] = ACTIONS(98),
    [sym__sectionDescend] = ACTIONS(100),
    [sym__emptyLine] = ACTIONS(247),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(249),
  },
  [74] = {
    [sym__endOfLine] = ACTIONS(251),
  },
  [75] = {
    [sym_comment] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(45),
    [sym__commentOrEmpty] = STATE(33),
    [sym_entry] = STATE(54),
    [aux_sym_fieldset_repeat1] = STATE(33),
    [sym__emptyLine] = ACTIONS(92),
    [sym_key] = ACTIONS(209),
    [sym_commentOperator] = ACTIONS(64),
  },
  [76] = {
    [sym_comment] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(63),
    [sym__commentOrEmpty] = STATE(56),
    [sym_item] = STATE(55),
    [aux_sym_fieldset_repeat1] = STATE(56),
    [sym__emptyLine] = ACTIONS(136),
    [sym_itemOperator] = ACTIONS(253),
    [sym_commentOperator] = ACTIONS(140),
  },
  [77] = {
    [sym_comment] = STATE(46),
    [sym_section] = STATE(46),
    [sym_field] = STATE(46),
    [sym_fieldset] = STATE(46),
    [aux_sym_document_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(46),
    [sym__instruction] = STATE(46),
    [sym_list] = STATE(46),
    [sym_key] = ACTIONS(98),
    [sym__sectionDescend] = ACTIONS(100),
    [sym__emptyLine] = ACTIONS(160),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(255),
  },
  [78] = {
    [sym__endOfLine] = ACTIONS(257),
  },
  [79] = {
    [sym_comment] = STATE(80),
    [sym_section] = STATE(80),
    [sym_field] = STATE(80),
    [sym_fieldset] = STATE(80),
    [aux_sym_document_repeat1] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(80),
    [sym__instruction] = STATE(80),
    [sym_list] = STATE(80),
    [sym_key] = ACTIONS(98),
    [sym__sectionDescend] = ACTIONS(100),
    [sym__emptyLine] = ACTIONS(259),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(261),
  },
  [80] = {
    [sym_comment] = STATE(46),
    [sym_section] = STATE(46),
    [sym_field] = STATE(46),
    [sym_fieldset] = STATE(46),
    [aux_sym_document_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(46),
    [sym__instruction] = STATE(46),
    [sym_list] = STATE(46),
    [sym_key] = ACTIONS(98),
    [sym__sectionDescend] = ACTIONS(100),
    [sym__emptyLine] = ACTIONS(160),
    [sym_commentOperator] = ACTIONS(104),
    [sym__sectionAscend] = ACTIONS(263),
  },
  [81] = {
    [sym__endOfLine] = ACTIONS(265),
  },
  [82] = {
    [sym__endOfLine] = ACTIONS(267),
  },
  [83] = {
    [sym_token] = ACTIONS(269),
  },
  [84] = {
    [sym__endOfLine] = ACTIONS(271),
    [sym_token] = ACTIONS(273),
  },
  [85] = {
    [sym__endOfLine] = ACTIONS(275),
    [sym_copyOperator] = ACTIONS(277),
    [sym_deepCopyOperator] = ACTIONS(279),
  },
  [86] = {
    [sym_token] = ACTIONS(281),
  },
  [87] = {
    [sym_token] = ACTIONS(283),
  },
  [88] = {
    [sym__endOfLine] = ACTIONS(285),
  },
  [89] = {
    [sym_token] = ACTIONS(287),
  },
  [90] = {
    [sym_token] = ACTIONS(289),
  },
  [91] = {
    [sym_elementOperator] = ACTIONS(291),
  },
  [92] = {
    [sym_key] = ACTIONS(293),
  },
  [93] = {
    [sym_entryOperator] = ACTIONS(295),
  },
  [94] = {
    [sym_token] = ACTIONS(297),
  },
  [95] = {
    [sym_sectionOperator] = ACTIONS(299),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(6),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [23] = {.count = 1, .reusable = false}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [48] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.count = 1, .reusable = true}, SHIFT(17),
  [60] = {.count = 1, .reusable = false}, SHIFT(18),
  [62] = {.count = 1, .reusable = false}, SHIFT(21),
  [64] = {.count = 1, .reusable = false}, SHIFT(83),
  [66] = {.count = 1, .reusable = true}, SHIFT(22),
  [68] = {.count = 1, .reusable = true}, SHIFT(23),
  [70] = {.count = 1, .reusable = false}, SHIFT(24),
  [72] = {.count = 1, .reusable = true}, SHIFT(24),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [76] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [78] = {.count = 1, .reusable = true}, SHIFT(25),
  [80] = {.count = 1, .reusable = true}, SHIFT(26),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [84] = {.count = 1, .reusable = false}, SHIFT(28),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [88] = {.count = 1, .reusable = false}, SHIFT(30),
  [90] = {.count = 1, .reusable = false}, SHIFT(89),
  [92] = {.count = 1, .reusable = false}, SHIFT(33),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2),
  [98] = {.count = 1, .reusable = true}, SHIFT(91),
  [100] = {.count = 1, .reusable = true}, SHIFT(95),
  [102] = {.count = 1, .reusable = false}, SHIFT(35),
  [104] = {.count = 1, .reusable = false}, SHIFT(90),
  [106] = {.count = 1, .reusable = true}, SHIFT(34),
  [108] = {.count = 1, .reusable = true}, SHIFT(36),
  [110] = {.count = 1, .reusable = true}, SHIFT(37),
  [112] = {.count = 1, .reusable = true}, SHIFT(38),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(17),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat2, 2),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(28),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(83),
  [125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [127] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [130] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(30),
  [133] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(89),
  [136] = {.count = 1, .reusable = true}, SHIFT(56),
  [138] = {.count = 1, .reusable = true}, SHIFT(18),
  [140] = {.count = 1, .reusable = true}, SHIFT(89),
  [142] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat2, 2),
  [144] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [146] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [148] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(33),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(83),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [160] = {.count = 1, .reusable = false}, SHIFT(46),
  [162] = {.count = 1, .reusable = true}, SHIFT(39),
  [164] = {.count = 1, .reusable = true}, SHIFT(40),
  [166] = {.count = 1, .reusable = true}, SHIFT(41),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 3),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 3),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [176] = {.count = 1, .reusable = false}, SHIFT(43),
  [178] = {.count = 1, .reusable = true}, SHIFT(42),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 4),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 4),
  [188] = {.count = 1, .reusable = true}, SHIFT(44),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 4),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [200] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(83),
  [209] = {.count = 1, .reusable = true}, SHIFT(93),
  [211] = {.count = 1, .reusable = false}, SHIFT(75),
  [213] = {.count = 1, .reusable = false}, SHIFT(86),
  [215] = {.count = 1, .reusable = false}, SHIFT(76),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(93),
  [220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(75),
  [223] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(86),
  [226] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(76),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(56),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(89),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(89),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(90),
  [241] = {.count = 1, .reusable = true}, SHIFT(48),
  [243] = {.count = 1, .reusable = false}, SHIFT(72),
  [245] = {.count = 1, .reusable = true}, SHIFT(51),
  [247] = {.count = 1, .reusable = false}, SHIFT(77),
  [249] = {.count = 1, .reusable = true}, SHIFT(57),
  [251] = {.count = 1, .reusable = true}, SHIFT(58),
  [253] = {.count = 1, .reusable = true}, SHIFT(86),
  [255] = {.count = 1, .reusable = true}, SHIFT(59),
  [257] = {.count = 1, .reusable = true}, SHIFT(60),
  [259] = {.count = 1, .reusable = false}, SHIFT(80),
  [261] = {.count = 1, .reusable = true}, SHIFT(61),
  [263] = {.count = 1, .reusable = true}, SHIFT(62),
  [265] = {.count = 1, .reusable = true}, SHIFT(65),
  [267] = {.count = 1, .reusable = true}, SHIFT(68),
  [269] = {.count = 1, .reusable = true}, SHIFT(69),
  [271] = {.count = 1, .reusable = true}, SHIFT(70),
  [273] = {.count = 1, .reusable = true}, SHIFT(71),
  [275] = {.count = 1, .reusable = true}, SHIFT(73),
  [277] = {.count = 1, .reusable = false}, SHIFT(94),
  [279] = {.count = 1, .reusable = true}, SHIFT(94),
  [281] = {.count = 1, .reusable = true}, SHIFT(74),
  [283] = {.count = 1, .reusable = true}, SHIFT(78),
  [285] = {.count = 1, .reusable = true}, SHIFT(79),
  [287] = {.count = 1, .reusable = true}, SHIFT(81),
  [289] = {.count = 1, .reusable = true}, SHIFT(82),
  [291] = {.count = 1, .reusable = true}, SHIFT(84),
  [293] = {.count = 1, .reusable = true}, SHIFT(85),
  [295] = {.count = 1, .reusable = true}, SHIFT(87),
  [297] = {.count = 1, .reusable = true}, SHIFT(88),
  [299] = {.count = 1, .reusable = true}, SHIFT(92),
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
