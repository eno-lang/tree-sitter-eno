#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 148
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 3
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 7
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
  sym_escapedKey = 14,
  sym__sectionAscend = 15,
  sym__sectionDescend = 16,
  sym_escapeOperator = 17,
  sym_multilineFieldKey = 18,
  sym_multilineFieldOperator = 19,
  sym_document = 20,
  sym__escapedOrUnescapedKey = 21,
  sym_comment = 22,
  sym_continuation = 23,
  sym_element = 24,
  sym_empty = 25,
  sym_entry = 26,
  sym_field = 27,
  sym_fieldset = 28,
  sym_item = 29,
  sym_list = 30,
  sym_section = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_comment_repeat1 = 33,
  aux_sym_entry_repeat1 = 34,
  aux_sym_entry_repeat2 = 35,
  aux_sym_fieldset_repeat1 = 36,
  aux_sym_list_repeat1 = 37,
  anon_alias_sym_template = 38,
  anon_alias_sym_comment = 39,
  anon_alias_sym_value = 40,
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
  [sym_escapedKey] = "key",
  [sym__sectionAscend] = "_sectionAscend",
  [sym__sectionDescend] = "_sectionDescend",
  [sym_escapeOperator] = "escapeOperator",
  [sym_multilineFieldKey] = "multilineFieldKey",
  [sym_multilineFieldOperator] = "multilineFieldOperator",
  [sym_document] = "document",
  [sym__escapedOrUnescapedKey] = "_escapedOrUnescapedKey",
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
  [sym_escapedKey] = {
    .visible = true,
    .named = false,
  },
  [sym__sectionAscend] = {
    .visible = false,
    .named = true,
  },
  [sym__sectionDescend] = {
    .visible = false,
    .named = true,
  },
  [sym_escapeOperator] = {
    .visible = true,
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
  [sym__escapedOrUnescapedKey] = {
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
      if (lookahead == 0) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__emptyLine);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_directContinuationOperator);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_spacedContinuationOperator);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_commentOperator);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_copyOperator);
      if (lookahead == '<') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_deepCopyOperator);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_entryOperator);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_itemOperator);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_elementOperator);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_sectionOperator);
      if (lookahead == '#') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 2},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 4},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0, .external_lex_state = 5},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0, .external_lex_state = 5},
  [11] = {.lex_state = 0, .external_lex_state = 6},
  [12] = {.lex_state = 0, .external_lex_state = 5},
  [13] = {.lex_state = 1, .external_lex_state = 6},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 5},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 5},
  [21] = {.lex_state = 0, .external_lex_state = 7},
  [22] = {.lex_state = 0, .external_lex_state = 5},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 5},
  [25] = {.lex_state = 0, .external_lex_state = 5},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 1, .external_lex_state = 8},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 1, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 6},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 5},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 8},
  [41] = {.lex_state = 0, .external_lex_state = 5},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 5},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 1, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 6},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 6},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 8},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 5},
  [65] = {.lex_state = 1, .external_lex_state = 2},
  [66] = {.lex_state = 1, .external_lex_state = 8},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 6},
  [72] = {.lex_state = 1, .external_lex_state = 8},
  [73] = {.lex_state = 1, .external_lex_state = 8},
  [74] = {.lex_state = 1, .external_lex_state = 6},
  [75] = {.lex_state = 1, .external_lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1, .external_lex_state = 8},
  [78] = {.lex_state = 1, .external_lex_state = 8},
  [79] = {.lex_state = 1, .external_lex_state = 8},
  [80] = {.lex_state = 1, .external_lex_state = 8},
  [81] = {.lex_state = 1, .external_lex_state = 8},
  [82] = {.lex_state = 1, .external_lex_state = 8},
  [83] = {.lex_state = 1, .external_lex_state = 8},
  [84] = {.lex_state = 1, .external_lex_state = 8},
  [85] = {.lex_state = 1, .external_lex_state = 8},
  [86] = {.lex_state = 1, .external_lex_state = 8},
  [87] = {.lex_state = 1, .external_lex_state = 8},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1, .external_lex_state = 8},
  [90] = {.lex_state = 1, .external_lex_state = 8},
  [91] = {.lex_state = 1, .external_lex_state = 8},
  [92] = {.lex_state = 1, .external_lex_state = 8},
  [93] = {.lex_state = 1, .external_lex_state = 8},
  [94] = {.lex_state = 1, .external_lex_state = 8},
  [95] = {.lex_state = 1, .external_lex_state = 8},
  [96] = {.lex_state = 1, .external_lex_state = 8},
  [97] = {.lex_state = 1, .external_lex_state = 8},
  [98] = {.lex_state = 1, .external_lex_state = 8},
  [99] = {.lex_state = 1, .external_lex_state = 8},
  [100] = {.lex_state = 1, .external_lex_state = 8},
  [101] = {.lex_state = 1, .external_lex_state = 8},
  [102] = {.lex_state = 1, .external_lex_state = 8},
  [103] = {.lex_state = 1, .external_lex_state = 8},
  [104] = {.lex_state = 1, .external_lex_state = 8},
  [105] = {.lex_state = 1, .external_lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 5},
  [110] = {.lex_state = 0, .external_lex_state = 5},
  [111] = {.lex_state = 0, .external_lex_state = 6},
  [112] = {.lex_state = 6, .external_lex_state = 5},
  [113] = {.lex_state = 0, .external_lex_state = 5},
  [114] = {.lex_state = 0, .external_lex_state = 5},
  [115] = {.lex_state = 1, .external_lex_state = 8},
  [116] = {.lex_state = 1, .external_lex_state = 6},
  [117] = {.lex_state = 0, .external_lex_state = 5},
  [118] = {.lex_state = 1, .external_lex_state = 8},
  [119] = {.lex_state = 0, .external_lex_state = 5},
  [120] = {.lex_state = 0, .external_lex_state = 5},
  [121] = {.lex_state = 1, .external_lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1, .external_lex_state = 6},
  [125] = {.lex_state = 1, .external_lex_state = 8},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 1, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 5},
  [129] = {.lex_state = 0, .external_lex_state = 5},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 0, .external_lex_state = 5},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 1, .external_lex_state = 6},
  [142] = {.lex_state = 0, .external_lex_state = 7},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token__endOfLine = 0,
  ts_external_token_escapedKey = 1,
  ts_external_token__sectionAscend = 2,
  ts_external_token__sectionDescend = 3,
  ts_external_token_escapeOperator = 4,
  ts_external_token_multilineFieldKey = 5,
  ts_external_token_multilineFieldOperator = 6,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__endOfLine] = sym__endOfLine,
  [ts_external_token_escapedKey] = sym_escapedKey,
  [ts_external_token__sectionAscend] = sym__sectionAscend,
  [ts_external_token__sectionDescend] = sym__sectionDescend,
  [ts_external_token_escapeOperator] = sym_escapeOperator,
  [ts_external_token_multilineFieldKey] = sym_multilineFieldKey,
  [ts_external_token_multilineFieldOperator] = sym_multilineFieldOperator,
};

static bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__endOfLine] = true,
    [ts_external_token_multilineFieldKey] = true,
    [ts_external_token__sectionAscend] = true,
    [ts_external_token_escapeOperator] = true,
    [ts_external_token_escapedKey] = true,
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionDescend] = true,
  },
  [2] = {
    [ts_external_token_escapeOperator] = true,
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionDescend] = true,
  },
  [3] = {
    [ts_external_token_escapedKey] = true,
  },
  [4] = {
    [ts_external_token_multilineFieldKey] = true,
  },
  [5] = {
    [ts_external_token__endOfLine] = true,
  },
  [6] = {
    [ts_external_token_escapeOperator] = true,
  },
  [7] = {
    [ts_external_token_multilineFieldOperator] = true,
  },
  [8] = {
    [ts_external_token__sectionAscend] = true,
    [ts_external_token_escapeOperator] = true,
    [ts_external_token_multilineFieldOperator] = true,
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
    [sym_multilineFieldKey] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym_deepCopyOperator] = ACTIONS(1),
    [sym_spacedContinuationOperator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_escapeOperator] = ACTIONS(1),
    [sym_escapedKey] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_multilineFieldOperator] = ACTIONS(1),
    [sym__sectionDescend] = ACTIONS(1),
  },
  [1] = {
    [sym_section] = STATE(7),
    [sym__escapedOrUnescapedKey] = STATE(6),
    [sym_field] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [sym_document] = STATE(9),
    [aux_sym_comment_repeat1] = STATE(8),
    [sym_comment] = STATE(7),
    [sym_fieldset] = STATE(7),
    [sym_element] = STATE(7),
    [sym_empty] = STATE(7),
    [sym_list] = STATE(7),
    [sym__sectionDescend] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(11),
    [sym__emptyLine] = ACTIONS(13),
    [sym_multilineFieldOperator] = ACTIONS(15),
  },
  [2] = {
    [sym_token] = ACTIONS(17),
  },
  [3] = {
    [sym_escapedKey] = ACTIONS(19),
  },
  [4] = {
    [sym_multilineFieldKey] = ACTIONS(21),
  },
  [5] = {
    [sym_sectionOperator] = ACTIONS(23),
  },
  [6] = {
    [sym__endOfLine] = ACTIONS(25),
    [sym_elementOperator] = ACTIONS(27),
    [sym_copyOperator] = ACTIONS(29),
  },
  [7] = {
    [sym_section] = STATE(17),
    [sym__escapedOrUnescapedKey] = STATE(6),
    [sym_field] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [aux_sym_comment_repeat1] = STATE(8),
    [sym_comment] = STATE(17),
    [sym_fieldset] = STATE(17),
    [sym_element] = STATE(17),
    [sym_empty] = STATE(17),
    [sym_list] = STATE(17),
    [sym__sectionDescend] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(11),
    [sym__emptyLine] = ACTIONS(33),
    [sym_multilineFieldOperator] = ACTIONS(15),
  },
  [8] = {
    [aux_sym_comment_repeat1] = STATE(18),
    [sym_multilineFieldOperator] = ACTIONS(35),
    [sym_key] = ACTIONS(35),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym__emptyLine] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(11),
    [sym_escapeOperator] = ACTIONS(35),
    [sym__sectionDescend] = ACTIONS(35),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [10] = {
    [sym__endOfLine] = ACTIONS(41),
  },
  [11] = {
    [sym_escapeOperator] = ACTIONS(43),
  },
  [12] = {
    [sym__endOfLine] = ACTIONS(45),
  },
  [13] = {
    [sym__escapedOrUnescapedKey] = STATE(22),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_key] = ACTIONS(47),
  },
  [14] = {
    [sym_multilineFieldOperator] = ACTIONS(49),
    [sym_key] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym__emptyLine] = ACTIONS(51),
    [sym_commentOperator] = ACTIONS(51),
    [sym_escapeOperator] = ACTIONS(49),
    [sym__sectionDescend] = ACTIONS(49),
  },
  [15] = {
    [sym__endOfLine] = ACTIONS(53),
    [sym_token] = ACTIONS(55),
  },
  [16] = {
    [sym_token] = ACTIONS(57),
  },
  [17] = {
    [sym_section] = STATE(17),
    [sym__escapedOrUnescapedKey] = STATE(6),
    [sym_field] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [aux_sym_comment_repeat1] = STATE(8),
    [sym_comment] = STATE(17),
    [sym_fieldset] = STATE(17),
    [sym_element] = STATE(17),
    [sym_empty] = STATE(17),
    [sym_list] = STATE(17),
    [sym_multilineFieldOperator] = ACTIONS(59),
    [sym_key] = ACTIONS(62),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym__emptyLine] = ACTIONS(67),
    [sym_commentOperator] = ACTIONS(70),
    [sym_escapeOperator] = ACTIONS(73),
    [sym__sectionDescend] = ACTIONS(76),
  },
  [18] = {
    [aux_sym_comment_repeat1] = STATE(18),
    [sym_multilineFieldOperator] = ACTIONS(79),
    [sym_key] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(81),
    [sym_commentOperator] = ACTIONS(83),
    [sym_escapeOperator] = ACTIONS(79),
    [sym__sectionDescend] = ACTIONS(79),
  },
  [19] = {
    [sym_multilineFieldOperator] = ACTIONS(86),
    [sym_key] = ACTIONS(86),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(88),
    [sym_commentOperator] = ACTIONS(88),
    [sym_escapeOperator] = ACTIONS(86),
    [sym__sectionDescend] = ACTIONS(86),
  },
  [20] = {
    [sym__endOfLine] = ACTIONS(90),
    [sym_copyOperator] = ACTIONS(92),
    [sym_elementOperator] = ACTIONS(90),
    [sym_deepCopyOperator] = ACTIONS(90),
  },
  [21] = {
    [sym_multilineFieldOperator] = ACTIONS(94),
  },
  [22] = {
    [sym__endOfLine] = ACTIONS(96),
    [sym_copyOperator] = ACTIONS(98),
    [sym_deepCopyOperator] = ACTIONS(100),
  },
  [23] = {
    [sym__escapedOrUnescapedKey] = STATE(31),
    [aux_sym_fieldset_repeat1] = STATE(32),
    [sym_entry] = STATE(32),
    [aux_sym_list_repeat1] = STATE(33),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(34),
    [sym_continuation] = STATE(35),
    [sym_item] = STATE(33),
    [aux_sym_entry_repeat1] = STATE(34),
    [aux_sym_entry_repeat2] = STATE(35),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [sym_itemOperator] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(108),
    [sym_commentOperator] = ACTIONS(111),
    [sym_escapeOperator] = ACTIONS(114),
    [sym_key] = ACTIONS(117),
    [sym_multilineFieldOperator] = ACTIONS(106),
    [sym__sectionDescend] = ACTIONS(106),
  },
  [24] = {
    [sym__endOfLine] = ACTIONS(120),
  },
  [25] = {
    [sym__endOfLine] = ACTIONS(122),
  },
  [26] = {
    [sym_multilineFieldKey] = ACTIONS(124),
  },
  [27] = {
    [sym_section] = STATE(40),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(40),
    [aux_sym_document_repeat1] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(40),
    [sym_fieldset] = STATE(40),
    [sym_element] = STATE(40),
    [sym_empty] = STATE(40),
    [sym_list] = STATE(40),
    [sym__sectionDescend] = ACTIONS(126),
    [sym_key] = ACTIONS(128),
    [sym__sectionAscend] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(134),
    [sym_multilineFieldOperator] = ACTIONS(136),
  },
  [28] = {
    [sym_token] = ACTIONS(138),
  },
  [29] = {
    [sym_token] = ACTIONS(140),
  },
  [30] = {
    [sym_token] = ACTIONS(142),
  },
  [31] = {
    [sym_entryOperator] = ACTIONS(144),
  },
  [32] = {
    [sym__escapedOrUnescapedKey] = STATE(31),
    [aux_sym_fieldset_repeat1] = STATE(45),
    [aux_sym_entry_repeat1] = STATE(46),
    [sym_entry] = STATE(45),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(46),
    [sym_multilineFieldOperator] = ACTIONS(146),
    [sym_key] = ACTIONS(148),
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(151),
    [sym_commentOperator] = ACTIONS(154),
    [sym_escapeOperator] = ACTIONS(157),
    [sym__sectionDescend] = ACTIONS(146),
  },
  [33] = {
    [aux_sym_list_repeat1] = STATE(48),
    [sym_item] = STATE(48),
    [aux_sym_entry_repeat1] = STATE(47),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(47),
    [sym_itemOperator] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym__emptyLine] = ACTIONS(162),
    [sym_commentOperator] = ACTIONS(165),
    [sym_escapeOperator] = ACTIONS(160),
    [sym_key] = ACTIONS(160),
    [sym_multilineFieldOperator] = ACTIONS(160),
    [sym__sectionDescend] = ACTIONS(160),
  },
  [34] = {
    [sym_continuation] = STATE(49),
    [sym__escapedOrUnescapedKey] = STATE(31),
    [sym_item] = STATE(50),
    [aux_sym_entry_repeat1] = STATE(51),
    [sym_entry] = STATE(52),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(51),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [sym_key] = ACTIONS(168),
    [sym_itemOperator] = ACTIONS(104),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym_escapeOperator] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(172),
    [sym__emptyLine] = ACTIONS(174),
  },
  [35] = {
    [sym_continuation] = STATE(54),
    [aux_sym_entry_repeat1] = STATE(53),
    [aux_sym_entry_repeat2] = STATE(54),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(53),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(178),
    [sym_commentOperator] = ACTIONS(181),
    [sym_escapeOperator] = ACTIONS(176),
    [sym_key] = ACTIONS(176),
    [sym_multilineFieldOperator] = ACTIONS(176),
    [sym__sectionDescend] = ACTIONS(176),
  },
  [36] = {
    [sym_continuation] = STATE(55),
    [aux_sym_entry_repeat1] = STATE(53),
    [aux_sym_entry_repeat2] = STATE(55),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(53),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(186),
    [sym_commentOperator] = ACTIONS(189),
    [sym_escapeOperator] = ACTIONS(184),
    [sym_key] = ACTIONS(184),
    [sym_multilineFieldOperator] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(184),
  },
  [37] = {
    [sym__escapedOrUnescapedKey] = STATE(31),
    [aux_sym_fieldset_repeat1] = STATE(56),
    [sym_entry] = STATE(56),
    [aux_sym_list_repeat1] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(58),
    [sym_item] = STATE(57),
    [aux_sym_entry_repeat1] = STATE(58),
    [sym_itemOperator] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym__emptyLine] = ACTIONS(194),
    [sym_commentOperator] = ACTIONS(197),
    [sym_escapeOperator] = ACTIONS(200),
    [sym_key] = ACTIONS(203),
    [sym_multilineFieldOperator] = ACTIONS(192),
    [sym__sectionDescend] = ACTIONS(192),
  },
  [38] = {
    [sym__endOfLine] = ACTIONS(206),
  },
  [39] = {
    [sym_multilineFieldOperator] = ACTIONS(208),
    [sym_key] = ACTIONS(208),
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(210),
    [sym_commentOperator] = ACTIONS(210),
    [sym_escapeOperator] = ACTIONS(208),
    [sym__sectionDescend] = ACTIONS(208),
  },
  [40] = {
    [sym_section] = STATE(73),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(73),
    [aux_sym_document_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(73),
    [sym_fieldset] = STATE(73),
    [sym_element] = STATE(73),
    [sym_empty] = STATE(73),
    [sym_list] = STATE(73),
    [sym__sectionDescend] = ACTIONS(126),
    [sym_key] = ACTIONS(128),
    [sym__sectionAscend] = ACTIONS(212),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(214),
    [sym_multilineFieldOperator] = ACTIONS(136),
  },
  [41] = {
    [sym__endOfLine] = ACTIONS(216),
  },
  [42] = {
    [sym__endOfLine] = ACTIONS(218),
  },
  [43] = {
    [sym__endOfLine] = ACTIONS(220),
  },
  [44] = {
    [sym_token] = ACTIONS(222),
  },
  [45] = {
    [sym__escapedOrUnescapedKey] = STATE(31),
    [aux_sym_fieldset_repeat1] = STATE(45),
    [aux_sym_entry_repeat1] = STATE(46),
    [sym_entry] = STATE(45),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(46),
    [sym_multilineFieldOperator] = ACTIONS(224),
    [sym_key] = ACTIONS(226),
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym__emptyLine] = ACTIONS(229),
    [sym_commentOperator] = ACTIONS(232),
    [sym_escapeOperator] = ACTIONS(235),
    [sym__sectionDescend] = ACTIONS(224),
  },
  [46] = {
    [sym__escapedOrUnescapedKey] = STATE(31),
    [sym_entry] = STATE(52),
    [aux_sym_entry_repeat1] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(51),
    [sym_key] = ACTIONS(168),
    [sym_escapeOperator] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(172),
    [sym__emptyLine] = ACTIONS(174),
  },
  [47] = {
    [sym_item] = STATE(50),
    [aux_sym_entry_repeat1] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(88),
    [sym__emptyLine] = ACTIONS(238),
    [sym_itemOperator] = ACTIONS(240),
    [sym_commentOperator] = ACTIONS(242),
  },
  [48] = {
    [aux_sym_list_repeat1] = STATE(48),
    [sym_item] = STATE(48),
    [aux_sym_entry_repeat1] = STATE(47),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(47),
    [sym_itemOperator] = ACTIONS(244),
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym__emptyLine] = ACTIONS(249),
    [sym_commentOperator] = ACTIONS(252),
    [sym_escapeOperator] = ACTIONS(247),
    [sym_key] = ACTIONS(247),
    [sym_multilineFieldOperator] = ACTIONS(247),
    [sym__sectionDescend] = ACTIONS(247),
  },
  [49] = {
    [sym_spacedContinuationOperator] = ACTIONS(255),
    [sym_itemOperator] = ACTIONS(255),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_directContinuationOperator] = ACTIONS(255),
    [sym__emptyLine] = ACTIONS(255),
    [sym_commentOperator] = ACTIONS(255),
    [sym_escapeOperator] = ACTIONS(257),
    [sym_key] = ACTIONS(257),
    [sym_multilineFieldOperator] = ACTIONS(257),
    [sym__sectionDescend] = ACTIONS(257),
  },
  [50] = {
    [sym_itemOperator] = ACTIONS(259),
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym__emptyLine] = ACTIONS(259),
    [sym_commentOperator] = ACTIONS(259),
    [sym_escapeOperator] = ACTIONS(247),
    [sym_key] = ACTIONS(247),
    [sym_multilineFieldOperator] = ACTIONS(247),
    [sym__sectionDescend] = ACTIONS(247),
  },
  [51] = {
    [aux_sym_entry_repeat1] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(51),
    [sym_spacedContinuationOperator] = ACTIONS(261),
    [sym_itemOperator] = ACTIONS(261),
    [sym_directContinuationOperator] = ACTIONS(261),
    [sym__emptyLine] = ACTIONS(263),
    [sym_commentOperator] = ACTIONS(266),
    [sym_escapeOperator] = ACTIONS(269),
    [sym_key] = ACTIONS(269),
  },
  [52] = {
    [sym_multilineFieldOperator] = ACTIONS(224),
    [sym_key] = ACTIONS(224),
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym__emptyLine] = ACTIONS(271),
    [sym_commentOperator] = ACTIONS(271),
    [sym_escapeOperator] = ACTIONS(224),
    [sym__sectionDescend] = ACTIONS(224),
  },
  [53] = {
    [sym_continuation] = STATE(49),
    [aux_sym_entry_repeat1] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(88),
    [sym_spacedContinuationOperator] = ACTIONS(273),
    [sym_directContinuationOperator] = ACTIONS(273),
    [sym__emptyLine] = ACTIONS(238),
    [sym_commentOperator] = ACTIONS(242),
  },
  [54] = {
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(53),
    [sym_continuation] = STATE(54),
    [aux_sym_entry_repeat1] = STATE(53),
    [aux_sym_entry_repeat2] = STATE(54),
    [sym_spacedContinuationOperator] = ACTIONS(275),
    [sym_itemOperator] = ACTIONS(255),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_directContinuationOperator] = ACTIONS(275),
    [sym__emptyLine] = ACTIONS(278),
    [sym_commentOperator] = ACTIONS(281),
    [sym_escapeOperator] = ACTIONS(257),
    [sym_key] = ACTIONS(257),
    [sym_multilineFieldOperator] = ACTIONS(257),
    [sym__sectionDescend] = ACTIONS(257),
  },
  [55] = {
    [sym_continuation] = STATE(54),
    [aux_sym_entry_repeat1] = STATE(53),
    [aux_sym_entry_repeat2] = STATE(54),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(53),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(286),
    [sym_commentOperator] = ACTIONS(289),
    [sym_escapeOperator] = ACTIONS(284),
    [sym_key] = ACTIONS(284),
    [sym_multilineFieldOperator] = ACTIONS(284),
    [sym__sectionDescend] = ACTIONS(284),
  },
  [56] = {
    [sym__escapedOrUnescapedKey] = STATE(31),
    [aux_sym_fieldset_repeat1] = STATE(45),
    [aux_sym_entry_repeat1] = STATE(46),
    [sym_entry] = STATE(45),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(46),
    [sym_multilineFieldOperator] = ACTIONS(292),
    [sym_key] = ACTIONS(294),
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym__emptyLine] = ACTIONS(297),
    [sym_commentOperator] = ACTIONS(300),
    [sym_escapeOperator] = ACTIONS(303),
    [sym__sectionDescend] = ACTIONS(292),
  },
  [57] = {
    [aux_sym_list_repeat1] = STATE(48),
    [sym_item] = STATE(48),
    [aux_sym_entry_repeat1] = STATE(47),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(47),
    [sym_itemOperator] = ACTIONS(104),
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym__emptyLine] = ACTIONS(308),
    [sym_commentOperator] = ACTIONS(311),
    [sym_escapeOperator] = ACTIONS(306),
    [sym_key] = ACTIONS(306),
    [sym_multilineFieldOperator] = ACTIONS(306),
    [sym__sectionDescend] = ACTIONS(306),
  },
  [58] = {
    [sym__escapedOrUnescapedKey] = STATE(31),
    [sym_item] = STATE(50),
    [aux_sym_entry_repeat1] = STATE(51),
    [sym_entry] = STATE(52),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(51),
    [sym_key] = ACTIONS(168),
    [sym_itemOperator] = ACTIONS(104),
    [sym_escapeOperator] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(172),
    [sym__emptyLine] = ACTIONS(174),
  },
  [59] = {
    [sym_multilineFieldOperator] = ACTIONS(314),
    [sym_key] = ACTIONS(314),
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym__emptyLine] = ACTIONS(316),
    [sym_commentOperator] = ACTIONS(316),
    [sym_escapeOperator] = ACTIONS(314),
    [sym__sectionDescend] = ACTIONS(314),
  },
  [60] = {
    [sym_multilineFieldOperator] = ACTIONS(318),
    [sym_key] = ACTIONS(318),
    [ts_builtin_sym_end] = ACTIONS(318),
    [sym__emptyLine] = ACTIONS(320),
    [sym_commentOperator] = ACTIONS(320),
    [sym_escapeOperator] = ACTIONS(318),
    [sym__sectionDescend] = ACTIONS(318),
  },
  [61] = {
    [sym_section] = STATE(66),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(66),
    [aux_sym_document_repeat1] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(66),
    [sym_fieldset] = STATE(66),
    [sym_element] = STATE(66),
    [sym_empty] = STATE(66),
    [sym_list] = STATE(66),
    [sym__sectionDescend] = ACTIONS(126),
    [sym_key] = ACTIONS(128),
    [sym__sectionAscend] = ACTIONS(322),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(324),
    [sym_multilineFieldOperator] = ACTIONS(136),
  },
  [62] = {
    [sym_spacedContinuationOperator] = ACTIONS(326),
    [sym_itemOperator] = ACTIONS(326),
    [ts_builtin_sym_end] = ACTIONS(328),
    [sym_directContinuationOperator] = ACTIONS(326),
    [sym__emptyLine] = ACTIONS(326),
    [sym_commentOperator] = ACTIONS(326),
    [sym_escapeOperator] = ACTIONS(328),
    [sym_key] = ACTIONS(328),
    [sym_multilineFieldOperator] = ACTIONS(328),
    [sym__sectionDescend] = ACTIONS(328),
  },
  [63] = {
    [sym_continuation] = STATE(67),
    [aux_sym_entry_repeat1] = STATE(53),
    [aux_sym_entry_repeat2] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(53),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [sym_itemOperator] = ACTIONS(330),
    [ts_builtin_sym_end] = ACTIONS(332),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(334),
    [sym_commentOperator] = ACTIONS(337),
    [sym_escapeOperator] = ACTIONS(332),
    [sym_key] = ACTIONS(332),
    [sym_multilineFieldOperator] = ACTIONS(332),
    [sym__sectionDescend] = ACTIONS(332),
  },
  [64] = {
    [sym__endOfLine] = ACTIONS(340),
  },
  [65] = {
    [sym_multilineFieldOperator] = ACTIONS(342),
    [sym_key] = ACTIONS(342),
    [ts_builtin_sym_end] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(344),
    [sym_commentOperator] = ACTIONS(344),
    [sym_escapeOperator] = ACTIONS(342),
    [sym__sectionDescend] = ACTIONS(342),
  },
  [66] = {
    [sym_section] = STATE(73),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(73),
    [aux_sym_document_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(73),
    [sym_fieldset] = STATE(73),
    [sym_element] = STATE(73),
    [sym_empty] = STATE(73),
    [sym_list] = STATE(73),
    [sym__sectionDescend] = ACTIONS(126),
    [sym_key] = ACTIONS(128),
    [sym__sectionAscend] = ACTIONS(346),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(214),
    [sym_multilineFieldOperator] = ACTIONS(136),
  },
  [67] = {
    [sym_continuation] = STATE(54),
    [aux_sym_entry_repeat1] = STATE(53),
    [aux_sym_entry_repeat2] = STATE(54),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(53),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [sym_itemOperator] = ACTIONS(348),
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(352),
    [sym_commentOperator] = ACTIONS(355),
    [sym_escapeOperator] = ACTIONS(350),
    [sym_key] = ACTIONS(350),
    [sym_multilineFieldOperator] = ACTIONS(350),
    [sym__sectionDescend] = ACTIONS(350),
  },
  [68] = {
    [sym_continuation] = STATE(70),
    [aux_sym_entry_repeat1] = STATE(53),
    [aux_sym_entry_repeat2] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(53),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(360),
    [sym_commentOperator] = ACTIONS(363),
    [sym_escapeOperator] = ACTIONS(358),
    [sym_key] = ACTIONS(358),
    [sym_multilineFieldOperator] = ACTIONS(358),
    [sym__sectionDescend] = ACTIONS(358),
  },
  [69] = {
    [sym_multilineFieldOperator] = ACTIONS(366),
    [sym_key] = ACTIONS(366),
    [ts_builtin_sym_end] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(368),
    [sym_commentOperator] = ACTIONS(368),
    [sym_escapeOperator] = ACTIONS(366),
    [sym__sectionDescend] = ACTIONS(366),
  },
  [70] = {
    [sym_continuation] = STATE(54),
    [aux_sym_entry_repeat1] = STATE(53),
    [aux_sym_entry_repeat2] = STATE(54),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(53),
    [sym_spacedContinuationOperator] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym_directContinuationOperator] = ACTIONS(102),
    [sym__emptyLine] = ACTIONS(372),
    [sym_commentOperator] = ACTIONS(375),
    [sym_escapeOperator] = ACTIONS(370),
    [sym_key] = ACTIONS(370),
    [sym_multilineFieldOperator] = ACTIONS(370),
    [sym__sectionDescend] = ACTIONS(370),
  },
  [71] = {
    [aux_sym_comment_repeat1] = STATE(74),
    [sym_spacedContinuationOperator] = ACTIONS(37),
    [sym_itemOperator] = ACTIONS(37),
    [sym_directContinuationOperator] = ACTIONS(37),
    [sym__emptyLine] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(172),
    [sym_escapeOperator] = ACTIONS(35),
    [sym_key] = ACTIONS(35),
  },
  [72] = {
    [sym_multilineFieldOperator] = ACTIONS(49),
    [sym_key] = ACTIONS(49),
    [sym__sectionAscend] = ACTIONS(49),
    [sym__emptyLine] = ACTIONS(51),
    [sym_commentOperator] = ACTIONS(51),
    [sym_escapeOperator] = ACTIONS(49),
    [sym__sectionDescend] = ACTIONS(49),
  },
  [73] = {
    [sym_section] = STATE(73),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(73),
    [aux_sym_document_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(73),
    [sym_fieldset] = STATE(73),
    [sym_element] = STATE(73),
    [sym_empty] = STATE(73),
    [sym_list] = STATE(73),
    [sym_multilineFieldOperator] = ACTIONS(378),
    [sym_key] = ACTIONS(381),
    [sym__sectionAscend] = ACTIONS(65),
    [sym__emptyLine] = ACTIONS(384),
    [sym_commentOperator] = ACTIONS(387),
    [sym_escapeOperator] = ACTIONS(73),
    [sym__sectionDescend] = ACTIONS(390),
  },
  [74] = {
    [aux_sym_comment_repeat1] = STATE(74),
    [sym_spacedContinuationOperator] = ACTIONS(81),
    [sym_itemOperator] = ACTIONS(81),
    [sym_directContinuationOperator] = ACTIONS(81),
    [sym__emptyLine] = ACTIONS(81),
    [sym_commentOperator] = ACTIONS(393),
    [sym_escapeOperator] = ACTIONS(79),
    [sym_key] = ACTIONS(79),
  },
  [75] = {
    [sym_spacedContinuationOperator] = ACTIONS(88),
    [sym_itemOperator] = ACTIONS(88),
    [sym_directContinuationOperator] = ACTIONS(88),
    [sym__emptyLine] = ACTIONS(88),
    [sym_commentOperator] = ACTIONS(88),
    [sym_escapeOperator] = ACTIONS(86),
    [sym_key] = ACTIONS(86),
  },
  [76] = {
    [sym_entryOperator] = ACTIONS(90),
  },
  [77] = {
    [sym__escapedOrUnescapedKey] = STATE(144),
    [aux_sym_fieldset_repeat1] = STATE(78),
    [sym_entry] = STATE(78),
    [aux_sym_list_repeat1] = STATE(79),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(116),
    [sym_continuation] = STATE(80),
    [sym_item] = STATE(79),
    [aux_sym_entry_repeat1] = STATE(116),
    [aux_sym_entry_repeat2] = STATE(80),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_itemOperator] = ACTIONS(398),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym__emptyLine] = ACTIONS(400),
    [sym_commentOperator] = ACTIONS(111),
    [sym_escapeOperator] = ACTIONS(114),
    [sym_key] = ACTIONS(403),
    [sym__sectionAscend] = ACTIONS(106),
    [sym_multilineFieldOperator] = ACTIONS(106),
    [sym__sectionDescend] = ACTIONS(106),
  },
  [78] = {
    [sym__escapedOrUnescapedKey] = STATE(144),
    [aux_sym_fieldset_repeat1] = STATE(84),
    [aux_sym_entry_repeat1] = STATE(121),
    [sym_entry] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(121),
    [sym_multilineFieldOperator] = ACTIONS(146),
    [sym_key] = ACTIONS(406),
    [sym__sectionAscend] = ACTIONS(146),
    [sym__emptyLine] = ACTIONS(409),
    [sym_commentOperator] = ACTIONS(154),
    [sym_escapeOperator] = ACTIONS(157),
    [sym__sectionDescend] = ACTIONS(146),
  },
  [79] = {
    [aux_sym_list_repeat1] = STATE(85),
    [sym_item] = STATE(85),
    [aux_sym_entry_repeat1] = STATE(122),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(122),
    [sym_itemOperator] = ACTIONS(398),
    [sym__emptyLine] = ACTIONS(412),
    [sym_commentOperator] = ACTIONS(165),
    [sym_escapeOperator] = ACTIONS(160),
    [sym_key] = ACTIONS(160),
    [sym__sectionAscend] = ACTIONS(160),
    [sym_multilineFieldOperator] = ACTIONS(160),
    [sym__sectionDescend] = ACTIONS(160),
  },
  [80] = {
    [sym_continuation] = STATE(90),
    [aux_sym_entry_repeat1] = STATE(123),
    [aux_sym_entry_repeat2] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(123),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym__emptyLine] = ACTIONS(415),
    [sym_commentOperator] = ACTIONS(181),
    [sym_escapeOperator] = ACTIONS(176),
    [sym_key] = ACTIONS(176),
    [sym__sectionAscend] = ACTIONS(176),
    [sym_multilineFieldOperator] = ACTIONS(176),
    [sym__sectionDescend] = ACTIONS(176),
  },
  [81] = {
    [sym_continuation] = STATE(91),
    [aux_sym_entry_repeat1] = STATE(123),
    [aux_sym_entry_repeat2] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(123),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym__emptyLine] = ACTIONS(418),
    [sym_commentOperator] = ACTIONS(189),
    [sym_escapeOperator] = ACTIONS(184),
    [sym_key] = ACTIONS(184),
    [sym__sectionAscend] = ACTIONS(184),
    [sym_multilineFieldOperator] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(184),
  },
  [82] = {
    [sym__escapedOrUnescapedKey] = STATE(144),
    [aux_sym_fieldset_repeat1] = STATE(92),
    [sym_entry] = STATE(92),
    [aux_sym_list_repeat1] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(124),
    [sym_item] = STATE(93),
    [aux_sym_entry_repeat1] = STATE(124),
    [sym_itemOperator] = ACTIONS(398),
    [sym__emptyLine] = ACTIONS(421),
    [sym_commentOperator] = ACTIONS(197),
    [sym_escapeOperator] = ACTIONS(200),
    [sym_key] = ACTIONS(424),
    [sym__sectionAscend] = ACTIONS(192),
    [sym_multilineFieldOperator] = ACTIONS(192),
    [sym__sectionDescend] = ACTIONS(192),
  },
  [83] = {
    [sym_multilineFieldOperator] = ACTIONS(208),
    [sym_key] = ACTIONS(208),
    [sym__sectionAscend] = ACTIONS(208),
    [sym__emptyLine] = ACTIONS(210),
    [sym_commentOperator] = ACTIONS(210),
    [sym_escapeOperator] = ACTIONS(208),
    [sym__sectionDescend] = ACTIONS(208),
  },
  [84] = {
    [sym__escapedOrUnescapedKey] = STATE(144),
    [aux_sym_fieldset_repeat1] = STATE(84),
    [aux_sym_entry_repeat1] = STATE(121),
    [sym_entry] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(121),
    [sym_multilineFieldOperator] = ACTIONS(224),
    [sym_key] = ACTIONS(427),
    [sym__sectionAscend] = ACTIONS(224),
    [sym__emptyLine] = ACTIONS(430),
    [sym_commentOperator] = ACTIONS(232),
    [sym_escapeOperator] = ACTIONS(235),
    [sym__sectionDescend] = ACTIONS(224),
  },
  [85] = {
    [aux_sym_list_repeat1] = STATE(85),
    [sym_item] = STATE(85),
    [aux_sym_entry_repeat1] = STATE(122),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(122),
    [sym_itemOperator] = ACTIONS(433),
    [sym__emptyLine] = ACTIONS(436),
    [sym_commentOperator] = ACTIONS(252),
    [sym_escapeOperator] = ACTIONS(247),
    [sym_key] = ACTIONS(247),
    [sym__sectionAscend] = ACTIONS(247),
    [sym_multilineFieldOperator] = ACTIONS(247),
    [sym__sectionDescend] = ACTIONS(247),
  },
  [86] = {
    [sym_spacedContinuationOperator] = ACTIONS(255),
    [sym_itemOperator] = ACTIONS(255),
    [sym_directContinuationOperator] = ACTIONS(255),
    [sym__emptyLine] = ACTIONS(255),
    [sym_commentOperator] = ACTIONS(255),
    [sym_escapeOperator] = ACTIONS(257),
    [sym_key] = ACTIONS(257),
    [sym__sectionAscend] = ACTIONS(257),
    [sym_multilineFieldOperator] = ACTIONS(257),
    [sym__sectionDescend] = ACTIONS(257),
  },
  [87] = {
    [sym_itemOperator] = ACTIONS(259),
    [sym__emptyLine] = ACTIONS(259),
    [sym_commentOperator] = ACTIONS(259),
    [sym_escapeOperator] = ACTIONS(247),
    [sym_key] = ACTIONS(247),
    [sym__sectionAscend] = ACTIONS(247),
    [sym_multilineFieldOperator] = ACTIONS(247),
    [sym__sectionDescend] = ACTIONS(247),
  },
  [88] = {
    [aux_sym_entry_repeat1] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(88),
    [sym_spacedContinuationOperator] = ACTIONS(269),
    [sym_itemOperator] = ACTIONS(269),
    [sym_directContinuationOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(439),
    [sym_commentOperator] = ACTIONS(442),
  },
  [89] = {
    [sym_multilineFieldOperator] = ACTIONS(224),
    [sym_key] = ACTIONS(224),
    [sym__sectionAscend] = ACTIONS(224),
    [sym__emptyLine] = ACTIONS(271),
    [sym_commentOperator] = ACTIONS(271),
    [sym_escapeOperator] = ACTIONS(224),
    [sym__sectionDescend] = ACTIONS(224),
  },
  [90] = {
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(123),
    [sym_continuation] = STATE(90),
    [aux_sym_entry_repeat1] = STATE(123),
    [aux_sym_entry_repeat2] = STATE(90),
    [sym_spacedContinuationOperator] = ACTIONS(445),
    [sym_itemOperator] = ACTIONS(255),
    [sym_directContinuationOperator] = ACTIONS(445),
    [sym__emptyLine] = ACTIONS(448),
    [sym_commentOperator] = ACTIONS(281),
    [sym_escapeOperator] = ACTIONS(257),
    [sym_key] = ACTIONS(257),
    [sym__sectionAscend] = ACTIONS(257),
    [sym_multilineFieldOperator] = ACTIONS(257),
    [sym__sectionDescend] = ACTIONS(257),
  },
  [91] = {
    [sym_continuation] = STATE(90),
    [aux_sym_entry_repeat1] = STATE(123),
    [aux_sym_entry_repeat2] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(123),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym__emptyLine] = ACTIONS(451),
    [sym_commentOperator] = ACTIONS(289),
    [sym_escapeOperator] = ACTIONS(284),
    [sym_key] = ACTIONS(284),
    [sym__sectionAscend] = ACTIONS(284),
    [sym_multilineFieldOperator] = ACTIONS(284),
    [sym__sectionDescend] = ACTIONS(284),
  },
  [92] = {
    [sym__escapedOrUnescapedKey] = STATE(144),
    [aux_sym_fieldset_repeat1] = STATE(84),
    [aux_sym_entry_repeat1] = STATE(121),
    [sym_entry] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(121),
    [sym_multilineFieldOperator] = ACTIONS(292),
    [sym_key] = ACTIONS(454),
    [sym__sectionAscend] = ACTIONS(292),
    [sym__emptyLine] = ACTIONS(457),
    [sym_commentOperator] = ACTIONS(300),
    [sym_escapeOperator] = ACTIONS(303),
    [sym__sectionDescend] = ACTIONS(292),
  },
  [93] = {
    [aux_sym_list_repeat1] = STATE(85),
    [sym_item] = STATE(85),
    [aux_sym_entry_repeat1] = STATE(122),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(122),
    [sym_itemOperator] = ACTIONS(398),
    [sym__emptyLine] = ACTIONS(460),
    [sym_commentOperator] = ACTIONS(311),
    [sym_escapeOperator] = ACTIONS(306),
    [sym_key] = ACTIONS(306),
    [sym__sectionAscend] = ACTIONS(306),
    [sym_multilineFieldOperator] = ACTIONS(306),
    [sym__sectionDescend] = ACTIONS(306),
  },
  [94] = {
    [sym_multilineFieldOperator] = ACTIONS(314),
    [sym_key] = ACTIONS(314),
    [sym__sectionAscend] = ACTIONS(314),
    [sym__emptyLine] = ACTIONS(316),
    [sym_commentOperator] = ACTIONS(316),
    [sym_escapeOperator] = ACTIONS(314),
    [sym__sectionDescend] = ACTIONS(314),
  },
  [95] = {
    [sym_multilineFieldOperator] = ACTIONS(318),
    [sym_key] = ACTIONS(318),
    [sym__sectionAscend] = ACTIONS(318),
    [sym__emptyLine] = ACTIONS(320),
    [sym_commentOperator] = ACTIONS(320),
    [sym_escapeOperator] = ACTIONS(318),
    [sym__sectionDescend] = ACTIONS(318),
  },
  [96] = {
    [sym_spacedContinuationOperator] = ACTIONS(326),
    [sym_itemOperator] = ACTIONS(326),
    [sym_directContinuationOperator] = ACTIONS(326),
    [sym__emptyLine] = ACTIONS(326),
    [sym_commentOperator] = ACTIONS(326),
    [sym_escapeOperator] = ACTIONS(328),
    [sym_key] = ACTIONS(328),
    [sym__sectionAscend] = ACTIONS(328),
    [sym_multilineFieldOperator] = ACTIONS(328),
    [sym__sectionDescend] = ACTIONS(328),
  },
  [97] = {
    [sym_continuation] = STATE(99),
    [aux_sym_entry_repeat1] = STATE(123),
    [aux_sym_entry_repeat2] = STATE(99),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(123),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_itemOperator] = ACTIONS(330),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym__emptyLine] = ACTIONS(463),
    [sym_commentOperator] = ACTIONS(337),
    [sym_escapeOperator] = ACTIONS(332),
    [sym_key] = ACTIONS(332),
    [sym__sectionAscend] = ACTIONS(332),
    [sym_multilineFieldOperator] = ACTIONS(332),
    [sym__sectionDescend] = ACTIONS(332),
  },
  [98] = {
    [sym_multilineFieldOperator] = ACTIONS(342),
    [sym_key] = ACTIONS(342),
    [sym__sectionAscend] = ACTIONS(342),
    [sym__emptyLine] = ACTIONS(344),
    [sym_commentOperator] = ACTIONS(344),
    [sym_escapeOperator] = ACTIONS(342),
    [sym__sectionDescend] = ACTIONS(342),
  },
  [99] = {
    [sym_continuation] = STATE(90),
    [aux_sym_entry_repeat1] = STATE(123),
    [aux_sym_entry_repeat2] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(123),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_itemOperator] = ACTIONS(348),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym__emptyLine] = ACTIONS(466),
    [sym_commentOperator] = ACTIONS(355),
    [sym_escapeOperator] = ACTIONS(350),
    [sym_key] = ACTIONS(350),
    [sym__sectionAscend] = ACTIONS(350),
    [sym_multilineFieldOperator] = ACTIONS(350),
    [sym__sectionDescend] = ACTIONS(350),
  },
  [100] = {
    [sym_continuation] = STATE(102),
    [aux_sym_entry_repeat1] = STATE(123),
    [aux_sym_entry_repeat2] = STATE(102),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(123),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym__emptyLine] = ACTIONS(469),
    [sym_commentOperator] = ACTIONS(363),
    [sym_escapeOperator] = ACTIONS(358),
    [sym_key] = ACTIONS(358),
    [sym__sectionAscend] = ACTIONS(358),
    [sym_multilineFieldOperator] = ACTIONS(358),
    [sym__sectionDescend] = ACTIONS(358),
  },
  [101] = {
    [sym_multilineFieldOperator] = ACTIONS(366),
    [sym_key] = ACTIONS(366),
    [sym__sectionAscend] = ACTIONS(366),
    [sym__emptyLine] = ACTIONS(368),
    [sym_commentOperator] = ACTIONS(368),
    [sym_escapeOperator] = ACTIONS(366),
    [sym__sectionDescend] = ACTIONS(366),
  },
  [102] = {
    [sym_continuation] = STATE(90),
    [aux_sym_entry_repeat1] = STATE(123),
    [aux_sym_entry_repeat2] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(123),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym__emptyLine] = ACTIONS(472),
    [sym_commentOperator] = ACTIONS(375),
    [sym_escapeOperator] = ACTIONS(370),
    [sym_key] = ACTIONS(370),
    [sym__sectionAscend] = ACTIONS(370),
    [sym_multilineFieldOperator] = ACTIONS(370),
    [sym__sectionDescend] = ACTIONS(370),
  },
  [103] = {
    [aux_sym_comment_repeat1] = STATE(104),
    [sym_multilineFieldOperator] = ACTIONS(35),
    [sym_key] = ACTIONS(35),
    [sym__sectionAscend] = ACTIONS(35),
    [sym__emptyLine] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(132),
    [sym_escapeOperator] = ACTIONS(35),
    [sym__sectionDescend] = ACTIONS(35),
  },
  [104] = {
    [aux_sym_comment_repeat1] = STATE(104),
    [sym_multilineFieldOperator] = ACTIONS(79),
    [sym_key] = ACTIONS(79),
    [sym__sectionAscend] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(81),
    [sym_commentOperator] = ACTIONS(475),
    [sym_escapeOperator] = ACTIONS(79),
    [sym__sectionDescend] = ACTIONS(79),
  },
  [105] = {
    [sym_multilineFieldOperator] = ACTIONS(86),
    [sym_key] = ACTIONS(86),
    [sym__sectionAscend] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(88),
    [sym_commentOperator] = ACTIONS(88),
    [sym_escapeOperator] = ACTIONS(86),
    [sym__sectionDescend] = ACTIONS(86),
  },
  [106] = {
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_spacedContinuationOperator] = ACTIONS(35),
    [sym_itemOperator] = ACTIONS(35),
    [sym_directContinuationOperator] = ACTIONS(35),
    [sym__emptyLine] = ACTIONS(35),
    [sym_commentOperator] = ACTIONS(242),
  },
  [107] = {
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_spacedContinuationOperator] = ACTIONS(79),
    [sym_itemOperator] = ACTIONS(79),
    [sym_directContinuationOperator] = ACTIONS(79),
    [sym__emptyLine] = ACTIONS(79),
    [sym_commentOperator] = ACTIONS(478),
  },
  [108] = {
    [sym_spacedContinuationOperator] = ACTIONS(86),
    [sym_itemOperator] = ACTIONS(86),
    [sym_directContinuationOperator] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(86),
    [sym_commentOperator] = ACTIONS(86),
  },
  [109] = {
    [sym__endOfLine] = ACTIONS(481),
    [sym_elementOperator] = ACTIONS(483),
    [sym_copyOperator] = ACTIONS(485),
  },
  [110] = {
    [sym__endOfLine] = ACTIONS(487),
  },
  [111] = {
    [sym_escapeOperator] = ACTIONS(489),
  },
  [112] = {
    [sym__endOfLine] = ACTIONS(491),
    [sym_token] = ACTIONS(493),
  },
  [113] = {
    [sym__endOfLine] = ACTIONS(495),
  },
  [114] = {
    [sym__endOfLine] = ACTIONS(497),
  },
  [115] = {
    [sym_section] = STATE(118),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(118),
    [aux_sym_document_repeat1] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(118),
    [sym_fieldset] = STATE(118),
    [sym_element] = STATE(118),
    [sym_empty] = STATE(118),
    [sym_list] = STATE(118),
    [sym__sectionDescend] = ACTIONS(126),
    [sym_key] = ACTIONS(128),
    [sym__sectionAscend] = ACTIONS(499),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(501),
    [sym_multilineFieldOperator] = ACTIONS(136),
  },
  [116] = {
    [sym_continuation] = STATE(86),
    [sym__escapedOrUnescapedKey] = STATE(144),
    [sym_item] = STATE(87),
    [aux_sym_entry_repeat1] = STATE(51),
    [sym_entry] = STATE(89),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(51),
    [sym_spacedContinuationOperator] = ACTIONS(396),
    [sym_key] = ACTIONS(503),
    [sym_itemOperator] = ACTIONS(398),
    [sym_directContinuationOperator] = ACTIONS(396),
    [sym_escapeOperator] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(172),
    [sym__emptyLine] = ACTIONS(174),
  },
  [117] = {
    [sym__endOfLine] = ACTIONS(505),
  },
  [118] = {
    [sym_section] = STATE(73),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(73),
    [aux_sym_document_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(73),
    [sym_fieldset] = STATE(73),
    [sym_element] = STATE(73),
    [sym_empty] = STATE(73),
    [sym_list] = STATE(73),
    [sym__sectionDescend] = ACTIONS(126),
    [sym_key] = ACTIONS(128),
    [sym__sectionAscend] = ACTIONS(507),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(214),
    [sym_multilineFieldOperator] = ACTIONS(136),
  },
  [119] = {
    [sym__endOfLine] = ACTIONS(509),
  },
  [120] = {
    [sym__endOfLine] = ACTIONS(511),
  },
  [121] = {
    [sym__escapedOrUnescapedKey] = STATE(144),
    [sym_entry] = STATE(89),
    [aux_sym_entry_repeat1] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(51),
    [sym_key] = ACTIONS(503),
    [sym_escapeOperator] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(172),
    [sym__emptyLine] = ACTIONS(174),
  },
  [122] = {
    [sym_item] = STATE(87),
    [aux_sym_entry_repeat1] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(88),
    [sym__emptyLine] = ACTIONS(238),
    [sym_itemOperator] = ACTIONS(513),
    [sym_commentOperator] = ACTIONS(242),
  },
  [123] = {
    [sym_continuation] = STATE(86),
    [aux_sym_entry_repeat1] = STATE(88),
    [aux_sym_comment_repeat1] = STATE(106),
    [sym_comment] = STATE(88),
    [sym_spacedContinuationOperator] = ACTIONS(515),
    [sym_directContinuationOperator] = ACTIONS(515),
    [sym__emptyLine] = ACTIONS(238),
    [sym_commentOperator] = ACTIONS(242),
  },
  [124] = {
    [sym__escapedOrUnescapedKey] = STATE(144),
    [sym_item] = STATE(87),
    [aux_sym_entry_repeat1] = STATE(51),
    [sym_entry] = STATE(89),
    [aux_sym_comment_repeat1] = STATE(71),
    [sym_comment] = STATE(51),
    [sym_key] = ACTIONS(503),
    [sym_itemOperator] = ACTIONS(398),
    [sym_escapeOperator] = ACTIONS(170),
    [sym_commentOperator] = ACTIONS(172),
    [sym__emptyLine] = ACTIONS(174),
  },
  [125] = {
    [sym_section] = STATE(127),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(127),
    [aux_sym_document_repeat1] = STATE(127),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(127),
    [sym_fieldset] = STATE(127),
    [sym_element] = STATE(127),
    [sym_empty] = STATE(127),
    [sym_list] = STATE(127),
    [sym__sectionDescend] = ACTIONS(126),
    [sym_key] = ACTIONS(128),
    [sym__sectionAscend] = ACTIONS(517),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(519),
    [sym_multilineFieldOperator] = ACTIONS(136),
  },
  [126] = {
    [sym__endOfLine] = ACTIONS(521),
  },
  [127] = {
    [sym_section] = STATE(73),
    [sym__escapedOrUnescapedKey] = STATE(109),
    [sym_field] = STATE(73),
    [aux_sym_document_repeat1] = STATE(73),
    [aux_sym_comment_repeat1] = STATE(103),
    [sym_comment] = STATE(73),
    [sym_fieldset] = STATE(73),
    [sym_element] = STATE(73),
    [sym_empty] = STATE(73),
    [sym_list] = STATE(73),
    [sym__sectionDescend] = ACTIONS(126),
    [sym_key] = ACTIONS(128),
    [sym__sectionAscend] = ACTIONS(523),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_commentOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(214),
    [sym_multilineFieldOperator] = ACTIONS(136),
  },
  [128] = {
    [sym__endOfLine] = ACTIONS(525),
  },
  [129] = {
    [sym__endOfLine] = ACTIONS(527),
  },
  [130] = {
    [sym_token] = ACTIONS(529),
  },
  [131] = {
    [sym_escapedKey] = ACTIONS(531),
  },
  [132] = {
    [sym_token] = ACTIONS(533),
  },
  [133] = {
    [sym__endOfLine] = ACTIONS(535),
    [sym_copyOperator] = ACTIONS(537),
    [sym_deepCopyOperator] = ACTIONS(539),
  },
  [134] = {
    [sym_multilineFieldKey] = ACTIONS(541),
  },
  [135] = {
    [sym_token] = ACTIONS(543),
  },
  [136] = {
    [sym_token] = ACTIONS(545),
  },
  [137] = {
    [sym__endOfLine] = ACTIONS(547),
  },
  [138] = {
    [sym_token] = ACTIONS(549),
  },
  [139] = {
    [sym_token] = ACTIONS(551),
  },
  [140] = {
    [sym_token] = ACTIONS(553),
  },
  [141] = {
    [sym__escapedOrUnescapedKey] = STATE(133),
    [sym_escapeOperator] = ACTIONS(9),
    [sym_key] = ACTIONS(555),
  },
  [142] = {
    [sym_multilineFieldOperator] = ACTIONS(557),
  },
  [143] = {
    [sym_token] = ACTIONS(559),
  },
  [144] = {
    [sym_entryOperator] = ACTIONS(561),
  },
  [145] = {
    [sym_sectionOperator] = ACTIONS(563),
  },
  [146] = {
    [sym__endOfLine] = ACTIONS(565),
  },
  [147] = {
    [sym_multilineFieldKey] = ACTIONS(567),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(5),
  [5] = {.count = 1, .reusable = true}, SHIFT(6),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [39] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, SHIFT(24),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [65] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [83] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [88] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym__escapedOrUnescapedKey, 3),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__escapedOrUnescapedKey, 3),
  [94] = {.count = 1, .reusable = true}, SHIFT(26),
  [96] = {.count = 1, .reusable = true}, SHIFT(27),
  [98] = {.count = 1, .reusable = false}, SHIFT(28),
  [100] = {.count = 1, .reusable = true}, SHIFT(28),
  [102] = {.count = 1, .reusable = false}, SHIFT(29),
  [104] = {.count = 1, .reusable = false}, SHIFT(30),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [108] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(34),
  [111] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(130),
  [114] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(131),
  [117] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(31),
  [120] = {.count = 1, .reusable = true}, SHIFT(36),
  [122] = {.count = 1, .reusable = true}, SHIFT(37),
  [124] = {.count = 1, .reusable = true}, SHIFT(38),
  [126] = {.count = 1, .reusable = true}, SHIFT(145),
  [128] = {.count = 1, .reusable = true}, SHIFT(109),
  [130] = {.count = 1, .reusable = true}, SHIFT(39),
  [132] = {.count = 1, .reusable = false}, SHIFT(139),
  [134] = {.count = 1, .reusable = false}, SHIFT(40),
  [136] = {.count = 1, .reusable = true}, SHIFT(147),
  [138] = {.count = 1, .reusable = true}, SHIFT(41),
  [140] = {.count = 1, .reusable = true}, SHIFT(42),
  [142] = {.count = 1, .reusable = true}, SHIFT(43),
  [144] = {.count = 1, .reusable = true}, SHIFT(44),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [148] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(31),
  [151] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(46),
  [154] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(130),
  [157] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(131),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [162] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(47),
  [165] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(140),
  [168] = {.count = 1, .reusable = true}, SHIFT(31),
  [170] = {.count = 1, .reusable = true}, SHIFT(131),
  [172] = {.count = 1, .reusable = false}, SHIFT(130),
  [174] = {.count = 1, .reusable = false}, SHIFT(51),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [178] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(53),
  [181] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(140),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 2),
  [186] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(53),
  [189] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(140),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3),
  [194] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(58),
  [197] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(130),
  [200] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(131),
  [203] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(31),
  [206] = {.count = 1, .reusable = true}, SHIFT(59),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [212] = {.count = 1, .reusable = true}, SHIFT(60),
  [214] = {.count = 1, .reusable = false}, SHIFT(73),
  [216] = {.count = 1, .reusable = true}, SHIFT(61),
  [218] = {.count = 1, .reusable = true}, SHIFT(62),
  [220] = {.count = 1, .reusable = true}, SHIFT(63),
  [222] = {.count = 1, .reusable = true}, SHIFT(64),
  [224] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(31),
  [229] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(46),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(130),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(131),
  [238] = {.count = 1, .reusable = true}, SHIFT(88),
  [240] = {.count = 1, .reusable = true}, SHIFT(30),
  [242] = {.count = 1, .reusable = true}, SHIFT(140),
  [244] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(30),
  [247] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(47),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(140),
  [255] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [259] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(51),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(130),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [271] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [273] = {.count = 1, .reusable = true}, SHIFT(29),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(29),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(53),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(140),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 2),
  [286] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(53),
  [289] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(140),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3),
  [294] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(31),
  [297] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(46),
  [300] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(130),
  [303] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(131),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .production_id = 3),
  [308] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(47),
  [311] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(140),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_field, 6),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_field, 6),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [322] = {.count = 1, .reusable = true}, SHIFT(65),
  [324] = {.count = 1, .reusable = false}, SHIFT(66),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [334] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(53),
  [337] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(140),
  [340] = {.count = 1, .reusable = true}, SHIFT(68),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [346] = {.count = 1, .reusable = true}, SHIFT(69),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [352] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(53),
  [355] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(140),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 2),
  [360] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(53),
  [363] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(140),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 2),
  [372] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(53),
  [375] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(140),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(147),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [384] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [387] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(139),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [393] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(130),
  [396] = {.count = 1, .reusable = false}, SHIFT(135),
  [398] = {.count = 1, .reusable = false}, SHIFT(136),
  [400] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(116),
  [403] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(144),
  [406] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(144),
  [409] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(121),
  [412] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(122),
  [415] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(123),
  [418] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 2), SHIFT(123),
  [421] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(124),
  [424] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 3), SHIFT(144),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(144),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(121),
  [433] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(136),
  [436] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(122),
  [439] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(88),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(140),
  [445] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(135),
  [448] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(123),
  [451] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 2), SHIFT(123),
  [454] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(144),
  [457] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 3), SHIFT(121),
  [460] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 3), SHIFT(122),
  [463] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(123),
  [466] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(123),
  [469] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 2), SHIFT(123),
  [472] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 2), SHIFT(123),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(139),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(140),
  [481] = {.count = 1, .reusable = true}, SHIFT(72),
  [483] = {.count = 1, .reusable = true}, SHIFT(112),
  [485] = {.count = 1, .reusable = true}, SHIFT(132),
  [487] = {.count = 1, .reusable = true}, SHIFT(75),
  [489] = {.count = 1, .reusable = true}, SHIFT(76),
  [491] = {.count = 1, .reusable = true}, SHIFT(77),
  [493] = {.count = 1, .reusable = true}, SHIFT(113),
  [495] = {.count = 1, .reusable = true}, SHIFT(81),
  [497] = {.count = 1, .reusable = true}, SHIFT(82),
  [499] = {.count = 1, .reusable = true}, SHIFT(83),
  [501] = {.count = 1, .reusable = false}, SHIFT(118),
  [503] = {.count = 1, .reusable = true}, SHIFT(144),
  [505] = {.count = 1, .reusable = true}, SHIFT(94),
  [507] = {.count = 1, .reusable = true}, SHIFT(95),
  [509] = {.count = 1, .reusable = true}, SHIFT(96),
  [511] = {.count = 1, .reusable = true}, SHIFT(97),
  [513] = {.count = 1, .reusable = true}, SHIFT(136),
  [515] = {.count = 1, .reusable = true}, SHIFT(135),
  [517] = {.count = 1, .reusable = true}, SHIFT(98),
  [519] = {.count = 1, .reusable = false}, SHIFT(127),
  [521] = {.count = 1, .reusable = true}, SHIFT(100),
  [523] = {.count = 1, .reusable = true}, SHIFT(101),
  [525] = {.count = 1, .reusable = true}, SHIFT(105),
  [527] = {.count = 1, .reusable = true}, SHIFT(108),
  [529] = {.count = 1, .reusable = true}, SHIFT(110),
  [531] = {.count = 1, .reusable = true}, SHIFT(111),
  [533] = {.count = 1, .reusable = true}, SHIFT(114),
  [535] = {.count = 1, .reusable = true}, SHIFT(115),
  [537] = {.count = 1, .reusable = false}, SHIFT(143),
  [539] = {.count = 1, .reusable = true}, SHIFT(143),
  [541] = {.count = 1, .reusable = true}, SHIFT(117),
  [543] = {.count = 1, .reusable = true}, SHIFT(119),
  [545] = {.count = 1, .reusable = true}, SHIFT(120),
  [547] = {.count = 1, .reusable = true}, SHIFT(125),
  [549] = {.count = 1, .reusable = true}, SHIFT(126),
  [551] = {.count = 1, .reusable = true}, SHIFT(128),
  [553] = {.count = 1, .reusable = true}, SHIFT(129),
  [555] = {.count = 1, .reusable = true}, SHIFT(133),
  [557] = {.count = 1, .reusable = true}, SHIFT(134),
  [559] = {.count = 1, .reusable = true}, SHIFT(137),
  [561] = {.count = 1, .reusable = true}, SHIFT(138),
  [563] = {.count = 1, .reusable = true}, SHIFT(141),
  [565] = {.count = 1, .reusable = true}, SHIFT(142),
  [567] = {.count = 1, .reusable = true}, SHIFT(146),
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
