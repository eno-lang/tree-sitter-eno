#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 23
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 2
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LF = 1,
  sym_name = 2,
  sym_token = 3,
  sym_appendWithNewlineOperator = 4,
  sym_appendWithSpaceOperator = 5,
  sym_commentOperator = 6,
  sym_entryOperator = 7,
  sym_itemOperator = 8,
  sym_nameOperator = 9,
  sym_sectionOperator = 10,
  sym_document = 11,
  sym__instruction = 12,
  sym__comment = 13,
  sym__emptyElement = 14,
  sym__field = 15,
  sym_dictionary = 16,
  sym_list = 17,
  aux_sym_document_repeat1 = 18,
  anon_alias_sym_comment = 19,
  anon_alias_sym_value = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_name] = "name",
  [sym_token] = "token",
  [sym_appendWithNewlineOperator] = "appendWithNewlineOperator",
  [sym_appendWithSpaceOperator] = "appendWithSpaceOperator",
  [sym_commentOperator] = "commentOperator",
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
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(6);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(8);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(9);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_commentOperator);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(6);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_appendWithSpaceOperator);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(6);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_appendWithNewlineOperator);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(6);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(9);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == '|')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '|')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '|')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '<' ||
          lookahead == '=')
        SKIP(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_sectionOperator);
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=')
        ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_commentOperator);
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=')
        ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_appendWithSpaceOperator);
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=')
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_appendWithNewlineOperator);
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '#')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '|')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == ':')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        SKIP(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_nameOperator);
      if (lookahead == ':')
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == ':' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '\\' ||
          lookahead == '|')
        SKIP(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ')
        SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == '-')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        SKIP(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_itemOperator);
      if (lookahead == '-')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_entryOperator);
      if (lookahead == '-')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_appendWithSpaceOperator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_appendWithNewlineOperator] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_token] = ACTIONS(1),
  },
  [1] = {
    [sym_list] = STATE(6),
    [sym__emptyElement] = STATE(6),
    [sym__field] = STATE(6),
    [sym__instruction] = STATE(6),
    [sym__comment] = STATE(6),
    [sym_document] = STATE(7),
    [sym_dictionary] = STATE(6),
    [sym_appendWithSpaceOperator] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_appendWithNewlineOperator] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(9),
    [sym_sectionOperator] = ACTIONS(11),
    [sym_commentOperator] = ACTIONS(13),
  },
  [2] = {
    [sym_token] = ACTIONS(15),
  },
  [3] = {
    [sym_nameOperator] = ACTIONS(17),
  },
  [4] = {
    [sym_name] = ACTIONS(19),
  },
  [5] = {
    [sym_token] = ACTIONS(21),
  },
  [6] = {
    [aux_sym_document_repeat1] = STATE(13),
    [anon_sym_LF] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [8] = {
    [anon_sym_LF] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [9] = {
    [anon_sym_LF] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_token] = ACTIONS(35),
  },
  [10] = {
    [anon_sym_LF] = ACTIONS(37),
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [11] = {
    [anon_sym_LF] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [12] = {
    [sym_list] = STATE(16),
    [sym__emptyElement] = STATE(16),
    [sym__field] = STATE(16),
    [sym__instruction] = STATE(16),
    [sym__comment] = STATE(16),
    [sym_dictionary] = STATE(16),
    [sym_appendWithSpaceOperator] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [sym_appendWithNewlineOperator] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(41),
    [sym_sectionOperator] = ACTIONS(11),
    [sym_commentOperator] = ACTIONS(13),
  },
  [13] = {
    [aux_sym_document_repeat1] = STATE(17),
    [anon_sym_LF] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(43),
  },
  [14] = {
    [sym_name] = ACTIONS(45),
  },
  [15] = {
    [anon_sym_LF] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(47),
  },
  [16] = {
    [anon_sym_LF] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(49),
  },
  [17] = {
    [aux_sym_document_repeat1] = STATE(17),
    [anon_sym_LF] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(49),
  },
  [18] = {
    [sym_entryOperator] = ACTIONS(54),
    [sym_itemOperator] = ACTIONS(56),
  },
  [19] = {
    [sym_token] = ACTIONS(58),
  },
  [20] = {
    [sym_token] = ACTIONS(60),
  },
  [21] = {
    [anon_sym_LF] = ACTIONS(62),
    [ts_builtin_sym_end] = ACTIONS(62),
  },
  [22] = {
    [anon_sym_LF] = ACTIONS(64),
    [ts_builtin_sym_end] = ACTIONS(64),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [27] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym__instruction, 2, .production_id = 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__emptyElement, 2),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__instruction, 2),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 2, .production_id = 2),
  [41] = {.count = 1, .reusable = false}, SHIFT(16),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_document, 2),
  [45] = {.count = 1, .reusable = true}, SHIFT(18),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym__field, 3, .production_id = 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [54] = {.count = 1, .reusable = true}, SHIFT(19),
  [56] = {.count = 1, .reusable = true}, SHIFT(20),
  [58] = {.count = 1, .reusable = true}, SHIFT(21),
  [60] = {.count = 1, .reusable = true}, SHIFT(22),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary, 6, .production_id = 4),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_list, 6, .production_id = 4),
};

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
  };
  return &language;
}
