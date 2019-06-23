#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 134
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 3
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 4
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
  sym_multilineFieldOperator = 16,
  sym_document = 17,
  sym_comment = 18,
  sym_continuation = 19,
  sym_element = 20,
  sym_empty = 21,
  sym_entry = 22,
  sym_field = 23,
  sym_fieldset = 24,
  sym_item = 25,
  sym_list = 26,
  sym_section = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_comment_repeat1 = 29,
  aux_sym_entry_repeat1 = 30,
  aux_sym_entry_repeat2 = 31,
  aux_sym_fieldset_repeat1 = 32,
  aux_sym_list_repeat1 = 33,
  anon_alias_sym_template = 34,
  anon_alias_sym_comment = 35,
  anon_alias_sym_value = 36,
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
  [sym_multilineFieldOperator] = "multilineFieldOperator",
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
  [sym_multilineFieldOperator] = {
    .visible = true,
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
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 13, .external_lex_state = 2},
  [10] = {.lex_state = 22, .external_lex_state = 3},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 27, .external_lex_state = 3},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 13, .external_lex_state = 2},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13, .external_lex_state = 4},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 13, .external_lex_state = 2},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 13, .external_lex_state = 2},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13, .external_lex_state = 2},
  [42] = {.lex_state = 13, .external_lex_state = 2},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 13, .external_lex_state = 2},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13, .external_lex_state = 2},
  [47] = {.lex_state = 13, .external_lex_state = 2},
  [48] = {.lex_state = 13, .external_lex_state = 2},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 13, .external_lex_state = 2},
  [51] = {.lex_state = 13, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 13, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 13, .external_lex_state = 2},
  [56] = {.lex_state = 13, .external_lex_state = 2},
  [57] = {.lex_state = 13, .external_lex_state = 4},
  [58] = {.lex_state = 13, .external_lex_state = 2},
  [59] = {.lex_state = 13, .external_lex_state = 2},
  [60] = {.lex_state = 13, .external_lex_state = 2},
  [61] = {.lex_state = 13, .external_lex_state = 4},
  [62] = {.lex_state = 13, .external_lex_state = 2},
  [63] = {.lex_state = 13, .external_lex_state = 2},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13, .external_lex_state = 4},
  [66] = {.lex_state = 13, .external_lex_state = 4},
  [67] = {.lex_state = 13, .external_lex_state = 4},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13, .external_lex_state = 4},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13, .external_lex_state = 4},
  [72] = {.lex_state = 13, .external_lex_state = 4},
  [73] = {.lex_state = 13, .external_lex_state = 4},
  [74] = {.lex_state = 13, .external_lex_state = 4},
  [75] = {.lex_state = 13, .external_lex_state = 4},
  [76] = {.lex_state = 13, .external_lex_state = 4},
  [77] = {.lex_state = 13, .external_lex_state = 4},
  [78] = {.lex_state = 13, .external_lex_state = 4},
  [79] = {.lex_state = 29},
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
  [92] = {.lex_state = 13, .external_lex_state = 4},
  [93] = {.lex_state = 13, .external_lex_state = 4},
  [94] = {.lex_state = 13, .external_lex_state = 4},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 13, .external_lex_state = 4},
  [99] = {.lex_state = 13, .external_lex_state = 4},
  [100] = {.lex_state = 13, .external_lex_state = 4},
  [101] = {.lex_state = 19, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 22, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 13, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 13, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 13, .external_lex_state = 4},
  [118] = {.lex_state = 13, .external_lex_state = 4},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 27, .external_lex_state = 3},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 28},
  [132] = {.lex_state = 22},
  [133] = {.lex_state = 21},
};

