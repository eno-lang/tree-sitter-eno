#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 118
#define SYMBOL_COUNT 35
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
  sym_continuation = 20,
  sym_element = 21,
  sym_empty = 22,
  sym_entry = 23,
  sym_field = 24,
  sym_fieldset = 25,
  sym_item = 26,
  sym_list = 27,
  sym_section = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_comment_repeat1 = 30,
  aux_sym_entry_repeat1 = 31,
  aux_sym_entry_repeat2 = 32,
  aux_sym_fieldset_repeat1 = 33,
  aux_sym_list_repeat1 = 34,
  anon_alias_sym_template = 35,
  anon_alias_sym_comment = 36,
  anon_alias_sym_value = 37,
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
  [sym_continuation] = "continuation",
  [sym_element] = "element",
  [sym_empty] = "empty",
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym_fieldset] = "fieldset",
  [sym_item] = "item",
  [sym_list] = "list",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_entry_repeat2] = "entry_repeat2",
  [aux_sym_fieldset_repeat1] = "fieldset_repeat1",
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
  [sym_continuation] = {
    .visible = true,
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
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldset_repeat1] = {
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
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(10);
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
          lookahead != '=')
        ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(8);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(10);
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
          lookahead != '=')
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
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(10);
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
          lookahead != '=')
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
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '|')
        ADVANCE(10);
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
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 0},
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
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 13, .external_lex_state = 4},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 13, .external_lex_state = 2},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13, .external_lex_state = 2},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 13, .external_lex_state = 2},
  [37] = {.lex_state = 13, .external_lex_state = 2},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 13, .external_lex_state = 2},
  [41] = {.lex_state = 13, .external_lex_state = 2},
  [42] = {.lex_state = 13, .external_lex_state = 2},
  [43] = {.lex_state = 13, .external_lex_state = 4},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 13, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 13, .external_lex_state = 2},
  [48] = {.lex_state = 13, .external_lex_state = 2},
  [49] = {.lex_state = 13, .external_lex_state = 4},
  [50] = {.lex_state = 13, .external_lex_state = 2},
  [51] = {.lex_state = 13, .external_lex_state = 2},
  [52] = {.lex_state = 13, .external_lex_state = 2},
  [53] = {.lex_state = 13, .external_lex_state = 4},
  [54] = {.lex_state = 13, .external_lex_state = 2},
  [55] = {.lex_state = 13, .external_lex_state = 2},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13, .external_lex_state = 4},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13, .external_lex_state = 4},
  [60] = {.lex_state = 13, .external_lex_state = 4},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 13, .external_lex_state = 4},
  [63] = {.lex_state = 13, .external_lex_state = 4},
  [64] = {.lex_state = 13, .external_lex_state = 4},
  [65] = {.lex_state = 13, .external_lex_state = 4},
  [66] = {.lex_state = 13, .external_lex_state = 4},
  [67] = {.lex_state = 13, .external_lex_state = 4},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 13, .external_lex_state = 4},
  [70] = {.lex_state = 13, .external_lex_state = 4},
  [71] = {.lex_state = 13, .external_lex_state = 4},
  [72] = {.lex_state = 13, .external_lex_state = 4},
  [73] = {.lex_state = 13, .external_lex_state = 4},
  [74] = {.lex_state = 13, .external_lex_state = 4},
  [75] = {.lex_state = 13, .external_lex_state = 4},
  [76] = {.lex_state = 13, .external_lex_state = 4},
  [77] = {.lex_state = 13, .external_lex_state = 4},
  [78] = {.lex_state = 13, .external_lex_state = 4},
  [79] = {.lex_state = 13, .external_lex_state = 4},
  [80] = {.lex_state = 13, .external_lex_state = 4},
  [81] = {.lex_state = 13, .external_lex_state = 4},
  [82] = {.lex_state = 13, .external_lex_state = 4},
  [83] = {.lex_state = 28},
  [84] = {.lex_state = 28},
  [85] = {.lex_state = 28},
  [86] = {.lex_state = 13, .external_lex_state = 4},
  [87] = {.lex_state = 13, .external_lex_state = 4},
  [88] = {.lex_state = 13, .external_lex_state = 4},
  [89] = {.lex_state = 19, .external_lex_state = 3},
  [90] = {.lex_state = 21, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 28},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 28},
  [100] = {.lex_state = 13, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 13, .external_lex_state = 4},
  [103] = {.lex_state = 13, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 26, .external_lex_state = 3},
  [108] = {.lex_state = 21},
  [109] = {.lex_state = 21},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 21},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 20},
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
    [aux_sym_comment_repeat1] = STATE(5),
    [sym_comment] = STATE(7),
    [sym_fieldset] = STATE(7),
    [sym_document] = STATE(6),
    [sym_element] = STATE(7),
    [sym_empty] = STATE(7),
    [sym_list] = STATE(7),
    [sym_section] = STATE(7),
    [sym__commentOrEmpty] = STATE(7),
    [sym__instruction] = STATE(7),
    [sym_field] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
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
    [aux_sym_comment_repeat1] = STATE(12),
    [sym_key] = ACTIONS(21),
    [sym__sectionDescend] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__emptyLine] = ACTIONS(23),
    [sym_commentOperator] = ACTIONS(11),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [aux_sym_comment_repeat1] = STATE(5),
    [sym_comment] = STATE(13),
    [sym_fieldset] = STATE(13),
    [sym_element] = STATE(13),
    [sym_empty] = STATE(13),
    [sym_list] = STATE(13),
    [sym_section] = STATE(13),
    [sym__commentOrEmpty] = STATE(13),
    [sym__instruction] = STATE(13),
    [sym_field] = STATE(13),
    [aux_sym_document_repeat1] = STATE(13),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(7),
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
    [aux_sym_comment_repeat1] = STATE(12),
    [sym_key] = ACTIONS(43),
    [sym__sectionDescend] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym__emptyLine] = ACTIONS(45),
    [sym_commentOperator] = ACTIONS(47),
  },
  [13] = {
    [aux_sym_comment_repeat1] = STATE(5),
    [sym_comment] = STATE(13),
    [sym_fieldset] = STATE(13),
    [sym_element] = STATE(13),
    [sym_empty] = STATE(13),
    [sym_list] = STATE(13),
    [sym_section] = STATE(13),
    [sym__commentOrEmpty] = STATE(13),
    [sym__instruction] = STATE(13),
    [sym_field] = STATE(13),
    [aux_sym_document_repeat1] = STATE(13),
    [sym_key] = ACTIONS(50),
    [sym__sectionDescend] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym__emptyLine] = ACTIONS(58),
    [sym_commentOperator] = ACTIONS(61),
  },
  [14] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(21),
    [sym_continuation] = STATE(22),
    [sym_item] = STATE(24),
    [aux_sym_entry_repeat1] = STATE(21),
    [aux_sym_entry_repeat2] = STATE(22),
    [sym__commentOrEmpty] = STATE(21),
    [aux_sym_fieldset_repeat1] = STATE(23),
    [sym_entry] = STATE(23),
    [aux_sym_list_repeat1] = STATE(24),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_itemOperator] = ACTIONS(66),
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_directContinuationOperator] = ACTIONS(64),
    [sym__emptyLine] = ACTIONS(70),
    [sym_commentOperator] = ACTIONS(73),
    [sym_key] = ACTIONS(76),
    [sym__sectionDescend] = ACTIONS(68),
  },
  [15] = {
    [sym__endOfLine] = ACTIONS(79),
  },
  [16] = {
    [sym__endOfLine] = ACTIONS(81),
    [sym_copyOperator] = ACTIONS(83),
    [sym_deepCopyOperator] = ACTIONS(85),
  },
  [17] = {
    [sym_key] = ACTIONS(87),
    [sym__sectionDescend] = ACTIONS(87),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym__emptyLine] = ACTIONS(89),
    [sym_commentOperator] = ACTIONS(89),
  },
  [18] = {
    [sym_token] = ACTIONS(91),
  },
  [19] = {
    [sym_entryOperator] = ACTIONS(93),
  },
  [20] = {
    [sym_token] = ACTIONS(95),
  },
  [21] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(33),
    [sym_continuation] = STATE(31),
    [sym__commentOrEmpty] = STATE(33),
    [sym_item] = STATE(32),
    [aux_sym_entry_repeat1] = STATE(33),
    [sym_entry] = STATE(34),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_key] = ACTIONS(97),
    [sym_itemOperator] = ACTIONS(66),
    [sym_directContinuationOperator] = ACTIONS(64),
    [sym__emptyLine] = ACTIONS(99),
    [sym_commentOperator] = ACTIONS(101),
  },
  [22] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_continuation] = STATE(36),
    [sym__commentOrEmpty] = STATE(35),
    [aux_sym_entry_repeat1] = STATE(35),
    [aux_sym_entry_repeat2] = STATE(36),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_key] = ACTIONS(103),
    [sym__sectionDescend] = ACTIONS(103),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym__emptyLine] = ACTIONS(105),
    [sym_commentOperator] = ACTIONS(108),
    [sym_directContinuationOperator] = ACTIONS(64),
  },
  [23] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(38),
    [sym__commentOrEmpty] = STATE(38),
    [aux_sym_fieldset_repeat1] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_entry] = STATE(37),
    [sym_key] = ACTIONS(97),
    [sym__sectionDescend] = ACTIONS(111),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym__emptyLine] = ACTIONS(113),
    [sym_commentOperator] = ACTIONS(101),
  },
  [24] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(39),
    [sym__commentOrEmpty] = STATE(39),
    [sym_item] = STATE(40),
    [aux_sym_entry_repeat1] = STATE(39),
    [aux_sym_list_repeat1] = STATE(40),
    [sym_key] = ACTIONS(115),
    [sym__sectionDescend] = ACTIONS(115),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym__emptyLine] = ACTIONS(117),
    [sym_commentOperator] = ACTIONS(119),
    [sym_itemOperator] = ACTIONS(66),
  },
  [25] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_continuation] = STATE(41),
    [sym__commentOrEmpty] = STATE(35),
    [aux_sym_entry_repeat1] = STATE(35),
    [aux_sym_entry_repeat2] = STATE(41),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_key] = ACTIONS(121),
    [sym__sectionDescend] = ACTIONS(121),
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym__emptyLine] = ACTIONS(123),
    [sym_commentOperator] = ACTIONS(126),
    [sym_directContinuationOperator] = ACTIONS(64),
  },
  [26] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(43),
    [sym_fieldset] = STATE(43),
    [sym_element] = STATE(43),
    [sym_empty] = STATE(43),
    [sym_list] = STATE(43),
    [sym_section] = STATE(43),
    [sym__commentOrEmpty] = STATE(43),
    [sym__instruction] = STATE(43),
    [sym_field] = STATE(43),
    [aux_sym_document_repeat1] = STATE(43),
    [sym_key] = ACTIONS(129),
    [sym__sectionDescend] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(133),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(137),
  },
  [27] = {
    [sym_token] = ACTIONS(139),
  },
  [28] = {
    [sym__endOfLine] = ACTIONS(141),
  },
  [29] = {
    [sym_token] = ACTIONS(143),
  },
  [30] = {
    [sym__endOfLine] = ACTIONS(145),
  },
  [31] = {
    [sym_spacedContinuationOperator] = ACTIONS(147),
    [sym_itemOperator] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_directContinuationOperator] = ACTIONS(147),
    [sym__emptyLine] = ACTIONS(147),
    [sym_commentOperator] = ACTIONS(147),
    [sym_key] = ACTIONS(149),
    [sym__sectionDescend] = ACTIONS(149),
  },
  [32] = {
    [sym_key] = ACTIONS(151),
    [sym_itemOperator] = ACTIONS(153),
    [sym__sectionDescend] = ACTIONS(151),
    [sym__emptyLine] = ACTIONS(153),
    [sym_commentOperator] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(151),
  },
  [33] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(33),
    [sym__commentOrEmpty] = STATE(33),
    [aux_sym_entry_repeat1] = STATE(33),
    [sym_spacedContinuationOperator] = ACTIONS(155),
    [sym_itemOperator] = ACTIONS(155),
    [sym_directContinuationOperator] = ACTIONS(155),
    [sym__emptyLine] = ACTIONS(157),
    [sym_commentOperator] = ACTIONS(160),
    [sym_key] = ACTIONS(163),
  },
  [34] = {
    [sym_key] = ACTIONS(165),
    [sym__sectionDescend] = ACTIONS(165),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym__emptyLine] = ACTIONS(167),
    [sym_commentOperator] = ACTIONS(167),
  },
  [35] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(68),
    [sym_continuation] = STATE(31),
    [aux_sym_entry_repeat1] = STATE(68),
    [sym__commentOrEmpty] = STATE(68),
    [sym_spacedContinuationOperator] = ACTIONS(169),
    [sym_directContinuationOperator] = ACTIONS(169),
    [sym__emptyLine] = ACTIONS(171),
    [sym_commentOperator] = ACTIONS(173),
  },
  [36] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_continuation] = STATE(36),
    [aux_sym_entry_repeat1] = STATE(35),
    [aux_sym_entry_repeat2] = STATE(36),
    [sym__commentOrEmpty] = STATE(35),
    [sym_spacedContinuationOperator] = ACTIONS(175),
    [sym_itemOperator] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_directContinuationOperator] = ACTIONS(175),
    [sym__emptyLine] = ACTIONS(178),
    [sym_commentOperator] = ACTIONS(181),
    [sym_key] = ACTIONS(149),
    [sym__sectionDescend] = ACTIONS(149),
  },
  [37] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(38),
    [sym__commentOrEmpty] = STATE(38),
    [aux_sym_fieldset_repeat1] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_entry] = STATE(37),
    [sym_key] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(165),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym__emptyLine] = ACTIONS(187),
    [sym_commentOperator] = ACTIONS(190),
  },
  [38] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(33),
    [sym__commentOrEmpty] = STATE(33),
    [aux_sym_entry_repeat1] = STATE(33),
    [sym_entry] = STATE(34),
    [sym__emptyLine] = ACTIONS(99),
    [sym_key] = ACTIONS(97),
    [sym_commentOperator] = ACTIONS(101),
  },
  [39] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(68),
    [sym__commentOrEmpty] = STATE(68),
    [sym_item] = STATE(32),
    [aux_sym_entry_repeat1] = STATE(68),
    [sym__emptyLine] = ACTIONS(171),
    [sym_itemOperator] = ACTIONS(193),
    [sym_commentOperator] = ACTIONS(173),
  },
  [40] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(39),
    [sym__commentOrEmpty] = STATE(39),
    [sym_item] = STATE(40),
    [aux_sym_entry_repeat1] = STATE(39),
    [aux_sym_list_repeat1] = STATE(40),
    [sym_key] = ACTIONS(151),
    [sym_itemOperator] = ACTIONS(195),
    [sym__sectionDescend] = ACTIONS(151),
    [sym__emptyLine] = ACTIONS(198),
    [sym_commentOperator] = ACTIONS(201),
    [ts_builtin_sym_end] = ACTIONS(151),
  },
  [41] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_continuation] = STATE(36),
    [sym__commentOrEmpty] = STATE(35),
    [aux_sym_entry_repeat1] = STATE(35),
    [aux_sym_entry_repeat2] = STATE(36),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_key] = ACTIONS(204),
    [sym__sectionDescend] = ACTIONS(204),
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym__emptyLine] = ACTIONS(206),
    [sym_commentOperator] = ACTIONS(209),
    [sym_directContinuationOperator] = ACTIONS(64),
  },
  [42] = {
    [sym_key] = ACTIONS(212),
    [sym__sectionDescend] = ACTIONS(212),
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym__emptyLine] = ACTIONS(214),
    [sym_commentOperator] = ACTIONS(214),
  },
  [43] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(59),
    [sym_fieldset] = STATE(59),
    [sym_element] = STATE(59),
    [sym_empty] = STATE(59),
    [sym_list] = STATE(59),
    [sym_section] = STATE(59),
    [sym__commentOrEmpty] = STATE(59),
    [sym__instruction] = STATE(59),
    [sym_field] = STATE(59),
    [aux_sym_document_repeat1] = STATE(59),
    [sym_key] = ACTIONS(129),
    [sym__sectionDescend] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(216),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(218),
  },
  [44] = {
    [sym__endOfLine] = ACTIONS(220),
  },
  [45] = {
    [sym_spacedContinuationOperator] = ACTIONS(222),
    [sym_itemOperator] = ACTIONS(222),
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym_directContinuationOperator] = ACTIONS(222),
    [sym__emptyLine] = ACTIONS(222),
    [sym_commentOperator] = ACTIONS(222),
    [sym_key] = ACTIONS(224),
    [sym__sectionDescend] = ACTIONS(224),
  },
  [46] = {
    [sym__endOfLine] = ACTIONS(226),
  },
  [47] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_continuation] = STATE(51),
    [sym__commentOrEmpty] = STATE(35),
    [aux_sym_entry_repeat1] = STATE(35),
    [aux_sym_entry_repeat2] = STATE(51),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_itemOperator] = ACTIONS(228),
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_directContinuationOperator] = ACTIONS(64),
    [sym__emptyLine] = ACTIONS(232),
    [sym_commentOperator] = ACTIONS(235),
    [sym_key] = ACTIONS(230),
    [sym__sectionDescend] = ACTIONS(230),
  },
  [48] = {
    [sym_key] = ACTIONS(238),
    [sym__sectionDescend] = ACTIONS(238),
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym__emptyLine] = ACTIONS(240),
    [sym_commentOperator] = ACTIONS(240),
  },
  [49] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(53),
    [sym_fieldset] = STATE(53),
    [sym_element] = STATE(53),
    [sym_empty] = STATE(53),
    [sym_list] = STATE(53),
    [sym_section] = STATE(53),
    [sym__commentOrEmpty] = STATE(53),
    [sym__instruction] = STATE(53),
    [sym_field] = STATE(53),
    [aux_sym_document_repeat1] = STATE(53),
    [sym_key] = ACTIONS(129),
    [sym__sectionDescend] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(242),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(244),
  },
  [50] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_continuation] = STATE(54),
    [sym__commentOrEmpty] = STATE(35),
    [aux_sym_entry_repeat1] = STATE(35),
    [aux_sym_entry_repeat2] = STATE(54),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_key] = ACTIONS(246),
    [sym__sectionDescend] = ACTIONS(246),
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym__emptyLine] = ACTIONS(248),
    [sym_commentOperator] = ACTIONS(251),
    [sym_directContinuationOperator] = ACTIONS(64),
  },
  [51] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_continuation] = STATE(36),
    [sym__commentOrEmpty] = STATE(35),
    [aux_sym_entry_repeat1] = STATE(35),
    [aux_sym_entry_repeat2] = STATE(36),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_itemOperator] = ACTIONS(254),
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_directContinuationOperator] = ACTIONS(64),
    [sym__emptyLine] = ACTIONS(258),
    [sym_commentOperator] = ACTIONS(261),
    [sym_key] = ACTIONS(256),
    [sym__sectionDescend] = ACTIONS(256),
  },
  [52] = {
    [sym_key] = ACTIONS(264),
    [sym__sectionDescend] = ACTIONS(264),
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym__emptyLine] = ACTIONS(266),
    [sym_commentOperator] = ACTIONS(266),
  },
  [53] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(59),
    [sym_fieldset] = STATE(59),
    [sym_element] = STATE(59),
    [sym_empty] = STATE(59),
    [sym_list] = STATE(59),
    [sym_section] = STATE(59),
    [sym__commentOrEmpty] = STATE(59),
    [sym__instruction] = STATE(59),
    [sym_field] = STATE(59),
    [aux_sym_document_repeat1] = STATE(59),
    [sym_key] = ACTIONS(129),
    [sym__sectionDescend] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(216),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(268),
  },
  [54] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(35),
    [sym_continuation] = STATE(36),
    [sym__commentOrEmpty] = STATE(35),
    [aux_sym_entry_repeat1] = STATE(35),
    [aux_sym_entry_repeat2] = STATE(36),
    [sym_spacedContinuationOperator] = ACTIONS(64),
    [sym_key] = ACTIONS(270),
    [sym__sectionDescend] = ACTIONS(270),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym__emptyLine] = ACTIONS(272),
    [sym_commentOperator] = ACTIONS(275),
    [sym_directContinuationOperator] = ACTIONS(64),
  },
  [55] = {
    [sym_key] = ACTIONS(278),
    [sym__sectionDescend] = ACTIONS(278),
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym__emptyLine] = ACTIONS(280),
    [sym_commentOperator] = ACTIONS(280),
  },
  [56] = {
    [aux_sym_comment_repeat1] = STATE(58),
    [sym_spacedContinuationOperator] = ACTIONS(23),
    [sym_itemOperator] = ACTIONS(23),
    [sym_directContinuationOperator] = ACTIONS(23),
    [sym__emptyLine] = ACTIONS(23),
    [sym_commentOperator] = ACTIONS(101),
    [sym_key] = ACTIONS(21),
  },
  [57] = {
    [sym_key] = ACTIONS(31),
    [sym__sectionDescend] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(33),
    [sym__sectionAscend] = ACTIONS(31),
  },
  [58] = {
    [aux_sym_comment_repeat1] = STATE(58),
    [sym_spacedContinuationOperator] = ACTIONS(45),
    [sym_itemOperator] = ACTIONS(45),
    [sym_directContinuationOperator] = ACTIONS(45),
    [sym__emptyLine] = ACTIONS(45),
    [sym_commentOperator] = ACTIONS(282),
    [sym_key] = ACTIONS(43),
  },
  [59] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(59),
    [sym_fieldset] = STATE(59),
    [sym_element] = STATE(59),
    [sym_empty] = STATE(59),
    [sym_list] = STATE(59),
    [sym_section] = STATE(59),
    [sym__commentOrEmpty] = STATE(59),
    [sym__instruction] = STATE(59),
    [sym_field] = STATE(59),
    [aux_sym_document_repeat1] = STATE(59),
    [sym_key] = ACTIONS(285),
    [sym__sectionDescend] = ACTIONS(288),
    [sym__emptyLine] = ACTIONS(291),
    [sym_commentOperator] = ACTIONS(294),
    [sym__sectionAscend] = ACTIONS(56),
  },
  [60] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(93),
    [sym_continuation] = STATE(62),
    [sym_item] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(93),
    [aux_sym_entry_repeat2] = STATE(62),
    [sym__commentOrEmpty] = STATE(93),
    [aux_sym_fieldset_repeat1] = STATE(63),
    [sym_entry] = STATE(63),
    [aux_sym_list_repeat1] = STATE(64),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_itemOperator] = ACTIONS(299),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(301),
    [sym_commentOperator] = ACTIONS(73),
    [sym__sectionAscend] = ACTIONS(68),
    [sym_key] = ACTIONS(304),
    [sym__sectionDescend] = ACTIONS(68),
  },
  [61] = {
    [sym_spacedContinuationOperator] = ACTIONS(89),
    [sym_itemOperator] = ACTIONS(89),
    [sym_directContinuationOperator] = ACTIONS(89),
    [sym__emptyLine] = ACTIONS(89),
    [sym_commentOperator] = ACTIONS(89),
    [sym_key] = ACTIONS(87),
  },
  [62] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(97),
    [sym_continuation] = STATE(70),
    [sym__commentOrEmpty] = STATE(97),
    [aux_sym_entry_repeat1] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(70),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(103),
    [sym__sectionDescend] = ACTIONS(103),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(307),
    [sym_commentOperator] = ACTIONS(108),
    [sym__sectionAscend] = ACTIONS(103),
  },
  [63] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(98),
    [sym__commentOrEmpty] = STATE(98),
    [aux_sym_fieldset_repeat1] = STATE(71),
    [aux_sym_entry_repeat1] = STATE(98),
    [sym_entry] = STATE(71),
    [sym_key] = ACTIONS(310),
    [sym__sectionDescend] = ACTIONS(111),
    [sym__emptyLine] = ACTIONS(312),
    [sym_commentOperator] = ACTIONS(101),
    [sym__sectionAscend] = ACTIONS(111),
  },
  [64] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(99),
    [sym__commentOrEmpty] = STATE(99),
    [sym_item] = STATE(72),
    [aux_sym_entry_repeat1] = STATE(99),
    [aux_sym_list_repeat1] = STATE(72),
    [sym_key] = ACTIONS(115),
    [sym__sectionDescend] = ACTIONS(115),
    [sym_itemOperator] = ACTIONS(299),
    [sym__emptyLine] = ACTIONS(314),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(115),
  },
  [65] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(97),
    [sym_continuation] = STATE(73),
    [sym__commentOrEmpty] = STATE(97),
    [aux_sym_entry_repeat1] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(73),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(121),
    [sym__sectionDescend] = ACTIONS(121),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(316),
    [sym_commentOperator] = ACTIONS(126),
    [sym__sectionAscend] = ACTIONS(121),
  },
  [66] = {
    [sym_spacedContinuationOperator] = ACTIONS(147),
    [sym_itemOperator] = ACTIONS(147),
    [sym_directContinuationOperator] = ACTIONS(147),
    [sym__emptyLine] = ACTIONS(147),
    [sym_commentOperator] = ACTIONS(147),
    [sym__sectionAscend] = ACTIONS(149),
    [sym_key] = ACTIONS(149),
    [sym__sectionDescend] = ACTIONS(149),
  },
  [67] = {
    [sym_key] = ACTIONS(151),
    [sym_itemOperator] = ACTIONS(153),
    [sym__sectionDescend] = ACTIONS(151),
    [sym__emptyLine] = ACTIONS(153),
    [sym_commentOperator] = ACTIONS(153),
    [sym__sectionAscend] = ACTIONS(151),
  },
  [68] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(68),
    [sym__commentOrEmpty] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(68),
    [sym_spacedContinuationOperator] = ACTIONS(163),
    [sym_itemOperator] = ACTIONS(163),
    [sym_directContinuationOperator] = ACTIONS(163),
    [sym__emptyLine] = ACTIONS(319),
    [sym_commentOperator] = ACTIONS(322),
  },
  [69] = {
    [sym_key] = ACTIONS(165),
    [sym__sectionDescend] = ACTIONS(165),
    [sym__emptyLine] = ACTIONS(167),
    [sym_commentOperator] = ACTIONS(167),
    [sym__sectionAscend] = ACTIONS(165),
  },
  [70] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(97),
    [sym_continuation] = STATE(70),
    [aux_sym_entry_repeat1] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(70),
    [sym__commentOrEmpty] = STATE(97),
    [sym_spacedContinuationOperator] = ACTIONS(325),
    [sym_itemOperator] = ACTIONS(147),
    [sym_directContinuationOperator] = ACTIONS(325),
    [sym__emptyLine] = ACTIONS(328),
    [sym_commentOperator] = ACTIONS(181),
    [sym__sectionAscend] = ACTIONS(149),
    [sym_key] = ACTIONS(149),
    [sym__sectionDescend] = ACTIONS(149),
  },
  [71] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(98),
    [sym__commentOrEmpty] = STATE(98),
    [aux_sym_fieldset_repeat1] = STATE(71),
    [aux_sym_entry_repeat1] = STATE(98),
    [sym_entry] = STATE(71),
    [sym_key] = ACTIONS(331),
    [sym__sectionDescend] = ACTIONS(165),
    [sym__emptyLine] = ACTIONS(334),
    [sym_commentOperator] = ACTIONS(190),
    [sym__sectionAscend] = ACTIONS(165),
  },
  [72] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(99),
    [sym__commentOrEmpty] = STATE(99),
    [sym_item] = STATE(72),
    [aux_sym_entry_repeat1] = STATE(99),
    [aux_sym_list_repeat1] = STATE(72),
    [sym_key] = ACTIONS(151),
    [sym_itemOperator] = ACTIONS(337),
    [sym__sectionDescend] = ACTIONS(151),
    [sym__emptyLine] = ACTIONS(340),
    [sym_commentOperator] = ACTIONS(201),
    [sym__sectionAscend] = ACTIONS(151),
  },
  [73] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(97),
    [sym_continuation] = STATE(70),
    [sym__commentOrEmpty] = STATE(97),
    [aux_sym_entry_repeat1] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(70),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(204),
    [sym__sectionDescend] = ACTIONS(204),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(343),
    [sym_commentOperator] = ACTIONS(209),
    [sym__sectionAscend] = ACTIONS(204),
  },
  [74] = {
    [sym_key] = ACTIONS(212),
    [sym__sectionDescend] = ACTIONS(212),
    [sym__emptyLine] = ACTIONS(214),
    [sym_commentOperator] = ACTIONS(214),
    [sym__sectionAscend] = ACTIONS(212),
  },
  [75] = {
    [sym_spacedContinuationOperator] = ACTIONS(222),
    [sym_itemOperator] = ACTIONS(222),
    [sym_directContinuationOperator] = ACTIONS(222),
    [sym__emptyLine] = ACTIONS(222),
    [sym_commentOperator] = ACTIONS(222),
    [sym__sectionAscend] = ACTIONS(224),
    [sym_key] = ACTIONS(224),
    [sym__sectionDescend] = ACTIONS(224),
  },
  [76] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(97),
    [sym_continuation] = STATE(79),
    [sym__commentOrEmpty] = STATE(97),
    [aux_sym_entry_repeat1] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(79),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_itemOperator] = ACTIONS(228),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(346),
    [sym_commentOperator] = ACTIONS(235),
    [sym__sectionAscend] = ACTIONS(230),
    [sym_key] = ACTIONS(230),
    [sym__sectionDescend] = ACTIONS(230),
  },
  [77] = {
    [sym_key] = ACTIONS(238),
    [sym__sectionDescend] = ACTIONS(238),
    [sym__emptyLine] = ACTIONS(240),
    [sym_commentOperator] = ACTIONS(240),
    [sym__sectionAscend] = ACTIONS(238),
  },
  [78] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(97),
    [sym_continuation] = STATE(81),
    [sym__commentOrEmpty] = STATE(97),
    [aux_sym_entry_repeat1] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(81),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(246),
    [sym__sectionDescend] = ACTIONS(246),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(349),
    [sym_commentOperator] = ACTIONS(251),
    [sym__sectionAscend] = ACTIONS(246),
  },
  [79] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(97),
    [sym_continuation] = STATE(70),
    [sym__commentOrEmpty] = STATE(97),
    [aux_sym_entry_repeat1] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(70),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_itemOperator] = ACTIONS(254),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(352),
    [sym_commentOperator] = ACTIONS(261),
    [sym__sectionAscend] = ACTIONS(256),
    [sym_key] = ACTIONS(256),
    [sym__sectionDescend] = ACTIONS(256),
  },
  [80] = {
    [sym_key] = ACTIONS(264),
    [sym__sectionDescend] = ACTIONS(264),
    [sym__emptyLine] = ACTIONS(266),
    [sym_commentOperator] = ACTIONS(266),
    [sym__sectionAscend] = ACTIONS(264),
  },
  [81] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(97),
    [sym_continuation] = STATE(70),
    [sym__commentOrEmpty] = STATE(97),
    [aux_sym_entry_repeat1] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(70),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(270),
    [sym__sectionDescend] = ACTIONS(270),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(355),
    [sym_commentOperator] = ACTIONS(275),
    [sym__sectionAscend] = ACTIONS(270),
  },
  [82] = {
    [sym_key] = ACTIONS(278),
    [sym__sectionDescend] = ACTIONS(278),
    [sym__emptyLine] = ACTIONS(280),
    [sym_commentOperator] = ACTIONS(280),
    [sym__sectionAscend] = ACTIONS(278),
  },
  [83] = {
    [aux_sym_comment_repeat1] = STATE(84),
    [sym_spacedContinuationOperator] = ACTIONS(21),
    [sym_itemOperator] = ACTIONS(21),
    [sym_directContinuationOperator] = ACTIONS(21),
    [sym__emptyLine] = ACTIONS(21),
    [sym_commentOperator] = ACTIONS(173),
  },
  [84] = {
    [aux_sym_comment_repeat1] = STATE(84),
    [sym_spacedContinuationOperator] = ACTIONS(43),
    [sym_itemOperator] = ACTIONS(43),
    [sym_directContinuationOperator] = ACTIONS(43),
    [sym__emptyLine] = ACTIONS(43),
    [sym_commentOperator] = ACTIONS(358),
  },
  [85] = {
    [sym_spacedContinuationOperator] = ACTIONS(87),
    [sym_itemOperator] = ACTIONS(87),
    [sym_directContinuationOperator] = ACTIONS(87),
    [sym__emptyLine] = ACTIONS(87),
    [sym_commentOperator] = ACTIONS(87),
  },
  [86] = {
    [aux_sym_comment_repeat1] = STATE(87),
    [sym_key] = ACTIONS(21),
    [sym__sectionDescend] = ACTIONS(21),
    [sym__emptyLine] = ACTIONS(23),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(21),
  },
  [87] = {
    [aux_sym_comment_repeat1] = STATE(87),
    [sym_key] = ACTIONS(43),
    [sym__sectionDescend] = ACTIONS(43),
    [sym__emptyLine] = ACTIONS(45),
    [sym_commentOperator] = ACTIONS(361),
    [sym__sectionAscend] = ACTIONS(43),
  },
  [88] = {
    [sym_key] = ACTIONS(87),
    [sym__sectionDescend] = ACTIONS(87),
    [sym__emptyLine] = ACTIONS(89),
    [sym_commentOperator] = ACTIONS(89),
    [sym__sectionAscend] = ACTIONS(87),
  },
  [89] = {
    [sym__endOfLine] = ACTIONS(364),
    [sym_elementOperator] = ACTIONS(366),
  },
  [90] = {
    [sym__endOfLine] = ACTIONS(368),
    [sym_token] = ACTIONS(370),
  },
  [91] = {
    [sym__endOfLine] = ACTIONS(372),
  },
  [92] = {
    [sym__endOfLine] = ACTIONS(374),
  },
  [93] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(33),
    [sym_continuation] = STATE(66),
    [sym__commentOrEmpty] = STATE(33),
    [sym_item] = STATE(67),
    [aux_sym_entry_repeat1] = STATE(33),
    [sym_entry] = STATE(69),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(310),
    [sym_itemOperator] = ACTIONS(299),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(99),
    [sym_commentOperator] = ACTIONS(101),
  },
  [94] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(100),
    [sym_fieldset] = STATE(100),
    [sym_element] = STATE(100),
    [sym_empty] = STATE(100),
    [sym_list] = STATE(100),
    [sym_section] = STATE(100),
    [sym__commentOrEmpty] = STATE(100),
    [sym__instruction] = STATE(100),
    [sym_field] = STATE(100),
    [aux_sym_document_repeat1] = STATE(100),
    [sym_key] = ACTIONS(129),
    [sym__sectionDescend] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(376),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(378),
  },
  [95] = {
    [sym__endOfLine] = ACTIONS(380),
  },
  [96] = {
    [sym__endOfLine] = ACTIONS(382),
  },
  [97] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(68),
    [sym_continuation] = STATE(66),
    [aux_sym_entry_repeat1] = STATE(68),
    [sym__commentOrEmpty] = STATE(68),
    [sym_spacedContinuationOperator] = ACTIONS(384),
    [sym_directContinuationOperator] = ACTIONS(384),
    [sym__emptyLine] = ACTIONS(171),
    [sym_commentOperator] = ACTIONS(173),
  },
  [98] = {
    [aux_sym_comment_repeat1] = STATE(56),
    [sym_comment] = STATE(33),
    [sym__commentOrEmpty] = STATE(33),
    [aux_sym_entry_repeat1] = STATE(33),
    [sym_entry] = STATE(69),
    [sym__emptyLine] = ACTIONS(99),
    [sym_key] = ACTIONS(310),
    [sym_commentOperator] = ACTIONS(101),
  },
  [99] = {
    [aux_sym_comment_repeat1] = STATE(83),
    [sym_comment] = STATE(68),
    [sym__commentOrEmpty] = STATE(68),
    [sym_item] = STATE(67),
    [aux_sym_entry_repeat1] = STATE(68),
    [sym__emptyLine] = ACTIONS(171),
    [sym_itemOperator] = ACTIONS(386),
    [sym_commentOperator] = ACTIONS(173),
  },
  [100] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(59),
    [sym_fieldset] = STATE(59),
    [sym_element] = STATE(59),
    [sym_empty] = STATE(59),
    [sym_list] = STATE(59),
    [sym_section] = STATE(59),
    [sym__commentOrEmpty] = STATE(59),
    [sym__instruction] = STATE(59),
    [sym_field] = STATE(59),
    [aux_sym_document_repeat1] = STATE(59),
    [sym_key] = ACTIONS(129),
    [sym__sectionDescend] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(216),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(388),
  },
  [101] = {
    [sym__endOfLine] = ACTIONS(390),
  },
  [102] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(103),
    [sym_fieldset] = STATE(103),
    [sym_element] = STATE(103),
    [sym_empty] = STATE(103),
    [sym_list] = STATE(103),
    [sym_section] = STATE(103),
    [sym__commentOrEmpty] = STATE(103),
    [sym__instruction] = STATE(103),
    [sym_field] = STATE(103),
    [aux_sym_document_repeat1] = STATE(103),
    [sym_key] = ACTIONS(129),
    [sym__sectionDescend] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(392),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(394),
  },
  [103] = {
    [aux_sym_comment_repeat1] = STATE(86),
    [sym_comment] = STATE(59),
    [sym_fieldset] = STATE(59),
    [sym_element] = STATE(59),
    [sym_empty] = STATE(59),
    [sym_list] = STATE(59),
    [sym_section] = STATE(59),
    [sym__commentOrEmpty] = STATE(59),
    [sym__instruction] = STATE(59),
    [sym_field] = STATE(59),
    [aux_sym_document_repeat1] = STATE(59),
    [sym_key] = ACTIONS(129),
    [sym__sectionDescend] = ACTIONS(131),
    [sym__emptyLine] = ACTIONS(216),
    [sym_commentOperator] = ACTIONS(135),
    [sym__sectionAscend] = ACTIONS(396),
  },
  [104] = {
    [sym__endOfLine] = ACTIONS(398),
  },
  [105] = {
    [sym__endOfLine] = ACTIONS(400),
  },
  [106] = {
    [sym_token] = ACTIONS(402),
  },
  [107] = {
    [sym__endOfLine] = ACTIONS(404),
    [sym_copyOperator] = ACTIONS(406),
    [sym_deepCopyOperator] = ACTIONS(408),
  },
  [108] = {
    [sym_token] = ACTIONS(410),
  },
  [109] = {
    [sym_token] = ACTIONS(412),
  },
  [110] = {
    [sym_token] = ACTIONS(414),
  },
  [111] = {
    [sym__endOfLine] = ACTIONS(416),
  },
  [112] = {
    [sym_token] = ACTIONS(418),
  },
  [113] = {
    [sym_token] = ACTIONS(420),
  },
  [114] = {
    [sym_key] = ACTIONS(422),
  },
  [115] = {
    [sym_entryOperator] = ACTIONS(424),
  },
  [116] = {
    [sym_token] = ACTIONS(426),
  },
  [117] = {
    [sym_sectionOperator] = ACTIONS(428),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(7),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [25] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(14),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [45] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [47] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [64] = {.count = 1, .reusable = false}, SHIFT(18),
  [66] = {.count = 1, .reusable = false}, SHIFT(20),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [70] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(21),
  [73] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(106),
  [76] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(19),
  [79] = {.count = 1, .reusable = true}, SHIFT(25),
  [81] = {.count = 1, .reusable = true}, SHIFT(26),
  [83] = {.count = 1, .reusable = false}, SHIFT(27),
  [85] = {.count = 1, .reusable = true}, SHIFT(27),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(28),
  [93] = {.count = 1, .reusable = true}, SHIFT(29),
  [95] = {.count = 1, .reusable = true}, SHIFT(30),
  [97] = {.count = 1, .reusable = true}, SHIFT(19),
  [99] = {.count = 1, .reusable = false}, SHIFT(33),
  [101] = {.count = 1, .reusable = false}, SHIFT(106),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [105] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(35),
  [108] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(112),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [113] = {.count = 1, .reusable = false}, SHIFT(38),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [117] = {.count = 1, .reusable = false}, SHIFT(39),
  [119] = {.count = 1, .reusable = false}, SHIFT(112),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [123] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(35),
  [126] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(112),
  [129] = {.count = 1, .reusable = true}, SHIFT(89),
  [131] = {.count = 1, .reusable = true}, SHIFT(117),
  [133] = {.count = 1, .reusable = false}, SHIFT(43),
  [135] = {.count = 1, .reusable = false}, SHIFT(113),
  [137] = {.count = 1, .reusable = true}, SHIFT(42),
  [139] = {.count = 1, .reusable = true}, SHIFT(44),
  [141] = {.count = 1, .reusable = true}, SHIFT(45),
  [143] = {.count = 1, .reusable = true}, SHIFT(46),
  [145] = {.count = 1, .reusable = true}, SHIFT(47),
  [147] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [157] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(33),
  [160] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(106),
  [163] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(18),
  [171] = {.count = 1, .reusable = true}, SHIFT(68),
  [173] = {.count = 1, .reusable = true}, SHIFT(112),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(18),
  [178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(35),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(112),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(19),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(38),
  [190] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(106),
  [193] = {.count = 1, .reusable = true}, SHIFT(20),
  [195] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [198] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(112),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 2),
  [206] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(35),
  [209] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(112),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [216] = {.count = 1, .reusable = false}, SHIFT(59),
  [218] = {.count = 1, .reusable = true}, SHIFT(48),
  [220] = {.count = 1, .reusable = true}, SHIFT(49),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 3),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 3),
  [226] = {.count = 1, .reusable = true}, SHIFT(50),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 3),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 3),
  [232] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 3), SHIFT(35),
  [235] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 3), SHIFT(112),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [242] = {.count = 1, .reusable = false}, SHIFT(53),
  [244] = {.count = 1, .reusable = true}, SHIFT(52),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 2),
  [248] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(35),
  [251] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(112),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 3),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 3),
  [258] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 3), SHIFT(35),
  [261] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 3), SHIFT(112),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 4),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 4),
  [268] = {.count = 1, .reusable = true}, SHIFT(55),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 2),
  [272] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(35),
  [275] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(112),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 4),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 4),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(106),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [294] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [297] = {.count = 1, .reusable = false}, SHIFT(108),
  [299] = {.count = 1, .reusable = false}, SHIFT(109),
  [301] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(93),
  [304] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(115),
  [307] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(97),
  [310] = {.count = 1, .reusable = true}, SHIFT(115),
  [312] = {.count = 1, .reusable = false}, SHIFT(98),
  [314] = {.count = 1, .reusable = false}, SHIFT(99),
  [316] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(97),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(68),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(112),
  [325] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(108),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(97),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(115),
  [334] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(98),
  [337] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(109),
  [340] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(99),
  [343] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(97),
  [346] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 3), SHIFT(97),
  [349] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(97),
  [352] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 3), SHIFT(97),
  [355] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(97),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(112),
  [361] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(113),
  [364] = {.count = 1, .reusable = true}, SHIFT(57),
  [366] = {.count = 1, .reusable = true}, SHIFT(90),
  [368] = {.count = 1, .reusable = true}, SHIFT(60),
  [370] = {.count = 1, .reusable = true}, SHIFT(92),
  [372] = {.count = 1, .reusable = true}, SHIFT(61),
  [374] = {.count = 1, .reusable = true}, SHIFT(65),
  [376] = {.count = 1, .reusable = false}, SHIFT(100),
  [378] = {.count = 1, .reusable = true}, SHIFT(74),
  [380] = {.count = 1, .reusable = true}, SHIFT(75),
  [382] = {.count = 1, .reusable = true}, SHIFT(76),
  [384] = {.count = 1, .reusable = true}, SHIFT(108),
  [386] = {.count = 1, .reusable = true}, SHIFT(109),
  [388] = {.count = 1, .reusable = true}, SHIFT(77),
  [390] = {.count = 1, .reusable = true}, SHIFT(78),
  [392] = {.count = 1, .reusable = false}, SHIFT(103),
  [394] = {.count = 1, .reusable = true}, SHIFT(80),
  [396] = {.count = 1, .reusable = true}, SHIFT(82),
  [398] = {.count = 1, .reusable = true}, SHIFT(85),
  [400] = {.count = 1, .reusable = true}, SHIFT(88),
  [402] = {.count = 1, .reusable = true}, SHIFT(91),
  [404] = {.count = 1, .reusable = true}, SHIFT(94),
  [406] = {.count = 1, .reusable = false}, SHIFT(116),
  [408] = {.count = 1, .reusable = true}, SHIFT(116),
  [410] = {.count = 1, .reusable = true}, SHIFT(95),
  [412] = {.count = 1, .reusable = true}, SHIFT(96),
  [414] = {.count = 1, .reusable = true}, SHIFT(101),
  [416] = {.count = 1, .reusable = true}, SHIFT(102),
  [418] = {.count = 1, .reusable = true}, SHIFT(104),
  [420] = {.count = 1, .reusable = true}, SHIFT(105),
  [422] = {.count = 1, .reusable = true}, SHIFT(107),
  [424] = {.count = 1, .reusable = true}, SHIFT(110),
  [426] = {.count = 1, .reusable = true}, SHIFT(111),
  [428] = {.count = 1, .reusable = true}, SHIFT(114),
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
