#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 98
#define SYMBOL_COUNT 33
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
  sym_element = 19,
  sym_empty = 20,
  sym_comment = 21,
  sym_entry = 22,
  sym_field = 23,
  sym_fieldset = 24,
  sym_item = 25,
  sym_list = 26,
  sym_section = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_comment_repeat1 = 29,
  aux_sym_fieldset_repeat1 = 30,
  aux_sym_fieldset_repeat2 = 31,
  aux_sym_list_repeat1 = 32,
  anon_alias_sym_template = 33,
  anon_alias_sym_comment = 34,
  anon_alias_sym_value = 35,
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
  [sym_element] = "element",
  [sym_empty] = "empty",
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
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_empty] = {
    .visible = true,
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
  [2] = {.lex_state = 19, .external_lex_state = 3},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 21, .external_lex_state = 3},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 13, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 26, .external_lex_state = 3},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 4},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 13, .external_lex_state = 2},
  [35] = {.lex_state = 13, .external_lex_state = 2},
  [36] = {.lex_state = 13, .external_lex_state = 4},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 13, .external_lex_state = 2},
  [41] = {.lex_state = 13, .external_lex_state = 4},
  [42] = {.lex_state = 13, .external_lex_state = 2},
  [43] = {.lex_state = 13, .external_lex_state = 2},
  [44] = {.lex_state = 13, .external_lex_state = 4},
  [45] = {.lex_state = 13, .external_lex_state = 2},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13, .external_lex_state = 4},
  [48] = {.lex_state = 13, .external_lex_state = 4},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13, .external_lex_state = 4},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13, .external_lex_state = 4},
  [53] = {.lex_state = 13, .external_lex_state = 4},
  [54] = {.lex_state = 13, .external_lex_state = 4},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 13, .external_lex_state = 4},
  [57] = {.lex_state = 13, .external_lex_state = 4},
  [58] = {.lex_state = 13, .external_lex_state = 4},
  [59] = {.lex_state = 13, .external_lex_state = 4},
  [60] = {.lex_state = 13, .external_lex_state = 4},
  [61] = {.lex_state = 13, .external_lex_state = 4},
  [62] = {.lex_state = 13, .external_lex_state = 4},
  [63] = {.lex_state = 13, .external_lex_state = 4},
  [64] = {.lex_state = 13, .external_lex_state = 4},
  [65] = {.lex_state = 13, .external_lex_state = 4},
  [66] = {.lex_state = 28},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 13, .external_lex_state = 4},
  [70] = {.lex_state = 13, .external_lex_state = 4},
  [71] = {.lex_state = 13, .external_lex_state = 4},
  [72] = {.lex_state = 19, .external_lex_state = 3},
  [73] = {.lex_state = 21, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 13, .external_lex_state = 4},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 28},
  [81] = {.lex_state = 13, .external_lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 13, .external_lex_state = 4},
  [84] = {.lex_state = 13, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 26, .external_lex_state = 3},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 20},
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
    [sym_element] = STATE(6),
    [sym_empty] = STATE(6),
    [sym_list] = STATE(6),
    [sym_document] = STATE(5),
    [sym_comment] = STATE(6),
    [sym_section] = STATE(6),
    [aux_sym_document_repeat1] = STATE(6),
    [sym__commentOrEmpty] = STATE(6),
    [sym__instruction] = STATE(6),
    [sym_field] = STATE(6),
    [sym_fieldset] = STATE(6),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(11),
  },
  [2] = {
    [sym__endOfLine] = ACTIONS(13),
    [sym_elementOperator] = ACTIONS(15),
  },
  [3] = {
    [sym_sectionOperator] = ACTIONS(17),
  },
  [4] = {
    [sym_token] = ACTIONS(19),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(21),
  },
  [6] = {
    [sym_element] = STATE(12),
    [sym_empty] = STATE(12),
    [sym_list] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_section] = STATE(12),
    [aux_sym_document_repeat1] = STATE(12),
    [sym__commentOrEmpty] = STATE(12),
    [sym__instruction] = STATE(12),
    [sym_field] = STATE(12),
    [sym_fieldset] = STATE(12),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(25),
    [sym_commentOperator] = ACTIONS(11),
  },
  [7] = {
    [aux_sym_comment_repeat1] = STATE(13),
    [sym_key] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(11),
  },
  [8] = {
    [sym_key] = ACTIONS(31),
    [sym__sectionDescend] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(33),
  },
  [9] = {
    [sym__endOfLine] = ACTIONS(35),
    [sym_token] = ACTIONS(37),
  },
  [10] = {
    [sym_key] = ACTIONS(39),
  },
  [11] = {
    [sym__endOfLine] = ACTIONS(41),
  },
  [12] = {
    [sym_element] = STATE(12),
    [sym_empty] = STATE(12),
    [sym_list] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_section] = STATE(12),
    [aux_sym_document_repeat1] = STATE(12),
    [sym__commentOrEmpty] = STATE(12),
    [sym__instruction] = STATE(12),
    [sym_field] = STATE(12),
    [sym_fieldset] = STATE(12),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym_key] = ACTIONS(43),
    [sym__sectionDescend] = ACTIONS(46),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym__emptyLine] = ACTIONS(51),
    [sym_commentOperator] = ACTIONS(54),
  },
  [13] = {
    [aux_sym_comment_repeat1] = STATE(13),
    [sym_key] = ACTIONS(57),
    [sym__sectionDescend] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym__emptyLine] = ACTIONS(59),
    [sym_commentOperator] = ACTIONS(61),
  },
  [14] = {
    [aux_sym_fieldset_repeat1] = STATE(20),
    [sym_item] = STATE(22),
    [aux_sym_fieldset_repeat2] = STATE(21),
    [aux_sym_list_repeat1] = STATE(22),
    [sym_comment] = STATE(20),
    [sym_entry] = STATE(21),
    [sym__commentOrEmpty] = STATE(20),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym_key] = ACTIONS(64),
    [sym__sectionDescend] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__emptyLine] = ACTIONS(69),
    [sym_commentOperator] = ACTIONS(72),
    [sym_itemOperator] = ACTIONS(75),
  },
  [15] = {
    [sym__endOfLine] = ACTIONS(77),
  },
  [16] = {
    [sym__endOfLine] = ACTIONS(79),
    [sym_copyOperator] = ACTIONS(81),
    [sym_deepCopyOperator] = ACTIONS(83),
  },
  [17] = {
    [sym_key] = ACTIONS(85),
    [sym__sectionDescend] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym__emptyLine] = ACTIONS(87),
    [sym_commentOperator] = ACTIONS(87),
  },
  [18] = {
    [sym_entryOperator] = ACTIONS(89),
  },
  [19] = {
    [sym_token] = ACTIONS(91),
  },
  [20] = {
    [aux_sym_fieldset_repeat1] = STATE(28),
    [sym_entry] = STATE(29),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(28),
    [sym_item] = STATE(30),
    [sym_comment] = STATE(28),
    [sym_key] = ACTIONS(93),
    [sym_itemOperator] = ACTIONS(75),
    [sym__emptyLine] = ACTIONS(95),
    [sym_commentOperator] = ACTIONS(97),
  },
  [21] = {
    [aux_sym_fieldset_repeat1] = STATE(31),
    [sym_entry] = STATE(32),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(31),
    [aux_sym_fieldset_repeat2] = STATE(32),
    [sym_comment] = STATE(31),
    [sym_key] = ACTIONS(93),
    [sym__sectionDescend] = ACTIONS(99),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym__emptyLine] = ACTIONS(101),
    [sym_commentOperator] = ACTIONS(97),
  },
  [22] = {
    [aux_sym_fieldset_repeat1] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(33),
    [sym_item] = STATE(34),
    [aux_sym_list_repeat1] = STATE(34),
    [sym_comment] = STATE(33),
    [sym_key] = ACTIONS(103),
    [sym__sectionDescend] = ACTIONS(103),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym__emptyLine] = ACTIONS(105),
    [sym_commentOperator] = ACTIONS(107),
    [sym_itemOperator] = ACTIONS(75),
  },
  [23] = {
    [sym_key] = ACTIONS(109),
    [sym__sectionDescend] = ACTIONS(109),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym__emptyLine] = ACTIONS(111),
    [sym_commentOperator] = ACTIONS(111),
  },
  [24] = {
    [sym_element] = STATE(36),
    [sym_empty] = STATE(36),
    [sym_list] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_section] = STATE(36),
    [aux_sym_document_repeat1] = STATE(36),
    [sym__commentOrEmpty] = STATE(36),
    [sym__instruction] = STATE(36),
    [sym_field] = STATE(36),
    [sym_fieldset] = STATE(36),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(113),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(117),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(121),
  },
  [25] = {
    [sym_token] = ACTIONS(123),
  },
  [26] = {
    [sym_token] = ACTIONS(125),
  },
  [27] = {
    [sym__endOfLine] = ACTIONS(127),
  },
  [28] = {
    [aux_sym_fieldset_repeat1] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_key] = ACTIONS(129),
    [sym_itemOperator] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(133),
    [sym_commentOperator] = ACTIONS(136),
  },
  [29] = {
    [sym_key] = ACTIONS(139),
    [sym__sectionDescend] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(141),
    [sym_commentOperator] = ACTIONS(141),
  },
  [30] = {
    [sym_key] = ACTIONS(143),
    [sym_itemOperator] = ACTIONS(145),
    [sym__sectionDescend] = ACTIONS(143),
    [sym__emptyLine] = ACTIONS(145),
    [sym_commentOperator] = ACTIONS(145),
    [ts_builtin_sym_end] = ACTIONS(143),
  },
  [31] = {
    [aux_sym_fieldset_repeat1] = STATE(28),
    [sym_entry] = STATE(29),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(28),
    [sym_comment] = STATE(28),
    [sym__emptyLine] = ACTIONS(95),
    [sym_key] = ACTIONS(93),
    [sym_commentOperator] = ACTIONS(97),
  },
  [32] = {
    [aux_sym_fieldset_repeat1] = STATE(31),
    [sym_entry] = STATE(32),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(31),
    [aux_sym_fieldset_repeat2] = STATE(32),
    [sym_comment] = STATE(31),
    [sym_key] = ACTIONS(147),
    [sym__sectionDescend] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(150),
    [sym_commentOperator] = ACTIONS(153),
  },
  [33] = {
    [aux_sym_fieldset_repeat1] = STATE(55),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(55),
    [sym_item] = STATE(30),
    [sym_comment] = STATE(55),
    [sym__emptyLine] = ACTIONS(156),
    [sym_itemOperator] = ACTIONS(158),
    [sym_commentOperator] = ACTIONS(160),
  },
  [34] = {
    [aux_sym_fieldset_repeat1] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(33),
    [sym_item] = STATE(34),
    [aux_sym_list_repeat1] = STATE(34),
    [sym_comment] = STATE(33),
    [sym_key] = ACTIONS(143),
    [sym_itemOperator] = ACTIONS(162),
    [sym__sectionDescend] = ACTIONS(143),
    [sym__emptyLine] = ACTIONS(165),
    [sym_commentOperator] = ACTIONS(168),
    [ts_builtin_sym_end] = ACTIONS(143),
  },
  [35] = {
    [sym_key] = ACTIONS(171),
    [sym__sectionDescend] = ACTIONS(171),
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym__emptyLine] = ACTIONS(173),
    [sym_commentOperator] = ACTIONS(173),
  },
  [36] = {
    [sym_element] = STATE(48),
    [sym_empty] = STATE(48),
    [sym_list] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_section] = STATE(48),
    [aux_sym_document_repeat1] = STATE(48),
    [sym__commentOrEmpty] = STATE(48),
    [sym__instruction] = STATE(48),
    [sym_field] = STATE(48),
    [sym_fieldset] = STATE(48),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(113),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(175),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(177),
  },
  [37] = {
    [sym__endOfLine] = ACTIONS(179),
  },
  [38] = {
    [sym__endOfLine] = ACTIONS(181),
  },
  [39] = {
    [sym_key] = ACTIONS(183),
    [sym_itemOperator] = ACTIONS(185),
    [sym__sectionDescend] = ACTIONS(183),
    [sym__emptyLine] = ACTIONS(185),
    [sym_commentOperator] = ACTIONS(185),
    [ts_builtin_sym_end] = ACTIONS(183),
  },
  [40] = {
    [sym_key] = ACTIONS(187),
    [sym__sectionDescend] = ACTIONS(187),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym__emptyLine] = ACTIONS(189),
    [sym_commentOperator] = ACTIONS(189),
  },
  [41] = {
    [sym_element] = STATE(44),
    [sym_empty] = STATE(44),
    [sym_list] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_section] = STATE(44),
    [aux_sym_document_repeat1] = STATE(44),
    [sym__commentOrEmpty] = STATE(44),
    [sym__instruction] = STATE(44),
    [sym_field] = STATE(44),
    [sym_fieldset] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(113),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(191),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(193),
  },
  [42] = {
    [sym_key] = ACTIONS(195),
    [sym__sectionDescend] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym__emptyLine] = ACTIONS(197),
    [sym_commentOperator] = ACTIONS(197),
  },
  [43] = {
    [sym_key] = ACTIONS(199),
    [sym__sectionDescend] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym__emptyLine] = ACTIONS(201),
    [sym_commentOperator] = ACTIONS(201),
  },
  [44] = {
    [sym_element] = STATE(48),
    [sym_empty] = STATE(48),
    [sym_list] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_section] = STATE(48),
    [aux_sym_document_repeat1] = STATE(48),
    [sym__commentOrEmpty] = STATE(48),
    [sym__instruction] = STATE(48),
    [sym_field] = STATE(48),
    [sym_fieldset] = STATE(48),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(113),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(175),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(203),
  },
  [45] = {
    [sym_key] = ACTIONS(205),
    [sym__sectionDescend] = ACTIONS(205),
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym__emptyLine] = ACTIONS(207),
    [sym_commentOperator] = ACTIONS(207),
  },
  [46] = {
    [aux_sym_comment_repeat1] = STATE(49),
    [sym_key] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(29),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(97),
  },
  [47] = {
    [sym_key] = ACTIONS(31),
    [sym__sectionDescend] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(33),
    [sym__sectionAscend] = ACTIONS(31),
  },
  [48] = {
    [sym_element] = STATE(48),
    [sym_empty] = STATE(48),
    [sym_list] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_section] = STATE(48),
    [aux_sym_document_repeat1] = STATE(48),
    [sym__commentOrEmpty] = STATE(48),
    [sym__instruction] = STATE(48),
    [sym_field] = STATE(48),
    [sym_fieldset] = STATE(48),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(209),
    [sym__sectionDescend] = ACTIONS(212),
    [sym__emptyLine] = ACTIONS(215),
    [sym_commentOperator] = ACTIONS(218),
    [sym__sectionAscend] = ACTIONS(49),
  },
  [49] = {
    [aux_sym_comment_repeat1] = STATE(49),
    [sym_key] = ACTIONS(57),
    [sym_itemOperator] = ACTIONS(59),
    [sym__emptyLine] = ACTIONS(59),
    [sym_commentOperator] = ACTIONS(221),
  },
  [50] = {
    [aux_sym_fieldset_repeat1] = STATE(76),
    [sym_item] = STATE(53),
    [aux_sym_fieldset_repeat2] = STATE(52),
    [aux_sym_list_repeat1] = STATE(53),
    [sym_comment] = STATE(76),
    [sym_entry] = STATE(52),
    [sym__commentOrEmpty] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym_key] = ACTIONS(224),
    [sym__sectionDescend] = ACTIONS(67),
    [sym_itemOperator] = ACTIONS(227),
    [sym__emptyLine] = ACTIONS(229),
    [sym_commentOperator] = ACTIONS(72),
    [sym__sectionAscend] = ACTIONS(67),
  },
  [51] = {
    [sym_key] = ACTIONS(85),
    [sym_itemOperator] = ACTIONS(87),
    [sym__emptyLine] = ACTIONS(87),
    [sym_commentOperator] = ACTIONS(87),
  },
  [52] = {
    [aux_sym_fieldset_repeat1] = STATE(79),
    [sym_entry] = STATE(58),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(79),
    [aux_sym_fieldset_repeat2] = STATE(58),
    [sym_comment] = STATE(79),
    [sym_key] = ACTIONS(232),
    [sym__sectionDescend] = ACTIONS(99),
    [sym__emptyLine] = ACTIONS(234),
    [sym_commentOperator] = ACTIONS(97),
    [sym__sectionAscend] = ACTIONS(99),
  },
  [53] = {
    [aux_sym_fieldset_repeat1] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(80),
    [sym_item] = STATE(59),
    [aux_sym_list_repeat1] = STATE(59),
    [sym_comment] = STATE(80),
    [sym_key] = ACTIONS(103),
    [sym__sectionDescend] = ACTIONS(103),
    [sym_itemOperator] = ACTIONS(227),
    [sym__emptyLine] = ACTIONS(236),
    [sym_commentOperator] = ACTIONS(107),
    [sym__sectionAscend] = ACTIONS(103),
  },
  [54] = {
    [sym_key] = ACTIONS(109),
    [sym__sectionDescend] = ACTIONS(109),
    [sym__emptyLine] = ACTIONS(111),
    [sym_commentOperator] = ACTIONS(111),
    [sym__sectionAscend] = ACTIONS(109),
  },
  [55] = {
    [aux_sym_fieldset_repeat1] = STATE(55),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(55),
    [sym_comment] = STATE(55),
    [sym__emptyLine] = ACTIONS(238),
    [sym_commentOperator] = ACTIONS(241),
    [sym_itemOperator] = ACTIONS(129),
  },
  [56] = {
    [sym_key] = ACTIONS(139),
    [sym__sectionDescend] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(141),
    [sym_commentOperator] = ACTIONS(141),
    [sym__sectionAscend] = ACTIONS(139),
  },
  [57] = {
    [sym_key] = ACTIONS(143),
    [sym_itemOperator] = ACTIONS(145),
    [sym__sectionDescend] = ACTIONS(143),
    [sym__emptyLine] = ACTIONS(145),
    [sym_commentOperator] = ACTIONS(145),
    [sym__sectionAscend] = ACTIONS(143),
  },
  [58] = {
    [aux_sym_fieldset_repeat1] = STATE(79),
    [sym_entry] = STATE(58),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(79),
    [aux_sym_fieldset_repeat2] = STATE(58),
    [sym_comment] = STATE(79),
    [sym_key] = ACTIONS(244),
    [sym__sectionDescend] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(247),
    [sym_commentOperator] = ACTIONS(153),
    [sym__sectionAscend] = ACTIONS(139),
  },
  [59] = {
    [aux_sym_fieldset_repeat1] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(80),
    [sym_item] = STATE(59),
    [aux_sym_list_repeat1] = STATE(59),
    [sym_comment] = STATE(80),
    [sym_key] = ACTIONS(143),
    [sym_itemOperator] = ACTIONS(250),
    [sym__sectionDescend] = ACTIONS(143),
    [sym__emptyLine] = ACTIONS(253),
    [sym_commentOperator] = ACTIONS(168),
    [sym__sectionAscend] = ACTIONS(143),
  },
  [60] = {
    [sym_key] = ACTIONS(171),
    [sym__sectionDescend] = ACTIONS(171),
    [sym__emptyLine] = ACTIONS(173),
    [sym_commentOperator] = ACTIONS(173),
    [sym__sectionAscend] = ACTIONS(171),
  },
  [61] = {
    [sym_key] = ACTIONS(183),
    [sym_itemOperator] = ACTIONS(185),
    [sym__sectionDescend] = ACTIONS(183),
    [sym__emptyLine] = ACTIONS(185),
    [sym_commentOperator] = ACTIONS(185),
    [sym__sectionAscend] = ACTIONS(183),
  },
  [62] = {
    [sym_key] = ACTIONS(187),
    [sym__sectionDescend] = ACTIONS(187),
    [sym__emptyLine] = ACTIONS(189),
    [sym_commentOperator] = ACTIONS(189),
    [sym__sectionAscend] = ACTIONS(187),
  },
  [63] = {
    [sym_key] = ACTIONS(195),
    [sym__sectionDescend] = ACTIONS(195),
    [sym__emptyLine] = ACTIONS(197),
    [sym_commentOperator] = ACTIONS(197),
    [sym__sectionAscend] = ACTIONS(195),
  },
  [64] = {
    [sym_key] = ACTIONS(199),
    [sym__sectionDescend] = ACTIONS(199),
    [sym__emptyLine] = ACTIONS(201),
    [sym_commentOperator] = ACTIONS(201),
    [sym__sectionAscend] = ACTIONS(199),
  },
  [65] = {
    [sym_key] = ACTIONS(205),
    [sym__sectionDescend] = ACTIONS(205),
    [sym__emptyLine] = ACTIONS(207),
    [sym_commentOperator] = ACTIONS(207),
    [sym__sectionAscend] = ACTIONS(205),
  },
  [66] = {
    [aux_sym_comment_repeat1] = STATE(67),
    [sym__emptyLine] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(160),
    [sym_itemOperator] = ACTIONS(27),
  },
  [67] = {
    [aux_sym_comment_repeat1] = STATE(67),
    [sym__emptyLine] = ACTIONS(57),
    [sym_commentOperator] = ACTIONS(256),
    [sym_itemOperator] = ACTIONS(57),
  },
  [68] = {
    [sym__emptyLine] = ACTIONS(85),
    [sym_commentOperator] = ACTIONS(85),
    [sym_itemOperator] = ACTIONS(85),
  },
  [69] = {
    [aux_sym_comment_repeat1] = STATE(70),
    [sym_key] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(27),
  },
  [70] = {
    [aux_sym_comment_repeat1] = STATE(70),
    [sym_key] = ACTIONS(57),
    [sym__sectionDescend] = ACTIONS(57),
    [sym__emptyLine] = ACTIONS(59),
    [sym_commentOperator] = ACTIONS(259),
    [sym__sectionAscend] = ACTIONS(57),
  },
  [71] = {
    [sym_key] = ACTIONS(85),
    [sym__sectionDescend] = ACTIONS(85),
    [sym__emptyLine] = ACTIONS(87),
    [sym_commentOperator] = ACTIONS(87),
    [sym__sectionAscend] = ACTIONS(85),
  },
  [72] = {
    [sym__endOfLine] = ACTIONS(262),
    [sym_elementOperator] = ACTIONS(264),
  },
  [73] = {
    [sym__endOfLine] = ACTIONS(266),
    [sym_token] = ACTIONS(268),
  },
  [74] = {
    [sym__endOfLine] = ACTIONS(270),
  },
  [75] = {
    [sym__endOfLine] = ACTIONS(272),
  },
  [76] = {
    [aux_sym_fieldset_repeat1] = STATE(28),
    [sym_entry] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(28),
    [sym_item] = STATE(57),
    [sym_comment] = STATE(28),
    [sym_key] = ACTIONS(232),
    [sym_itemOperator] = ACTIONS(227),
    [sym__emptyLine] = ACTIONS(95),
    [sym_commentOperator] = ACTIONS(97),
  },
  [77] = {
    [sym_element] = STATE(81),
    [sym_empty] = STATE(81),
    [sym_list] = STATE(81),
    [sym_comment] = STATE(81),
    [sym_section] = STATE(81),
    [aux_sym_document_repeat1] = STATE(81),
    [sym__commentOrEmpty] = STATE(81),
    [sym__instruction] = STATE(81),
    [sym_field] = STATE(81),
    [sym_fieldset] = STATE(81),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(113),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(276),
  },
  [78] = {
    [sym__endOfLine] = ACTIONS(278),
  },
  [79] = {
    [aux_sym_fieldset_repeat1] = STATE(28),
    [sym_entry] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(46),
    [sym__commentOrEmpty] = STATE(28),
    [sym_comment] = STATE(28),
    [sym__emptyLine] = ACTIONS(95),
    [sym_key] = ACTIONS(232),
    [sym_commentOperator] = ACTIONS(97),
  },
  [80] = {
    [aux_sym_fieldset_repeat1] = STATE(55),
    [aux_sym_comment_repeat1] = STATE(66),
    [sym__commentOrEmpty] = STATE(55),
    [sym_item] = STATE(57),
    [sym_comment] = STATE(55),
    [sym__emptyLine] = ACTIONS(156),
    [sym_itemOperator] = ACTIONS(280),
    [sym_commentOperator] = ACTIONS(160),
  },
  [81] = {
    [sym_element] = STATE(48),
    [sym_empty] = STATE(48),
    [sym_list] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_section] = STATE(48),
    [aux_sym_document_repeat1] = STATE(48),
    [sym__commentOrEmpty] = STATE(48),
    [sym__instruction] = STATE(48),
    [sym_field] = STATE(48),
    [sym_fieldset] = STATE(48),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(113),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(175),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(282),
  },
  [82] = {
    [sym__endOfLine] = ACTIONS(284),
  },
  [83] = {
    [sym_element] = STATE(84),
    [sym_empty] = STATE(84),
    [sym_list] = STATE(84),
    [sym_comment] = STATE(84),
    [sym_section] = STATE(84),
    [aux_sym_document_repeat1] = STATE(84),
    [sym__commentOrEmpty] = STATE(84),
    [sym__instruction] = STATE(84),
    [sym_field] = STATE(84),
    [sym_fieldset] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(113),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(286),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(288),
  },
  [84] = {
    [sym_element] = STATE(48),
    [sym_empty] = STATE(48),
    [sym_list] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_section] = STATE(48),
    [aux_sym_document_repeat1] = STATE(48),
    [sym__commentOrEmpty] = STATE(48),
    [sym__instruction] = STATE(48),
    [sym_field] = STATE(48),
    [sym_fieldset] = STATE(48),
    [aux_sym_comment_repeat1] = STATE(69),
    [sym_key] = ACTIONS(113),
    [sym__sectionDescend] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(175),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(290),
  },
  [85] = {
    [sym__endOfLine] = ACTIONS(292),
  },
  [86] = {
    [sym__endOfLine] = ACTIONS(294),
  },
  [87] = {
    [sym_token] = ACTIONS(296),
  },
  [88] = {
    [sym__endOfLine] = ACTIONS(298),
    [sym_copyOperator] = ACTIONS(300),
    [sym_deepCopyOperator] = ACTIONS(302),
  },
  [89] = {
    [sym_token] = ACTIONS(304),
  },
  [90] = {
    [sym_token] = ACTIONS(306),
  },
  [91] = {
    [sym__endOfLine] = ACTIONS(308),
  },
  [92] = {
    [sym_token] = ACTIONS(310),
  },
  [93] = {
    [sym_token] = ACTIONS(312),
  },
  [94] = {
    [sym_key] = ACTIONS(314),
  },
  [95] = {
    [sym_entryOperator] = ACTIONS(316),
  },
  [96] = {
    [sym_token] = ACTIONS(318),
  },
  [97] = {
    [sym_sectionOperator] = ACTIONS(320),
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
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [59] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [64] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(18),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [69] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(20),
  [72] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(87),
  [75] = {.count = 1, .reusable = false}, SHIFT(19),
  [77] = {.count = 1, .reusable = true}, SHIFT(23),
  [79] = {.count = 1, .reusable = true}, SHIFT(24),
  [81] = {.count = 1, .reusable = false}, SHIFT(25),
  [83] = {.count = 1, .reusable = true}, SHIFT(25),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(26),
  [91] = {.count = 1, .reusable = true}, SHIFT(27),
  [93] = {.count = 1, .reusable = true}, SHIFT(18),
  [95] = {.count = 1, .reusable = false}, SHIFT(28),
  [97] = {.count = 1, .reusable = false}, SHIFT(87),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [101] = {.count = 1, .reusable = false}, SHIFT(31),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [105] = {.count = 1, .reusable = false}, SHIFT(33),
  [107] = {.count = 1, .reusable = false}, SHIFT(92),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2),
  [113] = {.count = 1, .reusable = true}, SHIFT(72),
  [115] = {.count = 1, .reusable = true}, SHIFT(97),
  [117] = {.count = 1, .reusable = false}, SHIFT(36),
  [119] = {.count = 1, .reusable = false}, SHIFT(93),
  [121] = {.count = 1, .reusable = true}, SHIFT(35),
  [123] = {.count = 1, .reusable = true}, SHIFT(37),
  [125] = {.count = 1, .reusable = true}, SHIFT(38),
  [127] = {.count = 1, .reusable = true}, SHIFT(39),
  [129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [133] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(28),
  [136] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(87),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat2, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat2, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(18),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(31),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(87),
  [156] = {.count = 1, .reusable = true}, SHIFT(55),
  [158] = {.count = 1, .reusable = true}, SHIFT(19),
  [160] = {.count = 1, .reusable = true}, SHIFT(92),
  [162] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [165] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(33),
  [168] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(92),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [175] = {.count = 1, .reusable = false}, SHIFT(48),
  [177] = {.count = 1, .reusable = true}, SHIFT(40),
  [179] = {.count = 1, .reusable = true}, SHIFT(41),
  [181] = {.count = 1, .reusable = true}, SHIFT(42),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 3),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [191] = {.count = 1, .reusable = false}, SHIFT(44),
  [193] = {.count = 1, .reusable = true}, SHIFT(43),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 2),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 4),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 4),
  [203] = {.count = 1, .reusable = true}, SHIFT(45),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 4),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 4),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(97),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(87),
  [224] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(95),
  [227] = {.count = 1, .reusable = false}, SHIFT(89),
  [229] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(76),
  [232] = {.count = 1, .reusable = true}, SHIFT(95),
  [234] = {.count = 1, .reusable = false}, SHIFT(79),
  [236] = {.count = 1, .reusable = false}, SHIFT(80),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(55),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(92),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(95),
  [247] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat2, 2), SHIFT_REPEAT(79),
  [250] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(89),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(80),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(92),
  [259] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(93),
  [262] = {.count = 1, .reusable = true}, SHIFT(47),
  [264] = {.count = 1, .reusable = true}, SHIFT(73),
  [266] = {.count = 1, .reusable = true}, SHIFT(50),
  [268] = {.count = 1, .reusable = true}, SHIFT(75),
  [270] = {.count = 1, .reusable = true}, SHIFT(51),
  [272] = {.count = 1, .reusable = true}, SHIFT(54),
  [274] = {.count = 1, .reusable = false}, SHIFT(81),
  [276] = {.count = 1, .reusable = true}, SHIFT(60),
  [278] = {.count = 1, .reusable = true}, SHIFT(61),
  [280] = {.count = 1, .reusable = true}, SHIFT(89),
  [282] = {.count = 1, .reusable = true}, SHIFT(62),
  [284] = {.count = 1, .reusable = true}, SHIFT(63),
  [286] = {.count = 1, .reusable = false}, SHIFT(84),
  [288] = {.count = 1, .reusable = true}, SHIFT(64),
  [290] = {.count = 1, .reusable = true}, SHIFT(65),
  [292] = {.count = 1, .reusable = true}, SHIFT(68),
  [294] = {.count = 1, .reusable = true}, SHIFT(71),
  [296] = {.count = 1, .reusable = true}, SHIFT(74),
  [298] = {.count = 1, .reusable = true}, SHIFT(77),
  [300] = {.count = 1, .reusable = false}, SHIFT(96),
  [302] = {.count = 1, .reusable = true}, SHIFT(96),
  [304] = {.count = 1, .reusable = true}, SHIFT(78),
  [306] = {.count = 1, .reusable = true}, SHIFT(82),
  [308] = {.count = 1, .reusable = true}, SHIFT(83),
  [310] = {.count = 1, .reusable = true}, SHIFT(85),
  [312] = {.count = 1, .reusable = true}, SHIFT(86),
  [314] = {.count = 1, .reusable = true}, SHIFT(88),
  [316] = {.count = 1, .reusable = true}, SHIFT(90),
  [318] = {.count = 1, .reusable = true}, SHIFT(91),
  [320] = {.count = 1, .reusable = true}, SHIFT(94),
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
