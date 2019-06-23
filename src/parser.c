#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 126
#define SYMBOL_COUNT 36
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
  sym__elementOrFieldsetOrList = 18,
  sym__instruction = 19,
  sym_comment = 20,
  sym_continuation = 21,
  sym_element = 22,
  sym_empty = 23,
  sym_entry = 24,
  sym_field = 25,
  sym_fieldset = 26,
  sym_item = 27,
  sym_list = 28,
  sym_section = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_comment_repeat1 = 31,
  aux_sym_entry_repeat1 = 32,
  aux_sym_entry_repeat2 = 33,
  aux_sym_fieldset_repeat1 = 34,
  aux_sym_list_repeat1 = 35,
  anon_alias_sym_template = 36,
  anon_alias_sym_comment = 37,
  anon_alias_sym_value = 38,
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
  [sym__elementOrFieldsetOrList] = "_elementOrFieldsetOrList",
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
  [sym__elementOrFieldsetOrList] = {
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

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = anon_alias_sym_comment,
  },
  [2] = {
    [2] = anon_alias_sym_value,
  },
  [3] = {
    [2] = anon_alias_sym_template,
  },
  [4] = {
    [1] = anon_alias_sym_value,
  },
  [5] = {
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
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_copyOperator);
      END_STATE();
    case 21:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(22);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\r')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '\r')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(24);
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
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(28);
      END_STATE();
    case 29:
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
        ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 19, .external_lex_state = 3},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 13, .external_lex_state = 2},
  [10] = {.lex_state = 22, .external_lex_state = 3},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 28, .external_lex_state = 3},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 13, .external_lex_state = 2},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 13, .external_lex_state = 2},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 13, .external_lex_state = 2},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 13, .external_lex_state = 2},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 13, .external_lex_state = 4},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 13, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 13, .external_lex_state = 2},
  [46] = {.lex_state = 13, .external_lex_state = 2},
  [47] = {.lex_state = 13, .external_lex_state = 2},
  [48] = {.lex_state = 13, .external_lex_state = 2},
  [49] = {.lex_state = 13, .external_lex_state = 4},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 13, .external_lex_state = 2},
  [52] = {.lex_state = 13, .external_lex_state = 2},
  [53] = {.lex_state = 13, .external_lex_state = 2},
  [54] = {.lex_state = 13, .external_lex_state = 2},
  [55] = {.lex_state = 13, .external_lex_state = 4},
  [56] = {.lex_state = 13, .external_lex_state = 2},
  [57] = {.lex_state = 13, .external_lex_state = 2},
  [58] = {.lex_state = 13, .external_lex_state = 4},
  [59] = {.lex_state = 13, .external_lex_state = 2},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13, .external_lex_state = 4},
  [62] = {.lex_state = 13, .external_lex_state = 4},
  [63] = {.lex_state = 13, .external_lex_state = 4},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13, .external_lex_state = 4},
  [66] = {.lex_state = 13, .external_lex_state = 4},
  [67] = {.lex_state = 13, .external_lex_state = 4},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13, .external_lex_state = 4},
  [70] = {.lex_state = 13, .external_lex_state = 4},
  [71] = {.lex_state = 29},
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
  [83] = {.lex_state = 13, .external_lex_state = 4},
  [84] = {.lex_state = 13, .external_lex_state = 4},
  [85] = {.lex_state = 13, .external_lex_state = 4},
  [86] = {.lex_state = 13, .external_lex_state = 4},
  [87] = {.lex_state = 13, .external_lex_state = 4},
  [88] = {.lex_state = 13, .external_lex_state = 4},
  [89] = {.lex_state = 29},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 13, .external_lex_state = 4},
  [93] = {.lex_state = 13, .external_lex_state = 4},
  [94] = {.lex_state = 13, .external_lex_state = 4},
  [95] = {.lex_state = 19, .external_lex_state = 3},
  [96] = {.lex_state = 22, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 13, .external_lex_state = 4},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 13, .external_lex_state = 4},
  [109] = {.lex_state = 13, .external_lex_state = 4},
  [110] = {.lex_state = 13, .external_lex_state = 4},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 22},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 22},
  [116] = {.lex_state = 28, .external_lex_state = 3},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 22},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 27},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 21},
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
    [aux_sym_document_repeat1] = STATE(5),
    [sym__instruction] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_field] = STATE(5),
    [sym_fieldset] = STATE(5),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym_document] = STATE(7),
    [sym_element] = STATE(5),
    [sym_list] = STATE(5),
    [sym__commentOrEmpty] = STATE(5),
    [sym__elementOrFieldsetOrList] = STATE(8),
    [sym_empty] = STATE(5),
    [sym_section] = STATE(5),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(11),
  },
  [2] = {
    [sym__endOfLine] = ACTIONS(13),
    [sym_elementOperator] = ACTIONS(15),
    [sym_copyOperator] = ACTIONS(17),
  },
  [3] = {
    [sym_sectionOperator] = ACTIONS(19),
  },
  [4] = {
    [sym_token] = ACTIONS(21),
  },
  [5] = {
    [aux_sym_document_repeat1] = STATE(14),
    [sym__instruction] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_field] = STATE(14),
    [sym_fieldset] = STATE(14),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym_element] = STATE(14),
    [sym_list] = STATE(14),
    [sym__commentOrEmpty] = STATE(14),
    [sym__elementOrFieldsetOrList] = STATE(8),
    [sym_empty] = STATE(14),
    [sym_section] = STATE(14),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(25),
    [sym_commentOperator] = ACTIONS(11),
  },
  [6] = {
    [aux_sym_comment_repeat1] = STATE(15),
    [sym_key] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(27),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(11),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [8] = {
    [aux_sym_list_repeat1] = STATE(18),
    [sym_comment] = STATE(19),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(19),
    [sym_item] = STATE(18),
    [sym__commentOrEmpty] = STATE(19),
    [aux_sym_fieldset_repeat1] = STATE(20),
    [sym_entry] = STATE(20),
    [sym_key] = ACTIONS(33),
    [sym__sectionDescend] = ACTIONS(36),
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym__emptyLine] = ACTIONS(38),
    [sym_commentOperator] = ACTIONS(41),
    [sym_itemOperator] = ACTIONS(44),
  },
  [9] = {
    [sym_key] = ACTIONS(46),
    [sym__sectionDescend] = ACTIONS(46),
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym__emptyLine] = ACTIONS(48),
    [sym_commentOperator] = ACTIONS(48),
  },
  [10] = {
    [sym__endOfLine] = ACTIONS(50),
    [sym_token] = ACTIONS(52),
  },
  [11] = {
    [sym_token] = ACTIONS(54),
  },
  [12] = {
    [sym_key] = ACTIONS(56),
  },
  [13] = {
    [sym__endOfLine] = ACTIONS(58),
  },
  [14] = {
    [aux_sym_document_repeat1] = STATE(14),
    [sym__instruction] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_field] = STATE(14),
    [sym_fieldset] = STATE(14),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym_element] = STATE(14),
    [sym_list] = STATE(14),
    [sym__commentOrEmpty] = STATE(14),
    [sym__elementOrFieldsetOrList] = STATE(8),
    [sym_empty] = STATE(14),
    [sym_section] = STATE(14),
    [sym_key] = ACTIONS(60),
    [sym__sectionDescend] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym__emptyLine] = ACTIONS(68),
    [sym_commentOperator] = ACTIONS(71),
  },
  [15] = {
    [aux_sym_comment_repeat1] = STATE(15),
    [sym_key] = ACTIONS(74),
    [sym__sectionDescend] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym__emptyLine] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(78),
  },
  [16] = {
    [sym_entryOperator] = ACTIONS(81),
  },
  [17] = {
    [sym_token] = ACTIONS(83),
  },
  [18] = {
    [sym_item] = STATE(28),
    [sym_comment] = STATE(29),
    [sym__commentOrEmpty] = STATE(29),
    [aux_sym_list_repeat1] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(29),
    [sym_key] = ACTIONS(85),
    [sym__sectionDescend] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym__emptyLine] = ACTIONS(87),
    [sym_commentOperator] = ACTIONS(90),
    [sym_itemOperator] = ACTIONS(44),
  },
  [19] = {
    [sym_item] = STATE(30),
    [sym_comment] = STATE(31),
    [sym__commentOrEmpty] = STATE(31),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(31),
    [sym_entry] = STATE(32),
    [sym_key] = ACTIONS(93),
    [sym_itemOperator] = ACTIONS(44),
    [sym__emptyLine] = ACTIONS(95),
    [sym_commentOperator] = ACTIONS(97),
  },
  [20] = {
    [sym_comment] = STATE(34),
    [sym__commentOrEmpty] = STATE(34),
    [aux_sym_fieldset_repeat1] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(34),
    [sym_entry] = STATE(33),
    [sym_key] = ACTIONS(99),
    [sym__sectionDescend] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(104),
    [sym_commentOperator] = ACTIONS(107),
  },
  [21] = {
    [sym_comment] = STATE(37),
    [aux_sym_entry_repeat2] = STATE(36),
    [sym__commentOrEmpty] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(36),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_itemOperator] = ACTIONS(112),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_directContinuationOperator] = ACTIONS(110),
    [sym__emptyLine] = ACTIONS(116),
    [sym_commentOperator] = ACTIONS(119),
    [sym_key] = ACTIONS(114),
    [sym__sectionDescend] = ACTIONS(114),
  },
  [22] = {
    [sym__endOfLine] = ACTIONS(122),
  },
  [23] = {
    [sym__endOfLine] = ACTIONS(124),
  },
  [24] = {
    [sym__endOfLine] = ACTIONS(126),
    [sym_copyOperator] = ACTIONS(128),
    [sym_deepCopyOperator] = ACTIONS(130),
  },
  [25] = {
    [sym_key] = ACTIONS(132),
    [sym__sectionDescend] = ACTIONS(132),
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(134),
    [sym_commentOperator] = ACTIONS(134),
  },
  [26] = {
    [sym_token] = ACTIONS(136),
  },
  [27] = {
    [sym__endOfLine] = ACTIONS(138),
  },
  [28] = {
    [sym_item] = STATE(28),
    [sym_comment] = STATE(29),
    [sym__commentOrEmpty] = STATE(29),
    [aux_sym_list_repeat1] = STATE(28),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(29),
    [sym_key] = ACTIONS(140),
    [sym_itemOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(140),
    [sym__emptyLine] = ACTIONS(145),
    [sym_commentOperator] = ACTIONS(148),
    [ts_builtin_sym_end] = ACTIONS(140),
  },
  [29] = {
    [sym_item] = STATE(30),
    [sym_comment] = STATE(71),
    [sym__commentOrEmpty] = STATE(71),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(71),
    [sym__emptyLine] = ACTIONS(151),
    [sym_itemOperator] = ACTIONS(153),
    [sym_commentOperator] = ACTIONS(155),
  },
  [30] = {
    [sym_key] = ACTIONS(140),
    [sym_itemOperator] = ACTIONS(157),
    [sym__sectionDescend] = ACTIONS(140),
    [sym__emptyLine] = ACTIONS(157),
    [sym_commentOperator] = ACTIONS(157),
    [ts_builtin_sym_end] = ACTIONS(140),
  },
  [31] = {
    [sym_comment] = STATE(31),
    [sym__commentOrEmpty] = STATE(31),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(31),
    [sym_key] = ACTIONS(159),
    [sym_itemOperator] = ACTIONS(161),
    [sym__emptyLine] = ACTIONS(163),
    [sym_commentOperator] = ACTIONS(166),
  },
  [32] = {
    [sym_key] = ACTIONS(169),
    [sym__sectionDescend] = ACTIONS(169),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym__emptyLine] = ACTIONS(171),
    [sym_commentOperator] = ACTIONS(171),
  },
  [33] = {
    [sym_comment] = STATE(34),
    [sym__commentOrEmpty] = STATE(34),
    [aux_sym_fieldset_repeat1] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(34),
    [sym_entry] = STATE(33),
    [sym_key] = ACTIONS(173),
    [sym__sectionDescend] = ACTIONS(169),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym__emptyLine] = ACTIONS(176),
    [sym_commentOperator] = ACTIONS(179),
  },
  [34] = {
    [sym_comment] = STATE(31),
    [sym__commentOrEmpty] = STATE(31),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(31),
    [sym_entry] = STATE(32),
    [sym__emptyLine] = ACTIONS(95),
    [sym_key] = ACTIONS(93),
    [sym_commentOperator] = ACTIONS(97),
  },
  [35] = {
    [sym_token] = ACTIONS(182),
  },
  [36] = {
    [sym_comment] = STATE(37),
    [aux_sym_entry_repeat2] = STATE(45),
    [sym__commentOrEmpty] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(45),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(184),
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym__emptyLine] = ACTIONS(186),
    [sym_commentOperator] = ACTIONS(189),
    [sym_directContinuationOperator] = ACTIONS(110),
  },
  [37] = {
    [sym_comment] = STATE(71),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(71),
    [sym_continuation] = STATE(46),
    [sym__commentOrEmpty] = STATE(71),
    [sym_spacedContinuationOperator] = ACTIONS(192),
    [sym_directContinuationOperator] = ACTIONS(192),
    [sym__emptyLine] = ACTIONS(151),
    [sym_commentOperator] = ACTIONS(155),
  },
  [38] = {
    [sym_comment] = STATE(37),
    [aux_sym_entry_repeat2] = STATE(47),
    [sym__commentOrEmpty] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(47),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(194),
    [sym__sectionDescend] = ACTIONS(194),
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym__emptyLine] = ACTIONS(196),
    [sym_commentOperator] = ACTIONS(199),
    [sym_directContinuationOperator] = ACTIONS(110),
  },
  [39] = {
    [sym_key] = ACTIONS(202),
    [sym_itemOperator] = ACTIONS(204),
    [sym__sectionDescend] = ACTIONS(202),
    [sym__emptyLine] = ACTIONS(204),
    [sym_commentOperator] = ACTIONS(204),
    [ts_builtin_sym_end] = ACTIONS(202),
  },
  [40] = {
    [aux_sym_document_repeat1] = STATE(49),
    [sym__instruction] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_field] = STATE(49),
    [sym_fieldset] = STATE(49),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(49),
    [sym_list] = STATE(49),
    [sym__commentOrEmpty] = STATE(49),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(49),
    [sym_section] = STATE(49),
    [sym_key] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(210),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(214),
  },
  [41] = {
    [sym_token] = ACTIONS(216),
  },
  [42] = {
    [sym__endOfLine] = ACTIONS(218),
  },
  [43] = {
    [sym_comment] = STATE(37),
    [aux_sym_entry_repeat2] = STATE(52),
    [sym__commentOrEmpty] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(52),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_itemOperator] = ACTIONS(220),
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_directContinuationOperator] = ACTIONS(110),
    [sym__emptyLine] = ACTIONS(224),
    [sym_commentOperator] = ACTIONS(227),
    [sym_key] = ACTIONS(222),
    [sym__sectionDescend] = ACTIONS(222),
  },
  [44] = {
    [sym__endOfLine] = ACTIONS(230),
  },
  [45] = {
    [sym_comment] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(45),
    [aux_sym_entry_repeat2] = STATE(45),
    [sym__commentOrEmpty] = STATE(37),
    [sym_spacedContinuationOperator] = ACTIONS(232),
    [sym_itemOperator] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_directContinuationOperator] = ACTIONS(232),
    [sym__emptyLine] = ACTIONS(239),
    [sym_commentOperator] = ACTIONS(242),
    [sym_key] = ACTIONS(237),
    [sym__sectionDescend] = ACTIONS(237),
  },
  [46] = {
    [sym_spacedContinuationOperator] = ACTIONS(235),
    [sym_itemOperator] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_directContinuationOperator] = ACTIONS(235),
    [sym__emptyLine] = ACTIONS(235),
    [sym_commentOperator] = ACTIONS(235),
    [sym_key] = ACTIONS(237),
    [sym__sectionDescend] = ACTIONS(237),
  },
  [47] = {
    [sym_comment] = STATE(37),
    [aux_sym_entry_repeat2] = STATE(45),
    [sym__commentOrEmpty] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(45),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(245),
    [sym__sectionDescend] = ACTIONS(245),
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym__emptyLine] = ACTIONS(247),
    [sym_commentOperator] = ACTIONS(250),
    [sym_directContinuationOperator] = ACTIONS(110),
  },
  [48] = {
    [sym_key] = ACTIONS(253),
    [sym__sectionDescend] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym__emptyLine] = ACTIONS(255),
    [sym_commentOperator] = ACTIONS(255),
  },
  [49] = {
    [aux_sym_document_repeat1] = STATE(63),
    [sym__instruction] = STATE(63),
    [sym_comment] = STATE(63),
    [sym_field] = STATE(63),
    [sym_fieldset] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(63),
    [sym_list] = STATE(63),
    [sym__commentOrEmpty] = STATE(63),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(63),
    [sym_section] = STATE(63),
    [sym_key] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(257),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(259),
  },
  [50] = {
    [sym__endOfLine] = ACTIONS(261),
  },
  [51] = {
    [sym_comment] = STATE(37),
    [aux_sym_entry_repeat2] = STATE(56),
    [sym__commentOrEmpty] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(56),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(263),
    [sym__sectionDescend] = ACTIONS(263),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym__emptyLine] = ACTIONS(265),
    [sym_commentOperator] = ACTIONS(268),
    [sym_directContinuationOperator] = ACTIONS(110),
  },
  [52] = {
    [sym_comment] = STATE(37),
    [aux_sym_entry_repeat2] = STATE(45),
    [sym__commentOrEmpty] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(45),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_itemOperator] = ACTIONS(271),
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_directContinuationOperator] = ACTIONS(110),
    [sym__emptyLine] = ACTIONS(275),
    [sym_commentOperator] = ACTIONS(278),
    [sym_key] = ACTIONS(273),
    [sym__sectionDescend] = ACTIONS(273),
  },
  [53] = {
    [sym_spacedContinuationOperator] = ACTIONS(281),
    [sym_itemOperator] = ACTIONS(281),
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_directContinuationOperator] = ACTIONS(281),
    [sym__emptyLine] = ACTIONS(281),
    [sym_commentOperator] = ACTIONS(281),
    [sym_key] = ACTIONS(283),
    [sym__sectionDescend] = ACTIONS(283),
  },
  [54] = {
    [sym_key] = ACTIONS(285),
    [sym__sectionDescend] = ACTIONS(285),
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym__emptyLine] = ACTIONS(287),
    [sym_commentOperator] = ACTIONS(287),
  },
  [55] = {
    [aux_sym_document_repeat1] = STATE(58),
    [sym__instruction] = STATE(58),
    [sym_comment] = STATE(58),
    [sym_field] = STATE(58),
    [sym_fieldset] = STATE(58),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(58),
    [sym_list] = STATE(58),
    [sym__commentOrEmpty] = STATE(58),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(58),
    [sym_section] = STATE(58),
    [sym_key] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(289),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(291),
  },
  [56] = {
    [sym_comment] = STATE(37),
    [aux_sym_entry_repeat2] = STATE(45),
    [sym__commentOrEmpty] = STATE(37),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_continuation] = STATE(45),
    [sym_spacedContinuationOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(293),
    [sym__sectionDescend] = ACTIONS(293),
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym__emptyLine] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(298),
    [sym_directContinuationOperator] = ACTIONS(110),
  },
  [57] = {
    [sym_key] = ACTIONS(301),
    [sym__sectionDescend] = ACTIONS(301),
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym__emptyLine] = ACTIONS(303),
    [sym_commentOperator] = ACTIONS(303),
  },
  [58] = {
    [aux_sym_document_repeat1] = STATE(63),
    [sym__instruction] = STATE(63),
    [sym_comment] = STATE(63),
    [sym_field] = STATE(63),
    [sym_fieldset] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(63),
    [sym_list] = STATE(63),
    [sym__commentOrEmpty] = STATE(63),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(63),
    [sym_section] = STATE(63),
    [sym_key] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(257),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(305),
  },
  [59] = {
    [sym_key] = ACTIONS(307),
    [sym__sectionDescend] = ACTIONS(307),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym__emptyLine] = ACTIONS(309),
    [sym_commentOperator] = ACTIONS(309),
  },
  [60] = {
    [aux_sym_comment_repeat1] = STATE(64),
    [sym_key] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(29),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(97),
  },
  [61] = {
    [aux_sym_list_repeat1] = STATE(65),
    [sym_comment] = STATE(98),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(98),
    [sym_item] = STATE(65),
    [sym__commentOrEmpty] = STATE(98),
    [aux_sym_fieldset_repeat1] = STATE(66),
    [sym_entry] = STATE(66),
    [sym_key] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(36),
    [sym_itemOperator] = ACTIONS(314),
    [sym__emptyLine] = ACTIONS(316),
    [sym_commentOperator] = ACTIONS(41),
    [sym__sectionAscend] = ACTIONS(36),
  },
  [62] = {
    [sym_key] = ACTIONS(46),
    [sym__sectionDescend] = ACTIONS(46),
    [sym__emptyLine] = ACTIONS(48),
    [sym_commentOperator] = ACTIONS(48),
    [sym__sectionAscend] = ACTIONS(46),
  },
  [63] = {
    [aux_sym_document_repeat1] = STATE(63),
    [sym__instruction] = STATE(63),
    [sym_comment] = STATE(63),
    [sym_field] = STATE(63),
    [sym_fieldset] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(63),
    [sym_list] = STATE(63),
    [sym__commentOrEmpty] = STATE(63),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(63),
    [sym_section] = STATE(63),
    [sym_key] = ACTIONS(319),
    [sym__sectionDescend] = ACTIONS(322),
    [sym__emptyLine] = ACTIONS(325),
    [sym_commentOperator] = ACTIONS(328),
    [sym__sectionAscend] = ACTIONS(66),
  },
  [64] = {
    [aux_sym_comment_repeat1] = STATE(64),
    [sym_key] = ACTIONS(74),
    [sym_itemOperator] = ACTIONS(76),
    [sym__emptyLine] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(331),
  },
  [65] = {
    [sym_item] = STATE(69),
    [sym_comment] = STATE(102),
    [sym__commentOrEmpty] = STATE(102),
    [aux_sym_list_repeat1] = STATE(69),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(102),
    [sym_key] = ACTIONS(85),
    [sym__sectionDescend] = ACTIONS(85),
    [sym_itemOperator] = ACTIONS(314),
    [sym__emptyLine] = ACTIONS(334),
    [sym_commentOperator] = ACTIONS(90),
    [sym__sectionAscend] = ACTIONS(85),
  },
  [66] = {
    [sym_comment] = STATE(103),
    [sym__commentOrEmpty] = STATE(103),
    [aux_sym_fieldset_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(103),
    [sym_entry] = STATE(73),
    [sym_key] = ACTIONS(337),
    [sym__sectionDescend] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(340),
    [sym_commentOperator] = ACTIONS(107),
    [sym__sectionAscend] = ACTIONS(102),
  },
  [67] = {
    [sym_comment] = STATE(104),
    [aux_sym_entry_repeat2] = STATE(74),
    [sym__commentOrEmpty] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(74),
    [sym_spacedContinuationOperator] = ACTIONS(343),
    [sym_itemOperator] = ACTIONS(112),
    [sym_directContinuationOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(345),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(114),
    [sym_key] = ACTIONS(114),
    [sym__sectionDescend] = ACTIONS(114),
  },
  [68] = {
    [sym_key] = ACTIONS(132),
    [sym_itemOperator] = ACTIONS(134),
    [sym__emptyLine] = ACTIONS(134),
    [sym_commentOperator] = ACTIONS(134),
  },
  [69] = {
    [sym_item] = STATE(69),
    [sym_comment] = STATE(102),
    [sym__commentOrEmpty] = STATE(102),
    [aux_sym_list_repeat1] = STATE(69),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(102),
    [sym_key] = ACTIONS(140),
    [sym_itemOperator] = ACTIONS(348),
    [sym__sectionDescend] = ACTIONS(140),
    [sym__emptyLine] = ACTIONS(351),
    [sym_commentOperator] = ACTIONS(148),
    [sym__sectionAscend] = ACTIONS(140),
  },
  [70] = {
    [sym_key] = ACTIONS(140),
    [sym_itemOperator] = ACTIONS(157),
    [sym__sectionDescend] = ACTIONS(140),
    [sym__emptyLine] = ACTIONS(157),
    [sym_commentOperator] = ACTIONS(157),
    [sym__sectionAscend] = ACTIONS(140),
  },
  [71] = {
    [sym_comment] = STATE(71),
    [sym__commentOrEmpty] = STATE(71),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(71),
    [sym_spacedContinuationOperator] = ACTIONS(159),
    [sym_itemOperator] = ACTIONS(159),
    [sym_directContinuationOperator] = ACTIONS(159),
    [sym__emptyLine] = ACTIONS(354),
    [sym_commentOperator] = ACTIONS(357),
  },
  [72] = {
    [sym_key] = ACTIONS(169),
    [sym__sectionDescend] = ACTIONS(169),
    [sym__emptyLine] = ACTIONS(171),
    [sym_commentOperator] = ACTIONS(171),
    [sym__sectionAscend] = ACTIONS(169),
  },
  [73] = {
    [sym_comment] = STATE(103),
    [sym__commentOrEmpty] = STATE(103),
    [aux_sym_fieldset_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(103),
    [sym_entry] = STATE(73),
    [sym_key] = ACTIONS(360),
    [sym__sectionDescend] = ACTIONS(169),
    [sym__emptyLine] = ACTIONS(363),
    [sym_commentOperator] = ACTIONS(179),
    [sym__sectionAscend] = ACTIONS(169),
  },
  [74] = {
    [sym_comment] = STATE(104),
    [aux_sym_entry_repeat2] = STATE(78),
    [sym__commentOrEmpty] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(343),
    [sym_key] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(184),
    [sym_directContinuationOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(366),
    [sym_commentOperator] = ACTIONS(189),
    [sym__sectionAscend] = ACTIONS(184),
  },
  [75] = {
    [sym_comment] = STATE(104),
    [aux_sym_entry_repeat2] = STATE(80),
    [sym__commentOrEmpty] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(80),
    [sym_spacedContinuationOperator] = ACTIONS(343),
    [sym_key] = ACTIONS(194),
    [sym__sectionDescend] = ACTIONS(194),
    [sym_directContinuationOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(369),
    [sym_commentOperator] = ACTIONS(199),
    [sym__sectionAscend] = ACTIONS(194),
  },
  [76] = {
    [sym_key] = ACTIONS(202),
    [sym_itemOperator] = ACTIONS(204),
    [sym__sectionDescend] = ACTIONS(202),
    [sym__emptyLine] = ACTIONS(204),
    [sym_commentOperator] = ACTIONS(204),
    [sym__sectionAscend] = ACTIONS(202),
  },
  [77] = {
    [sym_comment] = STATE(104),
    [aux_sym_entry_repeat2] = STATE(83),
    [sym__commentOrEmpty] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(83),
    [sym_spacedContinuationOperator] = ACTIONS(343),
    [sym_itemOperator] = ACTIONS(220),
    [sym_directContinuationOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(372),
    [sym_commentOperator] = ACTIONS(227),
    [sym__sectionAscend] = ACTIONS(222),
    [sym_key] = ACTIONS(222),
    [sym__sectionDescend] = ACTIONS(222),
  },
  [78] = {
    [sym_comment] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(78),
    [aux_sym_entry_repeat2] = STATE(78),
    [sym__commentOrEmpty] = STATE(104),
    [sym_spacedContinuationOperator] = ACTIONS(375),
    [sym_itemOperator] = ACTIONS(235),
    [sym_directContinuationOperator] = ACTIONS(375),
    [sym__emptyLine] = ACTIONS(378),
    [sym_commentOperator] = ACTIONS(242),
    [sym__sectionAscend] = ACTIONS(237),
    [sym_key] = ACTIONS(237),
    [sym__sectionDescend] = ACTIONS(237),
  },
  [79] = {
    [sym_spacedContinuationOperator] = ACTIONS(235),
    [sym_itemOperator] = ACTIONS(235),
    [sym_directContinuationOperator] = ACTIONS(235),
    [sym__emptyLine] = ACTIONS(235),
    [sym_commentOperator] = ACTIONS(235),
    [sym__sectionAscend] = ACTIONS(237),
    [sym_key] = ACTIONS(237),
    [sym__sectionDescend] = ACTIONS(237),
  },
  [80] = {
    [sym_comment] = STATE(104),
    [aux_sym_entry_repeat2] = STATE(78),
    [sym__commentOrEmpty] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(343),
    [sym_key] = ACTIONS(245),
    [sym__sectionDescend] = ACTIONS(245),
    [sym_directContinuationOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(381),
    [sym_commentOperator] = ACTIONS(250),
    [sym__sectionAscend] = ACTIONS(245),
  },
  [81] = {
    [sym_key] = ACTIONS(253),
    [sym__sectionDescend] = ACTIONS(253),
    [sym__emptyLine] = ACTIONS(255),
    [sym_commentOperator] = ACTIONS(255),
    [sym__sectionAscend] = ACTIONS(253),
  },
  [82] = {
    [sym_comment] = STATE(104),
    [aux_sym_entry_repeat2] = STATE(86),
    [sym__commentOrEmpty] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(86),
    [sym_spacedContinuationOperator] = ACTIONS(343),
    [sym_key] = ACTIONS(263),
    [sym__sectionDescend] = ACTIONS(263),
    [sym_directContinuationOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(384),
    [sym_commentOperator] = ACTIONS(268),
    [sym__sectionAscend] = ACTIONS(263),
  },
  [83] = {
    [sym_comment] = STATE(104),
    [aux_sym_entry_repeat2] = STATE(78),
    [sym__commentOrEmpty] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(343),
    [sym_itemOperator] = ACTIONS(271),
    [sym_directContinuationOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(387),
    [sym_commentOperator] = ACTIONS(278),
    [sym__sectionAscend] = ACTIONS(273),
    [sym_key] = ACTIONS(273),
    [sym__sectionDescend] = ACTIONS(273),
  },
  [84] = {
    [sym_spacedContinuationOperator] = ACTIONS(281),
    [sym_itemOperator] = ACTIONS(281),
    [sym_directContinuationOperator] = ACTIONS(281),
    [sym__emptyLine] = ACTIONS(281),
    [sym_commentOperator] = ACTIONS(281),
    [sym__sectionAscend] = ACTIONS(283),
    [sym_key] = ACTIONS(283),
    [sym__sectionDescend] = ACTIONS(283),
  },
  [85] = {
    [sym_key] = ACTIONS(285),
    [sym__sectionDescend] = ACTIONS(285),
    [sym__emptyLine] = ACTIONS(287),
    [sym_commentOperator] = ACTIONS(287),
    [sym__sectionAscend] = ACTIONS(285),
  },
  [86] = {
    [sym_comment] = STATE(104),
    [aux_sym_entry_repeat2] = STATE(78),
    [sym__commentOrEmpty] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_continuation] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(343),
    [sym_key] = ACTIONS(293),
    [sym__sectionDescend] = ACTIONS(293),
    [sym_directContinuationOperator] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(390),
    [sym_commentOperator] = ACTIONS(298),
    [sym__sectionAscend] = ACTIONS(293),
  },
  [87] = {
    [sym_key] = ACTIONS(301),
    [sym__sectionDescend] = ACTIONS(301),
    [sym__emptyLine] = ACTIONS(303),
    [sym_commentOperator] = ACTIONS(303),
    [sym__sectionAscend] = ACTIONS(301),
  },
  [88] = {
    [sym_key] = ACTIONS(307),
    [sym__sectionDescend] = ACTIONS(307),
    [sym__emptyLine] = ACTIONS(309),
    [sym_commentOperator] = ACTIONS(309),
    [sym__sectionAscend] = ACTIONS(307),
  },
  [89] = {
    [aux_sym_comment_repeat1] = STATE(90),
    [sym_spacedContinuationOperator] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(27),
    [sym_directContinuationOperator] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(155),
  },
  [90] = {
    [aux_sym_comment_repeat1] = STATE(90),
    [sym_spacedContinuationOperator] = ACTIONS(74),
    [sym_itemOperator] = ACTIONS(74),
    [sym_directContinuationOperator] = ACTIONS(74),
    [sym__emptyLine] = ACTIONS(74),
    [sym_commentOperator] = ACTIONS(393),
  },
  [91] = {
    [sym_spacedContinuationOperator] = ACTIONS(132),
    [sym_itemOperator] = ACTIONS(132),
    [sym_directContinuationOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(132),
    [sym_commentOperator] = ACTIONS(132),
  },
  [92] = {
    [aux_sym_comment_repeat1] = STATE(93),
    [sym_key] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(27),
  },
  [93] = {
    [aux_sym_comment_repeat1] = STATE(93),
    [sym_key] = ACTIONS(74),
    [sym__sectionDescend] = ACTIONS(74),
    [sym__emptyLine] = ACTIONS(76),
    [sym_commentOperator] = ACTIONS(396),
    [sym__sectionAscend] = ACTIONS(74),
  },
  [94] = {
    [sym_key] = ACTIONS(132),
    [sym__sectionDescend] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(134),
    [sym_commentOperator] = ACTIONS(134),
    [sym__sectionAscend] = ACTIONS(132),
  },
  [95] = {
    [sym__endOfLine] = ACTIONS(399),
    [sym_elementOperator] = ACTIONS(401),
    [sym_copyOperator] = ACTIONS(403),
  },
  [96] = {
    [sym__endOfLine] = ACTIONS(405),
    [sym_token] = ACTIONS(407),
  },
  [97] = {
    [sym__endOfLine] = ACTIONS(409),
  },
  [98] = {
    [sym_item] = STATE(70),
    [sym_comment] = STATE(31),
    [sym__commentOrEmpty] = STATE(31),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(31),
    [sym_entry] = STATE(72),
    [sym_key] = ACTIONS(411),
    [sym_itemOperator] = ACTIONS(314),
    [sym__emptyLine] = ACTIONS(95),
    [sym_commentOperator] = ACTIONS(97),
  },
  [99] = {
    [sym__endOfLine] = ACTIONS(413),
  },
  [100] = {
    [sym__endOfLine] = ACTIONS(415),
  },
  [101] = {
    [sym__endOfLine] = ACTIONS(417),
  },
  [102] = {
    [sym_item] = STATE(70),
    [sym_comment] = STATE(71),
    [sym__commentOrEmpty] = STATE(71),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(71),
    [sym__emptyLine] = ACTIONS(151),
    [sym_itemOperator] = ACTIONS(419),
    [sym_commentOperator] = ACTIONS(155),
  },
  [103] = {
    [sym_comment] = STATE(31),
    [sym__commentOrEmpty] = STATE(31),
    [aux_sym_comment_repeat1] = STATE(60),
    [aux_sym_entry_repeat1] = STATE(31),
    [sym_entry] = STATE(72),
    [sym__emptyLine] = ACTIONS(95),
    [sym_key] = ACTIONS(411),
    [sym_commentOperator] = ACTIONS(97),
  },
  [104] = {
    [sym_comment] = STATE(71),
    [aux_sym_comment_repeat1] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(71),
    [sym_continuation] = STATE(79),
    [sym__commentOrEmpty] = STATE(71),
    [sym_spacedContinuationOperator] = ACTIONS(421),
    [sym_directContinuationOperator] = ACTIONS(421),
    [sym__emptyLine] = ACTIONS(151),
    [sym_commentOperator] = ACTIONS(155),
  },
  [105] = {
    [aux_sym_document_repeat1] = STATE(108),
    [sym__instruction] = STATE(108),
    [sym_comment] = STATE(108),
    [sym_field] = STATE(108),
    [sym_fieldset] = STATE(108),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(108),
    [sym_list] = STATE(108),
    [sym__commentOrEmpty] = STATE(108),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(108),
    [sym_section] = STATE(108),
    [sym_key] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(423),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(425),
  },
  [106] = {
    [sym__endOfLine] = ACTIONS(427),
  },
  [107] = {
    [sym__endOfLine] = ACTIONS(429),
  },
  [108] = {
    [aux_sym_document_repeat1] = STATE(63),
    [sym__instruction] = STATE(63),
    [sym_comment] = STATE(63),
    [sym_field] = STATE(63),
    [sym_fieldset] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(63),
    [sym_list] = STATE(63),
    [sym__commentOrEmpty] = STATE(63),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(63),
    [sym_section] = STATE(63),
    [sym_key] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(257),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(431),
  },
  [109] = {
    [aux_sym_document_repeat1] = STATE(110),
    [sym__instruction] = STATE(110),
    [sym_comment] = STATE(110),
    [sym_field] = STATE(110),
    [sym_fieldset] = STATE(110),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(110),
    [sym_list] = STATE(110),
    [sym__commentOrEmpty] = STATE(110),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(110),
    [sym_section] = STATE(110),
    [sym_key] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(433),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(435),
  },
  [110] = {
    [aux_sym_document_repeat1] = STATE(63),
    [sym__instruction] = STATE(63),
    [sym_comment] = STATE(63),
    [sym_field] = STATE(63),
    [sym_fieldset] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(92),
    [sym_element] = STATE(63),
    [sym_list] = STATE(63),
    [sym__commentOrEmpty] = STATE(63),
    [sym__elementOrFieldsetOrList] = STATE(61),
    [sym_empty] = STATE(63),
    [sym_section] = STATE(63),
    [sym_key] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(257),
    [sym_commentOperator] = ACTIONS(212),
    [sym__sectionAscend] = ACTIONS(437),
  },
  [111] = {
    [sym__endOfLine] = ACTIONS(439),
  },
  [112] = {
    [sym__endOfLine] = ACTIONS(441),
  },
  [113] = {
    [sym_token] = ACTIONS(443),
  },
  [114] = {
    [sym_token] = ACTIONS(445),
  },
  [115] = {
    [sym_token] = ACTIONS(447),
  },
  [116] = {
    [sym__endOfLine] = ACTIONS(449),
    [sym_copyOperator] = ACTIONS(451),
    [sym_deepCopyOperator] = ACTIONS(453),
  },
  [117] = {
    [sym_token] = ACTIONS(455),
  },
  [118] = {
    [sym_token] = ACTIONS(457),
  },
  [119] = {
    [sym__endOfLine] = ACTIONS(459),
  },
  [120] = {
    [sym_token] = ACTIONS(461),
  },
  [121] = {
    [sym_token] = ACTIONS(463),
  },
  [122] = {
    [sym_key] = ACTIONS(465),
  },
  [123] = {
    [sym_entryOperator] = ACTIONS(467),
  },
  [124] = {
    [sym_token] = ACTIONS(469),
  },
  [125] = {
    [sym_sectionOperator] = ACTIONS(471),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [31] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [33] = {.count = 2, .reusable = true}, REDUCE(sym_element, 1), SHIFT(16),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [38] = {.count = 2, .reusable = false}, REDUCE(sym_element, 1), SHIFT(19),
  [41] = {.count = 2, .reusable = false}, REDUCE(sym_element, 1), SHIFT(113),
  [44] = {.count = 1, .reusable = false}, SHIFT(17),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [48] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [50] = {.count = 1, .reusable = true}, SHIFT(21),
  [52] = {.count = 1, .reusable = true}, SHIFT(22),
  [54] = {.count = 1, .reusable = true}, SHIFT(23),
  [56] = {.count = 1, .reusable = true}, SHIFT(24),
  [58] = {.count = 1, .reusable = true}, SHIFT(25),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [66] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [76] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [81] = {.count = 1, .reusable = true}, SHIFT(26),
  [83] = {.count = 1, .reusable = true}, SHIFT(27),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [87] = {.count = 2, .reusable = false}, REDUCE(sym_list, 2), SHIFT(29),
  [90] = {.count = 2, .reusable = false}, REDUCE(sym_list, 2), SHIFT(120),
  [93] = {.count = 1, .reusable = true}, SHIFT(16),
  [95] = {.count = 1, .reusable = false}, SHIFT(31),
  [97] = {.count = 1, .reusable = false}, SHIFT(113),
  [99] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 2), SHIFT(16),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 2),
  [104] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 2), SHIFT(34),
  [107] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 2), SHIFT(113),
  [110] = {.count = 1, .reusable = false}, SHIFT(35),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym__elementOrFieldsetOrList, 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym__elementOrFieldsetOrList, 3),
  [116] = {.count = 2, .reusable = false}, REDUCE(sym__elementOrFieldsetOrList, 3), SHIFT(37),
  [119] = {.count = 2, .reusable = false}, REDUCE(sym__elementOrFieldsetOrList, 3), SHIFT(120),
  [122] = {.count = 1, .reusable = true}, SHIFT(38),
  [124] = {.count = 1, .reusable = true}, SHIFT(39),
  [126] = {.count = 1, .reusable = true}, SHIFT(40),
  [128] = {.count = 1, .reusable = false}, SHIFT(41),
  [130] = {.count = 1, .reusable = true}, SHIFT(41),
  [132] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [134] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(42),
  [138] = {.count = 1, .reusable = true}, SHIFT(43),
  [140] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(17),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(29),
  [148] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(120),
  [151] = {.count = 1, .reusable = true}, SHIFT(71),
  [153] = {.count = 1, .reusable = true}, SHIFT(17),
  [155] = {.count = 1, .reusable = true}, SHIFT(120),
  [157] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [163] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(31),
  [166] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(113),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(16),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(34),
  [179] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(113),
  [182] = {.count = 1, .reusable = true}, SHIFT(44),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [186] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(37),
  [189] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(120),
  [192] = {.count = 1, .reusable = true}, SHIFT(35),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [196] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(37),
  [199] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(120),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym__elementOrFieldsetOrList, 4, .production_id = 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym__elementOrFieldsetOrList, 4, .production_id = 3),
  [206] = {.count = 1, .reusable = true}, SHIFT(95),
  [208] = {.count = 1, .reusable = true}, SHIFT(125),
  [210] = {.count = 1, .reusable = false}, SHIFT(49),
  [212] = {.count = 1, .reusable = false}, SHIFT(121),
  [214] = {.count = 1, .reusable = true}, SHIFT(48),
  [216] = {.count = 1, .reusable = true}, SHIFT(50),
  [218] = {.count = 1, .reusable = true}, SHIFT(51),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [224] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(37),
  [227] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(120),
  [230] = {.count = 1, .reusable = true}, SHIFT(53),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(35),
  [235] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(37),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(120),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 2),
  [247] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(37),
  [250] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(120),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [257] = {.count = 1, .reusable = false}, SHIFT(63),
  [259] = {.count = 1, .reusable = true}, SHIFT(54),
  [261] = {.count = 1, .reusable = true}, SHIFT(55),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 2),
  [265] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(37),
  [268] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(120),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [275] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(37),
  [278] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(120),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [289] = {.count = 1, .reusable = false}, SHIFT(58),
  [291] = {.count = 1, .reusable = true}, SHIFT(57),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 2),
  [295] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(37),
  [298] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(120),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [305] = {.count = 1, .reusable = true}, SHIFT(59),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [311] = {.count = 2, .reusable = true}, REDUCE(sym_element, 1), SHIFT(123),
  [314] = {.count = 1, .reusable = false}, SHIFT(115),
  [316] = {.count = 2, .reusable = false}, REDUCE(sym_element, 1), SHIFT(98),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [325] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [331] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(113),
  [334] = {.count = 2, .reusable = false}, REDUCE(sym_list, 2), SHIFT(102),
  [337] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 2), SHIFT(123),
  [340] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 2), SHIFT(103),
  [343] = {.count = 1, .reusable = false}, SHIFT(118),
  [345] = {.count = 2, .reusable = false}, REDUCE(sym__elementOrFieldsetOrList, 3), SHIFT(104),
  [348] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(115),
  [351] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(102),
  [354] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(71),
  [357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(120),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(123),
  [363] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(103),
  [366] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(104),
  [369] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(104),
  [372] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(104),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(118),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(104),
  [381] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(104),
  [384] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(104),
  [387] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(104),
  [390] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(104),
  [393] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(120),
  [396] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(121),
  [399] = {.count = 1, .reusable = true}, SHIFT(62),
  [401] = {.count = 1, .reusable = true}, SHIFT(96),
  [403] = {.count = 1, .reusable = true}, SHIFT(114),
  [405] = {.count = 1, .reusable = true}, SHIFT(67),
  [407] = {.count = 1, .reusable = true}, SHIFT(99),
  [409] = {.count = 1, .reusable = true}, SHIFT(68),
  [411] = {.count = 1, .reusable = true}, SHIFT(123),
  [413] = {.count = 1, .reusable = true}, SHIFT(75),
  [415] = {.count = 1, .reusable = true}, SHIFT(76),
  [417] = {.count = 1, .reusable = true}, SHIFT(77),
  [419] = {.count = 1, .reusable = true}, SHIFT(115),
  [421] = {.count = 1, .reusable = true}, SHIFT(118),
  [423] = {.count = 1, .reusable = false}, SHIFT(108),
  [425] = {.count = 1, .reusable = true}, SHIFT(81),
  [427] = {.count = 1, .reusable = true}, SHIFT(82),
  [429] = {.count = 1, .reusable = true}, SHIFT(84),
  [431] = {.count = 1, .reusable = true}, SHIFT(85),
  [433] = {.count = 1, .reusable = false}, SHIFT(110),
  [435] = {.count = 1, .reusable = true}, SHIFT(87),
  [437] = {.count = 1, .reusable = true}, SHIFT(88),
  [439] = {.count = 1, .reusable = true}, SHIFT(91),
  [441] = {.count = 1, .reusable = true}, SHIFT(94),
  [443] = {.count = 1, .reusable = true}, SHIFT(97),
  [445] = {.count = 1, .reusable = true}, SHIFT(100),
  [447] = {.count = 1, .reusable = true}, SHIFT(101),
  [449] = {.count = 1, .reusable = true}, SHIFT(105),
  [451] = {.count = 1, .reusable = false}, SHIFT(124),
  [453] = {.count = 1, .reusable = true}, SHIFT(124),
  [455] = {.count = 1, .reusable = true}, SHIFT(106),
  [457] = {.count = 1, .reusable = true}, SHIFT(107),
  [459] = {.count = 1, .reusable = true}, SHIFT(109),
  [461] = {.count = 1, .reusable = true}, SHIFT(111),
  [463] = {.count = 1, .reusable = true}, SHIFT(112),
  [465] = {.count = 1, .reusable = true}, SHIFT(116),
  [467] = {.count = 1, .reusable = true}, SHIFT(117),
  [469] = {.count = 1, .reusable = true}, SHIFT(119),
  [471] = {.count = 1, .reusable = true}, SHIFT(122),
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
