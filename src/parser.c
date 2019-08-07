#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 199
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 2
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__emptyLine = 1,
  sym_key = 2,
  sym_sectionKey = 3,
  sym_token = 4,
  sym_directContinuationOperator = 5,
  sym_spacedContinuationOperator = 6,
  sym_commentOperator = 7,
  sym_copyOperator = 8,
  sym_deepCopyOperator = 9,
  sym_entryOperator = 10,
  sym_itemOperator = 11,
  sym_elementOperator = 12,
  sym_sectionOperator = 13,
  sym__endOfLine = 14,
  sym__multilineFieldEnd = 15,
  sym__multilineFieldLine = 16,
  sym__sectionAscend = 17,
  sym__sectionDescend = 18,
  sym_escapedKey = 19,
  sym_escapeOperator = 20,
  sym_multilineFieldKey = 21,
  sym_multilineFieldOperator = 22,
  sym_document = 23,
  sym__escapedOrUnescapedKey = 24,
  sym__escapedOrUnescapedSectionKey = 25,
  sym_comment = 26,
  sym_continuation = 27,
  sym_element = 28,
  sym_empty = 29,
  sym_entry = 30,
  sym_field = 31,
  sym_fieldset = 32,
  sym_item = 33,
  sym_list = 34,
  sym_multilineField = 35,
  sym_multilineFieldValue = 36,
  sym_section = 37,
  aux_sym_document_repeat1 = 38,
  aux_sym_comment_repeat1 = 39,
  aux_sym_entry_repeat1 = 40,
  aux_sym_entry_repeat2 = 41,
  aux_sym_fieldset_repeat1 = 42,
  aux_sym_list_repeat1 = 43,
  aux_sym_multilineFieldValue_repeat1 = 44,
  alias_sym_template = 45,
  alias_sym_value = 46,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__emptyLine] = "_emptyLine",
  [sym_key] = "key",
  [sym_sectionKey] = "key",
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
  [sym__multilineFieldEnd] = "_multilineFieldEnd",
  [sym__multilineFieldLine] = "_multilineFieldLine",
  [sym__sectionAscend] = "_sectionAscend",
  [sym__sectionDescend] = "_sectionDescend",
  [sym_escapedKey] = "key",
  [sym_escapeOperator] = "escapeOperator",
  [sym_multilineFieldKey] = "key",
  [sym_multilineFieldOperator] = "multilineFieldOperator",
  [sym_document] = "document",
  [sym__escapedOrUnescapedKey] = "_escapedOrUnescapedKey",
  [sym__escapedOrUnescapedSectionKey] = "_escapedOrUnescapedSectionKey",
  [sym_comment] = "comment",
  [sym_continuation] = "continuation",
  [sym_element] = "element",
  [sym_empty] = "empty",
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym_fieldset] = "fieldset",
  [sym_item] = "item",
  [sym_list] = "list",
  [sym_multilineField] = "field",
  [sym_multilineFieldValue] = "value",
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_entry_repeat2] = "entry_repeat2",
  [aux_sym_fieldset_repeat1] = "fieldset_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_multilineFieldValue_repeat1] = "multilineFieldValue_repeat1",
  [alias_sym_template] = "template",
  [alias_sym_value] = "value",
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
  [sym_sectionKey] = {
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
  [sym__multilineFieldEnd] = {
    .visible = false,
    .named = true,
  },
  [sym__multilineFieldLine] = {
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
  [sym_escapedKey] = {
    .visible = true,
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
  [sym__escapedOrUnescapedSectionKey] = {
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
  [sym_multilineField] = {
    .visible = true,
    .named = true,
  },
  [sym_multilineFieldValue] = {
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
  [aux_sym_multilineFieldValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_template] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = sym_comment,
  },
  [2] = {
    [2] = alias_sym_template,
  },
  [3] = {
    [2] = alias_sym_value,
  },
  [4] = {
    [1] = alias_sym_value,
  },
  [5] = {
    [4] = alias_sym_template,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(27);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '`') ADVANCE(27);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(26);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '`') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '<' &&
          lookahead != '`') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__emptyLine);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(27);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '`') ADVANCE(27);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(26);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_sectionKey);
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_sectionKey);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\r') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_token);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_directContinuationOperator);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_directContinuationOperator);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_spacedContinuationOperator);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_spacedContinuationOperator);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_commentOperator);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_commentOperator);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_copyOperator);
      if (lookahead == '<') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_deepCopyOperator);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_entryOperator);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_itemOperator);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_itemOperator);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(27);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_elementOperator);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_sectionOperator);
      if (lookahead == '#') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 4},
  [6] = {.lex_state = 4, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 5},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 5},
  [11] = {.lex_state = 0, .external_lex_state = 5},
  [12] = {.lex_state = 17, .external_lex_state = 6},
  [13] = {.lex_state = 0, .external_lex_state = 6},
  [14] = {.lex_state = 4, .external_lex_state = 2},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 4, .external_lex_state = 2},
  [17] = {.lex_state = 16, .external_lex_state = 5},
  [18] = {.lex_state = 4, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 7},
  [20] = {.lex_state = 4, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 4},
  [22] = {.lex_state = 0, .external_lex_state = 5},
  [23] = {.lex_state = 0, .external_lex_state = 5},
  [24] = {.lex_state = 0, .external_lex_state = 5},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 0, .external_lex_state = 8},
  [28] = {.lex_state = 0, .external_lex_state = 5},
  [29] = {.lex_state = 0, .external_lex_state = 7},
  [30] = {.lex_state = 0, .external_lex_state = 9},
  [31] = {.lex_state = 0, .external_lex_state = 6},
  [32] = {.lex_state = 4, .external_lex_state = 10},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 2, .external_lex_state = 2},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16, .external_lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1, .external_lex_state = 6},
  [39] = {.lex_state = 3, .external_lex_state = 2},
  [40] = {.lex_state = 4, .external_lex_state = 2},
  [41] = {.lex_state = 2, .external_lex_state = 2},
  [42] = {.lex_state = 3, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 7},
  [45] = {.lex_state = 0, .external_lex_state = 7},
  [46] = {.lex_state = 0, .external_lex_state = 8},
  [47] = {.lex_state = 0, .external_lex_state = 5},
  [48] = {.lex_state = 4, .external_lex_state = 2},
  [49] = {.lex_state = 4, .external_lex_state = 10},
  [50] = {.lex_state = 0, .external_lex_state = 5},
  [51] = {.lex_state = 2, .external_lex_state = 6},
  [52] = {.lex_state = 4, .external_lex_state = 2},
  [53] = {.lex_state = 2, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 5},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 5},
  [57] = {.lex_state = 16, .external_lex_state = 5},
  [58] = {.lex_state = 1, .external_lex_state = 6},
  [59] = {.lex_state = 4, .external_lex_state = 2},
  [60] = {.lex_state = 3, .external_lex_state = 2},
  [61] = {.lex_state = 2, .external_lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3, .external_lex_state = 2},
  [64] = {.lex_state = 4, .external_lex_state = 6},
  [65] = {.lex_state = 4, .external_lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2, .external_lex_state = 2},
  [68] = {.lex_state = 3, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 5},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 4, .external_lex_state = 2},
  [72] = {.lex_state = 4, .external_lex_state = 10},
  [73] = {.lex_state = 3, .external_lex_state = 2},
  [74] = {.lex_state = 1, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 3, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 5},
  [78] = {.lex_state = 4, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 5},
  [80] = {.lex_state = 4, .external_lex_state = 2},
  [81] = {.lex_state = 4, .external_lex_state = 10},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 3, .external_lex_state = 2},
  [84] = {.lex_state = 3, .external_lex_state = 2},
  [85] = {.lex_state = 4, .external_lex_state = 2},
  [86] = {.lex_state = 4, .external_lex_state = 2},
  [87] = {.lex_state = 3, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 6},
  [89] = {.lex_state = 1, .external_lex_state = 6},
  [90] = {.lex_state = 4, .external_lex_state = 10},
  [91] = {.lex_state = 4, .external_lex_state = 10},
  [92] = {.lex_state = 1, .external_lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1, .external_lex_state = 10},
  [95] = {.lex_state = 2, .external_lex_state = 10},
  [96] = {.lex_state = 3, .external_lex_state = 10},
  [97] = {.lex_state = 4, .external_lex_state = 10},
  [98] = {.lex_state = 2, .external_lex_state = 10},
  [99] = {.lex_state = 3, .external_lex_state = 10},
  [100] = {.lex_state = 4, .external_lex_state = 10},
  [101] = {.lex_state = 4, .external_lex_state = 10},
  [102] = {.lex_state = 2, .external_lex_state = 10},
  [103] = {.lex_state = 1, .external_lex_state = 10},
  [104] = {.lex_state = 2, .external_lex_state = 6},
  [105] = {.lex_state = 4, .external_lex_state = 10},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 2, .external_lex_state = 10},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 4, .external_lex_state = 10},
  [110] = {.lex_state = 2, .external_lex_state = 10},
  [111] = {.lex_state = 3, .external_lex_state = 10},
  [112] = {.lex_state = 4, .external_lex_state = 10},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 1, .external_lex_state = 10},
  [115] = {.lex_state = 1, .external_lex_state = 10},
  [116] = {.lex_state = 3, .external_lex_state = 10},
  [117] = {.lex_state = 4, .external_lex_state = 10},
  [118] = {.lex_state = 4, .external_lex_state = 10},
  [119] = {.lex_state = 1, .external_lex_state = 10},
  [120] = {.lex_state = 3, .external_lex_state = 10},
  [121] = {.lex_state = 3, .external_lex_state = 10},
  [122] = {.lex_state = 4, .external_lex_state = 10},
  [123] = {.lex_state = 4, .external_lex_state = 10},
  [124] = {.lex_state = 3, .external_lex_state = 10},
  [125] = {.lex_state = 4, .external_lex_state = 10},
  [126] = {.lex_state = 4, .external_lex_state = 10},
  [127] = {.lex_state = 4, .external_lex_state = 10},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3, .external_lex_state = 10},
  [130] = {.lex_state = 3, .external_lex_state = 10},
  [131] = {.lex_state = 3, .external_lex_state = 10},
  [132] = {.lex_state = 2, .external_lex_state = 6},
  [133] = {.lex_state = 2, .external_lex_state = 6},
  [134] = {.lex_state = 2, .external_lex_state = 6},
  [135] = {.lex_state = 4, .external_lex_state = 6},
  [136] = {.lex_state = 1, .external_lex_state = 10},
  [137] = {.lex_state = 1, .external_lex_state = 10},
  [138] = {.lex_state = 1, .external_lex_state = 10},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 4, .external_lex_state = 6},
  [143] = {.lex_state = 4, .external_lex_state = 6},
  [144] = {.lex_state = 4, .external_lex_state = 6},
  [145] = {.lex_state = 0, .external_lex_state = 5},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 6},
  [148] = {.lex_state = 16, .external_lex_state = 5},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 4, .external_lex_state = 10},
  [152] = {.lex_state = 16, .external_lex_state = 5},
  [153] = {.lex_state = 1, .external_lex_state = 6},
  [154] = {.lex_state = 4, .external_lex_state = 10},
  [155] = {.lex_state = 2, .external_lex_state = 6},
  [156] = {.lex_state = 0, .external_lex_state = 5},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 16, .external_lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 4, .external_lex_state = 6},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0, .external_lex_state = 5},
  [163] = {.lex_state = 4, .external_lex_state = 10},
  [164] = {.lex_state = 0, .external_lex_state = 5},
  [165] = {.lex_state = 0, .external_lex_state = 5},
  [166] = {.lex_state = 4, .external_lex_state = 10},
  [167] = {.lex_state = 0, .external_lex_state = 5},
  [168] = {.lex_state = 0, .external_lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 5},
  [171] = {.lex_state = 0, .external_lex_state = 5},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0, .external_lex_state = 5},
  [174] = {.lex_state = 0, .external_lex_state = 5},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 0, .external_lex_state = 5},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 5},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 16},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 17, .external_lex_state = 6},
  [191] = {.lex_state = 0, .external_lex_state = 8},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 0, .external_lex_state = 8},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0, .external_lex_state = 7},
  [196] = {.lex_state = 0, .external_lex_state = 9},
  [197] = {.lex_state = 0, .external_lex_state = 5},
  [198] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__endOfLine = 0,
  ts_external_token__multilineFieldEnd = 1,
  ts_external_token__multilineFieldLine = 2,
  ts_external_token__sectionAscend = 3,
  ts_external_token__sectionDescend = 4,
  ts_external_token_escapedKey = 5,
  ts_external_token_escapeOperator = 6,
  ts_external_token_multilineFieldKey = 7,
  ts_external_token_multilineFieldOperator = 8,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__endOfLine] = sym__endOfLine,
  [ts_external_token__multilineFieldEnd] = sym__multilineFieldEnd,
  [ts_external_token__multilineFieldLine] = sym__multilineFieldLine,
  [ts_external_token__sectionAscend] = sym__sectionAscend,
  [ts_external_token__sectionDescend] = sym__sectionDescend,
  [ts_external_token_escapedKey] = sym_escapedKey,
  [ts_external_token_escapeOperator] = sym_escapeOperator,
  [ts_external_token_multilineFieldKey] = sym_multilineFieldKey,
  [ts_external_token_multilineFieldOperator] = sym_multilineFieldOperator,
};

static bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__endOfLine] = true,
    [ts_external_token_multilineFieldKey] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token__multilineFieldEnd] = true,
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token_escapedKey] = true,
    [ts_external_token__multilineFieldLine] = true,
    [ts_external_token_escapeOperator] = true,
    [ts_external_token__sectionAscend] = true,
  },
  [2] = {
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token_escapeOperator] = true,
  },
  [3] = {
    [ts_external_token_multilineFieldKey] = true,
  },
  [4] = {
    [ts_external_token_escapedKey] = true,
  },
  [5] = {
    [ts_external_token__endOfLine] = true,
  },
  [6] = {
    [ts_external_token_escapeOperator] = true,
  },
  [7] = {
    [ts_external_token__multilineFieldEnd] = true,
    [ts_external_token__multilineFieldLine] = true,
  },
  [8] = {
    [ts_external_token_multilineFieldOperator] = true,
  },
  [9] = {
    [ts_external_token__multilineFieldEnd] = true,
  },
  [10] = {
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionDescend] = true,
    [ts_external_token_escapeOperator] = true,
    [ts_external_token__sectionAscend] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__endOfLine] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym__emptyLine] = ACTIONS(1),
    [sym_spacedContinuationOperator] = ACTIONS(1),
    [sym_multilineFieldOperator] = ACTIONS(1),
    [sym_escapedKey] = ACTIONS(1),
    [sym__multilineFieldLine] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym_deepCopyOperator] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_directContinuationOperator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_multilineFieldKey] = ACTIONS(1),
    [sym__sectionDescend] = ACTIONS(1),
    [sym__multilineFieldEnd] = ACTIONS(1),
    [sym_itemOperator] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
    [sym_escapeOperator] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
  },
  [1] = {
    [sym_list] = STATE(9),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__escapedOrUnescapedKey] = STATE(7),
    [sym_empty] = STATE(9),
    [sym_multilineField] = STATE(9),
    [sym_document] = STATE(8),
    [sym_comment] = STATE(9),
    [sym_field] = STATE(9),
    [sym_fieldset] = STATE(9),
    [sym_section] = STATE(9),
    [aux_sym_document_repeat1] = STATE(9),
    [sym_element] = STATE(9),
    [sym_multilineFieldOperator] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_commentOperator] = ACTIONS(9),
    [sym__sectionDescend] = ACTIONS(11),
    [sym__emptyLine] = ACTIONS(13),
    [sym_escapeOperator] = ACTIONS(15),
  },
  [2] = {
    [sym_multilineFieldKey] = ACTIONS(17),
  },
  [3] = {
    [sym_token] = ACTIONS(19),
  },
  [4] = {
    [sym_sectionOperator] = ACTIONS(21),
  },
  [5] = {
    [sym_escapedKey] = ACTIONS(23),
  },
  [6] = {
    [aux_sym_comment_repeat1] = STATE(14),
    [sym_multilineFieldOperator] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__emptyLine] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(25),
    [sym_escapeOperator] = ACTIONS(25),
  },
  [7] = {
    [sym__endOfLine] = ACTIONS(29),
    [sym_elementOperator] = ACTIONS(31),
    [sym_copyOperator] = ACTIONS(33),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [9] = {
    [sym_list] = STATE(18),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__escapedOrUnescapedKey] = STATE(7),
    [sym_empty] = STATE(18),
    [sym_multilineField] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_field] = STATE(18),
    [sym_fieldset] = STATE(18),
    [sym_section] = STATE(18),
    [aux_sym_document_repeat1] = STATE(18),
    [sym_element] = STATE(18),
    [sym_multilineFieldOperator] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(9),
    [sym__sectionDescend] = ACTIONS(11),
    [sym__emptyLine] = ACTIONS(39),
    [sym_escapeOperator] = ACTIONS(15),
  },
  [10] = {
    [sym__endOfLine] = ACTIONS(41),
  },
  [11] = {
    [sym__endOfLine] = ACTIONS(43),
  },
  [12] = {
    [sym__escapedOrUnescapedSectionKey] = STATE(22),
    [sym_sectionKey] = ACTIONS(45),
    [sym_escapeOperator] = ACTIONS(47),
  },
  [13] = {
    [sym_escapeOperator] = ACTIONS(49),
  },
  [14] = {
    [aux_sym_comment_repeat1] = STATE(14),
    [sym_multilineFieldOperator] = ACTIONS(51),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__emptyLine] = ACTIONS(53),
    [sym__sectionDescend] = ACTIONS(51),
    [sym_escapeOperator] = ACTIONS(51),
  },
  [15] = {
    [sym_token] = ACTIONS(58),
  },
  [16] = {
    [sym_multilineFieldOperator] = ACTIONS(60),
    [sym_key] = ACTIONS(62),
    [sym_commentOperator] = ACTIONS(62),
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym__emptyLine] = ACTIONS(62),
    [sym__sectionDescend] = ACTIONS(60),
    [sym_escapeOperator] = ACTIONS(60),
  },
  [17] = {
    [sym__endOfLine] = ACTIONS(64),
    [sym_token] = ACTIONS(66),
  },
  [18] = {
    [sym_list] = STATE(18),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__escapedOrUnescapedKey] = STATE(7),
    [sym_empty] = STATE(18),
    [sym_multilineField] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_field] = STATE(18),
    [sym_fieldset] = STATE(18),
    [sym_section] = STATE(18),
    [aux_sym_document_repeat1] = STATE(18),
    [sym_element] = STATE(18),
    [sym_multilineFieldOperator] = ACTIONS(68),
    [sym_key] = ACTIONS(71),
    [sym_commentOperator] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym__emptyLine] = ACTIONS(79),
    [sym__sectionDescend] = ACTIONS(82),
    [sym_escapeOperator] = ACTIONS(85),
  },
  [19] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(29),
    [sym_multilineFieldValue] = STATE(30),
    [sym__multilineFieldEnd] = ACTIONS(88),
    [sym__multilineFieldLine] = ACTIONS(90),
  },
  [20] = {
    [sym_multilineFieldOperator] = ACTIONS(92),
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym__emptyLine] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(92),
    [sym_escapeOperator] = ACTIONS(92),
  },
  [21] = {
    [sym_escapedKey] = ACTIONS(96),
  },
  [22] = {
    [sym__endOfLine] = ACTIONS(98),
    [sym_deepCopyOperator] = ACTIONS(100),
    [sym_copyOperator] = ACTIONS(102),
  },
  [23] = {
    [sym_elementOperator] = ACTIONS(104),
    [sym__endOfLine] = ACTIONS(104),
    [sym_copyOperator] = ACTIONS(104),
  },
  [24] = {
    [sym__endOfLine] = ACTIONS(106),
  },
  [25] = {
    [aux_sym_comment_repeat1] = STATE(88),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_entry] = STATE(40),
    [aux_sym_entry_repeat2] = STATE(39),
    [sym_comment] = STATE(38),
    [aux_sym_fieldset_repeat1] = STATE(40),
    [sym_continuation] = STATE(39),
    [aux_sym_list_repeat1] = STATE(41),
    [sym_item] = STATE(41),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym__emptyLine] = ACTIONS(112),
    [sym__sectionDescend] = ACTIONS(110),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_itemOperator] = ACTIONS(115),
    [sym_multilineFieldOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(117),
    [sym_commentOperator] = ACTIONS(120),
    [sym_escapeOperator] = ACTIONS(123),
  },
  [26] = {
    [sym__endOfLine] = ACTIONS(126),
  },
  [27] = {
    [sym_multilineFieldOperator] = ACTIONS(128),
  },
  [28] = {
    [sym__endOfLine] = ACTIONS(130),
  },
  [29] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(45),
    [sym__multilineFieldEnd] = ACTIONS(132),
    [sym__multilineFieldLine] = ACTIONS(90),
  },
  [30] = {
    [sym__multilineFieldEnd] = ACTIONS(134),
  },
  [31] = {
    [sym_escapeOperator] = ACTIONS(136),
  },
  [32] = {
    [sym_list] = STATE(49),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(49),
    [sym_multilineField] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_field] = STATE(49),
    [sym_fieldset] = STATE(49),
    [sym_section] = STATE(49),
    [aux_sym_document_repeat1] = STATE(49),
    [sym_element] = STATE(49),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(146),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(148),
  },
  [33] = {
    [sym_token] = ACTIONS(150),
  },
  [34] = {
    [aux_sym_comment_repeat1] = STATE(132),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(51),
    [sym_entry] = STATE(52),
    [sym_comment] = STATE(51),
    [aux_sym_fieldset_repeat1] = STATE(52),
    [aux_sym_list_repeat1] = STATE(53),
    [sym_item] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym__emptyLine] = ACTIONS(154),
    [sym__sectionDescend] = ACTIONS(152),
    [sym_itemOperator] = ACTIONS(115),
    [sym_multilineFieldOperator] = ACTIONS(152),
    [sym_key] = ACTIONS(157),
    [sym_commentOperator] = ACTIONS(160),
    [sym_escapeOperator] = ACTIONS(163),
  },
  [35] = {
    [sym_token] = ACTIONS(166),
  },
  [36] = {
    [sym__endOfLine] = ACTIONS(168),
    [sym_token] = ACTIONS(170),
  },
  [37] = {
    [sym_entryOperator] = ACTIONS(172),
  },
  [38] = {
    [sym_comment] = STATE(58),
    [aux_sym_comment_repeat1] = STATE(88),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(58),
    [sym_entry] = STATE(59),
    [sym_continuation] = STATE(60),
    [sym_item] = STATE(61),
    [sym_directContinuationOperator] = ACTIONS(108),
    [sym_key] = ACTIONS(174),
    [sym_commentOperator] = ACTIONS(176),
    [sym__emptyLine] = ACTIONS(178),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_escapeOperator] = ACTIONS(180),
    [sym_itemOperator] = ACTIONS(115),
  },
  [39] = {
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(62),
    [sym_continuation] = STATE(63),
    [aux_sym_entry_repeat2] = STATE(63),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym__emptyLine] = ACTIONS(184),
    [sym__sectionDescend] = ACTIONS(182),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(182),
    [sym_key] = ACTIONS(187),
    [sym_commentOperator] = ACTIONS(189),
    [sym_escapeOperator] = ACTIONS(182),
  },
  [40] = {
    [sym_comment] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(142),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(64),
    [sym_entry] = STATE(65),
    [aux_sym_fieldset_repeat1] = STATE(65),
    [sym_multilineFieldOperator] = ACTIONS(192),
    [sym_key] = ACTIONS(194),
    [sym_commentOperator] = ACTIONS(197),
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym__emptyLine] = ACTIONS(200),
    [sym__sectionDescend] = ACTIONS(192),
    [sym_escapeOperator] = ACTIONS(203),
  },
  [41] = {
    [sym_comment] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(66),
    [aux_sym_list_repeat1] = STATE(67),
    [sym_item] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym__emptyLine] = ACTIONS(208),
    [sym__sectionDescend] = ACTIONS(206),
    [sym_itemOperator] = ACTIONS(115),
    [sym_multilineFieldOperator] = ACTIONS(206),
    [sym_key] = ACTIONS(211),
    [sym_commentOperator] = ACTIONS(213),
    [sym_escapeOperator] = ACTIONS(206),
  },
  [42] = {
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(62),
    [sym_continuation] = STATE(68),
    [aux_sym_entry_repeat2] = STATE(68),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym__emptyLine] = ACTIONS(218),
    [sym__sectionDescend] = ACTIONS(216),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(216),
    [sym_key] = ACTIONS(221),
    [sym_commentOperator] = ACTIONS(223),
    [sym_escapeOperator] = ACTIONS(216),
  },
  [43] = {
    [sym_multilineFieldKey] = ACTIONS(226),
  },
  [44] = {
    [sym__multilineFieldEnd] = ACTIONS(228),
    [sym__multilineFieldLine] = ACTIONS(228),
  },
  [45] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(45),
    [sym__multilineFieldEnd] = ACTIONS(228),
    [sym__multilineFieldLine] = ACTIONS(230),
  },
  [46] = {
    [sym_multilineFieldOperator] = ACTIONS(233),
  },
  [47] = {
    [sym_deepCopyOperator] = ACTIONS(235),
    [sym__endOfLine] = ACTIONS(235),
    [sym_copyOperator] = ACTIONS(237),
  },
  [48] = {
    [sym_multilineFieldOperator] = ACTIONS(239),
    [sym_key] = ACTIONS(241),
    [sym_commentOperator] = ACTIONS(241),
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym__emptyLine] = ACTIONS(241),
    [sym__sectionDescend] = ACTIONS(239),
    [sym_escapeOperator] = ACTIONS(239),
  },
  [49] = {
    [sym_list] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(91),
    [sym_multilineField] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_field] = STATE(91),
    [sym_fieldset] = STATE(91),
    [sym_section] = STATE(91),
    [aux_sym_document_repeat1] = STATE(91),
    [sym_element] = STATE(91),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(243),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(245),
  },
  [50] = {
    [sym__endOfLine] = ACTIONS(247),
  },
  [51] = {
    [sym_comment] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(132),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_entry] = STATE(59),
    [sym_item] = STATE(61),
    [sym_key] = ACTIONS(174),
    [sym_commentOperator] = ACTIONS(249),
    [sym__emptyLine] = ACTIONS(251),
    [sym_escapeOperator] = ACTIONS(180),
    [sym_itemOperator] = ACTIONS(115),
  },
  [52] = {
    [sym_comment] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(142),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(64),
    [sym_entry] = STATE(65),
    [aux_sym_fieldset_repeat1] = STATE(65),
    [sym_multilineFieldOperator] = ACTIONS(253),
    [sym_key] = ACTIONS(255),
    [sym_commentOperator] = ACTIONS(258),
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym__emptyLine] = ACTIONS(261),
    [sym__sectionDescend] = ACTIONS(253),
    [sym_escapeOperator] = ACTIONS(264),
  },
  [53] = {
    [sym_comment] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(66),
    [aux_sym_list_repeat1] = STATE(67),
    [sym_item] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym__emptyLine] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(267),
    [sym_itemOperator] = ACTIONS(115),
    [sym_multilineFieldOperator] = ACTIONS(267),
    [sym_key] = ACTIONS(272),
    [sym_commentOperator] = ACTIONS(274),
    [sym_escapeOperator] = ACTIONS(267),
  },
  [54] = {
    [sym__endOfLine] = ACTIONS(277),
  },
  [55] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(74),
    [aux_sym_entry_repeat2] = STATE(74),
    [sym_directContinuationOperator] = ACTIONS(279),
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym__emptyLine] = ACTIONS(283),
    [sym__sectionDescend] = ACTIONS(281),
    [sym_itemOperator] = ACTIONS(286),
    [sym_spacedContinuationOperator] = ACTIONS(279),
    [sym_multilineFieldOperator] = ACTIONS(281),
    [sym_key] = ACTIONS(286),
    [sym_commentOperator] = ACTIONS(288),
    [sym_escapeOperator] = ACTIONS(281),
  },
  [56] = {
    [sym__endOfLine] = ACTIONS(291),
  },
  [57] = {
    [sym__endOfLine] = ACTIONS(293),
    [sym_token] = ACTIONS(295),
  },
  [58] = {
    [sym_comment] = STATE(58),
    [aux_sym_comment_repeat1] = STATE(88),
    [aux_sym_entry_repeat1] = STATE(58),
    [sym_directContinuationOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(297),
    [sym_commentOperator] = ACTIONS(299),
    [sym__emptyLine] = ACTIONS(302),
    [sym_spacedContinuationOperator] = ACTIONS(297),
    [sym_itemOperator] = ACTIONS(297),
    [sym_escapeOperator] = ACTIONS(305),
  },
  [59] = {
    [sym_multilineFieldOperator] = ACTIONS(307),
    [sym_key] = ACTIONS(309),
    [sym_commentOperator] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym__emptyLine] = ACTIONS(309),
    [sym__sectionDescend] = ACTIONS(307),
    [sym_escapeOperator] = ACTIONS(307),
  },
  [60] = {
    [sym_directContinuationOperator] = ACTIONS(311),
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym__emptyLine] = ACTIONS(311),
    [sym_spacedContinuationOperator] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(313),
    [sym_multilineFieldOperator] = ACTIONS(313),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [sym_escapeOperator] = ACTIONS(313),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym__emptyLine] = ACTIONS(317),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_itemOperator] = ACTIONS(317),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(317),
    [sym_commentOperator] = ACTIONS(317),
    [sym_escapeOperator] = ACTIONS(315),
  },
  [62] = {
    [sym_comment] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(128),
    [sym_continuation] = STATE(60),
    [sym_directContinuationOperator] = ACTIONS(319),
    [sym_commentOperator] = ACTIONS(321),
    [sym__emptyLine] = ACTIONS(323),
    [sym_spacedContinuationOperator] = ACTIONS(319),
  },
  [63] = {
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(62),
    [sym_continuation] = STATE(63),
    [aux_sym_entry_repeat2] = STATE(63),
    [sym_directContinuationOperator] = ACTIONS(325),
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym__emptyLine] = ACTIONS(328),
    [sym_spacedContinuationOperator] = ACTIONS(325),
    [sym__sectionDescend] = ACTIONS(313),
    [sym_multilineFieldOperator] = ACTIONS(313),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(331),
    [sym_escapeOperator] = ACTIONS(313),
  },
  [64] = {
    [sym_comment] = STATE(135),
    [aux_sym_comment_repeat1] = STATE(142),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(135),
    [sym_entry] = STATE(59),
    [sym_key] = ACTIONS(174),
    [sym_commentOperator] = ACTIONS(334),
    [sym__emptyLine] = ACTIONS(336),
    [sym_escapeOperator] = ACTIONS(180),
  },
  [65] = {
    [sym_comment] = STATE(64),
    [aux_sym_comment_repeat1] = STATE(142),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(64),
    [sym_entry] = STATE(65),
    [aux_sym_fieldset_repeat1] = STATE(65),
    [sym_multilineFieldOperator] = ACTIONS(307),
    [sym_key] = ACTIONS(338),
    [sym_commentOperator] = ACTIONS(341),
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym__emptyLine] = ACTIONS(344),
    [sym__sectionDescend] = ACTIONS(307),
    [sym_escapeOperator] = ACTIONS(347),
  },
  [66] = {
    [sym_comment] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(128),
    [sym_item] = STATE(61),
    [sym__emptyLine] = ACTIONS(323),
    [sym_itemOperator] = ACTIONS(350),
    [sym_commentOperator] = ACTIONS(321),
  },
  [67] = {
    [sym_comment] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(66),
    [aux_sym_list_repeat1] = STATE(67),
    [sym_item] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym__emptyLine] = ACTIONS(352),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_itemOperator] = ACTIONS(355),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(317),
    [sym_commentOperator] = ACTIONS(358),
    [sym_escapeOperator] = ACTIONS(315),
  },
  [68] = {
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(62),
    [sym_continuation] = STATE(63),
    [aux_sym_entry_repeat2] = STATE(63),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym__emptyLine] = ACTIONS(363),
    [sym__sectionDescend] = ACTIONS(361),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(361),
    [sym_key] = ACTIONS(366),
    [sym_commentOperator] = ACTIONS(368),
    [sym_escapeOperator] = ACTIONS(361),
  },
  [69] = {
    [sym__endOfLine] = ACTIONS(371),
  },
  [70] = {
    [sym_multilineFieldKey] = ACTIONS(373),
  },
  [71] = {
    [sym_multilineFieldOperator] = ACTIONS(375),
    [sym_key] = ACTIONS(377),
    [sym_commentOperator] = ACTIONS(377),
    [ts_builtin_sym_end] = ACTIONS(375),
    [sym__emptyLine] = ACTIONS(377),
    [sym__sectionDescend] = ACTIONS(375),
    [sym_escapeOperator] = ACTIONS(375),
  },
  [72] = {
    [sym_list] = STATE(81),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(81),
    [sym_multilineField] = STATE(81),
    [sym_comment] = STATE(81),
    [sym_field] = STATE(81),
    [sym_fieldset] = STATE(81),
    [sym_section] = STATE(81),
    [aux_sym_document_repeat1] = STATE(81),
    [sym_element] = STATE(81),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(379),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(381),
  },
  [73] = {
    [sym_directContinuationOperator] = ACTIONS(383),
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym__emptyLine] = ACTIONS(383),
    [sym_spacedContinuationOperator] = ACTIONS(383),
    [sym__sectionDescend] = ACTIONS(385),
    [sym_multilineFieldOperator] = ACTIONS(385),
    [sym_key] = ACTIONS(383),
    [sym_commentOperator] = ACTIONS(383),
    [sym_escapeOperator] = ACTIONS(385),
  },
  [74] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(108),
    [sym_directContinuationOperator] = ACTIONS(279),
    [ts_builtin_sym_end] = ACTIONS(387),
    [sym__emptyLine] = ACTIONS(389),
    [sym__sectionDescend] = ACTIONS(387),
    [sym_itemOperator] = ACTIONS(392),
    [sym_spacedContinuationOperator] = ACTIONS(279),
    [sym_multilineFieldOperator] = ACTIONS(387),
    [sym_key] = ACTIONS(392),
    [sym_commentOperator] = ACTIONS(394),
    [sym_escapeOperator] = ACTIONS(387),
  },
  [75] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(82),
    [aux_sym_entry_repeat2] = STATE(82),
    [sym_directContinuationOperator] = ACTIONS(279),
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym__emptyLine] = ACTIONS(399),
    [sym__sectionDescend] = ACTIONS(397),
    [sym_itemOperator] = ACTIONS(402),
    [sym_spacedContinuationOperator] = ACTIONS(279),
    [sym_multilineFieldOperator] = ACTIONS(397),
    [sym_key] = ACTIONS(402),
    [sym_commentOperator] = ACTIONS(404),
    [sym_escapeOperator] = ACTIONS(397),
  },
  [76] = {
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(62),
    [sym_continuation] = STATE(83),
    [aux_sym_entry_repeat2] = STATE(83),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym__emptyLine] = ACTIONS(409),
    [sym__sectionDescend] = ACTIONS(407),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(407),
    [sym_key] = ACTIONS(412),
    [sym_commentOperator] = ACTIONS(414),
    [sym_escapeOperator] = ACTIONS(407),
  },
  [77] = {
    [sym__endOfLine] = ACTIONS(417),
  },
  [78] = {
    [sym_multilineFieldOperator] = ACTIONS(419),
    [sym_key] = ACTIONS(421),
    [sym_commentOperator] = ACTIONS(421),
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym__emptyLine] = ACTIONS(421),
    [sym__sectionDescend] = ACTIONS(419),
    [sym_escapeOperator] = ACTIONS(419),
  },
  [79] = {
    [sym__endOfLine] = ACTIONS(423),
  },
  [80] = {
    [sym_multilineFieldOperator] = ACTIONS(425),
    [sym_key] = ACTIONS(427),
    [sym_commentOperator] = ACTIONS(427),
    [ts_builtin_sym_end] = ACTIONS(425),
    [sym__emptyLine] = ACTIONS(427),
    [sym__sectionDescend] = ACTIONS(425),
    [sym_escapeOperator] = ACTIONS(425),
  },
  [81] = {
    [sym_list] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(91),
    [sym_multilineField] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_field] = STATE(91),
    [sym_fieldset] = STATE(91),
    [sym_section] = STATE(91),
    [aux_sym_document_repeat1] = STATE(91),
    [sym_element] = STATE(91),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(243),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(429),
  },
  [82] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(108),
    [sym_directContinuationOperator] = ACTIONS(279),
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym__emptyLine] = ACTIONS(433),
    [sym__sectionDescend] = ACTIONS(431),
    [sym_itemOperator] = ACTIONS(436),
    [sym_spacedContinuationOperator] = ACTIONS(279),
    [sym_multilineFieldOperator] = ACTIONS(431),
    [sym_key] = ACTIONS(436),
    [sym_commentOperator] = ACTIONS(438),
    [sym_escapeOperator] = ACTIONS(431),
  },
  [83] = {
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(62),
    [sym_continuation] = STATE(63),
    [aux_sym_entry_repeat2] = STATE(63),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym__emptyLine] = ACTIONS(443),
    [sym__sectionDescend] = ACTIONS(441),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(441),
    [sym_key] = ACTIONS(446),
    [sym_commentOperator] = ACTIONS(448),
    [sym_escapeOperator] = ACTIONS(441),
  },
  [84] = {
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(62),
    [sym_continuation] = STATE(87),
    [aux_sym_entry_repeat2] = STATE(87),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym__emptyLine] = ACTIONS(453),
    [sym__sectionDescend] = ACTIONS(451),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(451),
    [sym_key] = ACTIONS(456),
    [sym_commentOperator] = ACTIONS(458),
    [sym_escapeOperator] = ACTIONS(451),
  },
  [85] = {
    [sym_multilineFieldOperator] = ACTIONS(461),
    [sym_key] = ACTIONS(463),
    [sym_commentOperator] = ACTIONS(463),
    [ts_builtin_sym_end] = ACTIONS(461),
    [sym__emptyLine] = ACTIONS(463),
    [sym__sectionDescend] = ACTIONS(461),
    [sym_escapeOperator] = ACTIONS(461),
  },
  [86] = {
    [sym_multilineFieldOperator] = ACTIONS(465),
    [sym_key] = ACTIONS(467),
    [sym_commentOperator] = ACTIONS(467),
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym__emptyLine] = ACTIONS(467),
    [sym__sectionDescend] = ACTIONS(465),
    [sym_escapeOperator] = ACTIONS(465),
  },
  [87] = {
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(62),
    [sym_continuation] = STATE(63),
    [aux_sym_entry_repeat2] = STATE(63),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(469),
    [sym__emptyLine] = ACTIONS(471),
    [sym__sectionDescend] = ACTIONS(469),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(469),
    [sym_key] = ACTIONS(474),
    [sym_commentOperator] = ACTIONS(476),
    [sym_escapeOperator] = ACTIONS(469),
  },
  [88] = {
    [aux_sym_comment_repeat1] = STATE(89),
    [sym_directContinuationOperator] = ACTIONS(27),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(176),
    [sym__emptyLine] = ACTIONS(27),
    [sym_spacedContinuationOperator] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(27),
    [sym_escapeOperator] = ACTIONS(25),
  },
  [89] = {
    [aux_sym_comment_repeat1] = STATE(89),
    [sym_directContinuationOperator] = ACTIONS(53),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(479),
    [sym__emptyLine] = ACTIONS(53),
    [sym_spacedContinuationOperator] = ACTIONS(53),
    [sym_itemOperator] = ACTIONS(53),
    [sym_escapeOperator] = ACTIONS(51),
  },
  [90] = {
    [sym_multilineFieldOperator] = ACTIONS(60),
    [sym_key] = ACTIONS(62),
    [sym_commentOperator] = ACTIONS(62),
    [sym__emptyLine] = ACTIONS(62),
    [sym__sectionDescend] = ACTIONS(60),
    [sym_escapeOperator] = ACTIONS(60),
    [sym__sectionAscend] = ACTIONS(60),
  },
  [91] = {
    [sym_list] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(91),
    [sym_multilineField] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_field] = STATE(91),
    [sym_fieldset] = STATE(91),
    [sym_section] = STATE(91),
    [aux_sym_document_repeat1] = STATE(91),
    [sym_element] = STATE(91),
    [sym_multilineFieldOperator] = ACTIONS(482),
    [sym_key] = ACTIONS(485),
    [sym_commentOperator] = ACTIONS(488),
    [sym__emptyLine] = ACTIONS(491),
    [sym__sectionDescend] = ACTIONS(494),
    [sym_escapeOperator] = ACTIONS(85),
    [sym__sectionAscend] = ACTIONS(77),
  },
  [92] = {
    [sym_directContinuationOperator] = ACTIONS(94),
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym_spacedContinuationOperator] = ACTIONS(94),
    [sym_itemOperator] = ACTIONS(94),
    [sym_escapeOperator] = ACTIONS(92),
  },
  [93] = {
    [sym_entryOperator] = ACTIONS(104),
  },
  [94] = {
    [aux_sym_comment_repeat1] = STATE(88),
    [sym__escapedOrUnescapedKey] = STATE(180),
    [aux_sym_entry_repeat1] = STATE(153),
    [sym_entry] = STATE(97),
    [aux_sym_entry_repeat2] = STATE(96),
    [sym_comment] = STATE(153),
    [aux_sym_fieldset_repeat1] = STATE(97),
    [sym_continuation] = STATE(96),
    [aux_sym_list_repeat1] = STATE(98),
    [sym_item] = STATE(98),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym__emptyLine] = ACTIONS(499),
    [sym__sectionDescend] = ACTIONS(110),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_itemOperator] = ACTIONS(502),
    [sym_multilineFieldOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(504),
    [sym_commentOperator] = ACTIONS(120),
    [sym_escapeOperator] = ACTIONS(123),
    [sym__sectionAscend] = ACTIONS(110),
  },
  [95] = {
    [aux_sym_comment_repeat1] = STATE(132),
    [sym__escapedOrUnescapedKey] = STATE(180),
    [aux_sym_entry_repeat1] = STATE(155),
    [sym_entry] = STATE(101),
    [sym_comment] = STATE(155),
    [aux_sym_fieldset_repeat1] = STATE(101),
    [aux_sym_list_repeat1] = STATE(102),
    [sym_item] = STATE(102),
    [sym__emptyLine] = ACTIONS(507),
    [sym__sectionDescend] = ACTIONS(152),
    [sym_itemOperator] = ACTIONS(502),
    [sym_multilineFieldOperator] = ACTIONS(152),
    [sym_key] = ACTIONS(510),
    [sym_commentOperator] = ACTIONS(160),
    [sym_escapeOperator] = ACTIONS(163),
    [sym__sectionAscend] = ACTIONS(152),
  },
  [96] = {
    [sym_comment] = STATE(169),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(169),
    [sym_continuation] = STATE(130),
    [aux_sym_entry_repeat2] = STATE(130),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym__emptyLine] = ACTIONS(513),
    [sym__sectionDescend] = ACTIONS(182),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(182),
    [sym_key] = ACTIONS(187),
    [sym_commentOperator] = ACTIONS(189),
    [sym_escapeOperator] = ACTIONS(182),
    [sym__sectionAscend] = ACTIONS(182),
  },
  [97] = {
    [sym_comment] = STATE(160),
    [aux_sym_comment_repeat1] = STATE(142),
    [sym__escapedOrUnescapedKey] = STATE(180),
    [aux_sym_entry_repeat1] = STATE(160),
    [sym_entry] = STATE(109),
    [aux_sym_fieldset_repeat1] = STATE(109),
    [sym_multilineFieldOperator] = ACTIONS(192),
    [sym_key] = ACTIONS(516),
    [sym_commentOperator] = ACTIONS(197),
    [sym__emptyLine] = ACTIONS(519),
    [sym__sectionDescend] = ACTIONS(192),
    [sym_escapeOperator] = ACTIONS(203),
    [sym__sectionAscend] = ACTIONS(192),
  },
  [98] = {
    [sym_comment] = STATE(161),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(161),
    [aux_sym_list_repeat1] = STATE(110),
    [sym_item] = STATE(110),
    [sym__emptyLine] = ACTIONS(522),
    [sym__sectionDescend] = ACTIONS(206),
    [sym_itemOperator] = ACTIONS(502),
    [sym_multilineFieldOperator] = ACTIONS(206),
    [sym_key] = ACTIONS(211),
    [sym_commentOperator] = ACTIONS(213),
    [sym_escapeOperator] = ACTIONS(206),
    [sym__sectionAscend] = ACTIONS(206),
  },
  [99] = {
    [sym_comment] = STATE(169),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(169),
    [sym_continuation] = STATE(111),
    [aux_sym_entry_repeat2] = STATE(111),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym__emptyLine] = ACTIONS(525),
    [sym__sectionDescend] = ACTIONS(216),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(216),
    [sym_key] = ACTIONS(221),
    [sym_commentOperator] = ACTIONS(223),
    [sym_escapeOperator] = ACTIONS(216),
    [sym__sectionAscend] = ACTIONS(216),
  },
  [100] = {
    [sym_multilineFieldOperator] = ACTIONS(239),
    [sym_key] = ACTIONS(241),
    [sym_commentOperator] = ACTIONS(241),
    [sym__emptyLine] = ACTIONS(241),
    [sym__sectionDescend] = ACTIONS(239),
    [sym_escapeOperator] = ACTIONS(239),
    [sym__sectionAscend] = ACTIONS(239),
  },
  [101] = {
    [sym_comment] = STATE(160),
    [aux_sym_comment_repeat1] = STATE(142),
    [sym__escapedOrUnescapedKey] = STATE(180),
    [aux_sym_entry_repeat1] = STATE(160),
    [sym_entry] = STATE(109),
    [aux_sym_fieldset_repeat1] = STATE(109),
    [sym_multilineFieldOperator] = ACTIONS(253),
    [sym_key] = ACTIONS(528),
    [sym_commentOperator] = ACTIONS(258),
    [sym__emptyLine] = ACTIONS(531),
    [sym__sectionDescend] = ACTIONS(253),
    [sym_escapeOperator] = ACTIONS(264),
    [sym__sectionAscend] = ACTIONS(253),
  },
  [102] = {
    [sym_comment] = STATE(161),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(161),
    [aux_sym_list_repeat1] = STATE(110),
    [sym_item] = STATE(110),
    [sym__emptyLine] = ACTIONS(534),
    [sym__sectionDescend] = ACTIONS(267),
    [sym_itemOperator] = ACTIONS(502),
    [sym_multilineFieldOperator] = ACTIONS(267),
    [sym_key] = ACTIONS(272),
    [sym_commentOperator] = ACTIONS(274),
    [sym_escapeOperator] = ACTIONS(267),
    [sym__sectionAscend] = ACTIONS(267),
  },
  [103] = {
    [sym_comment] = STATE(172),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(172),
    [sym_continuation] = STATE(114),
    [aux_sym_entry_repeat2] = STATE(114),
    [sym_directContinuationOperator] = ACTIONS(537),
    [sym__emptyLine] = ACTIONS(539),
    [sym__sectionDescend] = ACTIONS(281),
    [sym_itemOperator] = ACTIONS(286),
    [sym_spacedContinuationOperator] = ACTIONS(537),
    [sym_multilineFieldOperator] = ACTIONS(281),
    [sym_key] = ACTIONS(286),
    [sym_commentOperator] = ACTIONS(288),
    [sym_escapeOperator] = ACTIONS(281),
    [sym__sectionAscend] = ACTIONS(281),
  },
  [104] = {
    [sym_comment] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(132),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_key] = ACTIONS(297),
    [sym_commentOperator] = ACTIONS(542),
    [sym__emptyLine] = ACTIONS(545),
    [sym_itemOperator] = ACTIONS(297),
    [sym_escapeOperator] = ACTIONS(305),
  },
  [105] = {
    [sym_multilineFieldOperator] = ACTIONS(307),
    [sym_key] = ACTIONS(309),
    [sym_commentOperator] = ACTIONS(309),
    [sym__emptyLine] = ACTIONS(309),
    [sym__sectionDescend] = ACTIONS(307),
    [sym_escapeOperator] = ACTIONS(307),
    [sym__sectionAscend] = ACTIONS(307),
  },
  [106] = {
    [sym_directContinuationOperator] = ACTIONS(311),
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym__emptyLine] = ACTIONS(311),
    [sym_spacedContinuationOperator] = ACTIONS(311),
    [sym_itemOperator] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(313),
    [sym_multilineFieldOperator] = ACTIONS(313),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [sym_escapeOperator] = ACTIONS(313),
  },
  [107] = {
    [sym__emptyLine] = ACTIONS(317),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_itemOperator] = ACTIONS(317),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(317),
    [sym_commentOperator] = ACTIONS(317),
    [sym_escapeOperator] = ACTIONS(315),
    [sym__sectionAscend] = ACTIONS(315),
  },
  [108] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(108),
    [aux_sym_entry_repeat2] = STATE(108),
    [sym_directContinuationOperator] = ACTIONS(548),
    [ts_builtin_sym_end] = ACTIONS(313),
    [sym__emptyLine] = ACTIONS(551),
    [sym_spacedContinuationOperator] = ACTIONS(548),
    [sym_itemOperator] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(313),
    [sym_multilineFieldOperator] = ACTIONS(313),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(331),
    [sym_escapeOperator] = ACTIONS(313),
  },
  [109] = {
    [sym_comment] = STATE(160),
    [aux_sym_comment_repeat1] = STATE(142),
    [sym__escapedOrUnescapedKey] = STATE(180),
    [aux_sym_entry_repeat1] = STATE(160),
    [sym_entry] = STATE(109),
    [aux_sym_fieldset_repeat1] = STATE(109),
    [sym_multilineFieldOperator] = ACTIONS(307),
    [sym_key] = ACTIONS(554),
    [sym_commentOperator] = ACTIONS(341),
    [sym__emptyLine] = ACTIONS(557),
    [sym__sectionDescend] = ACTIONS(307),
    [sym_escapeOperator] = ACTIONS(347),
    [sym__sectionAscend] = ACTIONS(307),
  },
  [110] = {
    [sym_comment] = STATE(161),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(161),
    [aux_sym_list_repeat1] = STATE(110),
    [sym_item] = STATE(110),
    [sym__emptyLine] = ACTIONS(560),
    [sym__sectionDescend] = ACTIONS(315),
    [sym_itemOperator] = ACTIONS(563),
    [sym_multilineFieldOperator] = ACTIONS(315),
    [sym_key] = ACTIONS(317),
    [sym_commentOperator] = ACTIONS(358),
    [sym_escapeOperator] = ACTIONS(315),
    [sym__sectionAscend] = ACTIONS(315),
  },
  [111] = {
    [sym_comment] = STATE(169),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(169),
    [sym_continuation] = STATE(130),
    [aux_sym_entry_repeat2] = STATE(130),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym__emptyLine] = ACTIONS(566),
    [sym__sectionDescend] = ACTIONS(361),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(361),
    [sym_key] = ACTIONS(366),
    [sym_commentOperator] = ACTIONS(368),
    [sym_escapeOperator] = ACTIONS(361),
    [sym__sectionAscend] = ACTIONS(361),
  },
  [112] = {
    [sym_multilineFieldOperator] = ACTIONS(375),
    [sym_key] = ACTIONS(377),
    [sym_commentOperator] = ACTIONS(377),
    [sym__emptyLine] = ACTIONS(377),
    [sym__sectionDescend] = ACTIONS(375),
    [sym_escapeOperator] = ACTIONS(375),
    [sym__sectionAscend] = ACTIONS(375),
  },
  [113] = {
    [sym_directContinuationOperator] = ACTIONS(383),
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym__emptyLine] = ACTIONS(383),
    [sym_spacedContinuationOperator] = ACTIONS(383),
    [sym_itemOperator] = ACTIONS(383),
    [sym__sectionDescend] = ACTIONS(385),
    [sym_multilineFieldOperator] = ACTIONS(385),
    [sym_key] = ACTIONS(383),
    [sym_commentOperator] = ACTIONS(383),
    [sym_escapeOperator] = ACTIONS(385),
  },
  [114] = {
    [sym_comment] = STATE(172),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(172),
    [sym_continuation] = STATE(137),
    [aux_sym_entry_repeat2] = STATE(137),
    [sym_directContinuationOperator] = ACTIONS(537),
    [sym__emptyLine] = ACTIONS(569),
    [sym__sectionDescend] = ACTIONS(387),
    [sym_itemOperator] = ACTIONS(392),
    [sym_spacedContinuationOperator] = ACTIONS(537),
    [sym_multilineFieldOperator] = ACTIONS(387),
    [sym_key] = ACTIONS(392),
    [sym_commentOperator] = ACTIONS(394),
    [sym_escapeOperator] = ACTIONS(387),
    [sym__sectionAscend] = ACTIONS(387),
  },
  [115] = {
    [sym_comment] = STATE(172),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(172),
    [sym_continuation] = STATE(119),
    [aux_sym_entry_repeat2] = STATE(119),
    [sym_directContinuationOperator] = ACTIONS(537),
    [sym__emptyLine] = ACTIONS(572),
    [sym__sectionDescend] = ACTIONS(397),
    [sym_itemOperator] = ACTIONS(402),
    [sym_spacedContinuationOperator] = ACTIONS(537),
    [sym_multilineFieldOperator] = ACTIONS(397),
    [sym_key] = ACTIONS(402),
    [sym_commentOperator] = ACTIONS(404),
    [sym_escapeOperator] = ACTIONS(397),
    [sym__sectionAscend] = ACTIONS(397),
  },
  [116] = {
    [sym_comment] = STATE(169),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(169),
    [sym_continuation] = STATE(120),
    [aux_sym_entry_repeat2] = STATE(120),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym__emptyLine] = ACTIONS(575),
    [sym__sectionDescend] = ACTIONS(407),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(407),
    [sym_key] = ACTIONS(412),
    [sym_commentOperator] = ACTIONS(414),
    [sym_escapeOperator] = ACTIONS(407),
    [sym__sectionAscend] = ACTIONS(407),
  },
  [117] = {
    [sym_multilineFieldOperator] = ACTIONS(419),
    [sym_key] = ACTIONS(421),
    [sym_commentOperator] = ACTIONS(421),
    [sym__emptyLine] = ACTIONS(421),
    [sym__sectionDescend] = ACTIONS(419),
    [sym_escapeOperator] = ACTIONS(419),
    [sym__sectionAscend] = ACTIONS(419),
  },
  [118] = {
    [sym_multilineFieldOperator] = ACTIONS(425),
    [sym_key] = ACTIONS(427),
    [sym_commentOperator] = ACTIONS(427),
    [sym__emptyLine] = ACTIONS(427),
    [sym__sectionDescend] = ACTIONS(425),
    [sym_escapeOperator] = ACTIONS(425),
    [sym__sectionAscend] = ACTIONS(425),
  },
  [119] = {
    [sym_comment] = STATE(172),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(172),
    [sym_continuation] = STATE(137),
    [aux_sym_entry_repeat2] = STATE(137),
    [sym_directContinuationOperator] = ACTIONS(537),
    [sym__emptyLine] = ACTIONS(578),
    [sym__sectionDescend] = ACTIONS(431),
    [sym_itemOperator] = ACTIONS(436),
    [sym_spacedContinuationOperator] = ACTIONS(537),
    [sym_multilineFieldOperator] = ACTIONS(431),
    [sym_key] = ACTIONS(436),
    [sym_commentOperator] = ACTIONS(438),
    [sym_escapeOperator] = ACTIONS(431),
    [sym__sectionAscend] = ACTIONS(431),
  },
  [120] = {
    [sym_comment] = STATE(169),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(169),
    [sym_continuation] = STATE(130),
    [aux_sym_entry_repeat2] = STATE(130),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym__emptyLine] = ACTIONS(581),
    [sym__sectionDescend] = ACTIONS(441),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(441),
    [sym_key] = ACTIONS(446),
    [sym_commentOperator] = ACTIONS(448),
    [sym_escapeOperator] = ACTIONS(441),
    [sym__sectionAscend] = ACTIONS(441),
  },
  [121] = {
    [sym_comment] = STATE(169),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(169),
    [sym_continuation] = STATE(124),
    [aux_sym_entry_repeat2] = STATE(124),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym__emptyLine] = ACTIONS(584),
    [sym__sectionDescend] = ACTIONS(451),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(451),
    [sym_key] = ACTIONS(456),
    [sym_commentOperator] = ACTIONS(458),
    [sym_escapeOperator] = ACTIONS(451),
    [sym__sectionAscend] = ACTIONS(451),
  },
  [122] = {
    [sym_multilineFieldOperator] = ACTIONS(461),
    [sym_key] = ACTIONS(463),
    [sym_commentOperator] = ACTIONS(463),
    [sym__emptyLine] = ACTIONS(463),
    [sym__sectionDescend] = ACTIONS(461),
    [sym_escapeOperator] = ACTIONS(461),
    [sym__sectionAscend] = ACTIONS(461),
  },
  [123] = {
    [sym_multilineFieldOperator] = ACTIONS(465),
    [sym_key] = ACTIONS(467),
    [sym_commentOperator] = ACTIONS(467),
    [sym__emptyLine] = ACTIONS(467),
    [sym__sectionDescend] = ACTIONS(465),
    [sym_escapeOperator] = ACTIONS(465),
    [sym__sectionAscend] = ACTIONS(465),
  },
  [124] = {
    [sym_comment] = STATE(169),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(169),
    [sym_continuation] = STATE(130),
    [aux_sym_entry_repeat2] = STATE(130),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym__emptyLine] = ACTIONS(587),
    [sym__sectionDescend] = ACTIONS(469),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(469),
    [sym_key] = ACTIONS(474),
    [sym_commentOperator] = ACTIONS(476),
    [sym_escapeOperator] = ACTIONS(469),
    [sym__sectionAscend] = ACTIONS(469),
  },
  [125] = {
    [aux_sym_comment_repeat1] = STATE(126),
    [sym_multilineFieldOperator] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(142),
    [sym__emptyLine] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(25),
    [sym_escapeOperator] = ACTIONS(25),
    [sym__sectionAscend] = ACTIONS(25),
  },
  [126] = {
    [aux_sym_comment_repeat1] = STATE(126),
    [sym_multilineFieldOperator] = ACTIONS(51),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(590),
    [sym__emptyLine] = ACTIONS(53),
    [sym__sectionDescend] = ACTIONS(51),
    [sym_escapeOperator] = ACTIONS(51),
    [sym__sectionAscend] = ACTIONS(51),
  },
  [127] = {
    [sym_multilineFieldOperator] = ACTIONS(92),
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(92),
    [sym_escapeOperator] = ACTIONS(92),
    [sym__sectionAscend] = ACTIONS(92),
  },
  [128] = {
    [sym_comment] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(128),
    [sym_directContinuationOperator] = ACTIONS(305),
    [sym_commentOperator] = ACTIONS(593),
    [sym__emptyLine] = ACTIONS(596),
    [sym_spacedContinuationOperator] = ACTIONS(305),
    [sym_itemOperator] = ACTIONS(305),
  },
  [129] = {
    [sym_directContinuationOperator] = ACTIONS(311),
    [sym__emptyLine] = ACTIONS(311),
    [sym_spacedContinuationOperator] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(313),
    [sym_multilineFieldOperator] = ACTIONS(313),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [sym_escapeOperator] = ACTIONS(313),
    [sym__sectionAscend] = ACTIONS(313),
  },
  [130] = {
    [sym_comment] = STATE(169),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(169),
    [sym_continuation] = STATE(130),
    [aux_sym_entry_repeat2] = STATE(130),
    [sym_directContinuationOperator] = ACTIONS(599),
    [sym__emptyLine] = ACTIONS(602),
    [sym_spacedContinuationOperator] = ACTIONS(599),
    [sym__sectionDescend] = ACTIONS(313),
    [sym_multilineFieldOperator] = ACTIONS(313),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(331),
    [sym_escapeOperator] = ACTIONS(313),
    [sym__sectionAscend] = ACTIONS(313),
  },
  [131] = {
    [sym_directContinuationOperator] = ACTIONS(383),
    [sym__emptyLine] = ACTIONS(383),
    [sym_spacedContinuationOperator] = ACTIONS(383),
    [sym__sectionDescend] = ACTIONS(385),
    [sym_multilineFieldOperator] = ACTIONS(385),
    [sym_key] = ACTIONS(383),
    [sym_commentOperator] = ACTIONS(383),
    [sym_escapeOperator] = ACTIONS(385),
    [sym__sectionAscend] = ACTIONS(385),
  },
  [132] = {
    [aux_sym_comment_repeat1] = STATE(133),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(249),
    [sym__emptyLine] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(27),
    [sym_escapeOperator] = ACTIONS(25),
  },
  [133] = {
    [aux_sym_comment_repeat1] = STATE(133),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(605),
    [sym__emptyLine] = ACTIONS(53),
    [sym_itemOperator] = ACTIONS(53),
    [sym_escapeOperator] = ACTIONS(51),
  },
  [134] = {
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym_itemOperator] = ACTIONS(94),
    [sym_escapeOperator] = ACTIONS(92),
  },
  [135] = {
    [sym_comment] = STATE(135),
    [aux_sym_comment_repeat1] = STATE(142),
    [aux_sym_entry_repeat1] = STATE(135),
    [sym_key] = ACTIONS(297),
    [sym_commentOperator] = ACTIONS(608),
    [sym__emptyLine] = ACTIONS(611),
    [sym_escapeOperator] = ACTIONS(305),
  },
  [136] = {
    [sym_directContinuationOperator] = ACTIONS(311),
    [sym__emptyLine] = ACTIONS(311),
    [sym_spacedContinuationOperator] = ACTIONS(311),
    [sym_itemOperator] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(313),
    [sym_multilineFieldOperator] = ACTIONS(313),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [sym_escapeOperator] = ACTIONS(313),
    [sym__sectionAscend] = ACTIONS(313),
  },
  [137] = {
    [sym_comment] = STATE(172),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(172),
    [sym_continuation] = STATE(137),
    [aux_sym_entry_repeat2] = STATE(137),
    [sym_directContinuationOperator] = ACTIONS(614),
    [sym__emptyLine] = ACTIONS(617),
    [sym_spacedContinuationOperator] = ACTIONS(614),
    [sym_itemOperator] = ACTIONS(311),
    [sym__sectionDescend] = ACTIONS(313),
    [sym_multilineFieldOperator] = ACTIONS(313),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(331),
    [sym_escapeOperator] = ACTIONS(313),
    [sym__sectionAscend] = ACTIONS(313),
  },
  [138] = {
    [sym_directContinuationOperator] = ACTIONS(383),
    [sym__emptyLine] = ACTIONS(383),
    [sym_spacedContinuationOperator] = ACTIONS(383),
    [sym_itemOperator] = ACTIONS(383),
    [sym__sectionDescend] = ACTIONS(385),
    [sym_multilineFieldOperator] = ACTIONS(385),
    [sym_key] = ACTIONS(383),
    [sym_commentOperator] = ACTIONS(383),
    [sym_escapeOperator] = ACTIONS(385),
    [sym__sectionAscend] = ACTIONS(385),
  },
  [139] = {
    [aux_sym_comment_repeat1] = STATE(140),
    [sym_directContinuationOperator] = ACTIONS(25),
    [sym_commentOperator] = ACTIONS(321),
    [sym__emptyLine] = ACTIONS(25),
    [sym_spacedContinuationOperator] = ACTIONS(25),
    [sym_itemOperator] = ACTIONS(25),
  },
  [140] = {
    [aux_sym_comment_repeat1] = STATE(140),
    [sym_directContinuationOperator] = ACTIONS(51),
    [sym_commentOperator] = ACTIONS(620),
    [sym__emptyLine] = ACTIONS(51),
    [sym_spacedContinuationOperator] = ACTIONS(51),
    [sym_itemOperator] = ACTIONS(51),
  },
  [141] = {
    [sym_directContinuationOperator] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(92),
    [sym__emptyLine] = ACTIONS(92),
    [sym_spacedContinuationOperator] = ACTIONS(92),
    [sym_itemOperator] = ACTIONS(92),
  },
  [142] = {
    [aux_sym_comment_repeat1] = STATE(143),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(334),
    [sym__emptyLine] = ACTIONS(27),
    [sym_escapeOperator] = ACTIONS(25),
  },
  [143] = {
    [aux_sym_comment_repeat1] = STATE(143),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(623),
    [sym__emptyLine] = ACTIONS(53),
    [sym_escapeOperator] = ACTIONS(51),
  },
  [144] = {
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym_escapeOperator] = ACTIONS(92),
  },
  [145] = {
    [sym__endOfLine] = ACTIONS(626),
    [sym_elementOperator] = ACTIONS(628),
    [sym_copyOperator] = ACTIONS(630),
  },
  [146] = {
    [sym__endOfLine] = ACTIONS(632),
  },
  [147] = {
    [sym_escapeOperator] = ACTIONS(634),
  },
  [148] = {
    [sym__endOfLine] = ACTIONS(636),
    [sym_token] = ACTIONS(638),
  },
  [149] = {
    [sym__endOfLine] = ACTIONS(640),
  },
  [150] = {
    [sym__endOfLine] = ACTIONS(642),
  },
  [151] = {
    [sym_list] = STATE(154),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(154),
    [sym_multilineField] = STATE(154),
    [sym_comment] = STATE(154),
    [sym_field] = STATE(154),
    [sym_fieldset] = STATE(154),
    [sym_section] = STATE(154),
    [aux_sym_document_repeat1] = STATE(154),
    [sym_element] = STATE(154),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(644),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(646),
  },
  [152] = {
    [sym__endOfLine] = ACTIONS(648),
    [sym_token] = ACTIONS(650),
  },
  [153] = {
    [sym_comment] = STATE(58),
    [aux_sym_comment_repeat1] = STATE(88),
    [sym__escapedOrUnescapedKey] = STATE(180),
    [aux_sym_entry_repeat1] = STATE(58),
    [sym_entry] = STATE(105),
    [sym_continuation] = STATE(129),
    [sym_item] = STATE(107),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym_key] = ACTIONS(652),
    [sym_commentOperator] = ACTIONS(176),
    [sym__emptyLine] = ACTIONS(178),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_escapeOperator] = ACTIONS(180),
    [sym_itemOperator] = ACTIONS(502),
  },
  [154] = {
    [sym_list] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(91),
    [sym_multilineField] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_field] = STATE(91),
    [sym_fieldset] = STATE(91),
    [sym_section] = STATE(91),
    [aux_sym_document_repeat1] = STATE(91),
    [sym_element] = STATE(91),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(243),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(654),
  },
  [155] = {
    [sym_comment] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(132),
    [sym__escapedOrUnescapedKey] = STATE(180),
    [aux_sym_entry_repeat1] = STATE(104),
    [sym_entry] = STATE(105),
    [sym_item] = STATE(107),
    [sym_key] = ACTIONS(652),
    [sym_commentOperator] = ACTIONS(249),
    [sym__emptyLine] = ACTIONS(251),
    [sym_escapeOperator] = ACTIONS(180),
    [sym_itemOperator] = ACTIONS(502),
  },
  [156] = {
    [sym__endOfLine] = ACTIONS(656),
  },
  [157] = {
    [sym__endOfLine] = ACTIONS(658),
  },
  [158] = {
    [sym__endOfLine] = ACTIONS(660),
    [sym_token] = ACTIONS(662),
  },
  [159] = {
    [sym_comment] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(128),
    [sym_continuation] = STATE(106),
    [sym_directContinuationOperator] = ACTIONS(664),
    [sym_commentOperator] = ACTIONS(321),
    [sym__emptyLine] = ACTIONS(323),
    [sym_spacedContinuationOperator] = ACTIONS(664),
  },
  [160] = {
    [sym_comment] = STATE(135),
    [aux_sym_comment_repeat1] = STATE(142),
    [sym__escapedOrUnescapedKey] = STATE(180),
    [aux_sym_entry_repeat1] = STATE(135),
    [sym_entry] = STATE(105),
    [sym_key] = ACTIONS(652),
    [sym_commentOperator] = ACTIONS(334),
    [sym__emptyLine] = ACTIONS(336),
    [sym_escapeOperator] = ACTIONS(180),
  },
  [161] = {
    [sym_comment] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(128),
    [sym_item] = STATE(107),
    [sym__emptyLine] = ACTIONS(323),
    [sym_itemOperator] = ACTIONS(666),
    [sym_commentOperator] = ACTIONS(321),
  },
  [162] = {
    [sym__endOfLine] = ACTIONS(668),
  },
  [163] = {
    [sym_list] = STATE(166),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(166),
    [sym_multilineField] = STATE(166),
    [sym_comment] = STATE(166),
    [sym_field] = STATE(166),
    [sym_fieldset] = STATE(166),
    [sym_section] = STATE(166),
    [aux_sym_document_repeat1] = STATE(166),
    [sym_element] = STATE(166),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(670),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(672),
  },
  [164] = {
    [sym__endOfLine] = ACTIONS(674),
  },
  [165] = {
    [sym__endOfLine] = ACTIONS(676),
  },
  [166] = {
    [sym_list] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(125),
    [sym__escapedOrUnescapedKey] = STATE(145),
    [sym_empty] = STATE(91),
    [sym_multilineField] = STATE(91),
    [sym_comment] = STATE(91),
    [sym_field] = STATE(91),
    [sym_fieldset] = STATE(91),
    [sym_section] = STATE(91),
    [aux_sym_document_repeat1] = STATE(91),
    [sym_element] = STATE(91),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(243),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(678),
  },
  [167] = {
    [sym__endOfLine] = ACTIONS(680),
  },
  [168] = {
    [sym__endOfLine] = ACTIONS(682),
  },
  [169] = {
    [sym_comment] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(128),
    [sym_continuation] = STATE(129),
    [sym_directContinuationOperator] = ACTIONS(684),
    [sym_commentOperator] = ACTIONS(321),
    [sym__emptyLine] = ACTIONS(323),
    [sym_spacedContinuationOperator] = ACTIONS(684),
  },
  [170] = {
    [sym__endOfLine] = ACTIONS(686),
  },
  [171] = {
    [sym__endOfLine] = ACTIONS(688),
  },
  [172] = {
    [sym_comment] = STATE(128),
    [aux_sym_comment_repeat1] = STATE(139),
    [aux_sym_entry_repeat1] = STATE(128),
    [sym_continuation] = STATE(136),
    [sym_directContinuationOperator] = ACTIONS(690),
    [sym_commentOperator] = ACTIONS(321),
    [sym__emptyLine] = ACTIONS(323),
    [sym_spacedContinuationOperator] = ACTIONS(690),
  },
  [173] = {
    [sym__endOfLine] = ACTIONS(692),
  },
  [174] = {
    [sym__endOfLine] = ACTIONS(694),
  },
  [175] = {
    [sym_token] = ACTIONS(696),
  },
  [176] = {
    [sym_escapedKey] = ACTIONS(698),
  },
  [177] = {
    [sym_token] = ACTIONS(700),
  },
  [178] = {
    [sym__endOfLine] = ACTIONS(702),
    [sym_deepCopyOperator] = ACTIONS(704),
    [sym_copyOperator] = ACTIONS(706),
  },
  [179] = {
    [sym_token] = ACTIONS(708),
  },
  [180] = {
    [sym_entryOperator] = ACTIONS(710),
  },
  [181] = {
    [sym_multilineFieldKey] = ACTIONS(712),
  },
  [182] = {
    [sym__endOfLine] = ACTIONS(714),
  },
  [183] = {
    [sym_multilineFieldKey] = ACTIONS(716),
  },
  [184] = {
    [sym_token] = ACTIONS(718),
  },
  [185] = {
    [sym_token] = ACTIONS(720),
  },
  [186] = {
    [sym_token] = ACTIONS(722),
  },
  [187] = {
    [sym_token] = ACTIONS(724),
  },
  [188] = {
    [sym_token] = ACTIONS(726),
  },
  [189] = {
    [sym_token] = ACTIONS(728),
  },
  [190] = {
    [sym__escapedOrUnescapedSectionKey] = STATE(178),
    [sym_sectionKey] = ACTIONS(730),
    [sym_escapeOperator] = ACTIONS(47),
  },
  [191] = {
    [sym_multilineFieldOperator] = ACTIONS(732),
  },
  [192] = {
    [sym_token] = ACTIONS(734),
  },
  [193] = {
    [sym_multilineFieldOperator] = ACTIONS(736),
  },
  [194] = {
    [sym_sectionOperator] = ACTIONS(738),
  },
  [195] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(29),
    [sym_multilineFieldValue] = STATE(196),
    [sym__multilineFieldEnd] = ACTIONS(740),
    [sym__multilineFieldLine] = ACTIONS(90),
  },
  [196] = {
    [sym__multilineFieldEnd] = ACTIONS(742),
  },
  [197] = {
    [sym__endOfLine] = ACTIONS(744),
  },
  [198] = {
    [sym_multilineFieldKey] = ACTIONS(746),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(7),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [39] = {.count = 1, .reusable = false}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.count = 1, .reusable = true}, SHIFT(24),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [62] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [64] = {.count = 1, .reusable = true}, SHIFT(25),
  [66] = {.count = 1, .reusable = true}, SHIFT(26),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [74] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [79] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [88] = {.count = 1, .reusable = true}, SHIFT(27),
  [90] = {.count = 1, .reusable = true}, SHIFT(28),
  [92] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [94] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [96] = {.count = 1, .reusable = true}, SHIFT(31),
  [98] = {.count = 1, .reusable = true}, SHIFT(32),
  [100] = {.count = 1, .reusable = true}, SHIFT(33),
  [102] = {.count = 1, .reusable = false}, SHIFT(33),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym__escapedOrUnescapedKey, 3),
  [106] = {.count = 1, .reusable = true}, SHIFT(34),
  [108] = {.count = 1, .reusable = false}, SHIFT(35),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [112] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(38),
  [115] = {.count = 1, .reusable = false}, SHIFT(36),
  [117] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(37),
  [120] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(175),
  [123] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(176),
  [126] = {.count = 1, .reusable = true}, SHIFT(42),
  [128] = {.count = 1, .reusable = true}, SHIFT(43),
  [130] = {.count = 1, .reusable = true}, SHIFT(44),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_multilineFieldValue, 1),
  [134] = {.count = 1, .reusable = true}, SHIFT(46),
  [136] = {.count = 1, .reusable = true}, SHIFT(47),
  [138] = {.count = 1, .reusable = true}, SHIFT(198),
  [140] = {.count = 1, .reusable = false}, SHIFT(145),
  [142] = {.count = 1, .reusable = false}, SHIFT(184),
  [144] = {.count = 1, .reusable = true}, SHIFT(194),
  [146] = {.count = 1, .reusable = false}, SHIFT(49),
  [148] = {.count = 1, .reusable = true}, SHIFT(48),
  [150] = {.count = 1, .reusable = true}, SHIFT(50),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4, .production_id = 2),
  [154] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(51),
  [157] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(37),
  [160] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(186),
  [163] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(176),
  [166] = {.count = 1, .reusable = true}, SHIFT(54),
  [168] = {.count = 1, .reusable = true}, SHIFT(55),
  [170] = {.count = 1, .reusable = true}, SHIFT(56),
  [172] = {.count = 1, .reusable = true}, SHIFT(57),
  [174] = {.count = 1, .reusable = false}, SHIFT(37),
  [176] = {.count = 1, .reusable = false}, SHIFT(175),
  [178] = {.count = 1, .reusable = false}, SHIFT(58),
  [180] = {.count = 1, .reusable = true}, SHIFT(176),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [184] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(62),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4),
  [189] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(188),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [194] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(37),
  [197] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(189),
  [200] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(64),
  [203] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(176),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [208] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(66),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_list, 4),
  [213] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(188),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 3),
  [218] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(62),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3),
  [223] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(188),
  [226] = {.count = 1, .reusable = true}, SHIFT(69),
  [228] = {.count = 1, .reusable = true}, REDUCE(aux_sym_multilineFieldValue_repeat1, 2),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_multilineFieldValue_repeat1, 2), SHIFT_REPEAT(28),
  [233] = {.count = 1, .reusable = true}, SHIFT(70),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__escapedOrUnescapedSectionKey, 3),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym__escapedOrUnescapedSectionKey, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [243] = {.count = 1, .reusable = false}, SHIFT(91),
  [245] = {.count = 1, .reusable = true}, SHIFT(71),
  [247] = {.count = 1, .reusable = true}, SHIFT(72),
  [249] = {.count = 1, .reusable = false}, SHIFT(186),
  [251] = {.count = 1, .reusable = false}, SHIFT(104),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 2),
  [255] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(37),
  [258] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(189),
  [261] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(64),
  [264] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(176),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .production_id = 2),
  [269] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(66),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2),
  [274] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(188),
  [277] = {.count = 1, .reusable = true}, SHIFT(73),
  [279] = {.count = 1, .reusable = false}, SHIFT(179),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_item, 2),
  [283] = {.count = 2, .reusable = false}, REDUCE(sym_item, 2), SHIFT(159),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_item, 2),
  [288] = {.count = 2, .reusable = false}, REDUCE(sym_item, 2), SHIFT(188),
  [291] = {.count = 1, .reusable = true}, SHIFT(75),
  [293] = {.count = 1, .reusable = true}, SHIFT(76),
  [295] = {.count = 1, .reusable = true}, SHIFT(77),
  [297] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(175),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(58),
  [305] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(35),
  [321] = {.count = 1, .reusable = true}, SHIFT(188),
  [323] = {.count = 1, .reusable = true}, SHIFT(128),
  [325] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(35),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(62),
  [331] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(188),
  [334] = {.count = 1, .reusable = false}, SHIFT(189),
  [336] = {.count = 1, .reusable = false}, SHIFT(135),
  [338] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(37),
  [341] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(189),
  [344] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(64),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(176),
  [350] = {.count = 1, .reusable = true}, SHIFT(36),
  [352] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(66),
  [355] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(36),
  [358] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(188),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 3),
  [363] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(62),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3),
  [368] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(188),
  [371] = {.count = 1, .reusable = true}, SHIFT(78),
  [373] = {.count = 1, .reusable = true}, SHIFT(79),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [379] = {.count = 1, .reusable = false}, SHIFT(81),
  [381] = {.count = 1, .reusable = true}, SHIFT(80),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3),
  [389] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3), SHIFT(159),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3),
  [394] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3), SHIFT(188),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [399] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(159),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [404] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(188),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 3),
  [409] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 3), SHIFT(62),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 3),
  [414] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 3), SHIFT(188),
  [417] = {.count = 1, .reusable = true}, SHIFT(84),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_multilineField, 7),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_multilineField, 7),
  [423] = {.count = 1, .reusable = true}, SHIFT(85),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [429] = {.count = 1, .reusable = true}, SHIFT(86),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [433] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(159),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [438] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(188),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4),
  [443] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4), SHIFT(62),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 4),
  [448] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4), SHIFT(188),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 3),
  [453] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(62),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3),
  [458] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(188),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_multilineField, 8),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_multilineField, 8),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 3),
  [471] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(62),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3),
  [476] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(188),
  [479] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(175),
  [482] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(198),
  [485] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [488] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(184),
  [491] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(194),
  [497] = {.count = 1, .reusable = false}, SHIFT(185),
  [499] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(153),
  [502] = {.count = 1, .reusable = false}, SHIFT(152),
  [504] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(180),
  [507] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(155),
  [510] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(180),
  [513] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(169),
  [516] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(180),
  [519] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(160),
  [522] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(161),
  [525] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(169),
  [528] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(180),
  [531] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(160),
  [534] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(161),
  [537] = {.count = 1, .reusable = false}, SHIFT(187),
  [539] = {.count = 2, .reusable = false}, REDUCE(sym_item, 2), SHIFT(172),
  [542] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(186),
  [545] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(104),
  [548] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(179),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(159),
  [554] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(180),
  [557] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(160),
  [560] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(161),
  [563] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(152),
  [566] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(169),
  [569] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3), SHIFT(172),
  [572] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(172),
  [575] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 3), SHIFT(169),
  [578] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(172),
  [581] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4), SHIFT(169),
  [584] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(169),
  [587] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(169),
  [590] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(184),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(188),
  [596] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(128),
  [599] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(185),
  [602] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(169),
  [605] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(186),
  [608] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(189),
  [611] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(135),
  [614] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(187),
  [617] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(172),
  [620] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(188),
  [623] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(189),
  [626] = {.count = 1, .reusable = true}, SHIFT(90),
  [628] = {.count = 1, .reusable = true}, SHIFT(148),
  [630] = {.count = 1, .reusable = true}, SHIFT(177),
  [632] = {.count = 1, .reusable = true}, SHIFT(92),
  [634] = {.count = 1, .reusable = true}, SHIFT(93),
  [636] = {.count = 1, .reusable = true}, SHIFT(94),
  [638] = {.count = 1, .reusable = true}, SHIFT(150),
  [640] = {.count = 1, .reusable = true}, SHIFT(95),
  [642] = {.count = 1, .reusable = true}, SHIFT(99),
  [644] = {.count = 1, .reusable = false}, SHIFT(154),
  [646] = {.count = 1, .reusable = true}, SHIFT(100),
  [648] = {.count = 1, .reusable = true}, SHIFT(103),
  [650] = {.count = 1, .reusable = true}, SHIFT(157),
  [652] = {.count = 1, .reusable = false}, SHIFT(180),
  [654] = {.count = 1, .reusable = true}, SHIFT(112),
  [656] = {.count = 1, .reusable = true}, SHIFT(113),
  [658] = {.count = 1, .reusable = true}, SHIFT(115),
  [660] = {.count = 1, .reusable = true}, SHIFT(116),
  [662] = {.count = 1, .reusable = true}, SHIFT(164),
  [664] = {.count = 1, .reusable = true}, SHIFT(179),
  [666] = {.count = 1, .reusable = true}, SHIFT(152),
  [668] = {.count = 1, .reusable = true}, SHIFT(117),
  [670] = {.count = 1, .reusable = false}, SHIFT(166),
  [672] = {.count = 1, .reusable = true}, SHIFT(118),
  [674] = {.count = 1, .reusable = true}, SHIFT(121),
  [676] = {.count = 1, .reusable = true}, SHIFT(122),
  [678] = {.count = 1, .reusable = true}, SHIFT(123),
  [680] = {.count = 1, .reusable = true}, SHIFT(127),
  [682] = {.count = 1, .reusable = true}, SHIFT(131),
  [684] = {.count = 1, .reusable = true}, SHIFT(185),
  [686] = {.count = 1, .reusable = true}, SHIFT(134),
  [688] = {.count = 1, .reusable = true}, SHIFT(138),
  [690] = {.count = 1, .reusable = true}, SHIFT(187),
  [692] = {.count = 1, .reusable = true}, SHIFT(141),
  [694] = {.count = 1, .reusable = true}, SHIFT(144),
  [696] = {.count = 1, .reusable = true}, SHIFT(146),
  [698] = {.count = 1, .reusable = true}, SHIFT(147),
  [700] = {.count = 1, .reusable = true}, SHIFT(149),
  [702] = {.count = 1, .reusable = true}, SHIFT(151),
  [704] = {.count = 1, .reusable = true}, SHIFT(192),
  [706] = {.count = 1, .reusable = false}, SHIFT(192),
  [708] = {.count = 1, .reusable = true}, SHIFT(156),
  [710] = {.count = 1, .reusable = true}, SHIFT(158),
  [712] = {.count = 1, .reusable = true}, SHIFT(162),
  [714] = {.count = 1, .reusable = true}, SHIFT(163),
  [716] = {.count = 1, .reusable = true}, SHIFT(165),
  [718] = {.count = 1, .reusable = true}, SHIFT(167),
  [720] = {.count = 1, .reusable = true}, SHIFT(168),
  [722] = {.count = 1, .reusable = true}, SHIFT(170),
  [724] = {.count = 1, .reusable = true}, SHIFT(171),
  [726] = {.count = 1, .reusable = true}, SHIFT(173),
  [728] = {.count = 1, .reusable = true}, SHIFT(174),
  [730] = {.count = 1, .reusable = true}, SHIFT(178),
  [732] = {.count = 1, .reusable = true}, SHIFT(181),
  [734] = {.count = 1, .reusable = true}, SHIFT(182),
  [736] = {.count = 1, .reusable = true}, SHIFT(183),
  [738] = {.count = 1, .reusable = true}, SHIFT(190),
  [740] = {.count = 1, .reusable = true}, SHIFT(191),
  [742] = {.count = 1, .reusable = true}, SHIFT(193),
  [744] = {.count = 1, .reusable = true}, SHIFT(195),
  [746] = {.count = 1, .reusable = true}, SHIFT(197),
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