enum {
  ts_external_token__endOfLine = 0,
  ts_external_token__sectionAscend = 1,
  ts_external_token__sectionDescend = 2,
  ts_external_token_multilineFieldOperator = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__endOfLine] = sym__endOfLine,
  [ts_external_token__sectionAscend] = sym__sectionAscend,
  [ts_external_token__sectionDescend] = sym__sectionDescend,
  [ts_external_token_multilineFieldOperator] = sym_multilineFieldOperator,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__endOfLine] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token__sectionAscend] = true,
    [ts_external_token_multilineFieldOperator] = true,
  },
  [2] = {
    [ts_external_token__sectionDescend] = true,
    [ts_external_token_multilineFieldOperator] = true,
  },
  [3] = {
    [ts_external_token__endOfLine] = true,
  },
  [4] = {
    [ts_external_token__sectionAscend] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token_multilineFieldOperator] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__endOfLine] = ACTIONS(1),
    [sym_itemOperator] = ACTIONS(1),
    [sym_directContinuationOperator] = ACTIONS(1),
    [sym__emptyLine] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
    [sym__sectionDescend] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym_deepCopyOperator] = ACTIONS(1),
    [sym_spacedContinuationOperator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_multilineFieldOperator] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_document_repeat1] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_field] = STATE(6),
    [sym_fieldset] = STATE(6),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym_document] = STATE(8),
    [sym_element] = STATE(6),
    [sym_list] = STATE(6),
    [sym_empty] = STATE(6),
    [sym_section] = STATE(6),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(11),
    [sym_multilineFieldOperator] = ACTIONS(13),
  },
  [2] = {
    [sym__endOfLine] = ACTIONS(15),
    [sym_elementOperator] = ACTIONS(17),
    [sym_copyOperator] = ACTIONS(19),
  },
  [3] = {
    [sym_sectionOperator] = ACTIONS(21),
  },
  [4] = {
    [sym_token] = ACTIONS(23),
  },
  [5] = {
    [sym__endOfLine] = ACTIONS(25),
  },
  [6] = {
    [aux_sym_document_repeat1] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_field] = STATE(15),
    [sym_fieldset] = STATE(15),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym_element] = STATE(15),
    [sym_list] = STATE(15),
    [sym_empty] = STATE(15),
    [sym_section] = STATE(15),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(7),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(11),
    [sym_multilineFieldOperator] = ACTIONS(13),
  },
  [7] = {
    [aux_sym_comment_repeat1] = STATE(16),
    [sym_key] = ACTIONS(31),
    [sym__sectionDescend] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(11),
    [sym_multilineFieldOperator] = ACTIONS(31),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [9] = {
    [sym_key] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__emptyLine] = ACTIONS(39),
    [sym_commentOperator] = ACTIONS(39),
    [sym_multilineFieldOperator] = ACTIONS(37),
  },
  [10] = {
    [sym__endOfLine] = ACTIONS(41),
    [sym_token] = ACTIONS(43),
  },
  [11] = {
    [sym_token] = ACTIONS(45),
  },
  [12] = {
    [sym_key] = ACTIONS(47),
  },
  [13] = {
    [sym__endOfLine] = ACTIONS(49),
  },
  [14] = {
    [sym_key] = ACTIONS(51),
    [sym__sectionDescend] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__emptyLine] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(53),
    [sym_multilineFieldOperator] = ACTIONS(51),
  },
  [15] = {
    [aux_sym_document_repeat1] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_field] = STATE(15),
    [sym_fieldset] = STATE(15),
    [aux_sym_comment_repeat1] = STATE(7),
    [sym_element] = STATE(15),
    [sym_list] = STATE(15),
    [sym_empty] = STATE(15),
    [sym_section] = STATE(15),
    [sym_key] = ACTIONS(55),
    [sym__sectionDescend] = ACTIONS(58),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__emptyLine] = ACTIONS(63),
    [sym_commentOperator] = ACTIONS(66),
    [sym_multilineFieldOperator] = ACTIONS(69),
  },
  [16] = {
    [aux_sym_comment_repeat1] = STATE(16),
    [sym_key] = ACTIONS(72),
    [sym__sectionDescend] = ACTIONS(72),
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym__emptyLine] = ACTIONS(74),
    [sym_commentOperator] = ACTIONS(76),
    [sym_multilineFieldOperator] = ACTIONS(72),
  },
  [17] = {
    [aux_sym_list_repeat1] = STATE(25),
    [sym_comment] = STATE(26),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(26),
    [sym_continuation] = STATE(27),
    [sym_item] = STATE(25),
    [aux_sym_entry_repeat2] = STATE(27),
    [aux_sym_fieldset_repeat1] = STATE(28),
    [sym_entry] = STATE(28),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [sym_itemOperator] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(85),
    [sym_commentOperator] = ACTIONS(88),
    [sym_key] = ACTIONS(91),
    [sym__sectionDescend] = ACTIONS(83),
    [sym_multilineFieldOperator] = ACTIONS(83),
  },
  [18] = {
    [sym__endOfLine] = ACTIONS(94),
  },
  [19] = {
    [sym__endOfLine] = ACTIONS(96),
  },
  [20] = {
    [sym__endOfLine] = ACTIONS(98),
    [sym_copyOperator] = ACTIONS(100),
    [sym_deepCopyOperator] = ACTIONS(102),
  },
  [21] = {
    [sym_key] = ACTIONS(104),
    [sym__sectionDescend] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym__emptyLine] = ACTIONS(106),
    [sym_commentOperator] = ACTIONS(106),
    [sym_multilineFieldOperator] = ACTIONS(104),
  },
  [22] = {
    [sym_token] = ACTIONS(108),
  },
  [23] = {
    [sym_entryOperator] = ACTIONS(110),
  },
  [24] = {
    [sym_token] = ACTIONS(112),
  },
  [25] = {
    [sym_item] = STATE(36),
    [sym_comment] = STATE(37),
    [aux_sym_list_repeat1] = STATE(36),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_key] = ACTIONS(114),
    [sym__sectionDescend] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym__emptyLine] = ACTIONS(116),
    [sym_commentOperator] = ACTIONS(119),
    [sym_itemOperator] = ACTIONS(81),
    [sym_multilineFieldOperator] = ACTIONS(114),
  },
  [26] = {
    [sym_continuation] = STATE(41),
    [sym_item] = STATE(39),
    [sym_comment] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(64),
    [sym_entry] = STATE(38),
    [aux_sym_entry_repeat1] = STATE(40),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [sym_key] = ACTIONS(122),
    [sym_itemOperator] = ACTIONS(81),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(124),
    [sym_commentOperator] = ACTIONS(126),
  },
  [27] = {
    [sym_comment] = STATE(43),
    [aux_sym_entry_repeat2] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_continuation] = STATE(42),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(130),
    [sym_commentOperator] = ACTIONS(133),
    [sym_key] = ACTIONS(128),
    [sym__sectionDescend] = ACTIONS(128),
    [sym_multilineFieldOperator] = ACTIONS(128),
  },
  [28] = {
    [sym_comment] = STATE(45),
    [aux_sym_fieldset_repeat1] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_entry] = STATE(44),
    [sym_key] = ACTIONS(136),
    [sym__sectionDescend] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(141),
    [sym_commentOperator] = ACTIONS(144),
    [sym_multilineFieldOperator] = ACTIONS(139),
  },
  [29] = {
    [sym_comment] = STATE(43),
    [aux_sym_entry_repeat2] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_continuation] = STATE(46),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(149),
    [sym_commentOperator] = ACTIONS(152),
    [sym_key] = ACTIONS(147),
    [sym__sectionDescend] = ACTIONS(147),
    [sym_multilineFieldOperator] = ACTIONS(147),
  },
  [30] = {
    [sym_item] = STATE(47),
    [sym_comment] = STATE(49),
    [aux_sym_list_repeat1] = STATE(47),
    [aux_sym_fieldset_repeat1] = STATE(48),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(49),
    [sym_entry] = STATE(48),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(158),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym__emptyLine] = ACTIONS(160),
    [sym_commentOperator] = ACTIONS(163),
    [sym_itemOperator] = ACTIONS(81),
    [sym_multilineFieldOperator] = ACTIONS(158),
  },
  [31] = {
    [aux_sym_document_repeat1] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_field] = STATE(51),
    [sym_fieldset] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(51),
    [sym_list] = STATE(51),
    [sym_empty] = STATE(51),
    [sym_section] = STATE(51),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(174),
    [sym_multilineFieldOperator] = ACTIONS(176),
  },
  [32] = {
    [sym_token] = ACTIONS(178),
  },
  [33] = {
    [sym__endOfLine] = ACTIONS(180),
  },
  [34] = {
    [sym_token] = ACTIONS(182),
  },
  [35] = {
    [sym__endOfLine] = ACTIONS(184),
  },
  [36] = {
    [sym_item] = STATE(36),
    [sym_comment] = STATE(37),
    [aux_sym_list_repeat1] = STATE(36),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_key] = ACTIONS(186),
    [sym_itemOperator] = ACTIONS(188),
    [sym__sectionDescend] = ACTIONS(186),
    [sym__emptyLine] = ACTIONS(191),
    [sym_commentOperator] = ACTIONS(194),
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_multilineFieldOperator] = ACTIONS(186),
  },
  [37] = {
    [sym_item] = STATE(39),
    [sym_comment] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(79),
    [sym__emptyLine] = ACTIONS(197),
    [sym_itemOperator] = ACTIONS(199),
    [sym_commentOperator] = ACTIONS(201),
  },
  [38] = {
    [sym_key] = ACTIONS(203),
    [sym__sectionDescend] = ACTIONS(203),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym__emptyLine] = ACTIONS(205),
    [sym_commentOperator] = ACTIONS(205),
    [sym_multilineFieldOperator] = ACTIONS(203),
  },
  [39] = {
    [sym_key] = ACTIONS(186),
    [sym_itemOperator] = ACTIONS(207),
    [sym__sectionDescend] = ACTIONS(186),
    [sym__emptyLine] = ACTIONS(207),
    [sym_commentOperator] = ACTIONS(207),
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_multilineFieldOperator] = ACTIONS(186),
  },
  [40] = {
    [sym_comment] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(40),
    [sym_spacedContinuationOperator] = ACTIONS(209),
    [sym_itemOperator] = ACTIONS(209),
    [sym_directContinuationOperator] = ACTIONS(209),
    [sym__emptyLine] = ACTIONS(211),
    [sym_commentOperator] = ACTIONS(214),
    [sym_key] = ACTIONS(217),
  },
  [41] = {
    [sym_spacedContinuationOperator] = ACTIONS(219),
    [sym_itemOperator] = ACTIONS(219),
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_directContinuationOperator] = ACTIONS(219),
    [sym__emptyLine] = ACTIONS(219),
    [sym_commentOperator] = ACTIONS(219),
    [sym_key] = ACTIONS(221),
    [sym__sectionDescend] = ACTIONS(221),
    [sym_multilineFieldOperator] = ACTIONS(221),
  },
  [42] = {
    [sym_comment] = STATE(43),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_continuation] = STATE(42),
    [aux_sym_entry_repeat2] = STATE(42),
    [sym_spacedContinuationOperator] = ACTIONS(223),
    [sym_itemOperator] = ACTIONS(219),
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_directContinuationOperator] = ACTIONS(223),
    [sym__emptyLine] = ACTIONS(226),
    [sym_commentOperator] = ACTIONS(229),
    [sym_key] = ACTIONS(221),
    [sym__sectionDescend] = ACTIONS(221),
    [sym_multilineFieldOperator] = ACTIONS(221),
  },
  [43] = {
    [sym_comment] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(79),
    [sym_continuation] = STATE(41),
    [sym_spacedContinuationOperator] = ACTIONS(232),
    [sym_directContinuationOperator] = ACTIONS(232),
    [sym__emptyLine] = ACTIONS(197),
    [sym_commentOperator] = ACTIONS(201),
  },
  [44] = {
    [sym_comment] = STATE(45),
    [aux_sym_fieldset_repeat1] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_entry] = STATE(44),
    [sym_key] = ACTIONS(234),
    [sym__sectionDescend] = ACTIONS(203),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym__emptyLine] = ACTIONS(237),
    [sym_commentOperator] = ACTIONS(240),
    [sym_multilineFieldOperator] = ACTIONS(203),
  },
  [45] = {
    [sym_comment] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(40),
    [sym_entry] = STATE(38),
    [sym__emptyLine] = ACTIONS(124),
    [sym_key] = ACTIONS(122),
    [sym_commentOperator] = ACTIONS(126),
  },
  [46] = {
    [sym_comment] = STATE(43),
    [aux_sym_entry_repeat2] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_continuation] = STATE(42),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(245),
    [sym_commentOperator] = ACTIONS(248),
    [sym_key] = ACTIONS(243),
    [sym__sectionDescend] = ACTIONS(243),
    [sym_multilineFieldOperator] = ACTIONS(243),
  },
  [47] = {
    [sym_item] = STATE(36),
    [sym_comment] = STATE(37),
    [aux_sym_list_repeat1] = STATE(36),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(37),
    [sym_key] = ACTIONS(251),
    [sym__sectionDescend] = ACTIONS(251),
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym__emptyLine] = ACTIONS(253),
    [sym_commentOperator] = ACTIONS(256),
    [sym_itemOperator] = ACTIONS(81),
    [sym_multilineFieldOperator] = ACTIONS(251),
  },
  [48] = {
    [sym_comment] = STATE(45),
    [aux_sym_fieldset_repeat1] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_entry] = STATE(44),
    [sym_key] = ACTIONS(259),
    [sym__sectionDescend] = ACTIONS(262),
    [ts_builtin_sym_end] = ACTIONS(262),
    [sym__emptyLine] = ACTIONS(264),
    [sym_commentOperator] = ACTIONS(267),
    [sym_multilineFieldOperator] = ACTIONS(262),
  },
  [49] = {
    [sym_item] = STATE(39),
    [sym_comment] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(40),
    [sym_entry] = STATE(38),
    [sym_key] = ACTIONS(122),
    [sym_itemOperator] = ACTIONS(81),
    [sym__emptyLine] = ACTIONS(124),
    [sym_commentOperator] = ACTIONS(126),
  },
  [50] = {
    [sym_key] = ACTIONS(270),
    [sym__sectionDescend] = ACTIONS(270),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym__emptyLine] = ACTIONS(272),
    [sym_commentOperator] = ACTIONS(272),
    [sym_multilineFieldOperator] = ACTIONS(270),
  },
  [51] = {
    [aux_sym_document_repeat1] = STATE(67),
    [sym_comment] = STATE(67),
    [sym_field] = STATE(67),
    [sym_fieldset] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(67),
    [sym_list] = STATE(67),
    [sym_empty] = STATE(67),
    [sym_section] = STATE(67),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(276),
    [sym_multilineFieldOperator] = ACTIONS(176),
  },
  [52] = {
    [sym__endOfLine] = ACTIONS(278),
  },
  [53] = {
    [sym_spacedContinuationOperator] = ACTIONS(280),
    [sym_itemOperator] = ACTIONS(280),
    [ts_builtin_sym_end] = ACTIONS(282),
    [sym_directContinuationOperator] = ACTIONS(280),
    [sym__emptyLine] = ACTIONS(280),
    [sym_commentOperator] = ACTIONS(280),
    [sym_key] = ACTIONS(282),
    [sym__sectionDescend] = ACTIONS(282),
    [sym_multilineFieldOperator] = ACTIONS(282),
  },
  [54] = {
    [sym__endOfLine] = ACTIONS(284),
  },
  [55] = {
    [sym_comment] = STATE(43),
    [aux_sym_entry_repeat2] = STATE(59),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_continuation] = STATE(59),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [sym_itemOperator] = ACTIONS(286),
    [ts_builtin_sym_end] = ACTIONS(288),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(290),
    [sym_commentOperator] = ACTIONS(293),
    [sym_key] = ACTIONS(288),
    [sym__sectionDescend] = ACTIONS(288),
    [sym_multilineFieldOperator] = ACTIONS(288),
  },
  [56] = {
    [sym_key] = ACTIONS(296),
    [sym__sectionDescend] = ACTIONS(296),
    [ts_builtin_sym_end] = ACTIONS(296),
    [sym__emptyLine] = ACTIONS(298),
    [sym_commentOperator] = ACTIONS(298),
    [sym_multilineFieldOperator] = ACTIONS(296),
  },
  [57] = {
    [aux_sym_document_repeat1] = STATE(61),
    [sym_comment] = STATE(61),
    [sym_field] = STATE(61),
    [sym_fieldset] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(61),
    [sym_list] = STATE(61),
    [sym_empty] = STATE(61),
    [sym_section] = STATE(61),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(300),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(302),
    [sym_multilineFieldOperator] = ACTIONS(176),
  },
  [58] = {
    [sym_comment] = STATE(43),
    [aux_sym_entry_repeat2] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_continuation] = STATE(62),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(304),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(306),
    [sym_commentOperator] = ACTIONS(309),
    [sym_key] = ACTIONS(304),
    [sym__sectionDescend] = ACTIONS(304),
    [sym_multilineFieldOperator] = ACTIONS(304),
  },
  [59] = {
    [sym_comment] = STATE(43),
    [aux_sym_entry_repeat2] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_continuation] = STATE(42),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [sym_itemOperator] = ACTIONS(312),
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(316),
    [sym_commentOperator] = ACTIONS(319),
    [sym_key] = ACTIONS(314),
    [sym__sectionDescend] = ACTIONS(314),
    [sym_multilineFieldOperator] = ACTIONS(314),
  },
  [60] = {
    [sym_key] = ACTIONS(322),
    [sym__sectionDescend] = ACTIONS(322),
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym__emptyLine] = ACTIONS(324),
    [sym_commentOperator] = ACTIONS(324),
    [sym_multilineFieldOperator] = ACTIONS(322),
  },
  [61] = {
    [aux_sym_document_repeat1] = STATE(67),
    [sym_comment] = STATE(67),
    [sym_field] = STATE(67),
    [sym_fieldset] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(67),
    [sym_list] = STATE(67),
    [sym_empty] = STATE(67),
    [sym_section] = STATE(67),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(326),
    [sym_multilineFieldOperator] = ACTIONS(176),
  },
  [62] = {
    [sym_comment] = STATE(43),
    [aux_sym_entry_repeat2] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(43),
    [sym_continuation] = STATE(42),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(328),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(330),
    [sym_commentOperator] = ACTIONS(333),
    [sym_key] = ACTIONS(328),
    [sym__sectionDescend] = ACTIONS(328),
    [sym_multilineFieldOperator] = ACTIONS(328),
  },
  [63] = {
    [sym_key] = ACTIONS(336),
    [sym__sectionDescend] = ACTIONS(336),
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym__emptyLine] = ACTIONS(338),
    [sym_commentOperator] = ACTIONS(338),
    [sym_multilineFieldOperator] = ACTIONS(336),
  },
  [64] = {
    [aux_sym_comment_repeat1] = STATE(68),
    [sym_spacedContinuationOperator] = ACTIONS(33),
    [sym_itemOperator] = ACTIONS(33),
    [sym_directContinuationOperator] = ACTIONS(33),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(126),
    [sym_key] = ACTIONS(31),
  },
  [65] = {
    [sym_key] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(37),
    [sym__emptyLine] = ACTIONS(39),
    [sym_commentOperator] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(37),
    [sym_multilineFieldOperator] = ACTIONS(37),
  },
  [66] = {
    [sym_key] = ACTIONS(51),
    [sym__sectionDescend] = ACTIONS(51),
    [sym__emptyLine] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(53),
    [sym__sectionAscend] = ACTIONS(51),
    [sym_multilineFieldOperator] = ACTIONS(51),
  },
  [67] = {
    [aux_sym_document_repeat1] = STATE(67),
    [sym_comment] = STATE(67),
    [sym_field] = STATE(67),
    [sym_fieldset] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(67),
    [sym_list] = STATE(67),
    [sym_empty] = STATE(67),
    [sym_section] = STATE(67),
    [sym_key] = ACTIONS(340),
    [sym__sectionDescend] = ACTIONS(343),
    [sym__emptyLine] = ACTIONS(346),
    [sym_commentOperator] = ACTIONS(349),
    [sym__sectionAscend] = ACTIONS(61),
    [sym_multilineFieldOperator] = ACTIONS(352),
  },
  [68] = {
    [aux_sym_comment_repeat1] = STATE(68),
    [sym_spacedContinuationOperator] = ACTIONS(74),
    [sym_itemOperator] = ACTIONS(74),
    [sym_directContinuationOperator] = ACTIONS(74),
    [sym__emptyLine] = ACTIONS(74),
    [sym_commentOperator] = ACTIONS(355),
    [sym_key] = ACTIONS(72),
  },
  [69] = {
    [aux_sym_list_repeat1] = STATE(71),
    [sym_comment] = STATE(107),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(107),
    [sym_continuation] = STATE(72),
    [sym_item] = STATE(71),
    [aux_sym_entry_repeat2] = STATE(72),
    [aux_sym_fieldset_repeat1] = STATE(73),
    [sym_entry] = STATE(73),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_itemOperator] = ACTIONS(360),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(362),
    [sym_commentOperator] = ACTIONS(88),
    [sym__sectionAscend] = ACTIONS(83),
    [sym_key] = ACTIONS(365),
    [sym__sectionDescend] = ACTIONS(83),
    [sym_multilineFieldOperator] = ACTIONS(83),
  },
  [70] = {
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_itemOperator] = ACTIONS(106),
    [sym_directContinuationOperator] = ACTIONS(106),
    [sym__emptyLine] = ACTIONS(106),
    [sym_commentOperator] = ACTIONS(106),
    [sym_key] = ACTIONS(104),
  },
  [71] = {
    [sym_item] = STATE(76),
    [sym_comment] = STATE(111),
    [aux_sym_list_repeat1] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_key] = ACTIONS(114),
    [sym__sectionDescend] = ACTIONS(114),
    [sym_itemOperator] = ACTIONS(360),
    [sym__emptyLine] = ACTIONS(368),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(114),
    [sym_multilineFieldOperator] = ACTIONS(114),
  },
  [72] = {
    [sym_comment] = STATE(112),
    [aux_sym_entry_repeat2] = STATE(81),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(112),
    [sym_continuation] = STATE(81),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(371),
    [sym_commentOperator] = ACTIONS(133),
    [sym__sectionAscend] = ACTIONS(128),
    [sym_key] = ACTIONS(128),
    [sym__sectionDescend] = ACTIONS(128),
    [sym_multilineFieldOperator] = ACTIONS(128),
  },
  [73] = {
    [sym_comment] = STATE(113),
    [aux_sym_fieldset_repeat1] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(113),
    [sym_entry] = STATE(82),
    [sym_key] = ACTIONS(374),
    [sym__sectionDescend] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(377),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionAscend] = ACTIONS(139),
    [sym_multilineFieldOperator] = ACTIONS(139),
  },
  [74] = {
    [sym_comment] = STATE(112),
    [aux_sym_entry_repeat2] = STATE(83),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(112),
    [sym_continuation] = STATE(83),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(380),
    [sym_commentOperator] = ACTIONS(152),
    [sym__sectionAscend] = ACTIONS(147),
    [sym_key] = ACTIONS(147),
    [sym__sectionDescend] = ACTIONS(147),
    [sym_multilineFieldOperator] = ACTIONS(147),
  },
  [75] = {
    [sym_item] = STATE(84),
    [sym_comment] = STATE(114),
    [aux_sym_list_repeat1] = STATE(84),
    [aux_sym_fieldset_repeat1] = STATE(85),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(114),
    [sym_entry] = STATE(85),
    [sym_key] = ACTIONS(383),
    [sym__sectionDescend] = ACTIONS(158),
    [sym_itemOperator] = ACTIONS(360),
    [sym__emptyLine] = ACTIONS(386),
    [sym_commentOperator] = ACTIONS(163),
    [sym__sectionAscend] = ACTIONS(158),
    [sym_multilineFieldOperator] = ACTIONS(158),
  },
  [76] = {
    [sym_item] = STATE(76),
    [sym_comment] = STATE(111),
    [aux_sym_list_repeat1] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_key] = ACTIONS(186),
    [sym_itemOperator] = ACTIONS(389),
    [sym__sectionDescend] = ACTIONS(186),
    [sym__emptyLine] = ACTIONS(392),
    [sym_commentOperator] = ACTIONS(194),
    [sym__sectionAscend] = ACTIONS(186),
    [sym_multilineFieldOperator] = ACTIONS(186),
  },
  [77] = {
    [sym_key] = ACTIONS(203),
    [sym__sectionDescend] = ACTIONS(203),
    [sym__emptyLine] = ACTIONS(205),
    [sym_commentOperator] = ACTIONS(205),
    [sym__sectionAscend] = ACTIONS(203),
    [sym_multilineFieldOperator] = ACTIONS(203),
  },
  [78] = {
    [sym_key] = ACTIONS(186),
    [sym_itemOperator] = ACTIONS(207),
    [sym__sectionDescend] = ACTIONS(186),
    [sym__emptyLine] = ACTIONS(207),
    [sym_commentOperator] = ACTIONS(207),
    [sym__sectionAscend] = ACTIONS(186),
    [sym_multilineFieldOperator] = ACTIONS(186),
  },
  [79] = {
    [sym_comment] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(79),
    [sym_spacedContinuationOperator] = ACTIONS(217),
    [sym_itemOperator] = ACTIONS(217),
    [sym_directContinuationOperator] = ACTIONS(217),
    [sym__emptyLine] = ACTIONS(395),
    [sym_commentOperator] = ACTIONS(398),
  },
  [80] = {
    [sym_spacedContinuationOperator] = ACTIONS(219),
    [sym_itemOperator] = ACTIONS(219),
    [sym_directContinuationOperator] = ACTIONS(219),
    [sym__emptyLine] = ACTIONS(219),
    [sym_commentOperator] = ACTIONS(219),
    [sym__sectionAscend] = ACTIONS(221),
    [sym_key] = ACTIONS(221),
    [sym__sectionDescend] = ACTIONS(221),
    [sym_multilineFieldOperator] = ACTIONS(221),
  },
  [81] = {
    [sym_comment] = STATE(112),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(112),
    [sym_continuation] = STATE(81),
    [aux_sym_entry_repeat2] = STATE(81),
    [sym_spacedContinuationOperator] = ACTIONS(401),
    [sym_itemOperator] = ACTIONS(219),
    [sym_directContinuationOperator] = ACTIONS(401),
    [sym__emptyLine] = ACTIONS(404),
    [sym_commentOperator] = ACTIONS(229),
    [sym__sectionAscend] = ACTIONS(221),
    [sym_key] = ACTIONS(221),
    [sym__sectionDescend] = ACTIONS(221),
    [sym_multilineFieldOperator] = ACTIONS(221),
  },
  [82] = {
    [sym_comment] = STATE(113),
    [aux_sym_fieldset_repeat1] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(113),
    [sym_entry] = STATE(82),
    [sym_key] = ACTIONS(407),
    [sym__sectionDescend] = ACTIONS(203),
    [sym__emptyLine] = ACTIONS(410),
    [sym_commentOperator] = ACTIONS(240),
    [sym__sectionAscend] = ACTIONS(203),
    [sym_multilineFieldOperator] = ACTIONS(203),
  },
  [83] = {
    [sym_comment] = STATE(112),
    [aux_sym_entry_repeat2] = STATE(81),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(112),
    [sym_continuation] = STATE(81),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(413),
    [sym_commentOperator] = ACTIONS(248),
    [sym__sectionAscend] = ACTIONS(243),
    [sym_key] = ACTIONS(243),
    [sym__sectionDescend] = ACTIONS(243),
    [sym_multilineFieldOperator] = ACTIONS(243),
  },
  [84] = {
    [sym_item] = STATE(76),
    [sym_comment] = STATE(111),
    [aux_sym_list_repeat1] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_key] = ACTIONS(251),
    [sym__sectionDescend] = ACTIONS(251),
    [sym_itemOperator] = ACTIONS(360),
    [sym__emptyLine] = ACTIONS(416),
    [sym_commentOperator] = ACTIONS(256),
    [sym__sectionAscend] = ACTIONS(251),
    [sym_multilineFieldOperator] = ACTIONS(251),
  },
  [85] = {
    [sym_comment] = STATE(113),
    [aux_sym_fieldset_repeat1] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(113),
    [sym_entry] = STATE(82),
    [sym_key] = ACTIONS(419),
    [sym__sectionDescend] = ACTIONS(262),
    [sym__emptyLine] = ACTIONS(422),
    [sym_commentOperator] = ACTIONS(267),
    [sym__sectionAscend] = ACTIONS(262),
    [sym_multilineFieldOperator] = ACTIONS(262),
  },
  [86] = {
    [sym_key] = ACTIONS(270),
    [sym__sectionDescend] = ACTIONS(270),
    [sym__emptyLine] = ACTIONS(272),
    [sym_commentOperator] = ACTIONS(272),
    [sym__sectionAscend] = ACTIONS(270),
    [sym_multilineFieldOperator] = ACTIONS(270),
  },
  [87] = {
    [sym_spacedContinuationOperator] = ACTIONS(280),
    [sym_itemOperator] = ACTIONS(280),
    [sym_directContinuationOperator] = ACTIONS(280),
    [sym__emptyLine] = ACTIONS(280),
    [sym_commentOperator] = ACTIONS(280),
    [sym__sectionAscend] = ACTIONS(282),
    [sym_key] = ACTIONS(282),
    [sym__sectionDescend] = ACTIONS(282),
    [sym_multilineFieldOperator] = ACTIONS(282),
  },
  [88] = {
    [sym_comment] = STATE(112),
    [aux_sym_entry_repeat2] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(112),
    [sym_continuation] = STATE(91),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_itemOperator] = ACTIONS(286),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(425),
    [sym_commentOperator] = ACTIONS(293),
    [sym__sectionAscend] = ACTIONS(288),
    [sym_key] = ACTIONS(288),
    [sym__sectionDescend] = ACTIONS(288),
    [sym_multilineFieldOperator] = ACTIONS(288),
  },
  [89] = {
    [sym_key] = ACTIONS(296),
    [sym__sectionDescend] = ACTIONS(296),
    [sym__emptyLine] = ACTIONS(298),
    [sym_commentOperator] = ACTIONS(298),
    [sym__sectionAscend] = ACTIONS(296),
    [sym_multilineFieldOperator] = ACTIONS(296),
  },
  [90] = {
    [sym_comment] = STATE(112),
    [aux_sym_entry_repeat2] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(112),
    [sym_continuation] = STATE(93),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(428),
    [sym_commentOperator] = ACTIONS(309),
    [sym__sectionAscend] = ACTIONS(304),
    [sym_key] = ACTIONS(304),
    [sym__sectionDescend] = ACTIONS(304),
    [sym_multilineFieldOperator] = ACTIONS(304),
  },
  [91] = {
    [sym_comment] = STATE(112),
    [aux_sym_entry_repeat2] = STATE(81),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(112),
    [sym_continuation] = STATE(81),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_itemOperator] = ACTIONS(312),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(431),
    [sym_commentOperator] = ACTIONS(319),
    [sym__sectionAscend] = ACTIONS(314),
    [sym_key] = ACTIONS(314),
    [sym__sectionDescend] = ACTIONS(314),
    [sym_multilineFieldOperator] = ACTIONS(314),
  },
  [92] = {
    [sym_key] = ACTIONS(322),
    [sym__sectionDescend] = ACTIONS(322),
    [sym__emptyLine] = ACTIONS(324),
    [sym_commentOperator] = ACTIONS(324),
    [sym__sectionAscend] = ACTIONS(322),
    [sym_multilineFieldOperator] = ACTIONS(322),
  },
  [93] = {
    [sym_comment] = STATE(112),
    [aux_sym_entry_repeat2] = STATE(81),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(112),
    [sym_continuation] = STATE(81),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(434),
    [sym_commentOperator] = ACTIONS(333),
    [sym__sectionAscend] = ACTIONS(328),
    [sym_key] = ACTIONS(328),
    [sym__sectionDescend] = ACTIONS(328),
    [sym_multilineFieldOperator] = ACTIONS(328),
  },
  [94] = {
    [sym_key] = ACTIONS(336),
    [sym__sectionDescend] = ACTIONS(336),
    [sym__emptyLine] = ACTIONS(338),
    [sym_commentOperator] = ACTIONS(338),
    [sym__sectionAscend] = ACTIONS(336),
    [sym_multilineFieldOperator] = ACTIONS(336),
  },
  [95] = {
    [aux_sym_comment_repeat1] = STATE(96),
    [sym_spacedContinuationOperator] = ACTIONS(31),
    [sym_itemOperator] = ACTIONS(31),
    [sym_directContinuationOperator] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(31),
    [sym_commentOperator] = ACTIONS(201),
  },
  [96] = {
    [aux_sym_comment_repeat1] = STATE(96),
    [sym_spacedContinuationOperator] = ACTIONS(72),
    [sym_itemOperator] = ACTIONS(72),
    [sym_directContinuationOperator] = ACTIONS(72),
    [sym__emptyLine] = ACTIONS(72),
    [sym_commentOperator] = ACTIONS(437),
  },
  [97] = {
    [sym_spacedContinuationOperator] = ACTIONS(104),
    [sym_itemOperator] = ACTIONS(104),
    [sym_directContinuationOperator] = ACTIONS(104),
    [sym__emptyLine] = ACTIONS(104),
    [sym_commentOperator] = ACTIONS(104),
  },
  [98] = {
    [aux_sym_comment_repeat1] = STATE(99),
    [sym_key] = ACTIONS(31),
    [sym__sectionDescend] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(31),
    [sym_multilineFieldOperator] = ACTIONS(31),
  },
  [99] = {
    [aux_sym_comment_repeat1] = STATE(99),
    [sym_key] = ACTIONS(72),
    [sym__sectionDescend] = ACTIONS(72),
    [sym__emptyLine] = ACTIONS(74),
    [sym_commentOperator] = ACTIONS(440),
    [sym__sectionAscend] = ACTIONS(72),
    [sym_multilineFieldOperator] = ACTIONS(72),
  },
  [100] = {
    [sym_key] = ACTIONS(104),
    [sym__sectionDescend] = ACTIONS(104),
    [sym__emptyLine] = ACTIONS(106),
    [sym_commentOperator] = ACTIONS(106),
    [sym__sectionAscend] = ACTIONS(104),
    [sym_multilineFieldOperator] = ACTIONS(104),
  },
  [101] = {
    [sym__endOfLine] = ACTIONS(443),
    [sym_elementOperator] = ACTIONS(445),
    [sym_copyOperator] = ACTIONS(447),
  },
  [102] = {
    [sym__endOfLine] = ACTIONS(449),
  },
  [103] = {
    [sym__endOfLine] = ACTIONS(451),
    [sym_token] = ACTIONS(453),
  },
  [104] = {
    [sym__endOfLine] = ACTIONS(455),
  },
  [105] = {
    [sym__endOfLine] = ACTIONS(457),
  },
  [106] = {
    [sym__endOfLine] = ACTIONS(459),
  },
  [107] = {
    [sym_continuation] = STATE(80),
    [sym_item] = STATE(78),
    [sym_comment] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(64),
    [sym_entry] = STATE(77),
    [aux_sym_entry_repeat1] = STATE(40),
    [sym_spacedContinuationOperator] = ACTIONS(358),
    [sym_key] = ACTIONS(461),
    [sym_itemOperator] = ACTIONS(360),
    [sym_directContinuationOperator] = ACTIONS(358),
    [sym__emptyLine] = ACTIONS(124),
    [sym_commentOperator] = ACTIONS(126),
  },
  [108] = {
    [aux_sym_document_repeat1] = STATE(115),
    [sym_comment] = STATE(115),
    [sym_field] = STATE(115),
    [sym_fieldset] = STATE(115),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(115),
    [sym_list] = STATE(115),
    [sym_empty] = STATE(115),
    [sym_section] = STATE(115),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(463),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(465),
    [sym_multilineFieldOperator] = ACTIONS(176),
  },
  [109] = {
    [sym__endOfLine] = ACTIONS(467),
  },
  [110] = {
    [sym__endOfLine] = ACTIONS(469),
  },
  [111] = {
    [sym_item] = STATE(78),
    [sym_comment] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(79),
    [sym__emptyLine] = ACTIONS(197),
    [sym_itemOperator] = ACTIONS(471),
    [sym_commentOperator] = ACTIONS(201),
  },
  [112] = {
    [sym_comment] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(95),
    [aux_sym_entry_repeat1] = STATE(79),
    [sym_continuation] = STATE(80),
    [sym_spacedContinuationOperator] = ACTIONS(473),
    [sym_directContinuationOperator] = ACTIONS(473),
    [sym__emptyLine] = ACTIONS(197),
    [sym_commentOperator] = ACTIONS(201),
  },
  [113] = {
    [sym_comment] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(40),
    [sym_entry] = STATE(77),
    [sym__emptyLine] = ACTIONS(124),
    [sym_key] = ACTIONS(461),
    [sym_commentOperator] = ACTIONS(126),
  },
  [114] = {
    [sym_item] = STATE(78),
    [sym_comment] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(64),
    [aux_sym_entry_repeat1] = STATE(40),
    [sym_entry] = STATE(77),
    [sym_key] = ACTIONS(461),
    [sym_itemOperator] = ACTIONS(360),
    [sym__emptyLine] = ACTIONS(124),
    [sym_commentOperator] = ACTIONS(126),
  },
  [115] = {
    [aux_sym_document_repeat1] = STATE(67),
    [sym_comment] = STATE(67),
    [sym_field] = STATE(67),
    [sym_fieldset] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(67),
    [sym_list] = STATE(67),
    [sym_empty] = STATE(67),
    [sym_section] = STATE(67),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(475),
    [sym_multilineFieldOperator] = ACTIONS(176),
  },
  [116] = {
    [sym__endOfLine] = ACTIONS(477),
  },
  [117] = {
    [aux_sym_document_repeat1] = STATE(118),
    [sym_comment] = STATE(118),
    [sym_field] = STATE(118),
    [sym_fieldset] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(118),
    [sym_list] = STATE(118),
    [sym_empty] = STATE(118),
    [sym_section] = STATE(118),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(479),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(481),
    [sym_multilineFieldOperator] = ACTIONS(176),
  },
  [118] = {
    [aux_sym_document_repeat1] = STATE(67),
    [sym_comment] = STATE(67),
    [sym_field] = STATE(67),
    [sym_fieldset] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(98),
    [sym_element] = STATE(67),
    [sym_list] = STATE(67),
    [sym_empty] = STATE(67),
    [sym_section] = STATE(67),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym__emptyLine] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(172),
    [sym__sectionAscend] = ACTIONS(483),
    [sym_multilineFieldOperator] = ACTIONS(176),
  },
  [119] = {
    [sym__endOfLine] = ACTIONS(485),
  },
  [120] = {
    [sym__endOfLine] = ACTIONS(487),
  },
  [121] = {
    [sym_token] = ACTIONS(489),
  },
  [122] = {
    [sym_token] = ACTIONS(491),
  },
  [123] = {
    [sym__endOfLine] = ACTIONS(493),
    [sym_copyOperator] = ACTIONS(495),
    [sym_deepCopyOperator] = ACTIONS(497),
  },
  [124] = {
    [sym_token] = ACTIONS(499),
  },
  [125] = {
    [sym_token] = ACTIONS(501),
  },
  [126] = {
    [sym_token] = ACTIONS(503),
  },
  [127] = {
    [sym__endOfLine] = ACTIONS(505),
  },
  [128] = {
    [sym_token] = ACTIONS(507),
  },
  [129] = {
    [sym_token] = ACTIONS(509),
  },
  [130] = {
    [sym_key] = ACTIONS(511),
  },
  [131] = {
    [sym_entryOperator] = ACTIONS(513),
  },
  [132] = {
    [sym_token] = ACTIONS(515),
  },
  [133] = {
    [sym_sectionOperator] = ACTIONS(517),
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
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [35] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [41] = {.count = 1, .reusable = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_field, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_field, 2),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [66] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [72] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [74] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [79] = {.count = 1, .reusable = false}, SHIFT(22),
  [81] = {.count = 1, .reusable = false}, SHIFT(24),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [85] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(26),
  [88] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(121),
  [91] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(23),
  [94] = {.count = 1, .reusable = true}, SHIFT(29),
  [96] = {.count = 1, .reusable = true}, SHIFT(30),
  [98] = {.count = 1, .reusable = true}, SHIFT(31),
  [100] = {.count = 1, .reusable = false}, SHIFT(32),
  [102] = {.count = 1, .reusable = true}, SHIFT(32),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [106] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [108] = {.count = 1, .reusable = true}, SHIFT(33),
  [110] = {.count = 1, .reusable = true}, SHIFT(34),
  [112] = {.count = 1, .reusable = true}, SHIFT(35),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [116] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(37),
  [119] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(128),
  [122] = {.count = 1, .reusable = true}, SHIFT(23),
  [124] = {.count = 1, .reusable = false}, SHIFT(40),
  [126] = {.count = 1, .reusable = false}, SHIFT(121),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [130] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(43),
  [133] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(128),
  [136] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(23),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [141] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(45),
  [144] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(121),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [149] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(43),
  [152] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(128),
  [155] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(23),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3),
  [160] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(49),
  [163] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(121),
  [166] = {.count = 1, .reusable = true}, SHIFT(101),
  [168] = {.count = 1, .reusable = true}, SHIFT(133),
  [170] = {.count = 1, .reusable = false}, SHIFT(51),
  [172] = {.count = 1, .reusable = false}, SHIFT(129),
  [174] = {.count = 1, .reusable = true}, SHIFT(50),
  [176] = {.count = 1, .reusable = true}, SHIFT(102),
  [178] = {.count = 1, .reusable = true}, SHIFT(52),
  [180] = {.count = 1, .reusable = true}, SHIFT(53),
  [182] = {.count = 1, .reusable = true}, SHIFT(54),
  [184] = {.count = 1, .reusable = true}, SHIFT(55),
  [186] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(24),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(37),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(128),
  [197] = {.count = 1, .reusable = true}, SHIFT(79),
  [199] = {.count = 1, .reusable = true}, SHIFT(24),
  [201] = {.count = 1, .reusable = true}, SHIFT(128),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [207] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(40),
  [214] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(121),
  [217] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [223] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(22),
  [226] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(43),
  [229] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(128),
  [232] = {.count = 1, .reusable = true}, SHIFT(22),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(23),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(45),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(121),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 2),
  [245] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(43),
  [248] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(128),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .production_id = 3),
  [253] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(37),
  [256] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(128),
  [259] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(23),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3),
  [264] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(45),
  [267] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(121),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [274] = {.count = 1, .reusable = false}, SHIFT(67),
  [276] = {.count = 1, .reusable = true}, SHIFT(56),
  [278] = {.count = 1, .reusable = true}, SHIFT(57),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [284] = {.count = 1, .reusable = true}, SHIFT(58),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [290] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(43),
  [293] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(128),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [300] = {.count = 1, .reusable = false}, SHIFT(61),
  [302] = {.count = 1, .reusable = true}, SHIFT(60),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 2),
  [306] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(43),
  [309] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(128),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [316] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(43),
  [319] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(128),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [326] = {.count = 1, .reusable = true}, SHIFT(63),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 2),
  [330] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(43),
  [333] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(128),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(101),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(133),
  [346] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [349] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [355] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(121),
  [358] = {.count = 1, .reusable = false}, SHIFT(124),
  [360] = {.count = 1, .reusable = false}, SHIFT(125),
  [362] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(107),
  [365] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(131),
  [368] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(111),
  [371] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(112),
  [374] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(131),
  [377] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(113),
  [380] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(112),
  [383] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(131),
  [386] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(114),
  [389] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(125),
  [392] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(111),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(79),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(128),
  [401] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(124),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(112),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(131),
  [410] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(113),
  [413] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(112),
  [416] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(111),
  [419] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(131),
  [422] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(113),
  [425] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(112),
  [428] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(112),
  [431] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(112),
  [434] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(112),
  [437] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(128),
  [440] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(129),
  [443] = {.count = 1, .reusable = true}, SHIFT(65),
  [445] = {.count = 1, .reusable = true}, SHIFT(103),
  [447] = {.count = 1, .reusable = true}, SHIFT(122),
  [449] = {.count = 1, .reusable = true}, SHIFT(66),
  [451] = {.count = 1, .reusable = true}, SHIFT(69),
  [453] = {.count = 1, .reusable = true}, SHIFT(105),
  [455] = {.count = 1, .reusable = true}, SHIFT(70),
  [457] = {.count = 1, .reusable = true}, SHIFT(74),
  [459] = {.count = 1, .reusable = true}, SHIFT(75),
  [461] = {.count = 1, .reusable = true}, SHIFT(131),
  [463] = {.count = 1, .reusable = false}, SHIFT(115),
  [465] = {.count = 1, .reusable = true}, SHIFT(86),
  [467] = {.count = 1, .reusable = true}, SHIFT(87),
  [469] = {.count = 1, .reusable = true}, SHIFT(88),
  [471] = {.count = 1, .reusable = true}, SHIFT(125),
  [473] = {.count = 1, .reusable = true}, SHIFT(124),
  [475] = {.count = 1, .reusable = true}, SHIFT(89),
  [477] = {.count = 1, .reusable = true}, SHIFT(90),
  [479] = {.count = 1, .reusable = false}, SHIFT(118),
  [481] = {.count = 1, .reusable = true}, SHIFT(92),
  [483] = {.count = 1, .reusable = true}, SHIFT(94),
  [485] = {.count = 1, .reusable = true}, SHIFT(97),
  [487] = {.count = 1, .reusable = true}, SHIFT(100),
  [489] = {.count = 1, .reusable = true}, SHIFT(104),
  [491] = {.count = 1, .reusable = true}, SHIFT(106),
  [493] = {.count = 1, .reusable = true}, SHIFT(108),
  [495] = {.count = 1, .reusable = false}, SHIFT(132),
  [497] = {.count = 1, .reusable = true}, SHIFT(132),
  [499] = {.count = 1, .reusable = true}, SHIFT(109),
  [501] = {.count = 1, .reusable = true}, SHIFT(110),
  [503] = {.count = 1, .reusable = true}, SHIFT(116),
  [505] = {.count = 1, .reusable = true}, SHIFT(117),
  [507] = {.count = 1, .reusable = true}, SHIFT(119),
  [509] = {.count = 1, .reusable = true}, SHIFT(120),
  [511] = {.count = 1, .reusable = true}, SHIFT(123),
  [513] = {.count = 1, .reusable = true}, SHIFT(126),
  [515] = {.count = 1, .reusable = true}, SHIFT(127),
  [517] = {.count = 1, .reusable = true}, SHIFT(130),
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
