#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 130
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
  sym_comment = 17,
  sym_continuation = 18,
  sym_element = 19,
  sym_empty = 20,
  sym_entry = 21,
  sym_field = 22,
  sym_fieldset = 23,
  sym_item = 24,
  sym_list = 25,
  sym_section = 26,
  aux_sym_document_repeat1 = 27,
  aux_sym_comment_repeat1 = 28,
  aux_sym_entry_repeat1 = 29,
  aux_sym_entry_repeat2 = 30,
  aux_sym_fieldset_repeat1 = 31,
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
      if (lookahead == '=')
        ADVANCE(7);
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
  [9] = {.lex_state = 22, .external_lex_state = 3},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 13, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 27, .external_lex_state = 3},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 13, .external_lex_state = 2},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 13, .external_lex_state = 2},
  [29] = {.lex_state = 13, .external_lex_state = 4},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 13, .external_lex_state = 2},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 13, .external_lex_state = 2},
  [37] = {.lex_state = 13, .external_lex_state = 2},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 13, .external_lex_state = 2},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 13, .external_lex_state = 2},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13, .external_lex_state = 2},
  [45] = {.lex_state = 13, .external_lex_state = 2},
  [46] = {.lex_state = 13, .external_lex_state = 2},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13, .external_lex_state = 2},
  [49] = {.lex_state = 13, .external_lex_state = 4},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 13, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 13, .external_lex_state = 2},
  [54] = {.lex_state = 13, .external_lex_state = 2},
  [55] = {.lex_state = 13, .external_lex_state = 4},
  [56] = {.lex_state = 13, .external_lex_state = 2},
  [57] = {.lex_state = 13, .external_lex_state = 2},
  [58] = {.lex_state = 13, .external_lex_state = 2},
  [59] = {.lex_state = 13, .external_lex_state = 4},
  [60] = {.lex_state = 13, .external_lex_state = 2},
  [61] = {.lex_state = 13, .external_lex_state = 2},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 13, .external_lex_state = 4},
  [64] = {.lex_state = 13, .external_lex_state = 4},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 13, .external_lex_state = 4},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13, .external_lex_state = 4},
  [69] = {.lex_state = 13, .external_lex_state = 4},
  [70] = {.lex_state = 13, .external_lex_state = 4},
  [71] = {.lex_state = 13, .external_lex_state = 4},
  [72] = {.lex_state = 13, .external_lex_state = 4},
  [73] = {.lex_state = 13, .external_lex_state = 4},
  [74] = {.lex_state = 13, .external_lex_state = 4},
  [75] = {.lex_state = 13, .external_lex_state = 4},
  [76] = {.lex_state = 29},
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
  [89] = {.lex_state = 13, .external_lex_state = 4},
  [90] = {.lex_state = 13, .external_lex_state = 4},
  [91] = {.lex_state = 13, .external_lex_state = 4},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 13, .external_lex_state = 4},
  [96] = {.lex_state = 13, .external_lex_state = 4},
  [97] = {.lex_state = 13, .external_lex_state = 4},
  [98] = {.lex_state = 19, .external_lex_state = 3},
  [99] = {.lex_state = 22, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 13, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 13, .external_lex_state = 4},
  [114] = {.lex_state = 13, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 22},
  [118] = {.lex_state = 22},
  [119] = {.lex_state = 27, .external_lex_state = 3},
  [120] = {.lex_state = 22},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 21},
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
    [sym_comment] = STATE(5),
    [sym_field] = STATE(5),
    [sym_fieldset] = STATE(5),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym_document] = STATE(7),
    [sym_element] = STATE(5),
    [sym_list] = STATE(5),
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
    [aux_sym_document_repeat1] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_field] = STATE(13),
    [sym_fieldset] = STATE(13),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym_element] = STATE(13),
    [sym_list] = STATE(13),
    [sym_empty] = STATE(13),
    [sym_section] = STATE(13),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(25),
    [sym_commentOperator] = ACTIONS(11),
  },
  [6] = {
    [aux_sym_comment_repeat1] = STATE(14),
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
    [sym_key] = ACTIONS(33),
    [sym__sectionDescend] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__emptyLine] = ACTIONS(35),
    [sym_commentOperator] = ACTIONS(35),
  },
  [9] = {
    [sym__endOfLine] = ACTIONS(37),
    [sym_token] = ACTIONS(39),
  },
  [10] = {
    [sym_token] = ACTIONS(41),
  },
  [11] = {
    [sym_key] = ACTIONS(43),
  },
  [12] = {
    [sym__endOfLine] = ACTIONS(45),
  },
  [13] = {
    [aux_sym_document_repeat1] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_field] = STATE(13),
    [sym_fieldset] = STATE(13),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym_element] = STATE(13),
    [sym_list] = STATE(13),
    [sym_empty] = STATE(13),
    [sym_section] = STATE(13),
    [sym_key] = ACTIONS(47),
    [sym__sectionDescend] = ACTIONS(50),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym__emptyLine] = ACTIONS(55),
    [sym_commentOperator] = ACTIONS(58),
  },
  [14] = {
    [aux_sym_comment_repeat1] = STATE(14),
    [sym_key] = ACTIONS(61),
    [sym__sectionDescend] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__emptyLine] = ACTIONS(63),
    [sym_commentOperator] = ACTIONS(65),
  },
  [15] = {
    [aux_sym_list_repeat1] = STATE(23),
    [sym_comment] = STATE(24),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(24),
    [sym_continuation] = STATE(25),
    [sym_item] = STATE(23),
    [aux_sym_entry_repeat2] = STATE(25),
    [aux_sym_fieldset_repeat1] = STATE(26),
    [sym_entry] = STATE(26),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_itemOperator] = ACTIONS(70),
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_directContinuationOperator] = ACTIONS(68),
    [sym__emptyLine] = ACTIONS(74),
    [sym_commentOperator] = ACTIONS(77),
    [sym_key] = ACTIONS(80),
    [sym__sectionDescend] = ACTIONS(72),
  },
  [16] = {
    [sym__endOfLine] = ACTIONS(83),
  },
  [17] = {
    [sym__endOfLine] = ACTIONS(85),
  },
  [18] = {
    [sym__endOfLine] = ACTIONS(87),
    [sym_copyOperator] = ACTIONS(89),
    [sym_deepCopyOperator] = ACTIONS(91),
  },
  [19] = {
    [sym_key] = ACTIONS(93),
    [sym__sectionDescend] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym__emptyLine] = ACTIONS(95),
    [sym_commentOperator] = ACTIONS(95),
  },
  [20] = {
    [sym_token] = ACTIONS(97),
  },
  [21] = {
    [sym_entryOperator] = ACTIONS(99),
  },
  [22] = {
    [sym_token] = ACTIONS(101),
  },
  [23] = {
    [sym_item] = STATE(34),
    [sym_comment] = STATE(35),
    [aux_sym_list_repeat1] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(35),
    [sym_key] = ACTIONS(103),
    [sym__sectionDescend] = ACTIONS(103),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym__emptyLine] = ACTIONS(105),
    [sym_commentOperator] = ACTIONS(108),
    [sym_itemOperator] = ACTIONS(70),
  },
  [24] = {
    [sym_continuation] = STATE(39),
    [sym_item] = STATE(37),
    [sym_comment] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(62),
    [sym_entry] = STATE(36),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_key] = ACTIONS(111),
    [sym_itemOperator] = ACTIONS(70),
    [sym_directContinuationOperator] = ACTIONS(68),
    [sym__emptyLine] = ACTIONS(113),
    [sym_commentOperator] = ACTIONS(115),
  },
  [25] = {
    [sym_comment] = STATE(41),
    [aux_sym_entry_repeat2] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(41),
    [sym_continuation] = STATE(40),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_key] = ACTIONS(117),
    [sym__sectionDescend] = ACTIONS(117),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym__emptyLine] = ACTIONS(119),
    [sym_commentOperator] = ACTIONS(122),
    [sym_directContinuationOperator] = ACTIONS(68),
  },
  [26] = {
    [sym_comment] = STATE(43),
    [aux_sym_fieldset_repeat1] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_entry] = STATE(42),
    [sym_key] = ACTIONS(125),
    [sym__sectionDescend] = ACTIONS(128),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym__emptyLine] = ACTIONS(130),
    [sym_commentOperator] = ACTIONS(133),
  },
  [27] = {
    [sym_comment] = STATE(41),
    [aux_sym_entry_repeat2] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(41),
    [sym_continuation] = STATE(44),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_key] = ACTIONS(136),
    [sym__sectionDescend] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym__emptyLine] = ACTIONS(138),
    [sym_commentOperator] = ACTIONS(141),
    [sym_directContinuationOperator] = ACTIONS(68),
  },
  [28] = {
    [sym_item] = STATE(45),
    [sym_comment] = STATE(47),
    [aux_sym_list_repeat1] = STATE(45),
    [aux_sym_fieldset_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(47),
    [sym_entry] = STATE(46),
    [sym_key] = ACTIONS(144),
    [sym__sectionDescend] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym__emptyLine] = ACTIONS(149),
    [sym_commentOperator] = ACTIONS(152),
    [sym_itemOperator] = ACTIONS(70),
  },
  [29] = {
    [aux_sym_document_repeat1] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_field] = STATE(49),
    [sym_fieldset] = STATE(49),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(49),
    [sym_list] = STATE(49),
    [sym_empty] = STATE(49),
    [sym_section] = STATE(49),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(159),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(163),
  },
  [30] = {
    [sym_token] = ACTIONS(165),
  },
  [31] = {
    [sym__endOfLine] = ACTIONS(167),
  },
  [32] = {
    [sym_token] = ACTIONS(169),
  },
  [33] = {
    [sym__endOfLine] = ACTIONS(171),
  },
  [34] = {
    [sym_item] = STATE(34),
    [sym_comment] = STATE(35),
    [aux_sym_list_repeat1] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(35),
    [sym_key] = ACTIONS(173),
    [sym_itemOperator] = ACTIONS(175),
    [sym__sectionDescend] = ACTIONS(173),
    [sym__emptyLine] = ACTIONS(178),
    [sym_commentOperator] = ACTIONS(181),
    [ts_builtin_sym_end] = ACTIONS(173),
  },
  [35] = {
    [sym_item] = STATE(37),
    [sym_comment] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(76),
    [sym__emptyLine] = ACTIONS(184),
    [sym_itemOperator] = ACTIONS(186),
    [sym_commentOperator] = ACTIONS(188),
  },
  [36] = {
    [sym_key] = ACTIONS(190),
    [sym__sectionDescend] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym__emptyLine] = ACTIONS(192),
    [sym_commentOperator] = ACTIONS(192),
  },
  [37] = {
    [sym_key] = ACTIONS(173),
    [sym_itemOperator] = ACTIONS(194),
    [sym__sectionDescend] = ACTIONS(173),
    [sym__emptyLine] = ACTIONS(194),
    [sym_commentOperator] = ACTIONS(194),
    [ts_builtin_sym_end] = ACTIONS(173),
  },
  [38] = {
    [sym_comment] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_spacedContinuationOperator] = ACTIONS(196),
    [sym_itemOperator] = ACTIONS(196),
    [sym_directContinuationOperator] = ACTIONS(196),
    [sym__emptyLine] = ACTIONS(198),
    [sym_commentOperator] = ACTIONS(201),
    [sym_key] = ACTIONS(204),
  },
  [39] = {
    [sym_spacedContinuationOperator] = ACTIONS(206),
    [sym_itemOperator] = ACTIONS(206),
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_directContinuationOperator] = ACTIONS(206),
    [sym__emptyLine] = ACTIONS(206),
    [sym_commentOperator] = ACTIONS(206),
    [sym_key] = ACTIONS(208),
    [sym__sectionDescend] = ACTIONS(208),
  },
  [40] = {
    [sym_comment] = STATE(41),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(41),
    [sym_continuation] = STATE(40),
    [aux_sym_entry_repeat2] = STATE(40),
    [sym_spacedContinuationOperator] = ACTIONS(210),
    [sym_itemOperator] = ACTIONS(206),
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_directContinuationOperator] = ACTIONS(210),
    [sym__emptyLine] = ACTIONS(213),
    [sym_commentOperator] = ACTIONS(216),
    [sym_key] = ACTIONS(208),
    [sym__sectionDescend] = ACTIONS(208),
  },
  [41] = {
    [sym_comment] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(76),
    [sym_continuation] = STATE(39),
    [sym_spacedContinuationOperator] = ACTIONS(219),
    [sym_directContinuationOperator] = ACTIONS(219),
    [sym__emptyLine] = ACTIONS(184),
    [sym_commentOperator] = ACTIONS(188),
  },
  [42] = {
    [sym_comment] = STATE(43),
    [aux_sym_fieldset_repeat1] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_entry] = STATE(42),
    [sym_key] = ACTIONS(221),
    [sym__sectionDescend] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym__emptyLine] = ACTIONS(224),
    [sym_commentOperator] = ACTIONS(227),
  },
  [43] = {
    [sym_comment] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_entry] = STATE(36),
    [sym__emptyLine] = ACTIONS(113),
    [sym_key] = ACTIONS(111),
    [sym_commentOperator] = ACTIONS(115),
  },
  [44] = {
    [sym_comment] = STATE(41),
    [aux_sym_entry_repeat2] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(41),
    [sym_continuation] = STATE(40),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_key] = ACTIONS(230),
    [sym__sectionDescend] = ACTIONS(230),
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym__emptyLine] = ACTIONS(232),
    [sym_commentOperator] = ACTIONS(235),
    [sym_directContinuationOperator] = ACTIONS(68),
  },
  [45] = {
    [sym_item] = STATE(34),
    [sym_comment] = STATE(35),
    [aux_sym_list_repeat1] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(35),
    [sym_key] = ACTIONS(238),
    [sym__sectionDescend] = ACTIONS(238),
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym__emptyLine] = ACTIONS(240),
    [sym_commentOperator] = ACTIONS(243),
    [sym_itemOperator] = ACTIONS(70),
  },
  [46] = {
    [sym_comment] = STATE(43),
    [aux_sym_fieldset_repeat1] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_entry] = STATE(42),
    [sym_key] = ACTIONS(246),
    [sym__sectionDescend] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym__emptyLine] = ACTIONS(251),
    [sym_commentOperator] = ACTIONS(254),
  },
  [47] = {
    [sym_item] = STATE(37),
    [sym_comment] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_entry] = STATE(36),
    [sym_key] = ACTIONS(111),
    [sym_itemOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(113),
    [sym_commentOperator] = ACTIONS(115),
  },
  [48] = {
    [sym_key] = ACTIONS(257),
    [sym__sectionDescend] = ACTIONS(257),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym__emptyLine] = ACTIONS(259),
    [sym_commentOperator] = ACTIONS(259),
  },
  [49] = {
    [aux_sym_document_repeat1] = STATE(64),
    [sym_comment] = STATE(64),
    [sym_field] = STATE(64),
    [sym_fieldset] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(64),
    [sym_list] = STATE(64),
    [sym_empty] = STATE(64),
    [sym_section] = STATE(64),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(261),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(263),
  },
  [50] = {
    [sym__endOfLine] = ACTIONS(265),
  },
  [51] = {
    [sym_spacedContinuationOperator] = ACTIONS(267),
    [sym_itemOperator] = ACTIONS(267),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_directContinuationOperator] = ACTIONS(267),
    [sym__emptyLine] = ACTIONS(267),
    [sym_commentOperator] = ACTIONS(267),
    [sym_key] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [52] = {
    [sym__endOfLine] = ACTIONS(271),
  },
  [53] = {
    [sym_comment] = STATE(41),
    [aux_sym_entry_repeat2] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(41),
    [sym_continuation] = STATE(57),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_itemOperator] = ACTIONS(273),
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym_directContinuationOperator] = ACTIONS(68),
    [sym__emptyLine] = ACTIONS(277),
    [sym_commentOperator] = ACTIONS(280),
    [sym_key] = ACTIONS(275),
    [sym__sectionDescend] = ACTIONS(275),
  },
  [54] = {
    [sym_key] = ACTIONS(283),
    [sym__sectionDescend] = ACTIONS(283),
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym__emptyLine] = ACTIONS(285),
    [sym_commentOperator] = ACTIONS(285),
  },
  [55] = {
    [aux_sym_document_repeat1] = STATE(59),
    [sym_comment] = STATE(59),
    [sym_field] = STATE(59),
    [sym_fieldset] = STATE(59),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(59),
    [sym_list] = STATE(59),
    [sym_empty] = STATE(59),
    [sym_section] = STATE(59),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(287),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(289),
  },
  [56] = {
    [sym_comment] = STATE(41),
    [aux_sym_entry_repeat2] = STATE(60),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(41),
    [sym_continuation] = STATE(60),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_key] = ACTIONS(291),
    [sym__sectionDescend] = ACTIONS(291),
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym__emptyLine] = ACTIONS(293),
    [sym_commentOperator] = ACTIONS(296),
    [sym_directContinuationOperator] = ACTIONS(68),
  },
  [57] = {
    [sym_comment] = STATE(41),
    [aux_sym_entry_repeat2] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(41),
    [sym_continuation] = STATE(40),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_itemOperator] = ACTIONS(299),
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_directContinuationOperator] = ACTIONS(68),
    [sym__emptyLine] = ACTIONS(303),
    [sym_commentOperator] = ACTIONS(306),
    [sym_key] = ACTIONS(301),
    [sym__sectionDescend] = ACTIONS(301),
  },
  [58] = {
    [sym_key] = ACTIONS(309),
    [sym__sectionDescend] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym__emptyLine] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
  },
  [59] = {
    [aux_sym_document_repeat1] = STATE(64),
    [sym_comment] = STATE(64),
    [sym_field] = STATE(64),
    [sym_fieldset] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(64),
    [sym_list] = STATE(64),
    [sym_empty] = STATE(64),
    [sym_section] = STATE(64),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(261),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(313),
  },
  [60] = {
    [sym_comment] = STATE(41),
    [aux_sym_entry_repeat2] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(41),
    [sym_continuation] = STATE(40),
    [sym_spacedContinuationOperator] = ACTIONS(68),
    [sym_key] = ACTIONS(315),
    [sym__sectionDescend] = ACTIONS(315),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym__emptyLine] = ACTIONS(317),
    [sym_commentOperator] = ACTIONS(320),
    [sym_directContinuationOperator] = ACTIONS(68),
  },
  [61] = {
    [sym_key] = ACTIONS(323),
    [sym__sectionDescend] = ACTIONS(323),
    [ts_builtin_sym_end] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(325),
    [sym_commentOperator] = ACTIONS(325),
  },
  [62] = {
    [aux_sym_comment_repeat1] = STATE(65),
    [sym_spacedContinuationOperator] = ACTIONS(29),
    [sym_itemOperator] = ACTIONS(29),
    [sym_directContinuationOperator] = ACTIONS(29),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(115),
    [sym_key] = ACTIONS(27),
  },
  [63] = {
    [sym_key] = ACTIONS(33),
    [sym__sectionDescend] = ACTIONS(33),
    [sym__emptyLine] = ACTIONS(35),
    [sym_commentOperator] = ACTIONS(35),
    [sym__sectionAscend] = ACTIONS(33),
  },
  [64] = {
    [aux_sym_document_repeat1] = STATE(64),
    [sym_comment] = STATE(64),
    [sym_field] = STATE(64),
    [sym_fieldset] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(64),
    [sym_list] = STATE(64),
    [sym_empty] = STATE(64),
    [sym_section] = STATE(64),
    [sym_key] = ACTIONS(327),
    [sym__sectionDescend] = ACTIONS(330),
    [sym__emptyLine] = ACTIONS(333),
    [sym_commentOperator] = ACTIONS(336),
    [sym__sectionAscend] = ACTIONS(53),
  },
  [65] = {
    [aux_sym_comment_repeat1] = STATE(65),
    [sym_spacedContinuationOperator] = ACTIONS(63),
    [sym_itemOperator] = ACTIONS(63),
    [sym_directContinuationOperator] = ACTIONS(63),
    [sym__emptyLine] = ACTIONS(63),
    [sym_commentOperator] = ACTIONS(339),
    [sym_key] = ACTIONS(61),
  },
  [66] = {
    [aux_sym_list_repeat1] = STATE(68),
    [sym_comment] = STATE(103),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(103),
    [sym_continuation] = STATE(69),
    [sym_item] = STATE(68),
    [aux_sym_entry_repeat2] = STATE(69),
    [aux_sym_fieldset_repeat1] = STATE(70),
    [sym_entry] = STATE(70),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_itemOperator] = ACTIONS(344),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(346),
    [sym_commentOperator] = ACTIONS(77),
    [sym__sectionAscend] = ACTIONS(72),
    [sym_key] = ACTIONS(349),
    [sym__sectionDescend] = ACTIONS(72),
  },
  [67] = {
    [sym_spacedContinuationOperator] = ACTIONS(95),
    [sym_itemOperator] = ACTIONS(95),
    [sym_directContinuationOperator] = ACTIONS(95),
    [sym__emptyLine] = ACTIONS(95),
    [sym_commentOperator] = ACTIONS(95),
    [sym_key] = ACTIONS(93),
  },
  [68] = {
    [sym_item] = STATE(73),
    [sym_comment] = STATE(107),
    [aux_sym_list_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(107),
    [sym_key] = ACTIONS(103),
    [sym__sectionDescend] = ACTIONS(103),
    [sym_itemOperator] = ACTIONS(344),
    [sym__emptyLine] = ACTIONS(352),
    [sym_commentOperator] = ACTIONS(108),
    [sym__sectionAscend] = ACTIONS(103),
  },
  [69] = {
    [sym_comment] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(108),
    [sym_continuation] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_key] = ACTIONS(117),
    [sym__sectionDescend] = ACTIONS(117),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(355),
    [sym_commentOperator] = ACTIONS(122),
    [sym__sectionAscend] = ACTIONS(117),
  },
  [70] = {
    [sym_comment] = STATE(109),
    [aux_sym_fieldset_repeat1] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(109),
    [sym_entry] = STATE(79),
    [sym_key] = ACTIONS(358),
    [sym__sectionDescend] = ACTIONS(128),
    [sym__emptyLine] = ACTIONS(361),
    [sym_commentOperator] = ACTIONS(133),
    [sym__sectionAscend] = ACTIONS(128),
  },
  [71] = {
    [sym_comment] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(108),
    [sym_continuation] = STATE(80),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_key] = ACTIONS(136),
    [sym__sectionDescend] = ACTIONS(136),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(364),
    [sym_commentOperator] = ACTIONS(141),
    [sym__sectionAscend] = ACTIONS(136),
  },
  [72] = {
    [sym_item] = STATE(81),
    [sym_comment] = STATE(110),
    [aux_sym_list_repeat1] = STATE(81),
    [aux_sym_fieldset_repeat1] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(110),
    [sym_entry] = STATE(82),
    [sym_key] = ACTIONS(367),
    [sym__sectionDescend] = ACTIONS(147),
    [sym_itemOperator] = ACTIONS(344),
    [sym__emptyLine] = ACTIONS(370),
    [sym_commentOperator] = ACTIONS(152),
    [sym__sectionAscend] = ACTIONS(147),
  },
  [73] = {
    [sym_item] = STATE(73),
    [sym_comment] = STATE(107),
    [aux_sym_list_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(107),
    [sym_key] = ACTIONS(173),
    [sym_itemOperator] = ACTIONS(373),
    [sym__sectionDescend] = ACTIONS(173),
    [sym__emptyLine] = ACTIONS(376),
    [sym_commentOperator] = ACTIONS(181),
    [sym__sectionAscend] = ACTIONS(173),
  },
  [74] = {
    [sym_key] = ACTIONS(190),
    [sym__sectionDescend] = ACTIONS(190),
    [sym__emptyLine] = ACTIONS(192),
    [sym_commentOperator] = ACTIONS(192),
    [sym__sectionAscend] = ACTIONS(190),
  },
  [75] = {
    [sym_key] = ACTIONS(173),
    [sym_itemOperator] = ACTIONS(194),
    [sym__sectionDescend] = ACTIONS(173),
    [sym__emptyLine] = ACTIONS(194),
    [sym_commentOperator] = ACTIONS(194),
    [sym__sectionAscend] = ACTIONS(173),
  },
  [76] = {
    [sym_comment] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(76),
    [sym_spacedContinuationOperator] = ACTIONS(204),
    [sym_itemOperator] = ACTIONS(204),
    [sym_directContinuationOperator] = ACTIONS(204),
    [sym__emptyLine] = ACTIONS(379),
    [sym_commentOperator] = ACTIONS(382),
  },
  [77] = {
    [sym_spacedContinuationOperator] = ACTIONS(206),
    [sym_itemOperator] = ACTIONS(206),
    [sym_directContinuationOperator] = ACTIONS(206),
    [sym__emptyLine] = ACTIONS(206),
    [sym_commentOperator] = ACTIONS(206),
    [sym__sectionAscend] = ACTIONS(208),
    [sym_key] = ACTIONS(208),
    [sym__sectionDescend] = ACTIONS(208),
  },
  [78] = {
    [sym_comment] = STATE(108),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(108),
    [sym_continuation] = STATE(78),
    [aux_sym_entry_repeat2] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(385),
    [sym_itemOperator] = ACTIONS(206),
    [sym_directContinuationOperator] = ACTIONS(385),
    [sym__emptyLine] = ACTIONS(388),
    [sym_commentOperator] = ACTIONS(216),
    [sym__sectionAscend] = ACTIONS(208),
    [sym_key] = ACTIONS(208),
    [sym__sectionDescend] = ACTIONS(208),
  },
  [79] = {
    [sym_comment] = STATE(109),
    [aux_sym_fieldset_repeat1] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(109),
    [sym_entry] = STATE(79),
    [sym_key] = ACTIONS(391),
    [sym__sectionDescend] = ACTIONS(190),
    [sym__emptyLine] = ACTIONS(394),
    [sym_commentOperator] = ACTIONS(227),
    [sym__sectionAscend] = ACTIONS(190),
  },
  [80] = {
    [sym_comment] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(108),
    [sym_continuation] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_key] = ACTIONS(230),
    [sym__sectionDescend] = ACTIONS(230),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(397),
    [sym_commentOperator] = ACTIONS(235),
    [sym__sectionAscend] = ACTIONS(230),
  },
  [81] = {
    [sym_item] = STATE(73),
    [sym_comment] = STATE(107),
    [aux_sym_list_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(107),
    [sym_key] = ACTIONS(238),
    [sym__sectionDescend] = ACTIONS(238),
    [sym_itemOperator] = ACTIONS(344),
    [sym__emptyLine] = ACTIONS(400),
    [sym_commentOperator] = ACTIONS(243),
    [sym__sectionAscend] = ACTIONS(238),
  },
  [82] = {
    [sym_comment] = STATE(109),
    [aux_sym_fieldset_repeat1] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(109),
    [sym_entry] = STATE(79),
    [sym_key] = ACTIONS(403),
    [sym__sectionDescend] = ACTIONS(249),
    [sym__emptyLine] = ACTIONS(406),
    [sym_commentOperator] = ACTIONS(254),
    [sym__sectionAscend] = ACTIONS(249),
  },
  [83] = {
    [sym_key] = ACTIONS(257),
    [sym__sectionDescend] = ACTIONS(257),
    [sym__emptyLine] = ACTIONS(259),
    [sym_commentOperator] = ACTIONS(259),
    [sym__sectionAscend] = ACTIONS(257),
  },
  [84] = {
    [sym_spacedContinuationOperator] = ACTIONS(267),
    [sym_itemOperator] = ACTIONS(267),
    [sym_directContinuationOperator] = ACTIONS(267),
    [sym__emptyLine] = ACTIONS(267),
    [sym_commentOperator] = ACTIONS(267),
    [sym__sectionAscend] = ACTIONS(269),
    [sym_key] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [85] = {
    [sym_comment] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(108),
    [sym_continuation] = STATE(88),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_itemOperator] = ACTIONS(273),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(409),
    [sym_commentOperator] = ACTIONS(280),
    [sym__sectionAscend] = ACTIONS(275),
    [sym_key] = ACTIONS(275),
    [sym__sectionDescend] = ACTIONS(275),
  },
  [86] = {
    [sym_key] = ACTIONS(283),
    [sym__sectionDescend] = ACTIONS(283),
    [sym__emptyLine] = ACTIONS(285),
    [sym_commentOperator] = ACTIONS(285),
    [sym__sectionAscend] = ACTIONS(283),
  },
  [87] = {
    [sym_comment] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(108),
    [sym_continuation] = STATE(90),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_key] = ACTIONS(291),
    [sym__sectionDescend] = ACTIONS(291),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(412),
    [sym_commentOperator] = ACTIONS(296),
    [sym__sectionAscend] = ACTIONS(291),
  },
  [88] = {
    [sym_comment] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(108),
    [sym_continuation] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_itemOperator] = ACTIONS(299),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(415),
    [sym_commentOperator] = ACTIONS(306),
    [sym__sectionAscend] = ACTIONS(301),
    [sym_key] = ACTIONS(301),
    [sym__sectionDescend] = ACTIONS(301),
  },
  [89] = {
    [sym_key] = ACTIONS(309),
    [sym__sectionDescend] = ACTIONS(309),
    [sym__emptyLine] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [sym__sectionAscend] = ACTIONS(309),
  },
  [90] = {
    [sym_comment] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(108),
    [sym_continuation] = STATE(78),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_key] = ACTIONS(315),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(418),
    [sym_commentOperator] = ACTIONS(320),
    [sym__sectionAscend] = ACTIONS(315),
  },
  [91] = {
    [sym_key] = ACTIONS(323),
    [sym__sectionDescend] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(325),
    [sym_commentOperator] = ACTIONS(325),
    [sym__sectionAscend] = ACTIONS(323),
  },
  [92] = {
    [aux_sym_comment_repeat1] = STATE(93),
    [sym_spacedContinuationOperator] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(27),
    [sym_directContinuationOperator] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(188),
  },
  [93] = {
    [aux_sym_comment_repeat1] = STATE(93),
    [sym_spacedContinuationOperator] = ACTIONS(61),
    [sym_itemOperator] = ACTIONS(61),
    [sym_directContinuationOperator] = ACTIONS(61),
    [sym__emptyLine] = ACTIONS(61),
    [sym_commentOperator] = ACTIONS(421),
  },
  [94] = {
    [sym_spacedContinuationOperator] = ACTIONS(93),
    [sym_itemOperator] = ACTIONS(93),
    [sym_directContinuationOperator] = ACTIONS(93),
    [sym__emptyLine] = ACTIONS(93),
    [sym_commentOperator] = ACTIONS(93),
  },
  [95] = {
    [aux_sym_comment_repeat1] = STATE(96),
    [sym_key] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(27),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(27),
  },
  [96] = {
    [aux_sym_comment_repeat1] = STATE(96),
    [sym_key] = ACTIONS(61),
    [sym__sectionDescend] = ACTIONS(61),
    [sym__emptyLine] = ACTIONS(63),
    [sym_commentOperator] = ACTIONS(424),
    [sym__sectionAscend] = ACTIONS(61),
  },
  [97] = {
    [sym_key] = ACTIONS(93),
    [sym__sectionDescend] = ACTIONS(93),
    [sym__emptyLine] = ACTIONS(95),
    [sym_commentOperator] = ACTIONS(95),
    [sym__sectionAscend] = ACTIONS(93),
  },
  [98] = {
    [sym__endOfLine] = ACTIONS(427),
    [sym_elementOperator] = ACTIONS(429),
    [sym_copyOperator] = ACTIONS(431),
  },
  [99] = {
    [sym__endOfLine] = ACTIONS(433),
    [sym_token] = ACTIONS(435),
  },
  [100] = {
    [sym__endOfLine] = ACTIONS(437),
  },
  [101] = {
    [sym__endOfLine] = ACTIONS(439),
  },
  [102] = {
    [sym__endOfLine] = ACTIONS(441),
  },
  [103] = {
    [sym_continuation] = STATE(77),
    [sym_item] = STATE(75),
    [sym_comment] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(62),
    [sym_entry] = STATE(74),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_spacedContinuationOperator] = ACTIONS(342),
    [sym_key] = ACTIONS(443),
    [sym_itemOperator] = ACTIONS(344),
    [sym_directContinuationOperator] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(113),
    [sym_commentOperator] = ACTIONS(115),
  },
  [104] = {
    [aux_sym_document_repeat1] = STATE(111),
    [sym_comment] = STATE(111),
    [sym_field] = STATE(111),
    [sym_fieldset] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(111),
    [sym_list] = STATE(111),
    [sym_empty] = STATE(111),
    [sym_section] = STATE(111),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(445),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(447),
  },
  [105] = {
    [sym__endOfLine] = ACTIONS(449),
  },
  [106] = {
    [sym__endOfLine] = ACTIONS(451),
  },
  [107] = {
    [sym_item] = STATE(75),
    [sym_comment] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(76),
    [sym__emptyLine] = ACTIONS(184),
    [sym_itemOperator] = ACTIONS(453),
    [sym_commentOperator] = ACTIONS(188),
  },
  [108] = {
    [sym_comment] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(92),
    [aux_sym_entry_repeat1] = STATE(76),
    [sym_continuation] = STATE(77),
    [sym_spacedContinuationOperator] = ACTIONS(455),
    [sym_directContinuationOperator] = ACTIONS(455),
    [sym__emptyLine] = ACTIONS(184),
    [sym_commentOperator] = ACTIONS(188),
  },
  [109] = {
    [sym_comment] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_entry] = STATE(74),
    [sym__emptyLine] = ACTIONS(113),
    [sym_key] = ACTIONS(443),
    [sym_commentOperator] = ACTIONS(115),
  },
  [110] = {
    [sym_item] = STATE(75),
    [sym_comment] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(62),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_entry] = STATE(74),
    [sym_key] = ACTIONS(443),
    [sym_itemOperator] = ACTIONS(344),
    [sym__emptyLine] = ACTIONS(113),
    [sym_commentOperator] = ACTIONS(115),
  },
  [111] = {
    [aux_sym_document_repeat1] = STATE(64),
    [sym_comment] = STATE(64),
    [sym_field] = STATE(64),
    [sym_fieldset] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(64),
    [sym_list] = STATE(64),
    [sym_empty] = STATE(64),
    [sym_section] = STATE(64),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(261),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(457),
  },
  [112] = {
    [sym__endOfLine] = ACTIONS(459),
  },
  [113] = {
    [aux_sym_document_repeat1] = STATE(114),
    [sym_comment] = STATE(114),
    [sym_field] = STATE(114),
    [sym_fieldset] = STATE(114),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(114),
    [sym_list] = STATE(114),
    [sym_empty] = STATE(114),
    [sym_section] = STATE(114),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(461),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(463),
  },
  [114] = {
    [aux_sym_document_repeat1] = STATE(64),
    [sym_comment] = STATE(64),
    [sym_field] = STATE(64),
    [sym_fieldset] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(95),
    [sym_element] = STATE(64),
    [sym_list] = STATE(64),
    [sym_empty] = STATE(64),
    [sym_section] = STATE(64),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(157),
    [sym__emptyLine] = ACTIONS(261),
    [sym_commentOperator] = ACTIONS(161),
    [sym__sectionAscend] = ACTIONS(465),
  },
  [115] = {
    [sym__endOfLine] = ACTIONS(467),
  },
  [116] = {
    [sym__endOfLine] = ACTIONS(469),
  },
  [117] = {
    [sym_token] = ACTIONS(471),
  },
  [118] = {
    [sym_token] = ACTIONS(473),
  },
  [119] = {
    [sym__endOfLine] = ACTIONS(475),
    [sym_copyOperator] = ACTIONS(477),
    [sym_deepCopyOperator] = ACTIONS(479),
  },
  [120] = {
    [sym_token] = ACTIONS(481),
  },
  [121] = {
    [sym_token] = ACTIONS(483),
  },
  [122] = {
    [sym_token] = ACTIONS(485),
  },
  [123] = {
    [sym__endOfLine] = ACTIONS(487),
  },
  [124] = {
    [sym_token] = ACTIONS(489),
  },
  [125] = {
    [sym_token] = ACTIONS(491),
  },
  [126] = {
    [sym_key] = ACTIONS(493),
  },
  [127] = {
    [sym_entryOperator] = ACTIONS(495),
  },
  [128] = {
    [sym_token] = ACTIONS(497),
  },
  [129] = {
    [sym_sectionOperator] = ACTIONS(499),
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
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [25] = {.count = 1, .reusable = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [31] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [61] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [63] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [68] = {.count = 1, .reusable = false}, SHIFT(20),
  [70] = {.count = 1, .reusable = false}, SHIFT(22),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [74] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(24),
  [77] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(117),
  [80] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(21),
  [83] = {.count = 1, .reusable = true}, SHIFT(27),
  [85] = {.count = 1, .reusable = true}, SHIFT(28),
  [87] = {.count = 1, .reusable = true}, SHIFT(29),
  [89] = {.count = 1, .reusable = false}, SHIFT(30),
  [91] = {.count = 1, .reusable = true}, SHIFT(30),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(31),
  [99] = {.count = 1, .reusable = true}, SHIFT(32),
  [101] = {.count = 1, .reusable = true}, SHIFT(33),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [105] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(35),
  [108] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(124),
  [111] = {.count = 1, .reusable = true}, SHIFT(21),
  [113] = {.count = 1, .reusable = false}, SHIFT(38),
  [115] = {.count = 1, .reusable = false}, SHIFT(117),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [119] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(41),
  [122] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(124),
  [125] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(21),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [130] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(43),
  [133] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(117),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [138] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(41),
  [141] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(124),
  [144] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(21),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3),
  [149] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(47),
  [152] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(117),
  [155] = {.count = 1, .reusable = true}, SHIFT(98),
  [157] = {.count = 1, .reusable = true}, SHIFT(129),
  [159] = {.count = 1, .reusable = false}, SHIFT(49),
  [161] = {.count = 1, .reusable = false}, SHIFT(125),
  [163] = {.count = 1, .reusable = true}, SHIFT(48),
  [165] = {.count = 1, .reusable = true}, SHIFT(50),
  [167] = {.count = 1, .reusable = true}, SHIFT(51),
  [169] = {.count = 1, .reusable = true}, SHIFT(52),
  [171] = {.count = 1, .reusable = true}, SHIFT(53),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(35),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(124),
  [184] = {.count = 1, .reusable = true}, SHIFT(76),
  [186] = {.count = 1, .reusable = true}, SHIFT(22),
  [188] = {.count = 1, .reusable = true}, SHIFT(124),
  [190] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [192] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [194] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [196] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [198] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(38),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(117),
  [204] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [206] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [208] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [210] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(20),
  [213] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(41),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(124),
  [219] = {.count = 1, .reusable = true}, SHIFT(20),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(21),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(43),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(117),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 2),
  [232] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(41),
  [235] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(124),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .production_id = 3),
  [240] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(35),
  [243] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(124),
  [246] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(21),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3),
  [251] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(43),
  [254] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(117),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [261] = {.count = 1, .reusable = false}, SHIFT(64),
  [263] = {.count = 1, .reusable = true}, SHIFT(54),
  [265] = {.count = 1, .reusable = true}, SHIFT(55),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [271] = {.count = 1, .reusable = true}, SHIFT(56),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [277] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(41),
  [280] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(124),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [287] = {.count = 1, .reusable = false}, SHIFT(59),
  [289] = {.count = 1, .reusable = true}, SHIFT(58),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 2),
  [293] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(41),
  [296] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(124),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [303] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(41),
  [306] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(124),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [313] = {.count = 1, .reusable = true}, SHIFT(61),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 2),
  [317] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(41),
  [320] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(124),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [333] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [336] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [339] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(117),
  [342] = {.count = 1, .reusable = false}, SHIFT(120),
  [344] = {.count = 1, .reusable = false}, SHIFT(121),
  [346] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(103),
  [349] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(127),
  [352] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(107),
  [355] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(108),
  [358] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(127),
  [361] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(109),
  [364] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(108),
  [367] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(127),
  [370] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(110),
  [373] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(121),
  [376] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(107),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(76),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(124),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(120),
  [388] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(108),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(127),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(109),
  [397] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(108),
  [400] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(107),
  [403] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(127),
  [406] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(109),
  [409] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(108),
  [412] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(108),
  [415] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(108),
  [418] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(108),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(124),
  [424] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(125),
  [427] = {.count = 1, .reusable = true}, SHIFT(63),
  [429] = {.count = 1, .reusable = true}, SHIFT(99),
  [431] = {.count = 1, .reusable = true}, SHIFT(118),
  [433] = {.count = 1, .reusable = true}, SHIFT(66),
  [435] = {.count = 1, .reusable = true}, SHIFT(101),
  [437] = {.count = 1, .reusable = true}, SHIFT(67),
  [439] = {.count = 1, .reusable = true}, SHIFT(71),
  [441] = {.count = 1, .reusable = true}, SHIFT(72),
  [443] = {.count = 1, .reusable = true}, SHIFT(127),
  [445] = {.count = 1, .reusable = false}, SHIFT(111),
  [447] = {.count = 1, .reusable = true}, SHIFT(83),
  [449] = {.count = 1, .reusable = true}, SHIFT(84),
  [451] = {.count = 1, .reusable = true}, SHIFT(85),
  [453] = {.count = 1, .reusable = true}, SHIFT(121),
  [455] = {.count = 1, .reusable = true}, SHIFT(120),
  [457] = {.count = 1, .reusable = true}, SHIFT(86),
  [459] = {.count = 1, .reusable = true}, SHIFT(87),
  [461] = {.count = 1, .reusable = false}, SHIFT(114),
  [463] = {.count = 1, .reusable = true}, SHIFT(89),
  [465] = {.count = 1, .reusable = true}, SHIFT(91),
  [467] = {.count = 1, .reusable = true}, SHIFT(94),
  [469] = {.count = 1, .reusable = true}, SHIFT(97),
  [471] = {.count = 1, .reusable = true}, SHIFT(100),
  [473] = {.count = 1, .reusable = true}, SHIFT(102),
  [475] = {.count = 1, .reusable = true}, SHIFT(104),
  [477] = {.count = 1, .reusable = false}, SHIFT(128),
  [479] = {.count = 1, .reusable = true}, SHIFT(128),
  [481] = {.count = 1, .reusable = true}, SHIFT(105),
  [483] = {.count = 1, .reusable = true}, SHIFT(106),
  [485] = {.count = 1, .reusable = true}, SHIFT(112),
  [487] = {.count = 1, .reusable = true}, SHIFT(113),
  [489] = {.count = 1, .reusable = true}, SHIFT(115),
  [491] = {.count = 1, .reusable = true}, SHIFT(116),
  [493] = {.count = 1, .reusable = true}, SHIFT(119),
  [495] = {.count = 1, .reusable = true}, SHIFT(122),
  [497] = {.count = 1, .reusable = true}, SHIFT(123),
  [499] = {.count = 1, .reusable = true}, SHIFT(126),
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
