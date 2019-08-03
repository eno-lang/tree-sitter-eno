#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 191
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
  [sym_multilineFieldValue] = "multilineFieldValue",
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
  [36] = {.lex_state = 16},
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
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 1, .external_lex_state = 6},
  [58] = {.lex_state = 4, .external_lex_state = 2},
  [59] = {.lex_state = 3, .external_lex_state = 2},
  [60] = {.lex_state = 2, .external_lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3, .external_lex_state = 2},
  [63] = {.lex_state = 4, .external_lex_state = 6},
  [64] = {.lex_state = 4, .external_lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2, .external_lex_state = 2},
  [67] = {.lex_state = 3, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 5},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 10},
  [72] = {.lex_state = 3, .external_lex_state = 2},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 4, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 5},
  [77] = {.lex_state = 4, .external_lex_state = 2},
  [78] = {.lex_state = 4, .external_lex_state = 10},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 3, .external_lex_state = 2},
  [81] = {.lex_state = 4, .external_lex_state = 2},
  [82] = {.lex_state = 4, .external_lex_state = 2},
  [83] = {.lex_state = 3, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 6},
  [85] = {.lex_state = 1, .external_lex_state = 6},
  [86] = {.lex_state = 4, .external_lex_state = 10},
  [87] = {.lex_state = 4, .external_lex_state = 10},
  [88] = {.lex_state = 1, .external_lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1, .external_lex_state = 10},
  [91] = {.lex_state = 2, .external_lex_state = 10},
  [92] = {.lex_state = 3, .external_lex_state = 10},
  [93] = {.lex_state = 4, .external_lex_state = 10},
  [94] = {.lex_state = 2, .external_lex_state = 10},
  [95] = {.lex_state = 3, .external_lex_state = 10},
  [96] = {.lex_state = 4, .external_lex_state = 10},
  [97] = {.lex_state = 4, .external_lex_state = 10},
  [98] = {.lex_state = 2, .external_lex_state = 10},
  [99] = {.lex_state = 2, .external_lex_state = 6},
  [100] = {.lex_state = 4, .external_lex_state = 10},
  [101] = {.lex_state = 1, .external_lex_state = 2},
  [102] = {.lex_state = 2, .external_lex_state = 10},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 4, .external_lex_state = 10},
  [105] = {.lex_state = 2, .external_lex_state = 10},
  [106] = {.lex_state = 3, .external_lex_state = 10},
  [107] = {.lex_state = 4, .external_lex_state = 10},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 10},
  [110] = {.lex_state = 4, .external_lex_state = 10},
  [111] = {.lex_state = 4, .external_lex_state = 10},
  [112] = {.lex_state = 1, .external_lex_state = 10},
  [113] = {.lex_state = 3, .external_lex_state = 10},
  [114] = {.lex_state = 4, .external_lex_state = 10},
  [115] = {.lex_state = 4, .external_lex_state = 10},
  [116] = {.lex_state = 3, .external_lex_state = 10},
  [117] = {.lex_state = 4, .external_lex_state = 10},
  [118] = {.lex_state = 4, .external_lex_state = 10},
  [119] = {.lex_state = 4, .external_lex_state = 10},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 3, .external_lex_state = 10},
  [122] = {.lex_state = 3, .external_lex_state = 10},
  [123] = {.lex_state = 3, .external_lex_state = 10},
  [124] = {.lex_state = 2, .external_lex_state = 6},
  [125] = {.lex_state = 2, .external_lex_state = 6},
  [126] = {.lex_state = 2, .external_lex_state = 6},
  [127] = {.lex_state = 4, .external_lex_state = 6},
  [128] = {.lex_state = 1, .external_lex_state = 10},
  [129] = {.lex_state = 1, .external_lex_state = 10},
  [130] = {.lex_state = 1, .external_lex_state = 10},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 4, .external_lex_state = 6},
  [135] = {.lex_state = 4, .external_lex_state = 6},
  [136] = {.lex_state = 4, .external_lex_state = 6},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 0, .external_lex_state = 6},
  [140] = {.lex_state = 16, .external_lex_state = 5},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 4, .external_lex_state = 10},
  [144] = {.lex_state = 1, .external_lex_state = 6},
  [145] = {.lex_state = 4, .external_lex_state = 10},
  [146] = {.lex_state = 2, .external_lex_state = 6},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 0, .external_lex_state = 5},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 4, .external_lex_state = 6},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 4, .external_lex_state = 10},
  [154] = {.lex_state = 0, .external_lex_state = 5},
  [155] = {.lex_state = 0, .external_lex_state = 5},
  [156] = {.lex_state = 4, .external_lex_state = 10},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 0, .external_lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 0, .external_lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 5},
  [164] = {.lex_state = 0, .external_lex_state = 5},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 0, .external_lex_state = 5},
  [169] = {.lex_state = 16},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 5},
  [173] = {.lex_state = 16},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 17, .external_lex_state = 6},
  [182] = {.lex_state = 0, .external_lex_state = 8},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0, .external_lex_state = 8},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0, .external_lex_state = 7},
  [188] = {.lex_state = 0, .external_lex_state = 9},
  [189] = {.lex_state = 0, .external_lex_state = 5},
  [190] = {.lex_state = 0, .external_lex_state = 3},
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
    [aux_sym_comment_repeat1] = STATE(84),
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
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
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
    [aux_sym_comment_repeat1] = STATE(124),
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
    [sym_token] = ACTIONS(168),
  },
  [37] = {
    [sym_entryOperator] = ACTIONS(170),
  },
  [38] = {
    [sym_comment] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(84),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(57),
    [sym_entry] = STATE(58),
    [sym_continuation] = STATE(59),
    [sym_item] = STATE(60),
    [sym_directContinuationOperator] = ACTIONS(108),
    [sym_key] = ACTIONS(172),
    [sym_commentOperator] = ACTIONS(174),
    [sym__emptyLine] = ACTIONS(176),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_escapeOperator] = ACTIONS(178),
    [sym_itemOperator] = ACTIONS(115),
  },
  [39] = {
    [sym_comment] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(61),
    [sym_continuation] = STATE(62),
    [aux_sym_entry_repeat2] = STATE(62),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym__emptyLine] = ACTIONS(182),
    [sym__sectionDescend] = ACTIONS(180),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(180),
    [sym_key] = ACTIONS(185),
    [sym_commentOperator] = ACTIONS(187),
    [sym_escapeOperator] = ACTIONS(180),
  },
  [40] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(134),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_entry] = STATE(64),
    [aux_sym_fieldset_repeat1] = STATE(64),
    [sym_multilineFieldOperator] = ACTIONS(190),
    [sym_key] = ACTIONS(192),
    [sym_commentOperator] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym__emptyLine] = ACTIONS(198),
    [sym__sectionDescend] = ACTIONS(190),
    [sym_escapeOperator] = ACTIONS(201),
  },
  [41] = {
    [sym_comment] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(65),
    [aux_sym_list_repeat1] = STATE(66),
    [sym_item] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym__emptyLine] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(204),
    [sym_itemOperator] = ACTIONS(115),
    [sym_multilineFieldOperator] = ACTIONS(204),
    [sym_key] = ACTIONS(209),
    [sym_commentOperator] = ACTIONS(211),
    [sym_escapeOperator] = ACTIONS(204),
  },
  [42] = {
    [sym_comment] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(61),
    [sym_continuation] = STATE(67),
    [aux_sym_entry_repeat2] = STATE(67),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym__emptyLine] = ACTIONS(216),
    [sym__sectionDescend] = ACTIONS(214),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(214),
    [sym_key] = ACTIONS(219),
    [sym_commentOperator] = ACTIONS(221),
    [sym_escapeOperator] = ACTIONS(214),
  },
  [43] = {
    [sym_multilineFieldKey] = ACTIONS(224),
  },
  [44] = {
    [sym__multilineFieldEnd] = ACTIONS(226),
    [sym__multilineFieldLine] = ACTIONS(226),
  },
  [45] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(45),
    [sym__multilineFieldEnd] = ACTIONS(226),
    [sym__multilineFieldLine] = ACTIONS(228),
  },
  [46] = {
    [sym_multilineFieldOperator] = ACTIONS(231),
  },
  [47] = {
    [sym_deepCopyOperator] = ACTIONS(233),
    [sym__endOfLine] = ACTIONS(233),
    [sym_copyOperator] = ACTIONS(235),
  },
  [48] = {
    [sym_multilineFieldOperator] = ACTIONS(237),
    [sym_key] = ACTIONS(239),
    [sym_commentOperator] = ACTIONS(239),
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym__emptyLine] = ACTIONS(239),
    [sym__sectionDescend] = ACTIONS(237),
    [sym_escapeOperator] = ACTIONS(237),
  },
  [49] = {
    [sym_list] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
    [sym_empty] = STATE(87),
    [sym_multilineField] = STATE(87),
    [sym_comment] = STATE(87),
    [sym_field] = STATE(87),
    [sym_fieldset] = STATE(87),
    [sym_section] = STATE(87),
    [aux_sym_document_repeat1] = STATE(87),
    [sym_element] = STATE(87),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(241),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(243),
  },
  [50] = {
    [sym__endOfLine] = ACTIONS(245),
  },
  [51] = {
    [sym_comment] = STATE(99),
    [aux_sym_comment_repeat1] = STATE(124),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(99),
    [sym_entry] = STATE(58),
    [sym_item] = STATE(60),
    [sym_key] = ACTIONS(172),
    [sym_commentOperator] = ACTIONS(247),
    [sym__emptyLine] = ACTIONS(249),
    [sym_escapeOperator] = ACTIONS(178),
    [sym_itemOperator] = ACTIONS(115),
  },
  [52] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(134),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_entry] = STATE(64),
    [aux_sym_fieldset_repeat1] = STATE(64),
    [sym_multilineFieldOperator] = ACTIONS(251),
    [sym_key] = ACTIONS(253),
    [sym_commentOperator] = ACTIONS(256),
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym__emptyLine] = ACTIONS(259),
    [sym__sectionDescend] = ACTIONS(251),
    [sym_escapeOperator] = ACTIONS(262),
  },
  [53] = {
    [sym_comment] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(65),
    [aux_sym_list_repeat1] = STATE(66),
    [sym_item] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym__emptyLine] = ACTIONS(267),
    [sym__sectionDescend] = ACTIONS(265),
    [sym_itemOperator] = ACTIONS(115),
    [sym_multilineFieldOperator] = ACTIONS(265),
    [sym_key] = ACTIONS(270),
    [sym_commentOperator] = ACTIONS(272),
    [sym_escapeOperator] = ACTIONS(265),
  },
  [54] = {
    [sym__endOfLine] = ACTIONS(275),
  },
  [55] = {
    [sym__endOfLine] = ACTIONS(277),
  },
  [56] = {
    [sym_token] = ACTIONS(279),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(84),
    [aux_sym_entry_repeat1] = STATE(57),
    [sym_directContinuationOperator] = ACTIONS(281),
    [sym_key] = ACTIONS(281),
    [sym_commentOperator] = ACTIONS(283),
    [sym__emptyLine] = ACTIONS(286),
    [sym_spacedContinuationOperator] = ACTIONS(281),
    [sym_itemOperator] = ACTIONS(281),
    [sym_escapeOperator] = ACTIONS(289),
  },
  [58] = {
    [sym_multilineFieldOperator] = ACTIONS(291),
    [sym_key] = ACTIONS(293),
    [sym_commentOperator] = ACTIONS(293),
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym__emptyLine] = ACTIONS(293),
    [sym__sectionDescend] = ACTIONS(291),
    [sym_escapeOperator] = ACTIONS(291),
  },
  [59] = {
    [sym_directContinuationOperator] = ACTIONS(295),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(295),
    [sym_spacedContinuationOperator] = ACTIONS(295),
    [sym__sectionDescend] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(295),
    [sym_escapeOperator] = ACTIONS(297),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [sym__emptyLine] = ACTIONS(301),
    [sym__sectionDescend] = ACTIONS(299),
    [sym_itemOperator] = ACTIONS(301),
    [sym_multilineFieldOperator] = ACTIONS(299),
    [sym_key] = ACTIONS(301),
    [sym_commentOperator] = ACTIONS(301),
    [sym_escapeOperator] = ACTIONS(299),
  },
  [61] = {
    [sym_comment] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(120),
    [sym_continuation] = STATE(59),
    [sym_directContinuationOperator] = ACTIONS(303),
    [sym_commentOperator] = ACTIONS(305),
    [sym__emptyLine] = ACTIONS(307),
    [sym_spacedContinuationOperator] = ACTIONS(303),
  },
  [62] = {
    [sym_comment] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(61),
    [sym_continuation] = STATE(62),
    [aux_sym_entry_repeat2] = STATE(62),
    [sym_directContinuationOperator] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(312),
    [sym_spacedContinuationOperator] = ACTIONS(309),
    [sym__sectionDescend] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(315),
    [sym_escapeOperator] = ACTIONS(297),
  },
  [63] = {
    [sym_comment] = STATE(127),
    [aux_sym_comment_repeat1] = STATE(134),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(127),
    [sym_entry] = STATE(58),
    [sym_key] = ACTIONS(172),
    [sym_commentOperator] = ACTIONS(318),
    [sym__emptyLine] = ACTIONS(320),
    [sym_escapeOperator] = ACTIONS(178),
  },
  [64] = {
    [sym_comment] = STATE(63),
    [aux_sym_comment_repeat1] = STATE(134),
    [sym__escapedOrUnescapedKey] = STATE(37),
    [aux_sym_entry_repeat1] = STATE(63),
    [sym_entry] = STATE(64),
    [aux_sym_fieldset_repeat1] = STATE(64),
    [sym_multilineFieldOperator] = ACTIONS(291),
    [sym_key] = ACTIONS(322),
    [sym_commentOperator] = ACTIONS(325),
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym__emptyLine] = ACTIONS(328),
    [sym__sectionDescend] = ACTIONS(291),
    [sym_escapeOperator] = ACTIONS(331),
  },
  [65] = {
    [sym_comment] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(120),
    [sym_item] = STATE(60),
    [sym__emptyLine] = ACTIONS(307),
    [sym_itemOperator] = ACTIONS(334),
    [sym_commentOperator] = ACTIONS(305),
  },
  [66] = {
    [sym_comment] = STATE(65),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(65),
    [aux_sym_list_repeat1] = STATE(66),
    [sym_item] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(299),
    [sym__emptyLine] = ACTIONS(336),
    [sym__sectionDescend] = ACTIONS(299),
    [sym_itemOperator] = ACTIONS(339),
    [sym_multilineFieldOperator] = ACTIONS(299),
    [sym_key] = ACTIONS(301),
    [sym_commentOperator] = ACTIONS(342),
    [sym_escapeOperator] = ACTIONS(299),
  },
  [67] = {
    [sym_comment] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(61),
    [sym_continuation] = STATE(62),
    [aux_sym_entry_repeat2] = STATE(62),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(345),
    [sym__emptyLine] = ACTIONS(347),
    [sym__sectionDescend] = ACTIONS(345),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(345),
    [sym_key] = ACTIONS(350),
    [sym_commentOperator] = ACTIONS(352),
    [sym_escapeOperator] = ACTIONS(345),
  },
  [68] = {
    [sym__endOfLine] = ACTIONS(355),
  },
  [69] = {
    [sym_multilineFieldKey] = ACTIONS(357),
  },
  [70] = {
    [sym_multilineFieldOperator] = ACTIONS(359),
    [sym_key] = ACTIONS(361),
    [sym_commentOperator] = ACTIONS(361),
    [ts_builtin_sym_end] = ACTIONS(359),
    [sym__emptyLine] = ACTIONS(361),
    [sym__sectionDescend] = ACTIONS(359),
    [sym_escapeOperator] = ACTIONS(359),
  },
  [71] = {
    [sym_list] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
    [sym_empty] = STATE(78),
    [sym_multilineField] = STATE(78),
    [sym_comment] = STATE(78),
    [sym_field] = STATE(78),
    [sym_fieldset] = STATE(78),
    [sym_section] = STATE(78),
    [aux_sym_document_repeat1] = STATE(78),
    [sym_element] = STATE(78),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(363),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(365),
  },
  [72] = {
    [sym_directContinuationOperator] = ACTIONS(367),
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym__emptyLine] = ACTIONS(367),
    [sym_spacedContinuationOperator] = ACTIONS(367),
    [sym__sectionDescend] = ACTIONS(369),
    [sym_multilineFieldOperator] = ACTIONS(369),
    [sym_key] = ACTIONS(367),
    [sym_commentOperator] = ACTIONS(367),
    [sym_escapeOperator] = ACTIONS(369),
  },
  [73] = {
    [sym_comment] = STATE(149),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(149),
    [sym_continuation] = STATE(79),
    [aux_sym_entry_repeat2] = STATE(79),
    [sym_directContinuationOperator] = ACTIONS(371),
    [ts_builtin_sym_end] = ACTIONS(373),
    [sym__emptyLine] = ACTIONS(375),
    [sym__sectionDescend] = ACTIONS(373),
    [sym_itemOperator] = ACTIONS(378),
    [sym_spacedContinuationOperator] = ACTIONS(371),
    [sym_multilineFieldOperator] = ACTIONS(373),
    [sym_key] = ACTIONS(378),
    [sym_commentOperator] = ACTIONS(380),
    [sym_escapeOperator] = ACTIONS(373),
  },
  [74] = {
    [sym__endOfLine] = ACTIONS(383),
  },
  [75] = {
    [sym_multilineFieldOperator] = ACTIONS(385),
    [sym_key] = ACTIONS(387),
    [sym_commentOperator] = ACTIONS(387),
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym__emptyLine] = ACTIONS(387),
    [sym__sectionDescend] = ACTIONS(385),
    [sym_escapeOperator] = ACTIONS(385),
  },
  [76] = {
    [sym__endOfLine] = ACTIONS(389),
  },
  [77] = {
    [sym_multilineFieldOperator] = ACTIONS(391),
    [sym_key] = ACTIONS(393),
    [sym_commentOperator] = ACTIONS(393),
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym__emptyLine] = ACTIONS(393),
    [sym__sectionDescend] = ACTIONS(391),
    [sym_escapeOperator] = ACTIONS(391),
  },
  [78] = {
    [sym_list] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
    [sym_empty] = STATE(87),
    [sym_multilineField] = STATE(87),
    [sym_comment] = STATE(87),
    [sym_field] = STATE(87),
    [sym_fieldset] = STATE(87),
    [sym_section] = STATE(87),
    [aux_sym_document_repeat1] = STATE(87),
    [sym_element] = STATE(87),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(241),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(395),
  },
  [79] = {
    [sym_comment] = STATE(149),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(149),
    [sym_continuation] = STATE(103),
    [aux_sym_entry_repeat2] = STATE(103),
    [sym_directContinuationOperator] = ACTIONS(371),
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym__emptyLine] = ACTIONS(399),
    [sym__sectionDescend] = ACTIONS(397),
    [sym_itemOperator] = ACTIONS(402),
    [sym_spacedContinuationOperator] = ACTIONS(371),
    [sym_multilineFieldOperator] = ACTIONS(397),
    [sym_key] = ACTIONS(402),
    [sym_commentOperator] = ACTIONS(404),
    [sym_escapeOperator] = ACTIONS(397),
  },
  [80] = {
    [sym_comment] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(61),
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
  [81] = {
    [sym_multilineFieldOperator] = ACTIONS(417),
    [sym_key] = ACTIONS(419),
    [sym_commentOperator] = ACTIONS(419),
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym__emptyLine] = ACTIONS(419),
    [sym__sectionDescend] = ACTIONS(417),
    [sym_escapeOperator] = ACTIONS(417),
  },
  [82] = {
    [sym_multilineFieldOperator] = ACTIONS(421),
    [sym_key] = ACTIONS(423),
    [sym_commentOperator] = ACTIONS(423),
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym__emptyLine] = ACTIONS(423),
    [sym__sectionDescend] = ACTIONS(421),
    [sym_escapeOperator] = ACTIONS(421),
  },
  [83] = {
    [sym_comment] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(61),
    [sym_continuation] = STATE(62),
    [aux_sym_entry_repeat2] = STATE(62),
    [sym_directContinuationOperator] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(425),
    [sym__emptyLine] = ACTIONS(427),
    [sym__sectionDescend] = ACTIONS(425),
    [sym_spacedContinuationOperator] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(425),
    [sym_key] = ACTIONS(430),
    [sym_commentOperator] = ACTIONS(432),
    [sym_escapeOperator] = ACTIONS(425),
  },
  [84] = {
    [aux_sym_comment_repeat1] = STATE(85),
    [sym_directContinuationOperator] = ACTIONS(27),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(174),
    [sym__emptyLine] = ACTIONS(27),
    [sym_spacedContinuationOperator] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(27),
    [sym_escapeOperator] = ACTIONS(25),
  },
  [85] = {
    [aux_sym_comment_repeat1] = STATE(85),
    [sym_directContinuationOperator] = ACTIONS(53),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(435),
    [sym__emptyLine] = ACTIONS(53),
    [sym_spacedContinuationOperator] = ACTIONS(53),
    [sym_itemOperator] = ACTIONS(53),
    [sym_escapeOperator] = ACTIONS(51),
  },
  [86] = {
    [sym_multilineFieldOperator] = ACTIONS(60),
    [sym_key] = ACTIONS(62),
    [sym_commentOperator] = ACTIONS(62),
    [sym__emptyLine] = ACTIONS(62),
    [sym__sectionDescend] = ACTIONS(60),
    [sym_escapeOperator] = ACTIONS(60),
    [sym__sectionAscend] = ACTIONS(60),
  },
  [87] = {
    [sym_list] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
    [sym_empty] = STATE(87),
    [sym_multilineField] = STATE(87),
    [sym_comment] = STATE(87),
    [sym_field] = STATE(87),
    [sym_fieldset] = STATE(87),
    [sym_section] = STATE(87),
    [aux_sym_document_repeat1] = STATE(87),
    [sym_element] = STATE(87),
    [sym_multilineFieldOperator] = ACTIONS(438),
    [sym_key] = ACTIONS(441),
    [sym_commentOperator] = ACTIONS(444),
    [sym__emptyLine] = ACTIONS(447),
    [sym__sectionDescend] = ACTIONS(450),
    [sym_escapeOperator] = ACTIONS(85),
    [sym__sectionAscend] = ACTIONS(77),
  },
  [88] = {
    [sym_directContinuationOperator] = ACTIONS(94),
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym_spacedContinuationOperator] = ACTIONS(94),
    [sym_itemOperator] = ACTIONS(94),
    [sym_escapeOperator] = ACTIONS(92),
  },
  [89] = {
    [sym_entryOperator] = ACTIONS(104),
  },
  [90] = {
    [aux_sym_comment_repeat1] = STATE(84),
    [sym__escapedOrUnescapedKey] = STATE(184),
    [aux_sym_entry_repeat1] = STATE(144),
    [sym_entry] = STATE(93),
    [aux_sym_entry_repeat2] = STATE(92),
    [sym_comment] = STATE(144),
    [aux_sym_fieldset_repeat1] = STATE(93),
    [sym_continuation] = STATE(92),
    [aux_sym_list_repeat1] = STATE(94),
    [sym_item] = STATE(94),
    [sym_directContinuationOperator] = ACTIONS(453),
    [sym__emptyLine] = ACTIONS(455),
    [sym__sectionDescend] = ACTIONS(110),
    [sym_spacedContinuationOperator] = ACTIONS(453),
    [sym_itemOperator] = ACTIONS(458),
    [sym_multilineFieldOperator] = ACTIONS(110),
    [sym_key] = ACTIONS(460),
    [sym_commentOperator] = ACTIONS(120),
    [sym_escapeOperator] = ACTIONS(123),
    [sym__sectionAscend] = ACTIONS(110),
  },
  [91] = {
    [aux_sym_comment_repeat1] = STATE(124),
    [sym__escapedOrUnescapedKey] = STATE(184),
    [aux_sym_entry_repeat1] = STATE(146),
    [sym_entry] = STATE(97),
    [sym_comment] = STATE(146),
    [aux_sym_fieldset_repeat1] = STATE(97),
    [aux_sym_list_repeat1] = STATE(98),
    [sym_item] = STATE(98),
    [sym__emptyLine] = ACTIONS(463),
    [sym__sectionDescend] = ACTIONS(152),
    [sym_itemOperator] = ACTIONS(458),
    [sym_multilineFieldOperator] = ACTIONS(152),
    [sym_key] = ACTIONS(466),
    [sym_commentOperator] = ACTIONS(160),
    [sym_escapeOperator] = ACTIONS(163),
    [sym__sectionAscend] = ACTIONS(152),
  },
  [92] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(122),
    [aux_sym_entry_repeat2] = STATE(122),
    [sym_directContinuationOperator] = ACTIONS(453),
    [sym__emptyLine] = ACTIONS(469),
    [sym__sectionDescend] = ACTIONS(180),
    [sym_spacedContinuationOperator] = ACTIONS(453),
    [sym_multilineFieldOperator] = ACTIONS(180),
    [sym_key] = ACTIONS(185),
    [sym_commentOperator] = ACTIONS(187),
    [sym_escapeOperator] = ACTIONS(180),
    [sym__sectionAscend] = ACTIONS(180),
  },
  [93] = {
    [sym_comment] = STATE(150),
    [aux_sym_comment_repeat1] = STATE(134),
    [sym__escapedOrUnescapedKey] = STATE(184),
    [aux_sym_entry_repeat1] = STATE(150),
    [sym_entry] = STATE(104),
    [aux_sym_fieldset_repeat1] = STATE(104),
    [sym_multilineFieldOperator] = ACTIONS(190),
    [sym_key] = ACTIONS(472),
    [sym_commentOperator] = ACTIONS(195),
    [sym__emptyLine] = ACTIONS(475),
    [sym__sectionDescend] = ACTIONS(190),
    [sym_escapeOperator] = ACTIONS(201),
    [sym__sectionAscend] = ACTIONS(190),
  },
  [94] = {
    [sym_comment] = STATE(151),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(151),
    [aux_sym_list_repeat1] = STATE(105),
    [sym_item] = STATE(105),
    [sym__emptyLine] = ACTIONS(478),
    [sym__sectionDescend] = ACTIONS(204),
    [sym_itemOperator] = ACTIONS(458),
    [sym_multilineFieldOperator] = ACTIONS(204),
    [sym_key] = ACTIONS(209),
    [sym_commentOperator] = ACTIONS(211),
    [sym_escapeOperator] = ACTIONS(204),
    [sym__sectionAscend] = ACTIONS(204),
  },
  [95] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(106),
    [aux_sym_entry_repeat2] = STATE(106),
    [sym_directContinuationOperator] = ACTIONS(453),
    [sym__emptyLine] = ACTIONS(481),
    [sym__sectionDescend] = ACTIONS(214),
    [sym_spacedContinuationOperator] = ACTIONS(453),
    [sym_multilineFieldOperator] = ACTIONS(214),
    [sym_key] = ACTIONS(219),
    [sym_commentOperator] = ACTIONS(221),
    [sym_escapeOperator] = ACTIONS(214),
    [sym__sectionAscend] = ACTIONS(214),
  },
  [96] = {
    [sym_multilineFieldOperator] = ACTIONS(237),
    [sym_key] = ACTIONS(239),
    [sym_commentOperator] = ACTIONS(239),
    [sym__emptyLine] = ACTIONS(239),
    [sym__sectionDescend] = ACTIONS(237),
    [sym_escapeOperator] = ACTIONS(237),
    [sym__sectionAscend] = ACTIONS(237),
  },
  [97] = {
    [sym_comment] = STATE(150),
    [aux_sym_comment_repeat1] = STATE(134),
    [sym__escapedOrUnescapedKey] = STATE(184),
    [aux_sym_entry_repeat1] = STATE(150),
    [sym_entry] = STATE(104),
    [aux_sym_fieldset_repeat1] = STATE(104),
    [sym_multilineFieldOperator] = ACTIONS(251),
    [sym_key] = ACTIONS(484),
    [sym_commentOperator] = ACTIONS(256),
    [sym__emptyLine] = ACTIONS(487),
    [sym__sectionDescend] = ACTIONS(251),
    [sym_escapeOperator] = ACTIONS(262),
    [sym__sectionAscend] = ACTIONS(251),
  },
  [98] = {
    [sym_comment] = STATE(151),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(151),
    [aux_sym_list_repeat1] = STATE(105),
    [sym_item] = STATE(105),
    [sym__emptyLine] = ACTIONS(490),
    [sym__sectionDescend] = ACTIONS(265),
    [sym_itemOperator] = ACTIONS(458),
    [sym_multilineFieldOperator] = ACTIONS(265),
    [sym_key] = ACTIONS(270),
    [sym_commentOperator] = ACTIONS(272),
    [sym_escapeOperator] = ACTIONS(265),
    [sym__sectionAscend] = ACTIONS(265),
  },
  [99] = {
    [sym_comment] = STATE(99),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(99),
    [sym_key] = ACTIONS(281),
    [sym_commentOperator] = ACTIONS(493),
    [sym__emptyLine] = ACTIONS(496),
    [sym_itemOperator] = ACTIONS(281),
    [sym_escapeOperator] = ACTIONS(289),
  },
  [100] = {
    [sym_multilineFieldOperator] = ACTIONS(291),
    [sym_key] = ACTIONS(293),
    [sym_commentOperator] = ACTIONS(293),
    [sym__emptyLine] = ACTIONS(293),
    [sym__sectionDescend] = ACTIONS(291),
    [sym_escapeOperator] = ACTIONS(291),
    [sym__sectionAscend] = ACTIONS(291),
  },
  [101] = {
    [sym_directContinuationOperator] = ACTIONS(295),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(295),
    [sym_spacedContinuationOperator] = ACTIONS(295),
    [sym_itemOperator] = ACTIONS(295),
    [sym__sectionDescend] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(295),
    [sym_escapeOperator] = ACTIONS(297),
  },
  [102] = {
    [sym__emptyLine] = ACTIONS(301),
    [sym__sectionDescend] = ACTIONS(299),
    [sym_itemOperator] = ACTIONS(301),
    [sym_multilineFieldOperator] = ACTIONS(299),
    [sym_key] = ACTIONS(301),
    [sym_commentOperator] = ACTIONS(301),
    [sym_escapeOperator] = ACTIONS(299),
    [sym__sectionAscend] = ACTIONS(299),
  },
  [103] = {
    [sym_comment] = STATE(149),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(149),
    [sym_continuation] = STATE(103),
    [aux_sym_entry_repeat2] = STATE(103),
    [sym_directContinuationOperator] = ACTIONS(499),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(502),
    [sym_spacedContinuationOperator] = ACTIONS(499),
    [sym_itemOperator] = ACTIONS(295),
    [sym__sectionDescend] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(315),
    [sym_escapeOperator] = ACTIONS(297),
  },
  [104] = {
    [sym_comment] = STATE(150),
    [aux_sym_comment_repeat1] = STATE(134),
    [sym__escapedOrUnescapedKey] = STATE(184),
    [aux_sym_entry_repeat1] = STATE(150),
    [sym_entry] = STATE(104),
    [aux_sym_fieldset_repeat1] = STATE(104),
    [sym_multilineFieldOperator] = ACTIONS(291),
    [sym_key] = ACTIONS(505),
    [sym_commentOperator] = ACTIONS(325),
    [sym__emptyLine] = ACTIONS(508),
    [sym__sectionDescend] = ACTIONS(291),
    [sym_escapeOperator] = ACTIONS(331),
    [sym__sectionAscend] = ACTIONS(291),
  },
  [105] = {
    [sym_comment] = STATE(151),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(151),
    [aux_sym_list_repeat1] = STATE(105),
    [sym_item] = STATE(105),
    [sym__emptyLine] = ACTIONS(511),
    [sym__sectionDescend] = ACTIONS(299),
    [sym_itemOperator] = ACTIONS(514),
    [sym_multilineFieldOperator] = ACTIONS(299),
    [sym_key] = ACTIONS(301),
    [sym_commentOperator] = ACTIONS(342),
    [sym_escapeOperator] = ACTIONS(299),
    [sym__sectionAscend] = ACTIONS(299),
  },
  [106] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(122),
    [aux_sym_entry_repeat2] = STATE(122),
    [sym_directContinuationOperator] = ACTIONS(453),
    [sym__emptyLine] = ACTIONS(517),
    [sym__sectionDescend] = ACTIONS(345),
    [sym_spacedContinuationOperator] = ACTIONS(453),
    [sym_multilineFieldOperator] = ACTIONS(345),
    [sym_key] = ACTIONS(350),
    [sym_commentOperator] = ACTIONS(352),
    [sym_escapeOperator] = ACTIONS(345),
    [sym__sectionAscend] = ACTIONS(345),
  },
  [107] = {
    [sym_multilineFieldOperator] = ACTIONS(359),
    [sym_key] = ACTIONS(361),
    [sym_commentOperator] = ACTIONS(361),
    [sym__emptyLine] = ACTIONS(361),
    [sym__sectionDescend] = ACTIONS(359),
    [sym_escapeOperator] = ACTIONS(359),
    [sym__sectionAscend] = ACTIONS(359),
  },
  [108] = {
    [sym_directContinuationOperator] = ACTIONS(367),
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym__emptyLine] = ACTIONS(367),
    [sym_spacedContinuationOperator] = ACTIONS(367),
    [sym_itemOperator] = ACTIONS(367),
    [sym__sectionDescend] = ACTIONS(369),
    [sym_multilineFieldOperator] = ACTIONS(369),
    [sym_key] = ACTIONS(367),
    [sym_commentOperator] = ACTIONS(367),
    [sym_escapeOperator] = ACTIONS(369),
  },
  [109] = {
    [sym_comment] = STATE(162),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(162),
    [sym_continuation] = STATE(112),
    [aux_sym_entry_repeat2] = STATE(112),
    [sym_directContinuationOperator] = ACTIONS(520),
    [sym__emptyLine] = ACTIONS(522),
    [sym__sectionDescend] = ACTIONS(373),
    [sym_itemOperator] = ACTIONS(378),
    [sym_spacedContinuationOperator] = ACTIONS(520),
    [sym_multilineFieldOperator] = ACTIONS(373),
    [sym_key] = ACTIONS(378),
    [sym_commentOperator] = ACTIONS(380),
    [sym_escapeOperator] = ACTIONS(373),
    [sym__sectionAscend] = ACTIONS(373),
  },
  [110] = {
    [sym_multilineFieldOperator] = ACTIONS(385),
    [sym_key] = ACTIONS(387),
    [sym_commentOperator] = ACTIONS(387),
    [sym__emptyLine] = ACTIONS(387),
    [sym__sectionDescend] = ACTIONS(385),
    [sym_escapeOperator] = ACTIONS(385),
    [sym__sectionAscend] = ACTIONS(385),
  },
  [111] = {
    [sym_multilineFieldOperator] = ACTIONS(391),
    [sym_key] = ACTIONS(393),
    [sym_commentOperator] = ACTIONS(393),
    [sym__emptyLine] = ACTIONS(393),
    [sym__sectionDescend] = ACTIONS(391),
    [sym_escapeOperator] = ACTIONS(391),
    [sym__sectionAscend] = ACTIONS(391),
  },
  [112] = {
    [sym_comment] = STATE(162),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(162),
    [sym_continuation] = STATE(129),
    [aux_sym_entry_repeat2] = STATE(129),
    [sym_directContinuationOperator] = ACTIONS(520),
    [sym__emptyLine] = ACTIONS(525),
    [sym__sectionDescend] = ACTIONS(397),
    [sym_itemOperator] = ACTIONS(402),
    [sym_spacedContinuationOperator] = ACTIONS(520),
    [sym_multilineFieldOperator] = ACTIONS(397),
    [sym_key] = ACTIONS(402),
    [sym_commentOperator] = ACTIONS(404),
    [sym_escapeOperator] = ACTIONS(397),
    [sym__sectionAscend] = ACTIONS(397),
  },
  [113] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(116),
    [aux_sym_entry_repeat2] = STATE(116),
    [sym_directContinuationOperator] = ACTIONS(453),
    [sym__emptyLine] = ACTIONS(528),
    [sym__sectionDescend] = ACTIONS(407),
    [sym_spacedContinuationOperator] = ACTIONS(453),
    [sym_multilineFieldOperator] = ACTIONS(407),
    [sym_key] = ACTIONS(412),
    [sym_commentOperator] = ACTIONS(414),
    [sym_escapeOperator] = ACTIONS(407),
    [sym__sectionAscend] = ACTIONS(407),
  },
  [114] = {
    [sym_multilineFieldOperator] = ACTIONS(417),
    [sym_key] = ACTIONS(419),
    [sym_commentOperator] = ACTIONS(419),
    [sym__emptyLine] = ACTIONS(419),
    [sym__sectionDescend] = ACTIONS(417),
    [sym_escapeOperator] = ACTIONS(417),
    [sym__sectionAscend] = ACTIONS(417),
  },
  [115] = {
    [sym_multilineFieldOperator] = ACTIONS(421),
    [sym_key] = ACTIONS(423),
    [sym_commentOperator] = ACTIONS(423),
    [sym__emptyLine] = ACTIONS(423),
    [sym__sectionDescend] = ACTIONS(421),
    [sym_escapeOperator] = ACTIONS(421),
    [sym__sectionAscend] = ACTIONS(421),
  },
  [116] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(122),
    [aux_sym_entry_repeat2] = STATE(122),
    [sym_directContinuationOperator] = ACTIONS(453),
    [sym__emptyLine] = ACTIONS(531),
    [sym__sectionDescend] = ACTIONS(425),
    [sym_spacedContinuationOperator] = ACTIONS(453),
    [sym_multilineFieldOperator] = ACTIONS(425),
    [sym_key] = ACTIONS(430),
    [sym_commentOperator] = ACTIONS(432),
    [sym_escapeOperator] = ACTIONS(425),
    [sym__sectionAscend] = ACTIONS(425),
  },
  [117] = {
    [aux_sym_comment_repeat1] = STATE(118),
    [sym_multilineFieldOperator] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(142),
    [sym__emptyLine] = ACTIONS(27),
    [sym__sectionDescend] = ACTIONS(25),
    [sym_escapeOperator] = ACTIONS(25),
    [sym__sectionAscend] = ACTIONS(25),
  },
  [118] = {
    [aux_sym_comment_repeat1] = STATE(118),
    [sym_multilineFieldOperator] = ACTIONS(51),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(534),
    [sym__emptyLine] = ACTIONS(53),
    [sym__sectionDescend] = ACTIONS(51),
    [sym_escapeOperator] = ACTIONS(51),
    [sym__sectionAscend] = ACTIONS(51),
  },
  [119] = {
    [sym_multilineFieldOperator] = ACTIONS(92),
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(92),
    [sym_escapeOperator] = ACTIONS(92),
    [sym__sectionAscend] = ACTIONS(92),
  },
  [120] = {
    [sym_comment] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(120),
    [sym_directContinuationOperator] = ACTIONS(289),
    [sym_commentOperator] = ACTIONS(537),
    [sym__emptyLine] = ACTIONS(540),
    [sym_spacedContinuationOperator] = ACTIONS(289),
    [sym_itemOperator] = ACTIONS(289),
  },
  [121] = {
    [sym_directContinuationOperator] = ACTIONS(295),
    [sym__emptyLine] = ACTIONS(295),
    [sym_spacedContinuationOperator] = ACTIONS(295),
    [sym__sectionDescend] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(295),
    [sym_escapeOperator] = ACTIONS(297),
    [sym__sectionAscend] = ACTIONS(297),
  },
  [122] = {
    [sym_comment] = STATE(159),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(159),
    [sym_continuation] = STATE(122),
    [aux_sym_entry_repeat2] = STATE(122),
    [sym_directContinuationOperator] = ACTIONS(543),
    [sym__emptyLine] = ACTIONS(546),
    [sym_spacedContinuationOperator] = ACTIONS(543),
    [sym__sectionDescend] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(315),
    [sym_escapeOperator] = ACTIONS(297),
    [sym__sectionAscend] = ACTIONS(297),
  },
  [123] = {
    [sym_directContinuationOperator] = ACTIONS(367),
    [sym__emptyLine] = ACTIONS(367),
    [sym_spacedContinuationOperator] = ACTIONS(367),
    [sym__sectionDescend] = ACTIONS(369),
    [sym_multilineFieldOperator] = ACTIONS(369),
    [sym_key] = ACTIONS(367),
    [sym_commentOperator] = ACTIONS(367),
    [sym_escapeOperator] = ACTIONS(369),
    [sym__sectionAscend] = ACTIONS(369),
  },
  [124] = {
    [aux_sym_comment_repeat1] = STATE(125),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(247),
    [sym__emptyLine] = ACTIONS(27),
    [sym_itemOperator] = ACTIONS(27),
    [sym_escapeOperator] = ACTIONS(25),
  },
  [125] = {
    [aux_sym_comment_repeat1] = STATE(125),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(549),
    [sym__emptyLine] = ACTIONS(53),
    [sym_itemOperator] = ACTIONS(53),
    [sym_escapeOperator] = ACTIONS(51),
  },
  [126] = {
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym_itemOperator] = ACTIONS(94),
    [sym_escapeOperator] = ACTIONS(92),
  },
  [127] = {
    [sym_comment] = STATE(127),
    [aux_sym_comment_repeat1] = STATE(134),
    [aux_sym_entry_repeat1] = STATE(127),
    [sym_key] = ACTIONS(281),
    [sym_commentOperator] = ACTIONS(552),
    [sym__emptyLine] = ACTIONS(555),
    [sym_escapeOperator] = ACTIONS(289),
  },
  [128] = {
    [sym_directContinuationOperator] = ACTIONS(295),
    [sym__emptyLine] = ACTIONS(295),
    [sym_spacedContinuationOperator] = ACTIONS(295),
    [sym_itemOperator] = ACTIONS(295),
    [sym__sectionDescend] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(295),
    [sym_escapeOperator] = ACTIONS(297),
    [sym__sectionAscend] = ACTIONS(297),
  },
  [129] = {
    [sym_comment] = STATE(162),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(162),
    [sym_continuation] = STATE(129),
    [aux_sym_entry_repeat2] = STATE(129),
    [sym_directContinuationOperator] = ACTIONS(558),
    [sym__emptyLine] = ACTIONS(561),
    [sym_spacedContinuationOperator] = ACTIONS(558),
    [sym_itemOperator] = ACTIONS(295),
    [sym__sectionDescend] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym_key] = ACTIONS(295),
    [sym_commentOperator] = ACTIONS(315),
    [sym_escapeOperator] = ACTIONS(297),
    [sym__sectionAscend] = ACTIONS(297),
  },
  [130] = {
    [sym_directContinuationOperator] = ACTIONS(367),
    [sym__emptyLine] = ACTIONS(367),
    [sym_spacedContinuationOperator] = ACTIONS(367),
    [sym_itemOperator] = ACTIONS(367),
    [sym__sectionDescend] = ACTIONS(369),
    [sym_multilineFieldOperator] = ACTIONS(369),
    [sym_key] = ACTIONS(367),
    [sym_commentOperator] = ACTIONS(367),
    [sym_escapeOperator] = ACTIONS(369),
    [sym__sectionAscend] = ACTIONS(369),
  },
  [131] = {
    [aux_sym_comment_repeat1] = STATE(132),
    [sym_directContinuationOperator] = ACTIONS(25),
    [sym_commentOperator] = ACTIONS(305),
    [sym__emptyLine] = ACTIONS(25),
    [sym_spacedContinuationOperator] = ACTIONS(25),
    [sym_itemOperator] = ACTIONS(25),
  },
  [132] = {
    [aux_sym_comment_repeat1] = STATE(132),
    [sym_directContinuationOperator] = ACTIONS(51),
    [sym_commentOperator] = ACTIONS(564),
    [sym__emptyLine] = ACTIONS(51),
    [sym_spacedContinuationOperator] = ACTIONS(51),
    [sym_itemOperator] = ACTIONS(51),
  },
  [133] = {
    [sym_directContinuationOperator] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(92),
    [sym__emptyLine] = ACTIONS(92),
    [sym_spacedContinuationOperator] = ACTIONS(92),
    [sym_itemOperator] = ACTIONS(92),
  },
  [134] = {
    [aux_sym_comment_repeat1] = STATE(135),
    [sym_key] = ACTIONS(27),
    [sym_commentOperator] = ACTIONS(318),
    [sym__emptyLine] = ACTIONS(27),
    [sym_escapeOperator] = ACTIONS(25),
  },
  [135] = {
    [aux_sym_comment_repeat1] = STATE(135),
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(567),
    [sym__emptyLine] = ACTIONS(53),
    [sym_escapeOperator] = ACTIONS(51),
  },
  [136] = {
    [sym_key] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym_escapeOperator] = ACTIONS(92),
  },
  [137] = {
    [sym__endOfLine] = ACTIONS(570),
    [sym_elementOperator] = ACTIONS(572),
    [sym_copyOperator] = ACTIONS(574),
  },
  [138] = {
    [sym__endOfLine] = ACTIONS(576),
  },
  [139] = {
    [sym_escapeOperator] = ACTIONS(578),
  },
  [140] = {
    [sym__endOfLine] = ACTIONS(580),
    [sym_token] = ACTIONS(582),
  },
  [141] = {
    [sym__endOfLine] = ACTIONS(584),
  },
  [142] = {
    [sym__endOfLine] = ACTIONS(586),
  },
  [143] = {
    [sym_list] = STATE(145),
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
    [sym_empty] = STATE(145),
    [sym_multilineField] = STATE(145),
    [sym_comment] = STATE(145),
    [sym_field] = STATE(145),
    [sym_fieldset] = STATE(145),
    [sym_section] = STATE(145),
    [aux_sym_document_repeat1] = STATE(145),
    [sym_element] = STATE(145),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(588),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(590),
  },
  [144] = {
    [sym_comment] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(84),
    [sym__escapedOrUnescapedKey] = STATE(184),
    [aux_sym_entry_repeat1] = STATE(57),
    [sym_entry] = STATE(100),
    [sym_continuation] = STATE(121),
    [sym_item] = STATE(102),
    [sym_directContinuationOperator] = ACTIONS(453),
    [sym_key] = ACTIONS(592),
    [sym_commentOperator] = ACTIONS(174),
    [sym__emptyLine] = ACTIONS(176),
    [sym_spacedContinuationOperator] = ACTIONS(453),
    [sym_escapeOperator] = ACTIONS(178),
    [sym_itemOperator] = ACTIONS(458),
  },
  [145] = {
    [sym_list] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
    [sym_empty] = STATE(87),
    [sym_multilineField] = STATE(87),
    [sym_comment] = STATE(87),
    [sym_field] = STATE(87),
    [sym_fieldset] = STATE(87),
    [sym_section] = STATE(87),
    [aux_sym_document_repeat1] = STATE(87),
    [sym_element] = STATE(87),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(241),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(594),
  },
  [146] = {
    [sym_comment] = STATE(99),
    [aux_sym_comment_repeat1] = STATE(124),
    [sym__escapedOrUnescapedKey] = STATE(184),
    [aux_sym_entry_repeat1] = STATE(99),
    [sym_entry] = STATE(100),
    [sym_item] = STATE(102),
    [sym_key] = ACTIONS(592),
    [sym_commentOperator] = ACTIONS(247),
    [sym__emptyLine] = ACTIONS(249),
    [sym_escapeOperator] = ACTIONS(178),
    [sym_itemOperator] = ACTIONS(458),
  },
  [147] = {
    [sym__endOfLine] = ACTIONS(596),
  },
  [148] = {
    [sym__endOfLine] = ACTIONS(598),
  },
  [149] = {
    [sym_comment] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(120),
    [sym_continuation] = STATE(101),
    [sym_directContinuationOperator] = ACTIONS(600),
    [sym_commentOperator] = ACTIONS(305),
    [sym__emptyLine] = ACTIONS(307),
    [sym_spacedContinuationOperator] = ACTIONS(600),
  },
  [150] = {
    [sym_comment] = STATE(127),
    [aux_sym_comment_repeat1] = STATE(134),
    [sym__escapedOrUnescapedKey] = STATE(184),
    [aux_sym_entry_repeat1] = STATE(127),
    [sym_entry] = STATE(100),
    [sym_key] = ACTIONS(592),
    [sym_commentOperator] = ACTIONS(318),
    [sym__emptyLine] = ACTIONS(320),
    [sym_escapeOperator] = ACTIONS(178),
  },
  [151] = {
    [sym_comment] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(120),
    [sym_item] = STATE(102),
    [sym__emptyLine] = ACTIONS(307),
    [sym_itemOperator] = ACTIONS(602),
    [sym_commentOperator] = ACTIONS(305),
  },
  [152] = {
    [sym__endOfLine] = ACTIONS(604),
  },
  [153] = {
    [sym_list] = STATE(156),
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
    [sym_empty] = STATE(156),
    [sym_multilineField] = STATE(156),
    [sym_comment] = STATE(156),
    [sym_field] = STATE(156),
    [sym_fieldset] = STATE(156),
    [sym_section] = STATE(156),
    [aux_sym_document_repeat1] = STATE(156),
    [sym_element] = STATE(156),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(606),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(608),
  },
  [154] = {
    [sym__endOfLine] = ACTIONS(610),
  },
  [155] = {
    [sym__endOfLine] = ACTIONS(612),
  },
  [156] = {
    [sym_list] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(117),
    [sym__escapedOrUnescapedKey] = STATE(137),
    [sym_empty] = STATE(87),
    [sym_multilineField] = STATE(87),
    [sym_comment] = STATE(87),
    [sym_field] = STATE(87),
    [sym_fieldset] = STATE(87),
    [sym_section] = STATE(87),
    [aux_sym_document_repeat1] = STATE(87),
    [sym_element] = STATE(87),
    [sym_multilineFieldOperator] = ACTIONS(138),
    [sym_key] = ACTIONS(140),
    [sym_commentOperator] = ACTIONS(142),
    [sym__sectionDescend] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(241),
    [sym_escapeOperator] = ACTIONS(15),
    [sym__sectionAscend] = ACTIONS(614),
  },
  [157] = {
    [sym__endOfLine] = ACTIONS(616),
  },
  [158] = {
    [sym__endOfLine] = ACTIONS(618),
  },
  [159] = {
    [sym_comment] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(120),
    [sym_continuation] = STATE(121),
    [sym_directContinuationOperator] = ACTIONS(620),
    [sym_commentOperator] = ACTIONS(305),
    [sym__emptyLine] = ACTIONS(307),
    [sym_spacedContinuationOperator] = ACTIONS(620),
  },
  [160] = {
    [sym__endOfLine] = ACTIONS(622),
  },
  [161] = {
    [sym__endOfLine] = ACTIONS(624),
  },
  [162] = {
    [sym_comment] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(131),
    [aux_sym_entry_repeat1] = STATE(120),
    [sym_continuation] = STATE(128),
    [sym_directContinuationOperator] = ACTIONS(626),
    [sym_commentOperator] = ACTIONS(305),
    [sym__emptyLine] = ACTIONS(307),
    [sym_spacedContinuationOperator] = ACTIONS(626),
  },
  [163] = {
    [sym__endOfLine] = ACTIONS(628),
  },
  [164] = {
    [sym__endOfLine] = ACTIONS(630),
  },
  [165] = {
    [sym_token] = ACTIONS(632),
  },
  [166] = {
    [sym_escapedKey] = ACTIONS(634),
  },
  [167] = {
    [sym_token] = ACTIONS(636),
  },
  [168] = {
    [sym__endOfLine] = ACTIONS(638),
    [sym_deepCopyOperator] = ACTIONS(640),
    [sym_copyOperator] = ACTIONS(642),
  },
  [169] = {
    [sym_token] = ACTIONS(644),
  },
  [170] = {
    [sym_token] = ACTIONS(646),
  },
  [171] = {
    [sym_multilineFieldKey] = ACTIONS(648),
  },
  [172] = {
    [sym__endOfLine] = ACTIONS(650),
  },
  [173] = {
    [sym_token] = ACTIONS(652),
  },
  [174] = {
    [sym_multilineFieldKey] = ACTIONS(654),
  },
  [175] = {
    [sym_token] = ACTIONS(656),
  },
  [176] = {
    [sym_token] = ACTIONS(658),
  },
  [177] = {
    [sym_token] = ACTIONS(660),
  },
  [178] = {
    [sym_token] = ACTIONS(662),
  },
  [179] = {
    [sym_token] = ACTIONS(664),
  },
  [180] = {
    [sym_token] = ACTIONS(666),
  },
  [181] = {
    [sym__escapedOrUnescapedSectionKey] = STATE(168),
    [sym_sectionKey] = ACTIONS(668),
    [sym_escapeOperator] = ACTIONS(47),
  },
  [182] = {
    [sym_multilineFieldOperator] = ACTIONS(670),
  },
  [183] = {
    [sym_token] = ACTIONS(672),
  },
  [184] = {
    [sym_entryOperator] = ACTIONS(674),
  },
  [185] = {
    [sym_multilineFieldOperator] = ACTIONS(676),
  },
  [186] = {
    [sym_sectionOperator] = ACTIONS(678),
  },
  [187] = {
    [aux_sym_multilineFieldValue_repeat1] = STATE(29),
    [sym_multilineFieldValue] = STATE(188),
    [sym__multilineFieldEnd] = ACTIONS(680),
    [sym__multilineFieldLine] = ACTIONS(90),
  },
  [188] = {
    [sym__multilineFieldEnd] = ACTIONS(682),
  },
  [189] = {
    [sym__endOfLine] = ACTIONS(684),
  },
  [190] = {
    [sym_multilineFieldKey] = ACTIONS(686),
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
  [120] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(165),
  [123] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(166),
  [126] = {.count = 1, .reusable = true}, SHIFT(42),
  [128] = {.count = 1, .reusable = true}, SHIFT(43),
  [130] = {.count = 1, .reusable = true}, SHIFT(44),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_multilineFieldValue, 1),
  [134] = {.count = 1, .reusable = true}, SHIFT(46),
  [136] = {.count = 1, .reusable = true}, SHIFT(47),
  [138] = {.count = 1, .reusable = true}, SHIFT(190),
  [140] = {.count = 1, .reusable = false}, SHIFT(137),
  [142] = {.count = 1, .reusable = false}, SHIFT(175),
  [144] = {.count = 1, .reusable = true}, SHIFT(186),
  [146] = {.count = 1, .reusable = false}, SHIFT(49),
  [148] = {.count = 1, .reusable = true}, SHIFT(48),
  [150] = {.count = 1, .reusable = true}, SHIFT(50),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4, .production_id = 2),
  [154] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(51),
  [157] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(37),
  [160] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(177),
  [163] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(166),
  [166] = {.count = 1, .reusable = true}, SHIFT(54),
  [168] = {.count = 1, .reusable = true}, SHIFT(55),
  [170] = {.count = 1, .reusable = true}, SHIFT(56),
  [172] = {.count = 1, .reusable = false}, SHIFT(37),
  [174] = {.count = 1, .reusable = false}, SHIFT(165),
  [176] = {.count = 1, .reusable = false}, SHIFT(57),
  [178] = {.count = 1, .reusable = true}, SHIFT(166),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [182] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(61),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4),
  [187] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(179),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [192] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(37),
  [195] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(180),
  [198] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(63),
  [201] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(166),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [206] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(65),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_list, 4),
  [211] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(179),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 3),
  [216] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(61),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3),
  [221] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(179),
  [224] = {.count = 1, .reusable = true}, SHIFT(68),
  [226] = {.count = 1, .reusable = true}, REDUCE(aux_sym_multilineFieldValue_repeat1, 2),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_multilineFieldValue_repeat1, 2), SHIFT_REPEAT(28),
  [231] = {.count = 1, .reusable = true}, SHIFT(69),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__escapedOrUnescapedSectionKey, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__escapedOrUnescapedSectionKey, 3),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [241] = {.count = 1, .reusable = false}, SHIFT(87),
  [243] = {.count = 1, .reusable = true}, SHIFT(70),
  [245] = {.count = 1, .reusable = true}, SHIFT(71),
  [247] = {.count = 1, .reusable = false}, SHIFT(177),
  [249] = {.count = 1, .reusable = false}, SHIFT(99),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 2),
  [253] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(37),
  [256] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(180),
  [259] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(63),
  [262] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(166),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .production_id = 2),
  [267] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(65),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2),
  [272] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(179),
  [275] = {.count = 1, .reusable = true}, SHIFT(72),
  [277] = {.count = 1, .reusable = true}, SHIFT(73),
  [279] = {.count = 1, .reusable = true}, SHIFT(74),
  [281] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [283] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(165),
  [286] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(57),
  [289] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [301] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(35),
  [305] = {.count = 1, .reusable = true}, SHIFT(179),
  [307] = {.count = 1, .reusable = true}, SHIFT(120),
  [309] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(35),
  [312] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(61),
  [315] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(179),
  [318] = {.count = 1, .reusable = false}, SHIFT(180),
  [320] = {.count = 1, .reusable = false}, SHIFT(127),
  [322] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(37),
  [325] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(180),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(63),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(166),
  [334] = {.count = 1, .reusable = true}, SHIFT(36),
  [336] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(65),
  [339] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(36),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(179),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 3),
  [347] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(61),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3),
  [352] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(179),
  [355] = {.count = 1, .reusable = true}, SHIFT(75),
  [357] = {.count = 1, .reusable = true}, SHIFT(76),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [363] = {.count = 1, .reusable = false}, SHIFT(78),
  [365] = {.count = 1, .reusable = true}, SHIFT(77),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [371] = {.count = 1, .reusable = false}, SHIFT(169),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [375] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(149),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [380] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(179),
  [383] = {.count = 1, .reusable = true}, SHIFT(80),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_multilineField, 7),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_multilineField, 7),
  [389] = {.count = 1, .reusable = true}, SHIFT(81),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [395] = {.count = 1, .reusable = true}, SHIFT(82),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [399] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(149),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [404] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(179),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 3),
  [409] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(61),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3),
  [414] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(179),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_multilineField, 8),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_multilineField, 8),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 3),
  [427] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(61),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3),
  [432] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(179),
  [435] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(165),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(190),
  [441] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(137),
  [444] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(175),
  [447] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(186),
  [453] = {.count = 1, .reusable = false}, SHIFT(176),
  [455] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(144),
  [458] = {.count = 1, .reusable = false}, SHIFT(170),
  [460] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(184),
  [463] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(146),
  [466] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(184),
  [469] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(159),
  [472] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(184),
  [475] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(150),
  [478] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(151),
  [481] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(159),
  [484] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(184),
  [487] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(150),
  [490] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(151),
  [493] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(177),
  [496] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(99),
  [499] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(169),
  [502] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(149),
  [505] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(184),
  [508] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(150),
  [511] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(151),
  [514] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(170),
  [517] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(159),
  [520] = {.count = 1, .reusable = false}, SHIFT(178),
  [522] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(162),
  [525] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(162),
  [528] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(159),
  [531] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(159),
  [534] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(175),
  [537] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(179),
  [540] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(120),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(176),
  [546] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(159),
  [549] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(177),
  [552] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(180),
  [555] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(127),
  [558] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(178),
  [561] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(162),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(179),
  [567] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(180),
  [570] = {.count = 1, .reusable = true}, SHIFT(86),
  [572] = {.count = 1, .reusable = true}, SHIFT(140),
  [574] = {.count = 1, .reusable = true}, SHIFT(167),
  [576] = {.count = 1, .reusable = true}, SHIFT(88),
  [578] = {.count = 1, .reusable = true}, SHIFT(89),
  [580] = {.count = 1, .reusable = true}, SHIFT(90),
  [582] = {.count = 1, .reusable = true}, SHIFT(142),
  [584] = {.count = 1, .reusable = true}, SHIFT(91),
  [586] = {.count = 1, .reusable = true}, SHIFT(95),
  [588] = {.count = 1, .reusable = false}, SHIFT(145),
  [590] = {.count = 1, .reusable = true}, SHIFT(96),
  [592] = {.count = 1, .reusable = false}, SHIFT(184),
  [594] = {.count = 1, .reusable = true}, SHIFT(107),
  [596] = {.count = 1, .reusable = true}, SHIFT(108),
  [598] = {.count = 1, .reusable = true}, SHIFT(109),
  [600] = {.count = 1, .reusable = true}, SHIFT(169),
  [602] = {.count = 1, .reusable = true}, SHIFT(170),
  [604] = {.count = 1, .reusable = true}, SHIFT(110),
  [606] = {.count = 1, .reusable = false}, SHIFT(156),
  [608] = {.count = 1, .reusable = true}, SHIFT(111),
  [610] = {.count = 1, .reusable = true}, SHIFT(113),
  [612] = {.count = 1, .reusable = true}, SHIFT(114),
  [614] = {.count = 1, .reusable = true}, SHIFT(115),
  [616] = {.count = 1, .reusable = true}, SHIFT(119),
  [618] = {.count = 1, .reusable = true}, SHIFT(123),
  [620] = {.count = 1, .reusable = true}, SHIFT(176),
  [622] = {.count = 1, .reusable = true}, SHIFT(126),
  [624] = {.count = 1, .reusable = true}, SHIFT(130),
  [626] = {.count = 1, .reusable = true}, SHIFT(178),
  [628] = {.count = 1, .reusable = true}, SHIFT(133),
  [630] = {.count = 1, .reusable = true}, SHIFT(136),
  [632] = {.count = 1, .reusable = true}, SHIFT(138),
  [634] = {.count = 1, .reusable = true}, SHIFT(139),
  [636] = {.count = 1, .reusable = true}, SHIFT(141),
  [638] = {.count = 1, .reusable = true}, SHIFT(143),
  [640] = {.count = 1, .reusable = true}, SHIFT(183),
  [642] = {.count = 1, .reusable = false}, SHIFT(183),
  [644] = {.count = 1, .reusable = true}, SHIFT(147),
  [646] = {.count = 1, .reusable = true}, SHIFT(148),
  [648] = {.count = 1, .reusable = true}, SHIFT(152),
  [650] = {.count = 1, .reusable = true}, SHIFT(153),
  [652] = {.count = 1, .reusable = true}, SHIFT(154),
  [654] = {.count = 1, .reusable = true}, SHIFT(155),
  [656] = {.count = 1, .reusable = true}, SHIFT(157),
  [658] = {.count = 1, .reusable = true}, SHIFT(158),
  [660] = {.count = 1, .reusable = true}, SHIFT(160),
  [662] = {.count = 1, .reusable = true}, SHIFT(161),
  [664] = {.count = 1, .reusable = true}, SHIFT(163),
  [666] = {.count = 1, .reusable = true}, SHIFT(164),
  [668] = {.count = 1, .reusable = true}, SHIFT(168),
  [670] = {.count = 1, .reusable = true}, SHIFT(171),
  [672] = {.count = 1, .reusable = true}, SHIFT(172),
  [674] = {.count = 1, .reusable = true}, SHIFT(173),
  [676] = {.count = 1, .reusable = true}, SHIFT(174),
  [678] = {.count = 1, .reusable = true}, SHIFT(181),
  [680] = {.count = 1, .reusable = true}, SHIFT(182),
  [682] = {.count = 1, .reusable = true}, SHIFT(185),
  [684] = {.count = 1, .reusable = true}, SHIFT(187),
  [686] = {.count = 1, .reusable = true}, SHIFT(189),
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
