#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 23
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 2
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LF = 1,
  sym_name = 2,
  sym_token = 3,
  sym_appendWithNewlineOperator = 4,
  sym_appendWithSpaceOperator = 5,
  sym_commentOperator = 6,
  sym_copyOperator = 7,
  sym_deepCopyOperator = 8,
  sym_entryOperator = 9,
  sym_itemOperator = 10,
  sym_nameOperator = 11,
  sym_sectionOperator = 12,
  sym_document = 13,
  sym__instruction = 14,
  sym__comment = 15,
  sym__emptyElement = 16,
  sym__field = 17,
  sym_dictionary = 18,
  sym_list = 19,
  aux_sym_document_repeat1 = 20,
  anon_alias_sym_comment = 21,
  anon_alias_sym_value = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LF] = "\n",
  [sym_name] = "name",
  [sym_token] = "token",
  [sym_appendWithNewlineOperator] = "appendWithNewlineOperator",
  [sym_appendWithSpaceOperator] = "appendWithSpaceOperator",
  [sym_commentOperator] = "commentOperator",
  [sym_copyOperator] = "copyOperator",
  [sym_deepCopyOperator] = "deepCopyOperator",
  [sym_entryOperator] = "entryOperator",
  [sym_itemOperator] = "itemOperator",
  [sym_nameOperator] = "nameOperator",
  [sym_sectionOperator] = "sectionOperator",
  [sym_document] = "document",
  [sym__instruction] = "_instruction",
  [sym__comment] = "_comment",
  [sym__emptyElement] = "_emptyElement",
  [sym__field] = "_field",
  [sym_dictionary] = "dictionary",
  [sym_list] = "list",
  [aux_sym_document_repeat1] = "document_repeat1",
  [anon_alias_sym_comment] = "comment",
  [anon_alias_sym_value] = "value",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_appendWithNewlineOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_appendWithSpaceOperator] = {
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
  [sym_nameOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_sectionOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__emptyElement] = {
    .visible = false,
    .named = true,
  },
  [sym__field] = {
    .visible = false,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
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
    [1] = anon_alias_sym_value,
  },
  [2] = {
    [1] = anon_alias_sym_comment,
  },
  [3] = {
    [2] = anon_alias_sym_value,
  },
  [4] = {
    [5] = anon_alias_sym_value,
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
        ADVANCE(8);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead == '|')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      ADVANCE(12);
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
      ACCEPT_TOKEN(sym_nameOperator);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_copyOperator);
      if (lookahead == '<')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_deepCopyOperator);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_entryOperator);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_commentOperator);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_appendWithSpaceOperator);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_appendWithNewlineOperator);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || lookahead > '>') &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || lookahead > '>') &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(10);
      if (lookahead == '|')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      if (lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == ':')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_appendWithNewlineOperator] = ACTIONS(1),
    [sym_appendWithSpaceOperator] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(3),
    [sym_deepCopyOperator] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym_itemOperator] = ACTIONS(1),
    [sym_nameOperator] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(6),
    [sym__instruction] = STATE(7),
    [sym__comment] = STATE(7),
    [sym__emptyElement] = STATE(7),
    [sym__field] = STATE(7),
    [sym_dictionary] = STATE(7),
    [sym_list] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [sym_appendWithNewlineOperator] = ACTIONS(11),
    [sym_appendWithSpaceOperator] = ACTIONS(11),
    [sym_commentOperator] = ACTIONS(13),
    [sym_sectionOperator] = ACTIONS(15),
  },
  [2] = {
    [sym_nameOperator] = ACTIONS(17),
  },
  [3] = {
    [sym_token] = ACTIONS(19),
  },
  [4] = {
    [sym_token] = ACTIONS(21),
  },
  [5] = {
    [sym_name] = ACTIONS(23),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [aux_sym_document_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(29),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [sym_token] = ACTIONS(35),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(37),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(39),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(41),
  },
  [12] = {
    [sym__instruction] = STATE(16),
    [sym__comment] = STATE(16),
    [sym__emptyElement] = STATE(16),
    [sym__field] = STATE(16),
    [sym_dictionary] = STATE(16),
    [sym_list] = STATE(16),
    [anon_sym_LF] = ACTIONS(43),
    [sym_name] = ACTIONS(9),
    [sym_appendWithNewlineOperator] = ACTIONS(11),
    [sym_appendWithSpaceOperator] = ACTIONS(11),
    [sym_commentOperator] = ACTIONS(13),
    [sym_sectionOperator] = ACTIONS(15),
  },
  [13] = {
    [aux_sym_document_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(29),
  },
  [14] = {
    [sym_name] = ACTIONS(47),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(51),
  },
  [17] = {
    [aux_sym_document_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
  },
  [18] = {
    [sym_entryOperator] = ACTIONS(56),
    [sym_itemOperator] = ACTIONS(58),
  },
  [19] = {
    [sym_token] = ACTIONS(60),
  },
  [20] = {
    [sym_token] = ACTIONS(62),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_LF] = ACTIONS(64),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(66),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym__emptyElement, 2),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__instruction, 2, .alias_sequence_id = 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 2, .alias_sequence_id = 2),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym__instruction, 2),
  [43] = {.count = 1, .reusable = true}, SHIFT(16),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym__field, 3, .alias_sequence_id = 3),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [56] = {.count = 1, .reusable = true}, SHIFT(19),
  [58] = {.count = 1, .reusable = true}, SHIFT(20),
  [60] = {.count = 1, .reusable = true}, SHIFT(21),
  [62] = {.count = 1, .reusable = true}, SHIFT(22),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary, 6, .alias_sequence_id = 4),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6, .alias_sequence_id = 4),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eno() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
