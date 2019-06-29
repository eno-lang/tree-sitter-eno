#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 142
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 3
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 5
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
  sym_multilineFieldKey = 16,
  sym_multilineFieldOperator = 17,
  sym_document = 18,
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
  [sym_multilineFieldKey] = "multilineFieldKey",
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
  [sym_multilineFieldKey] = {
    .visible = true,
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
  [4] = {.lex_state = 0, .external_lex_state = 4},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 13, .external_lex_state = 2},
  [10] = {.lex_state = 22, .external_lex_state = 3},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 27, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 5},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 13, .external_lex_state = 2},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13, .external_lex_state = 2},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13, .external_lex_state = 2},
  [32] = {.lex_state = 13, .external_lex_state = 6},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 0, .external_lex_state = 4},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 13, .external_lex_state = 2},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 13, .external_lex_state = 2},
  [41] = {.lex_state = 13, .external_lex_state = 2},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13, .external_lex_state = 2},
  [44] = {.lex_state = 13, .external_lex_state = 2},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 13, .external_lex_state = 2},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13, .external_lex_state = 2},
  [49] = {.lex_state = 13, .external_lex_state = 2},
  [50] = {.lex_state = 13, .external_lex_state = 2},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13, .external_lex_state = 2},
  [53] = {.lex_state = 13, .external_lex_state = 6},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 13, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 13, .external_lex_state = 2},
  [59] = {.lex_state = 13, .external_lex_state = 2},
  [60] = {.lex_state = 13, .external_lex_state = 6},
  [61] = {.lex_state = 13, .external_lex_state = 2},
  [62] = {.lex_state = 13, .external_lex_state = 2},
  [63] = {.lex_state = 13, .external_lex_state = 2},
  [64] = {.lex_state = 13, .external_lex_state = 2},
  [65] = {.lex_state = 13, .external_lex_state = 6},
  [66] = {.lex_state = 13, .external_lex_state = 2},
  [67] = {.lex_state = 13, .external_lex_state = 2},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13, .external_lex_state = 6},
  [70] = {.lex_state = 13, .external_lex_state = 6},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13, .external_lex_state = 6},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13, .external_lex_state = 6},
  [75] = {.lex_state = 13, .external_lex_state = 6},
  [76] = {.lex_state = 13, .external_lex_state = 6},
  [77] = {.lex_state = 13, .external_lex_state = 6},
  [78] = {.lex_state = 13, .external_lex_state = 6},
  [79] = {.lex_state = 13, .external_lex_state = 6},
  [80] = {.lex_state = 13, .external_lex_state = 6},
  [81] = {.lex_state = 13, .external_lex_state = 6},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 13, .external_lex_state = 6},
  [84] = {.lex_state = 13, .external_lex_state = 6},
  [85] = {.lex_state = 13, .external_lex_state = 6},
  [86] = {.lex_state = 13, .external_lex_state = 6},
  [87] = {.lex_state = 13, .external_lex_state = 6},
  [88] = {.lex_state = 13, .external_lex_state = 6},
  [89] = {.lex_state = 13, .external_lex_state = 6},
  [90] = {.lex_state = 13, .external_lex_state = 6},
  [91] = {.lex_state = 13, .external_lex_state = 6},
  [92] = {.lex_state = 13, .external_lex_state = 6},
  [93] = {.lex_state = 13, .external_lex_state = 6},
  [94] = {.lex_state = 13, .external_lex_state = 6},
  [95] = {.lex_state = 13, .external_lex_state = 6},
  [96] = {.lex_state = 13, .external_lex_state = 6},
  [97] = {.lex_state = 13, .external_lex_state = 6},
  [98] = {.lex_state = 13, .external_lex_state = 6},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 13, .external_lex_state = 6},
  [103] = {.lex_state = 13, .external_lex_state = 6},
  [104] = {.lex_state = 13, .external_lex_state = 6},
  [105] = {.lex_state = 19, .external_lex_state = 3},
  [106] = {.lex_state = 22, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13, .external_lex_state = 6},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 13, .external_lex_state = 6},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 13, .external_lex_state = 6},
  [122] = {.lex_state = 13, .external_lex_state = 6},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 27, .external_lex_state = 3},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 22},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 0, .external_lex_state = 5},
  [137] = {.lex_state = 28},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 21},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token__endOfLine = 0,
  ts_external_token__sectionAscend = 1,
  ts_external_token__sectionDescend = 2,
  ts_external_token_multilineFieldKey = 3,
  ts_external_token_multilineFieldOperator = 4,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__endOfLine] = sym__endOfLine,
  [ts_external_token__sectionAscend] = sym__sectionAscend,
  [ts_external_token__sectionDescend] = sym__sectionDescend,
  [ts_external_token_multilineFieldKey] = sym_multilineFieldKey,
  [ts_external_token_multilineFieldOperator] = sym_multilineFieldOperator,
};

static bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__endOfLine] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionAscend] = true,
    [ts_external_token_multilineFieldKey] = true,
  },
  [2] = {
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionDescend] = true,
  },
  [3] = {
    [ts_external_token__endOfLine] = true,
  },
  [4] = {
    [ts_external_token_multilineFieldKey] = true,
  },
  [5] = {
    [ts_external_token_multilineFieldOperator] = true,
  },
  [6] = {
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionAscend] = true,
    [ts_external_token__sectionDescend] = true,
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
    [sym_multilineFieldOperator] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_multilineFieldKey] = ACTIONS(1),
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
    [sym_multilineFieldOperator] = ACTIONS(9),
    [sym__emptyLine] = ACTIONS(11),
    [sym_commentOperator] = ACTIONS(13),
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
    [sym_multilineFieldKey] = ACTIONS(23),
  },
  [5] = {
    [sym_token] = ACTIONS(25),
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
    [sym_multilineFieldOperator] = ACTIONS(9),
    [sym__emptyLine] = ACTIONS(29),
    [sym_commentOperator] = ACTIONS(13),
  },
  [7] = {
    [aux_sym_comment_repeat1] = STATE(16),
    [sym_key] = ACTIONS(31),
    [sym__sectionDescend] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(13),
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
    [sym__endOfLine] = ACTIONS(51),
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
    [sym_key] = ACTIONS(53),
    [sym__sectionDescend] = ACTIONS(56),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__emptyLine] = ACTIONS(61),
    [sym_commentOperator] = ACTIONS(64),
    [sym_multilineFieldOperator] = ACTIONS(67),
  },
  [16] = {
    [aux_sym_comment_repeat1] = STATE(16),
    [sym_key] = ACTIONS(70),
    [sym__sectionDescend] = ACTIONS(70),
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(72),
    [sym_commentOperator] = ACTIONS(74),
    [sym_multilineFieldOperator] = ACTIONS(70),
  },
  [17] = {
    [aux_sym_list_repeat1] = STATE(26),
    [sym_comment] = STATE(27),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(27),
    [sym_continuation] = STATE(28),
    [sym_item] = STATE(26),
    [aux_sym_entry_repeat2] = STATE(28),
    [aux_sym_fieldset_repeat1] = STATE(29),
    [sym_entry] = STATE(29),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [sym_itemOperator] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(83),
    [sym_commentOperator] = ACTIONS(86),
    [sym_multilineFieldOperator] = ACTIONS(81),
    [sym_key] = ACTIONS(89),
    [sym__sectionDescend] = ACTIONS(81),
  },
  [18] = {
    [sym__endOfLine] = ACTIONS(92),
  },
  [19] = {
    [sym__endOfLine] = ACTIONS(94),
  },
  [20] = {
    [sym__endOfLine] = ACTIONS(96),
    [sym_copyOperator] = ACTIONS(98),
    [sym_deepCopyOperator] = ACTIONS(100),
  },
  [21] = {
    [sym_multilineFieldOperator] = ACTIONS(102),
  },
  [22] = {
    [sym_key] = ACTIONS(104),
    [sym__sectionDescend] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym__emptyLine] = ACTIONS(106),
    [sym_commentOperator] = ACTIONS(106),
    [sym_multilineFieldOperator] = ACTIONS(104),
  },
  [23] = {
    [sym_token] = ACTIONS(108),
  },
  [24] = {
    [sym_entryOperator] = ACTIONS(110),
  },
  [25] = {
    [sym_token] = ACTIONS(112),
  },
  [26] = {
    [sym_item] = STATE(38),
    [sym_comment] = STATE(39),
    [aux_sym_list_repeat1] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(39),
    [sym_key] = ACTIONS(114),
    [sym__sectionDescend] = ACTIONS(114),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym__emptyLine] = ACTIONS(116),
    [sym_commentOperator] = ACTIONS(119),
    [sym_multilineFieldOperator] = ACTIONS(114),
    [sym_itemOperator] = ACTIONS(79),
  },
  [27] = {
    [sym_continuation] = STATE(43),
    [sym_item] = STATE(41),
    [sym_comment] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(68),
    [sym_entry] = STATE(40),
    [aux_sym_entry_repeat1] = STATE(42),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [sym_key] = ACTIONS(122),
    [sym_itemOperator] = ACTIONS(79),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(124),
    [sym_commentOperator] = ACTIONS(126),
  },
  [28] = {
    [sym_comment] = STATE(45),
    [aux_sym_entry_repeat2] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_continuation] = STATE(44),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(130),
    [sym_commentOperator] = ACTIONS(133),
    [sym_multilineFieldOperator] = ACTIONS(128),
    [sym_key] = ACTIONS(128),
    [sym__sectionDescend] = ACTIONS(128),
  },
  [29] = {
    [sym_comment] = STATE(47),
    [aux_sym_fieldset_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(47),
    [sym_entry] = STATE(46),
    [sym_key] = ACTIONS(136),
    [sym__sectionDescend] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(141),
    [sym_commentOperator] = ACTIONS(144),
    [sym_multilineFieldOperator] = ACTIONS(139),
  },
  [30] = {
    [sym_comment] = STATE(45),
    [aux_sym_entry_repeat2] = STATE(48),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_continuation] = STATE(48),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(149),
    [sym_commentOperator] = ACTIONS(152),
    [sym_multilineFieldOperator] = ACTIONS(147),
    [sym_key] = ACTIONS(147),
    [sym__sectionDescend] = ACTIONS(147),
  },
  [31] = {
    [sym_item] = STATE(49),
    [sym_comment] = STATE(51),
    [aux_sym_list_repeat1] = STATE(49),
    [aux_sym_fieldset_repeat1] = STATE(50),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(51),
    [sym_entry] = STATE(50),
    [sym_key] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(158),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym__emptyLine] = ACTIONS(160),
    [sym_commentOperator] = ACTIONS(163),
    [sym_multilineFieldOperator] = ACTIONS(158),
    [sym_itemOperator] = ACTIONS(79),
  },
  [32] = {
    [aux_sym_document_repeat1] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_field] = STATE(53),
    [sym_fieldset] = STATE(53),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(53),
    [sym_list] = STATE(53),
    [sym_empty] = STATE(53),
    [sym_section] = STATE(53),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym_multilineFieldOperator] = ACTIONS(170),
    [sym__emptyLine] = ACTIONS(172),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(176),
  },
  [33] = {
    [sym_token] = ACTIONS(178),
  },
  [34] = {
    [sym_multilineFieldKey] = ACTIONS(180),
  },
  [35] = {
    [sym__endOfLine] = ACTIONS(182),
  },
  [36] = {
    [sym_token] = ACTIONS(184),
  },
  [37] = {
    [sym__endOfLine] = ACTIONS(186),
  },
  [38] = {
    [sym_item] = STATE(38),
    [sym_comment] = STATE(39),
    [aux_sym_list_repeat1] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(39),
    [sym_key] = ACTIONS(188),
    [sym_itemOperator] = ACTIONS(190),
    [sym__sectionDescend] = ACTIONS(188),
    [sym__emptyLine] = ACTIONS(193),
    [sym_commentOperator] = ACTIONS(196),
    [sym_multilineFieldOperator] = ACTIONS(188),
    [ts_builtin_sym_end] = ACTIONS(188),
  },
  [39] = {
    [sym_item] = STATE(41),
    [sym_comment] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(82),
    [sym__emptyLine] = ACTIONS(199),
    [sym_itemOperator] = ACTIONS(201),
    [sym_commentOperator] = ACTIONS(203),
  },
  [40] = {
    [sym_key] = ACTIONS(205),
    [sym__sectionDescend] = ACTIONS(205),
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym__emptyLine] = ACTIONS(207),
    [sym_commentOperator] = ACTIONS(207),
    [sym_multilineFieldOperator] = ACTIONS(205),
  },
  [41] = {
    [sym_key] = ACTIONS(188),
    [sym_itemOperator] = ACTIONS(209),
    [sym__sectionDescend] = ACTIONS(188),
    [sym__emptyLine] = ACTIONS(209),
    [sym_commentOperator] = ACTIONS(209),
    [sym_multilineFieldOperator] = ACTIONS(188),
    [ts_builtin_sym_end] = ACTIONS(188),
  },
  [42] = {
    [sym_comment] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(42),
    [sym_spacedContinuationOperator] = ACTIONS(211),
    [sym_itemOperator] = ACTIONS(211),
    [sym_directContinuationOperator] = ACTIONS(211),
    [sym__emptyLine] = ACTIONS(213),
    [sym_commentOperator] = ACTIONS(216),
    [sym_key] = ACTIONS(219),
  },
  [43] = {
    [sym_spacedContinuationOperator] = ACTIONS(221),
    [sym_itemOperator] = ACTIONS(221),
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_directContinuationOperator] = ACTIONS(221),
    [sym__emptyLine] = ACTIONS(221),
    [sym_commentOperator] = ACTIONS(221),
    [sym_multilineFieldOperator] = ACTIONS(223),
    [sym_key] = ACTIONS(223),
    [sym__sectionDescend] = ACTIONS(223),
  },
  [44] = {
    [sym_comment] = STATE(45),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_continuation] = STATE(44),
    [aux_sym_entry_repeat2] = STATE(44),
    [sym_spacedContinuationOperator] = ACTIONS(225),
    [sym_itemOperator] = ACTIONS(221),
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_directContinuationOperator] = ACTIONS(225),
    [sym__emptyLine] = ACTIONS(228),
    [sym_commentOperator] = ACTIONS(231),
    [sym_multilineFieldOperator] = ACTIONS(223),
    [sym_key] = ACTIONS(223),
    [sym__sectionDescend] = ACTIONS(223),
  },
  [45] = {
    [sym_comment] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(82),
    [sym_continuation] = STATE(43),
    [sym_spacedContinuationOperator] = ACTIONS(234),
    [sym_directContinuationOperator] = ACTIONS(234),
    [sym__emptyLine] = ACTIONS(199),
    [sym_commentOperator] = ACTIONS(203),
  },
  [46] = {
    [sym_comment] = STATE(47),
    [aux_sym_fieldset_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(47),
    [sym_entry] = STATE(46),
    [sym_key] = ACTIONS(236),
    [sym__sectionDescend] = ACTIONS(205),
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym__emptyLine] = ACTIONS(239),
    [sym_commentOperator] = ACTIONS(242),
    [sym_multilineFieldOperator] = ACTIONS(205),
  },
  [47] = {
    [sym_comment] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(42),
    [sym_entry] = STATE(40),
    [sym__emptyLine] = ACTIONS(124),
    [sym_key] = ACTIONS(122),
    [sym_commentOperator] = ACTIONS(126),
  },
  [48] = {
    [sym_comment] = STATE(45),
    [aux_sym_entry_repeat2] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_continuation] = STATE(44),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(247),
    [sym_commentOperator] = ACTIONS(250),
    [sym_multilineFieldOperator] = ACTIONS(245),
    [sym_key] = ACTIONS(245),
    [sym__sectionDescend] = ACTIONS(245),
  },
  [49] = {
    [sym_item] = STATE(38),
    [sym_comment] = STATE(39),
    [aux_sym_list_repeat1] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(39),
    [sym_key] = ACTIONS(253),
    [sym__sectionDescend] = ACTIONS(253),
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym__emptyLine] = ACTIONS(255),
    [sym_commentOperator] = ACTIONS(258),
    [sym_multilineFieldOperator] = ACTIONS(253),
    [sym_itemOperator] = ACTIONS(79),
  },
  [50] = {
    [sym_comment] = STATE(47),
    [aux_sym_fieldset_repeat1] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(47),
    [sym_entry] = STATE(46),
    [sym_key] = ACTIONS(261),
    [sym__sectionDescend] = ACTIONS(264),
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym__emptyLine] = ACTIONS(266),
    [sym_commentOperator] = ACTIONS(269),
    [sym_multilineFieldOperator] = ACTIONS(264),
  },
  [51] = {
    [sym_item] = STATE(41),
    [sym_comment] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(42),
    [sym_entry] = STATE(40),
    [sym_key] = ACTIONS(122),
    [sym_itemOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(124),
    [sym_commentOperator] = ACTIONS(126),
  },
  [52] = {
    [sym_key] = ACTIONS(272),
    [sym__sectionDescend] = ACTIONS(272),
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym__emptyLine] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(274),
    [sym_multilineFieldOperator] = ACTIONS(272),
  },
  [53] = {
    [aux_sym_document_repeat1] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_field] = STATE(70),
    [sym_fieldset] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(70),
    [sym_list] = STATE(70),
    [sym_empty] = STATE(70),
    [sym_section] = STATE(70),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym_multilineFieldOperator] = ACTIONS(170),
    [sym__emptyLine] = ACTIONS(276),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(278),
  },
  [54] = {
    [sym__endOfLine] = ACTIONS(280),
  },
  [55] = {
    [sym__endOfLine] = ACTIONS(282),
  },
  [56] = {
    [sym_spacedContinuationOperator] = ACTIONS(284),
    [sym_itemOperator] = ACTIONS(284),
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_directContinuationOperator] = ACTIONS(284),
    [sym__emptyLine] = ACTIONS(284),
    [sym_commentOperator] = ACTIONS(284),
    [sym_multilineFieldOperator] = ACTIONS(286),
    [sym_key] = ACTIONS(286),
    [sym__sectionDescend] = ACTIONS(286),
  },
  [57] = {
    [sym__endOfLine] = ACTIONS(288),
  },
  [58] = {
    [sym_comment] = STATE(45),
    [aux_sym_entry_repeat2] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_continuation] = STATE(63),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [sym_itemOperator] = ACTIONS(290),
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(294),
    [sym_commentOperator] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(292),
    [sym_key] = ACTIONS(292),
    [sym__sectionDescend] = ACTIONS(292),
  },
  [59] = {
    [sym_key] = ACTIONS(300),
    [sym__sectionDescend] = ACTIONS(300),
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym__emptyLine] = ACTIONS(302),
    [sym_commentOperator] = ACTIONS(302),
    [sym_multilineFieldOperator] = ACTIONS(300),
  },
  [60] = {
    [aux_sym_document_repeat1] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_field] = STATE(65),
    [sym_fieldset] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(65),
    [sym_list] = STATE(65),
    [sym_empty] = STATE(65),
    [sym_section] = STATE(65),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym_multilineFieldOperator] = ACTIONS(170),
    [sym__emptyLine] = ACTIONS(304),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(306),
  },
  [61] = {
    [sym_key] = ACTIONS(308),
    [sym__sectionDescend] = ACTIONS(308),
    [ts_builtin_sym_end] = ACTIONS(308),
    [sym__emptyLine] = ACTIONS(310),
    [sym_commentOperator] = ACTIONS(310),
    [sym_multilineFieldOperator] = ACTIONS(308),
  },
  [62] = {
    [sym_comment] = STATE(45),
    [aux_sym_entry_repeat2] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_continuation] = STATE(66),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(312),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(314),
    [sym_commentOperator] = ACTIONS(317),
    [sym_multilineFieldOperator] = ACTIONS(312),
    [sym_key] = ACTIONS(312),
    [sym__sectionDescend] = ACTIONS(312),
  },
  [63] = {
    [sym_comment] = STATE(45),
    [aux_sym_entry_repeat2] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_continuation] = STATE(44),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [sym_itemOperator] = ACTIONS(320),
    [ts_builtin_sym_end] = ACTIONS(322),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(324),
    [sym_commentOperator] = ACTIONS(327),
    [sym_multilineFieldOperator] = ACTIONS(322),
    [sym_key] = ACTIONS(322),
    [sym__sectionDescend] = ACTIONS(322),
  },
  [64] = {
    [sym_key] = ACTIONS(330),
    [sym__sectionDescend] = ACTIONS(330),
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym__emptyLine] = ACTIONS(332),
    [sym_commentOperator] = ACTIONS(332),
    [sym_multilineFieldOperator] = ACTIONS(330),
  },
  [65] = {
    [aux_sym_document_repeat1] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_field] = STATE(70),
    [sym_fieldset] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(70),
    [sym_list] = STATE(70),
    [sym_empty] = STATE(70),
    [sym_section] = STATE(70),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym_multilineFieldOperator] = ACTIONS(170),
    [sym__emptyLine] = ACTIONS(276),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(334),
  },
  [66] = {
    [sym_comment] = STATE(45),
    [aux_sym_entry_repeat2] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(45),
    [sym_continuation] = STATE(44),
    [sym_spacedContinuationOperator] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym_directContinuationOperator] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(338),
    [sym_commentOperator] = ACTIONS(341),
    [sym_multilineFieldOperator] = ACTIONS(336),
    [sym_key] = ACTIONS(336),
    [sym__sectionDescend] = ACTIONS(336),
  },
  [67] = {
    [sym_key] = ACTIONS(344),
    [sym__sectionDescend] = ACTIONS(344),
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym__emptyLine] = ACTIONS(346),
    [sym_commentOperator] = ACTIONS(346),
    [sym_multilineFieldOperator] = ACTIONS(344),
  },
  [68] = {
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_spacedContinuationOperator] = ACTIONS(33),
    [sym_itemOperator] = ACTIONS(33),
    [sym_directContinuationOperator] = ACTIONS(33),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(126),
    [sym_key] = ACTIONS(31),
  },
  [69] = {
    [sym_key] = ACTIONS(37),
    [sym__sectionDescend] = ACTIONS(37),
    [sym__emptyLine] = ACTIONS(39),
    [sym_commentOperator] = ACTIONS(39),
    [sym__sectionAscend] = ACTIONS(37),
    [sym_multilineFieldOperator] = ACTIONS(37),
  },
  [70] = {
    [aux_sym_document_repeat1] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_field] = STATE(70),
    [sym_fieldset] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(70),
    [sym_list] = STATE(70),
    [sym_empty] = STATE(70),
    [sym_section] = STATE(70),
    [sym_key] = ACTIONS(348),
    [sym__sectionDescend] = ACTIONS(351),
    [sym__emptyLine] = ACTIONS(354),
    [sym_commentOperator] = ACTIONS(357),
    [sym__sectionAscend] = ACTIONS(59),
    [sym_multilineFieldOperator] = ACTIONS(360),
  },
  [71] = {
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_spacedContinuationOperator] = ACTIONS(72),
    [sym_itemOperator] = ACTIONS(72),
    [sym_directContinuationOperator] = ACTIONS(72),
    [sym__emptyLine] = ACTIONS(72),
    [sym_commentOperator] = ACTIONS(363),
    [sym_key] = ACTIONS(70),
  },
  [72] = {
    [aux_sym_list_repeat1] = STATE(74),
    [sym_comment] = STATE(110),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(110),
    [sym_continuation] = STATE(75),
    [sym_item] = STATE(74),
    [aux_sym_entry_repeat2] = STATE(75),
    [aux_sym_fieldset_repeat1] = STATE(76),
    [sym_entry] = STATE(76),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_itemOperator] = ACTIONS(368),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(370),
    [sym_commentOperator] = ACTIONS(86),
    [sym__sectionAscend] = ACTIONS(81),
    [sym_multilineFieldOperator] = ACTIONS(81),
    [sym_key] = ACTIONS(373),
    [sym__sectionDescend] = ACTIONS(81),
  },
  [73] = {
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_itemOperator] = ACTIONS(106),
    [sym_directContinuationOperator] = ACTIONS(106),
    [sym__emptyLine] = ACTIONS(106),
    [sym_commentOperator] = ACTIONS(106),
    [sym_key] = ACTIONS(104),
  },
  [74] = {
    [sym_item] = STATE(79),
    [sym_comment] = STATE(114),
    [aux_sym_list_repeat1] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(114),
    [sym_key] = ACTIONS(114),
    [sym__sectionDescend] = ACTIONS(114),
    [sym_itemOperator] = ACTIONS(368),
    [sym__emptyLine] = ACTIONS(376),
    [sym_commentOperator] = ACTIONS(119),
    [sym__sectionAscend] = ACTIONS(114),
    [sym_multilineFieldOperator] = ACTIONS(114),
  },
  [75] = {
    [sym_comment] = STATE(115),
    [aux_sym_entry_repeat2] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(115),
    [sym_continuation] = STATE(84),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(379),
    [sym_commentOperator] = ACTIONS(133),
    [sym__sectionAscend] = ACTIONS(128),
    [sym_multilineFieldOperator] = ACTIONS(128),
    [sym_key] = ACTIONS(128),
    [sym__sectionDescend] = ACTIONS(128),
  },
  [76] = {
    [sym_comment] = STATE(116),
    [aux_sym_fieldset_repeat1] = STATE(85),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(116),
    [sym_entry] = STATE(85),
    [sym_key] = ACTIONS(382),
    [sym__sectionDescend] = ACTIONS(139),
    [sym__emptyLine] = ACTIONS(385),
    [sym_commentOperator] = ACTIONS(144),
    [sym__sectionAscend] = ACTIONS(139),
    [sym_multilineFieldOperator] = ACTIONS(139),
  },
  [77] = {
    [sym_comment] = STATE(115),
    [aux_sym_entry_repeat2] = STATE(86),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(115),
    [sym_continuation] = STATE(86),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(388),
    [sym_commentOperator] = ACTIONS(152),
    [sym__sectionAscend] = ACTIONS(147),
    [sym_multilineFieldOperator] = ACTIONS(147),
    [sym_key] = ACTIONS(147),
    [sym__sectionDescend] = ACTIONS(147),
  },
  [78] = {
    [sym_item] = STATE(87),
    [sym_comment] = STATE(117),
    [aux_sym_list_repeat1] = STATE(87),
    [aux_sym_fieldset_repeat1] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(117),
    [sym_entry] = STATE(88),
    [sym_key] = ACTIONS(391),
    [sym__sectionDescend] = ACTIONS(158),
    [sym_itemOperator] = ACTIONS(368),
    [sym__emptyLine] = ACTIONS(394),
    [sym_commentOperator] = ACTIONS(163),
    [sym__sectionAscend] = ACTIONS(158),
    [sym_multilineFieldOperator] = ACTIONS(158),
  },
  [79] = {
    [sym_item] = STATE(79),
    [sym_comment] = STATE(114),
    [aux_sym_list_repeat1] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(114),
    [sym_key] = ACTIONS(188),
    [sym_itemOperator] = ACTIONS(397),
    [sym__sectionDescend] = ACTIONS(188),
    [sym__emptyLine] = ACTIONS(400),
    [sym_commentOperator] = ACTIONS(196),
    [sym__sectionAscend] = ACTIONS(188),
    [sym_multilineFieldOperator] = ACTIONS(188),
  },
  [80] = {
    [sym_key] = ACTIONS(205),
    [sym__sectionDescend] = ACTIONS(205),
    [sym__emptyLine] = ACTIONS(207),
    [sym_commentOperator] = ACTIONS(207),
    [sym__sectionAscend] = ACTIONS(205),
    [sym_multilineFieldOperator] = ACTIONS(205),
  },
  [81] = {
    [sym_key] = ACTIONS(188),
    [sym_itemOperator] = ACTIONS(209),
    [sym__sectionDescend] = ACTIONS(188),
    [sym__emptyLine] = ACTIONS(209),
    [sym_commentOperator] = ACTIONS(209),
    [sym__sectionAscend] = ACTIONS(188),
    [sym_multilineFieldOperator] = ACTIONS(188),
  },
  [82] = {
    [sym_comment] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(82),
    [sym_spacedContinuationOperator] = ACTIONS(219),
    [sym_itemOperator] = ACTIONS(219),
    [sym_directContinuationOperator] = ACTIONS(219),
    [sym__emptyLine] = ACTIONS(403),
    [sym_commentOperator] = ACTIONS(406),
  },
  [83] = {
    [sym_spacedContinuationOperator] = ACTIONS(221),
    [sym_itemOperator] = ACTIONS(221),
    [sym_directContinuationOperator] = ACTIONS(221),
    [sym__emptyLine] = ACTIONS(221),
    [sym_commentOperator] = ACTIONS(221),
    [sym__sectionAscend] = ACTIONS(223),
    [sym_multilineFieldOperator] = ACTIONS(223),
    [sym_key] = ACTIONS(223),
    [sym__sectionDescend] = ACTIONS(223),
  },
  [84] = {
    [sym_comment] = STATE(115),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(115),
    [sym_continuation] = STATE(84),
    [aux_sym_entry_repeat2] = STATE(84),
    [sym_spacedContinuationOperator] = ACTIONS(409),
    [sym_itemOperator] = ACTIONS(221),
    [sym_directContinuationOperator] = ACTIONS(409),
    [sym__emptyLine] = ACTIONS(412),
    [sym_commentOperator] = ACTIONS(231),
    [sym__sectionAscend] = ACTIONS(223),
    [sym_multilineFieldOperator] = ACTIONS(223),
    [sym_key] = ACTIONS(223),
    [sym__sectionDescend] = ACTIONS(223),
  },
  [85] = {
    [sym_comment] = STATE(116),
    [aux_sym_fieldset_repeat1] = STATE(85),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(116),
    [sym_entry] = STATE(85),
    [sym_key] = ACTIONS(415),
    [sym__sectionDescend] = ACTIONS(205),
    [sym__emptyLine] = ACTIONS(418),
    [sym_commentOperator] = ACTIONS(242),
    [sym__sectionAscend] = ACTIONS(205),
    [sym_multilineFieldOperator] = ACTIONS(205),
  },
  [86] = {
    [sym_comment] = STATE(115),
    [aux_sym_entry_repeat2] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(115),
    [sym_continuation] = STATE(84),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(421),
    [sym_commentOperator] = ACTIONS(250),
    [sym__sectionAscend] = ACTIONS(245),
    [sym_multilineFieldOperator] = ACTIONS(245),
    [sym_key] = ACTIONS(245),
    [sym__sectionDescend] = ACTIONS(245),
  },
  [87] = {
    [sym_item] = STATE(79),
    [sym_comment] = STATE(114),
    [aux_sym_list_repeat1] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(114),
    [sym_key] = ACTIONS(253),
    [sym__sectionDescend] = ACTIONS(253),
    [sym_itemOperator] = ACTIONS(368),
    [sym__emptyLine] = ACTIONS(424),
    [sym_commentOperator] = ACTIONS(258),
    [sym__sectionAscend] = ACTIONS(253),
    [sym_multilineFieldOperator] = ACTIONS(253),
  },
  [88] = {
    [sym_comment] = STATE(116),
    [aux_sym_fieldset_repeat1] = STATE(85),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(116),
    [sym_entry] = STATE(85),
    [sym_key] = ACTIONS(427),
    [sym__sectionDescend] = ACTIONS(264),
    [sym__emptyLine] = ACTIONS(430),
    [sym_commentOperator] = ACTIONS(269),
    [sym__sectionAscend] = ACTIONS(264),
    [sym_multilineFieldOperator] = ACTIONS(264),
  },
  [89] = {
    [sym_key] = ACTIONS(272),
    [sym__sectionDescend] = ACTIONS(272),
    [sym__emptyLine] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(274),
    [sym__sectionAscend] = ACTIONS(272),
    [sym_multilineFieldOperator] = ACTIONS(272),
  },
  [90] = {
    [sym_spacedContinuationOperator] = ACTIONS(284),
    [sym_itemOperator] = ACTIONS(284),
    [sym_directContinuationOperator] = ACTIONS(284),
    [sym__emptyLine] = ACTIONS(284),
    [sym_commentOperator] = ACTIONS(284),
    [sym__sectionAscend] = ACTIONS(286),
    [sym_multilineFieldOperator] = ACTIONS(286),
    [sym_key] = ACTIONS(286),
    [sym__sectionDescend] = ACTIONS(286),
  },
  [91] = {
    [sym_comment] = STATE(115),
    [aux_sym_entry_repeat2] = STATE(95),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(115),
    [sym_continuation] = STATE(95),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_itemOperator] = ACTIONS(290),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(433),
    [sym_commentOperator] = ACTIONS(297),
    [sym__sectionAscend] = ACTIONS(292),
    [sym_multilineFieldOperator] = ACTIONS(292),
    [sym_key] = ACTIONS(292),
    [sym__sectionDescend] = ACTIONS(292),
  },
  [92] = {
    [sym_key] = ACTIONS(300),
    [sym__sectionDescend] = ACTIONS(300),
    [sym__emptyLine] = ACTIONS(302),
    [sym_commentOperator] = ACTIONS(302),
    [sym__sectionAscend] = ACTIONS(300),
    [sym_multilineFieldOperator] = ACTIONS(300),
  },
  [93] = {
    [sym_key] = ACTIONS(308),
    [sym__sectionDescend] = ACTIONS(308),
    [sym__emptyLine] = ACTIONS(310),
    [sym_commentOperator] = ACTIONS(310),
    [sym__sectionAscend] = ACTIONS(308),
    [sym_multilineFieldOperator] = ACTIONS(308),
  },
  [94] = {
    [sym_comment] = STATE(115),
    [aux_sym_entry_repeat2] = STATE(97),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(115),
    [sym_continuation] = STATE(97),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(436),
    [sym_commentOperator] = ACTIONS(317),
    [sym__sectionAscend] = ACTIONS(312),
    [sym_multilineFieldOperator] = ACTIONS(312),
    [sym_key] = ACTIONS(312),
    [sym__sectionDescend] = ACTIONS(312),
  },
  [95] = {
    [sym_comment] = STATE(115),
    [aux_sym_entry_repeat2] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(115),
    [sym_continuation] = STATE(84),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_itemOperator] = ACTIONS(320),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(439),
    [sym_commentOperator] = ACTIONS(327),
    [sym__sectionAscend] = ACTIONS(322),
    [sym_multilineFieldOperator] = ACTIONS(322),
    [sym_key] = ACTIONS(322),
    [sym__sectionDescend] = ACTIONS(322),
  },
  [96] = {
    [sym_key] = ACTIONS(330),
    [sym__sectionDescend] = ACTIONS(330),
    [sym__emptyLine] = ACTIONS(332),
    [sym_commentOperator] = ACTIONS(332),
    [sym__sectionAscend] = ACTIONS(330),
    [sym_multilineFieldOperator] = ACTIONS(330),
  },
  [97] = {
    [sym_comment] = STATE(115),
    [aux_sym_entry_repeat2] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(115),
    [sym_continuation] = STATE(84),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(442),
    [sym_commentOperator] = ACTIONS(341),
    [sym__sectionAscend] = ACTIONS(336),
    [sym_multilineFieldOperator] = ACTIONS(336),
    [sym_key] = ACTIONS(336),
    [sym__sectionDescend] = ACTIONS(336),
  },
  [98] = {
    [sym_key] = ACTIONS(344),
    [sym__sectionDescend] = ACTIONS(344),
    [sym__emptyLine] = ACTIONS(346),
    [sym_commentOperator] = ACTIONS(346),
    [sym__sectionAscend] = ACTIONS(344),
    [sym_multilineFieldOperator] = ACTIONS(344),
  },
  [99] = {
    [aux_sym_comment_repeat1] = STATE(100),
    [sym_spacedContinuationOperator] = ACTIONS(31),
    [sym_itemOperator] = ACTIONS(31),
    [sym_directContinuationOperator] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(31),
    [sym_commentOperator] = ACTIONS(203),
  },
  [100] = {
    [aux_sym_comment_repeat1] = STATE(100),
    [sym_spacedContinuationOperator] = ACTIONS(70),
    [sym_itemOperator] = ACTIONS(70),
    [sym_directContinuationOperator] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(70),
    [sym_commentOperator] = ACTIONS(445),
  },
  [101] = {
    [sym_spacedContinuationOperator] = ACTIONS(104),
    [sym_itemOperator] = ACTIONS(104),
    [sym_directContinuationOperator] = ACTIONS(104),
    [sym__emptyLine] = ACTIONS(104),
    [sym_commentOperator] = ACTIONS(104),
  },
  [102] = {
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_key] = ACTIONS(31),
    [sym__sectionDescend] = ACTIONS(31),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(31),
    [sym_multilineFieldOperator] = ACTIONS(31),
  },
  [103] = {
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_key] = ACTIONS(70),
    [sym__sectionDescend] = ACTIONS(70),
    [sym__emptyLine] = ACTIONS(72),
    [sym_commentOperator] = ACTIONS(448),
    [sym__sectionAscend] = ACTIONS(70),
    [sym_multilineFieldOperator] = ACTIONS(70),
  },
  [104] = {
    [sym_key] = ACTIONS(104),
    [sym__sectionDescend] = ACTIONS(104),
    [sym__emptyLine] = ACTIONS(106),
    [sym_commentOperator] = ACTIONS(106),
    [sym__sectionAscend] = ACTIONS(104),
    [sym_multilineFieldOperator] = ACTIONS(104),
  },
  [105] = {
    [sym__endOfLine] = ACTIONS(451),
    [sym_elementOperator] = ACTIONS(453),
    [sym_copyOperator] = ACTIONS(455),
  },
  [106] = {
    [sym__endOfLine] = ACTIONS(457),
    [sym_token] = ACTIONS(459),
  },
  [107] = {
    [sym__endOfLine] = ACTIONS(461),
  },
  [108] = {
    [sym__endOfLine] = ACTIONS(463),
  },
  [109] = {
    [sym__endOfLine] = ACTIONS(465),
  },
  [110] = {
    [sym_continuation] = STATE(83),
    [sym_item] = STATE(81),
    [sym_comment] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(68),
    [sym_entry] = STATE(80),
    [aux_sym_entry_repeat1] = STATE(42),
    [sym_spacedContinuationOperator] = ACTIONS(366),
    [sym_key] = ACTIONS(467),
    [sym_itemOperator] = ACTIONS(368),
    [sym_directContinuationOperator] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(124),
    [sym_commentOperator] = ACTIONS(126),
  },
  [111] = {
    [aux_sym_document_repeat1] = STATE(118),
    [sym_comment] = STATE(118),
    [sym_field] = STATE(118),
    [sym_fieldset] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(118),
    [sym_list] = STATE(118),
    [sym_empty] = STATE(118),
    [sym_section] = STATE(118),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym_multilineFieldOperator] = ACTIONS(170),
    [sym__emptyLine] = ACTIONS(469),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(471),
  },
  [112] = {
    [sym__endOfLine] = ACTIONS(473),
  },
  [113] = {
    [sym__endOfLine] = ACTIONS(475),
  },
  [114] = {
    [sym_item] = STATE(81),
    [sym_comment] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(82),
    [sym__emptyLine] = ACTIONS(199),
    [sym_itemOperator] = ACTIONS(477),
    [sym_commentOperator] = ACTIONS(203),
  },
  [115] = {
    [sym_comment] = STATE(82),
    [aux_sym_comment_repeat1] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(82),
    [sym_continuation] = STATE(83),
    [sym_spacedContinuationOperator] = ACTIONS(479),
    [sym_directContinuationOperator] = ACTIONS(479),
    [sym__emptyLine] = ACTIONS(199),
    [sym_commentOperator] = ACTIONS(203),
  },
  [116] = {
    [sym_comment] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(42),
    [sym_entry] = STATE(80),
    [sym__emptyLine] = ACTIONS(124),
    [sym_key] = ACTIONS(467),
    [sym_commentOperator] = ACTIONS(126),
  },
  [117] = {
    [sym_item] = STATE(81),
    [sym_comment] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(68),
    [aux_sym_entry_repeat1] = STATE(42),
    [sym_entry] = STATE(80),
    [sym_key] = ACTIONS(467),
    [sym_itemOperator] = ACTIONS(368),
    [sym__emptyLine] = ACTIONS(124),
    [sym_commentOperator] = ACTIONS(126),
  },
  [118] = {
    [aux_sym_document_repeat1] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_field] = STATE(70),
    [sym_fieldset] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(70),
    [sym_list] = STATE(70),
    [sym_empty] = STATE(70),
    [sym_section] = STATE(70),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym_multilineFieldOperator] = ACTIONS(170),
    [sym__emptyLine] = ACTIONS(276),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(481),
  },
  [119] = {
    [sym__endOfLine] = ACTIONS(483),
  },
  [120] = {
    [sym__endOfLine] = ACTIONS(485),
  },
  [121] = {
    [aux_sym_document_repeat1] = STATE(122),
    [sym_comment] = STATE(122),
    [sym_field] = STATE(122),
    [sym_fieldset] = STATE(122),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(122),
    [sym_list] = STATE(122),
    [sym_empty] = STATE(122),
    [sym_section] = STATE(122),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym_multilineFieldOperator] = ACTIONS(170),
    [sym__emptyLine] = ACTIONS(487),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(489),
  },
  [122] = {
    [aux_sym_document_repeat1] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_field] = STATE(70),
    [sym_fieldset] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(102),
    [sym_element] = STATE(70),
    [sym_list] = STATE(70),
    [sym_empty] = STATE(70),
    [sym_section] = STATE(70),
    [sym_key] = ACTIONS(166),
    [sym__sectionDescend] = ACTIONS(168),
    [sym_multilineFieldOperator] = ACTIONS(170),
    [sym__emptyLine] = ACTIONS(276),
    [sym_commentOperator] = ACTIONS(174),
    [sym__sectionAscend] = ACTIONS(491),
  },
  [123] = {
    [sym__endOfLine] = ACTIONS(493),
  },
  [124] = {
    [sym__endOfLine] = ACTIONS(495),
  },
  [125] = {
    [sym_token] = ACTIONS(497),
  },
  [126] = {
    [sym_token] = ACTIONS(499),
  },
  [127] = {
    [sym__endOfLine] = ACTIONS(501),
    [sym_copyOperator] = ACTIONS(503),
    [sym_deepCopyOperator] = ACTIONS(505),
  },
  [128] = {
    [sym_token] = ACTIONS(507),
  },
  [129] = {
    [sym_token] = ACTIONS(509),
  },
  [130] = {
    [sym_multilineFieldKey] = ACTIONS(511),
  },
  [131] = {
    [sym_token] = ACTIONS(513),
  },
  [132] = {
    [sym__endOfLine] = ACTIONS(515),
  },
  [133] = {
    [sym_token] = ACTIONS(517),
  },
  [134] = {
    [sym_token] = ACTIONS(519),
  },
  [135] = {
    [sym_key] = ACTIONS(521),
  },
  [136] = {
    [sym_multilineFieldOperator] = ACTIONS(523),
  },
  [137] = {
    [sym_entryOperator] = ACTIONS(525),
  },
  [138] = {
    [sym_token] = ACTIONS(527),
  },
  [139] = {
    [sym_sectionOperator] = ACTIONS(529),
  },
  [140] = {
    [sym__endOfLine] = ACTIONS(531),
  },
  [141] = {
    [sym_multilineFieldKey] = ACTIONS(533),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
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
  [51] = {.count = 1, .reusable = true}, SHIFT(22),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [59] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [70] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [72] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.count = 1, .reusable = false}, SHIFT(23),
  [79] = {.count = 1, .reusable = false}, SHIFT(25),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [83] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(27),
  [86] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(125),
  [89] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(24),
  [92] = {.count = 1, .reusable = true}, SHIFT(30),
  [94] = {.count = 1, .reusable = true}, SHIFT(31),
  [96] = {.count = 1, .reusable = true}, SHIFT(32),
  [98] = {.count = 1, .reusable = false}, SHIFT(33),
  [100] = {.count = 1, .reusable = true}, SHIFT(33),
  [102] = {.count = 1, .reusable = true}, SHIFT(34),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [106] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [108] = {.count = 1, .reusable = true}, SHIFT(35),
  [110] = {.count = 1, .reusable = true}, SHIFT(36),
  [112] = {.count = 1, .reusable = true}, SHIFT(37),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [116] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(39),
  [119] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(133),
  [122] = {.count = 1, .reusable = true}, SHIFT(24),
  [124] = {.count = 1, .reusable = false}, SHIFT(42),
  [126] = {.count = 1, .reusable = false}, SHIFT(125),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [130] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(45),
  [133] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(133),
  [136] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(24),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [141] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(47),
  [144] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(125),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [149] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(45),
  [152] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(133),
  [155] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(24),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3),
  [160] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(51),
  [163] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(125),
  [166] = {.count = 1, .reusable = true}, SHIFT(105),
  [168] = {.count = 1, .reusable = true}, SHIFT(139),
  [170] = {.count = 1, .reusable = true}, SHIFT(141),
  [172] = {.count = 1, .reusable = false}, SHIFT(53),
  [174] = {.count = 1, .reusable = false}, SHIFT(134),
  [176] = {.count = 1, .reusable = true}, SHIFT(52),
  [178] = {.count = 1, .reusable = true}, SHIFT(54),
  [180] = {.count = 1, .reusable = true}, SHIFT(55),
  [182] = {.count = 1, .reusable = true}, SHIFT(56),
  [184] = {.count = 1, .reusable = true}, SHIFT(57),
  [186] = {.count = 1, .reusable = true}, SHIFT(58),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [190] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(25),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(133),
  [199] = {.count = 1, .reusable = true}, SHIFT(82),
  [201] = {.count = 1, .reusable = true}, SHIFT(25),
  [203] = {.count = 1, .reusable = true}, SHIFT(133),
  [205] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [207] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [213] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(42),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(125),
  [219] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [225] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(23),
  [228] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(45),
  [231] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(133),
  [234] = {.count = 1, .reusable = true}, SHIFT(23),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(24),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(47),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(125),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 2),
  [247] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(45),
  [250] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(133),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .production_id = 3),
  [255] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(39),
  [258] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(133),
  [261] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(24),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3),
  [266] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(47),
  [269] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(125),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [276] = {.count = 1, .reusable = false}, SHIFT(70),
  [278] = {.count = 1, .reusable = true}, SHIFT(59),
  [280] = {.count = 1, .reusable = true}, SHIFT(60),
  [282] = {.count = 1, .reusable = true}, SHIFT(61),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [288] = {.count = 1, .reusable = true}, SHIFT(62),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [294] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(45),
  [297] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(133),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [304] = {.count = 1, .reusable = false}, SHIFT(65),
  [306] = {.count = 1, .reusable = true}, SHIFT(64),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_field, 6),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_field, 6),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 2),
  [314] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(45),
  [317] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(133),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [324] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(45),
  [327] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(133),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [334] = {.count = 1, .reusable = true}, SHIFT(67),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 2),
  [338] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(45),
  [341] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(133),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(139),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [357] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(141),
  [363] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(125),
  [366] = {.count = 1, .reusable = false}, SHIFT(128),
  [368] = {.count = 1, .reusable = false}, SHIFT(129),
  [370] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(110),
  [373] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(137),
  [376] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(114),
  [379] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(115),
  [382] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(137),
  [385] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(116),
  [388] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(115),
  [391] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(137),
  [394] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(117),
  [397] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(129),
  [400] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(114),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(82),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(133),
  [409] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(128),
  [412] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(115),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(137),
  [418] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(116),
  [421] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(115),
  [424] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(114),
  [427] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(137),
  [430] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(116),
  [433] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(115),
  [436] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(115),
  [439] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(115),
  [442] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(115),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(133),
  [448] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(134),
  [451] = {.count = 1, .reusable = true}, SHIFT(69),
  [453] = {.count = 1, .reusable = true}, SHIFT(106),
  [455] = {.count = 1, .reusable = true}, SHIFT(126),
  [457] = {.count = 1, .reusable = true}, SHIFT(72),
  [459] = {.count = 1, .reusable = true}, SHIFT(108),
  [461] = {.count = 1, .reusable = true}, SHIFT(73),
  [463] = {.count = 1, .reusable = true}, SHIFT(77),
  [465] = {.count = 1, .reusable = true}, SHIFT(78),
  [467] = {.count = 1, .reusable = true}, SHIFT(137),
  [469] = {.count = 1, .reusable = false}, SHIFT(118),
  [471] = {.count = 1, .reusable = true}, SHIFT(89),
  [473] = {.count = 1, .reusable = true}, SHIFT(90),
  [475] = {.count = 1, .reusable = true}, SHIFT(91),
  [477] = {.count = 1, .reusable = true}, SHIFT(129),
  [479] = {.count = 1, .reusable = true}, SHIFT(128),
  [481] = {.count = 1, .reusable = true}, SHIFT(92),
  [483] = {.count = 1, .reusable = true}, SHIFT(93),
  [485] = {.count = 1, .reusable = true}, SHIFT(94),
  [487] = {.count = 1, .reusable = false}, SHIFT(122),
  [489] = {.count = 1, .reusable = true}, SHIFT(96),
  [491] = {.count = 1, .reusable = true}, SHIFT(98),
  [493] = {.count = 1, .reusable = true}, SHIFT(101),
  [495] = {.count = 1, .reusable = true}, SHIFT(104),
  [497] = {.count = 1, .reusable = true}, SHIFT(107),
  [499] = {.count = 1, .reusable = true}, SHIFT(109),
  [501] = {.count = 1, .reusable = true}, SHIFT(111),
  [503] = {.count = 1, .reusable = false}, SHIFT(138),
  [505] = {.count = 1, .reusable = true}, SHIFT(138),
  [507] = {.count = 1, .reusable = true}, SHIFT(112),
  [509] = {.count = 1, .reusable = true}, SHIFT(113),
  [511] = {.count = 1, .reusable = true}, SHIFT(119),
  [513] = {.count = 1, .reusable = true}, SHIFT(120),
  [515] = {.count = 1, .reusable = true}, SHIFT(121),
  [517] = {.count = 1, .reusable = true}, SHIFT(123),
  [519] = {.count = 1, .reusable = true}, SHIFT(124),
  [521] = {.count = 1, .reusable = true}, SHIFT(127),
  [523] = {.count = 1, .reusable = true}, SHIFT(130),
  [525] = {.count = 1, .reusable = true}, SHIFT(131),
  [527] = {.count = 1, .reusable = true}, SHIFT(132),
  [529] = {.count = 1, .reusable = true}, SHIFT(135),
  [531] = {.count = 1, .reusable = true}, SHIFT(136),
  [533] = {.count = 1, .reusable = true}, SHIFT(140),
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
