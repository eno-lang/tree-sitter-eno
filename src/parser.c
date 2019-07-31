#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 177
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 2
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 8
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
  sym__sectionAscend = 16,
  sym__sectionDescend = 17,
  sym_escapedKey = 18,
  sym_escapeOperator = 19,
  sym_multilineFieldKey = 20,
  sym_multilineFieldOperator = 21,
  sym_document = 22,
  sym__escapedOrUnescapedKey = 23,
  sym__escapedOrUnescapedSectionKey = 24,
  sym_comment = 25,
  sym_continuation = 26,
  sym_element = 27,
  sym_empty = 28,
  sym_entry = 29,
  sym_field = 30,
  sym_fieldset = 31,
  sym_item = 32,
  sym_list = 33,
  sym_section = 34,
  aux_sym_document_repeat1 = 35,
  aux_sym_comment_repeat1 = 36,
  aux_sym_entry_repeat1 = 37,
  aux_sym_entry_repeat2 = 38,
  aux_sym_fieldset_repeat1 = 39,
  aux_sym_list_repeat1 = 40,
  alias_sym_template = 41,
  alias_sym_value = 42,
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
  [sym__sectionAscend] = "_sectionAscend",
  [sym__sectionDescend] = "_sectionDescend",
  [sym_escapedKey] = "key",
  [sym_escapeOperator] = "escapeOperator",
  [sym_multilineFieldKey] = "multilineFieldKey",
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
  [sym_section] = "section",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_entry_repeat2] = "entry_repeat2",
  [aux_sym_fieldset_repeat1] = "fieldset_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
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
  [3] = {.lex_state = 0, .external_lex_state = 4},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0, .external_lex_state = 5},
  [7] = {.lex_state = 4, .external_lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 6},
  [11] = {.lex_state = 0, .external_lex_state = 5},
  [12] = {.lex_state = 0, .external_lex_state = 5},
  [13] = {.lex_state = 17, .external_lex_state = 6},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 4, .external_lex_state = 2},
  [16] = {.lex_state = 16, .external_lex_state = 5},
  [17] = {.lex_state = 4, .external_lex_state = 2},
  [18] = {.lex_state = 4, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 5},
  [20] = {.lex_state = 0, .external_lex_state = 7},
  [21] = {.lex_state = 4, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 5},
  [24] = {.lex_state = 0, .external_lex_state = 5},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 0, .external_lex_state = 8},
  [28] = {.lex_state = 0, .external_lex_state = 6},
  [29] = {.lex_state = 4, .external_lex_state = 9},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 2, .external_lex_state = 2},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3, .external_lex_state = 2},
  [36] = {.lex_state = 4, .external_lex_state = 2},
  [37] = {.lex_state = 2, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 6},
  [39] = {.lex_state = 3, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 4},
  [41] = {.lex_state = 0, .external_lex_state = 5},
  [42] = {.lex_state = 4, .external_lex_state = 2},
  [43] = {.lex_state = 4, .external_lex_state = 9},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 4, .external_lex_state = 2},
  [46] = {.lex_state = 2, .external_lex_state = 2},
  [47] = {.lex_state = 2, .external_lex_state = 6},
  [48] = {.lex_state = 0, .external_lex_state = 5},
  [49] = {.lex_state = 0, .external_lex_state = 5},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 3, .external_lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4, .external_lex_state = 2},
  [54] = {.lex_state = 4, .external_lex_state = 6},
  [55] = {.lex_state = 2, .external_lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1, .external_lex_state = 6},
  [58] = {.lex_state = 3, .external_lex_state = 2},
  [59] = {.lex_state = 4, .external_lex_state = 2},
  [60] = {.lex_state = 2, .external_lex_state = 2},
  [61] = {.lex_state = 3, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 5},
  [63] = {.lex_state = 4, .external_lex_state = 2},
  [64] = {.lex_state = 4, .external_lex_state = 9},
  [65] = {.lex_state = 3, .external_lex_state = 2},
  [66] = {.lex_state = 1, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 5},
  [68] = {.lex_state = 4, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 9},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 3, .external_lex_state = 2},
  [73] = {.lex_state = 4, .external_lex_state = 2},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 6},
  [76] = {.lex_state = 4, .external_lex_state = 9},
  [77] = {.lex_state = 4, .external_lex_state = 9},
  [78] = {.lex_state = 1, .external_lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1, .external_lex_state = 6},
  [81] = {.lex_state = 1, .external_lex_state = 9},
  [82] = {.lex_state = 2, .external_lex_state = 9},
  [83] = {.lex_state = 3, .external_lex_state = 9},
  [84] = {.lex_state = 4, .external_lex_state = 9},
  [85] = {.lex_state = 2, .external_lex_state = 9},
  [86] = {.lex_state = 3, .external_lex_state = 9},
  [87] = {.lex_state = 4, .external_lex_state = 9},
  [88] = {.lex_state = 4, .external_lex_state = 9},
  [89] = {.lex_state = 2, .external_lex_state = 9},
  [90] = {.lex_state = 1, .external_lex_state = 2},
  [91] = {.lex_state = 4, .external_lex_state = 9},
  [92] = {.lex_state = 2, .external_lex_state = 9},
  [93] = {.lex_state = 2, .external_lex_state = 6},
  [94] = {.lex_state = 1, .external_lex_state = 2},
  [95] = {.lex_state = 4, .external_lex_state = 9},
  [96] = {.lex_state = 2, .external_lex_state = 9},
  [97] = {.lex_state = 3, .external_lex_state = 9},
  [98] = {.lex_state = 4, .external_lex_state = 9},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 1, .external_lex_state = 9},
  [101] = {.lex_state = 4, .external_lex_state = 9},
  [102] = {.lex_state = 4, .external_lex_state = 9},
  [103] = {.lex_state = 1, .external_lex_state = 9},
  [104] = {.lex_state = 3, .external_lex_state = 9},
  [105] = {.lex_state = 4, .external_lex_state = 9},
  [106] = {.lex_state = 3, .external_lex_state = 9},
  [107] = {.lex_state = 4, .external_lex_state = 9},
  [108] = {.lex_state = 4, .external_lex_state = 9},
  [109] = {.lex_state = 4, .external_lex_state = 9},
  [110] = {.lex_state = 3, .external_lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 3, .external_lex_state = 9},
  [113] = {.lex_state = 3, .external_lex_state = 9},
  [114] = {.lex_state = 2, .external_lex_state = 6},
  [115] = {.lex_state = 2, .external_lex_state = 6},
  [116] = {.lex_state = 2, .external_lex_state = 6},
  [117] = {.lex_state = 1, .external_lex_state = 9},
  [118] = {.lex_state = 4, .external_lex_state = 6},
  [119] = {.lex_state = 1, .external_lex_state = 9},
  [120] = {.lex_state = 1, .external_lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4, .external_lex_state = 6},
  [125] = {.lex_state = 4, .external_lex_state = 6},
  [126] = {.lex_state = 4, .external_lex_state = 6},
  [127] = {.lex_state = 0, .external_lex_state = 5},
  [128] = {.lex_state = 0, .external_lex_state = 6},
  [129] = {.lex_state = 0, .external_lex_state = 5},
  [130] = {.lex_state = 16, .external_lex_state = 5},
  [131] = {.lex_state = 0, .external_lex_state = 5},
  [132] = {.lex_state = 0, .external_lex_state = 5},
  [133] = {.lex_state = 4, .external_lex_state = 9},
  [134] = {.lex_state = 1, .external_lex_state = 6},
  [135] = {.lex_state = 4, .external_lex_state = 9},
  [136] = {.lex_state = 2, .external_lex_state = 6},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 4, .external_lex_state = 6},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 4, .external_lex_state = 9},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 4, .external_lex_state = 9},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 0, .external_lex_state = 5},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 5},
  [162] = {.lex_state = 16},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 16},
  [167] = {.lex_state = 16},
  [168] = {.lex_state = 16},
  [169] = {.lex_state = 17, .external_lex_state = 6},
  [170] = {.lex_state = 0, .external_lex_state = 8},
  [171] = {.lex_state = 16},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 7},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token__endOfLine = 0,
  ts_external_token__multilineFieldEnd = 1,
  ts_external_token__sectionAscend = 2,
  ts_external_token__sectionDescend = 3,
  ts_external_token_escapedKey = 4,
  ts_external_token_escapeOperator = 5,
  ts_external_token_multilineFieldKey = 6,
  ts_external_token_multilineFieldOperator = 7,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__endOfLine] = sym__endOfLine,
  [ts_external_token__multilineFieldEnd] = sym__multilineFieldEnd,
  [ts_external_token__sectionAscend] = sym__sectionAscend,
  [ts_external_token__sectionDescend] = sym__sectionDescend,
  [ts_external_token_escapedKey] = sym_escapedKey,
  [ts_external_token_escapeOperator] = sym_escapeOperator,
  [ts_external_token_multilineFieldKey] = sym_multilineFieldKey,
  [ts_external_token_multilineFieldOperator] = sym_multilineFieldOperator,
};

static bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__endOfLine] = true,
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token_escapedKey] = true,
    [ts_external_token__multilineFieldEnd] = true,
    [ts_external_token_escapeOperator] = true,
    [ts_external_token__sectionAscend] = true,
    [ts_external_token_multilineFieldKey] = true,
    [ts_external_token__sectionDescend] = true,
  },
  [2] = {
    [ts_external_token__sectionDescend] = true,
    [ts_external_token_escapeOperator] = true,
    [ts_external_token_multilineFieldOperator] = true,
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
    [ts_external_token__multilineFieldEnd] = true,
  },
  [8] = {
    [ts_external_token_multilineFieldOperator] = true,
  },
  [9] = {
    [ts_external_token_escapeOperator] = true,
    [ts_external_token__sectionAscend] = true,
    [ts_external_token_multilineFieldOperator] = true,
    [ts_external_token__sectionDescend] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__endOfLine] = ACTIONS(1),
    [sym_entryOperator] = ACTIONS(1),
    [sym__emptyLine] = ACTIONS(1),
    [sym_spacedContinuationOperator] = ACTIONS(1),
    [sym_escapeOperator] = ACTIONS(1),
    [sym__sectionAscend] = ACTIONS(1),
    [sym_elementOperator] = ACTIONS(1),
    [sym_deepCopyOperator] = ACTIONS(1),
    [sym_copyOperator] = ACTIONS(1),
    [sym_directContinuationOperator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_multilineFieldOperator] = ACTIONS(1),
    [sym_escapedKey] = ACTIONS(1),
    [sym__multilineFieldEnd] = ACTIONS(1),
    [sym_itemOperator] = ACTIONS(1),
    [sym_sectionOperator] = ACTIONS(1),
    [sym_commentOperator] = ACTIONS(1),
    [sym_multilineFieldKey] = ACTIONS(1),
    [sym__sectionDescend] = ACTIONS(1),
  },
  [1] = {
    [sym_list] = STATE(7),
    [sym__escapedOrUnescapedKey] = STATE(6),
    [sym_empty] = STATE(7),
    [sym_section] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [sym_document] = STATE(8),
    [sym_comment] = STATE(7),
    [sym_field] = STATE(7),
    [sym_fieldset] = STATE(7),
    [aux_sym_comment_repeat1] = STATE(9),
    [sym_element] = STATE(7),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(9),
    [sym__emptyLine] = ACTIONS(11),
    [sym_commentOperator] = ACTIONS(13),
    [sym__sectionDescend] = ACTIONS(15),
  },
  [2] = {
    [sym_escapedKey] = ACTIONS(17),
  },
  [3] = {
    [sym_multilineFieldKey] = ACTIONS(19),
  },
  [4] = {
    [sym_token] = ACTIONS(21),
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
    [sym_list] = STATE(17),
    [sym__escapedOrUnescapedKey] = STATE(6),
    [sym_empty] = STATE(17),
    [sym_section] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_field] = STATE(17),
    [sym_fieldset] = STATE(17),
    [aux_sym_comment_repeat1] = STATE(9),
    [sym_element] = STATE(17),
    [sym_key] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(9),
    [sym__emptyLine] = ACTIONS(33),
    [sym_commentOperator] = ACTIONS(13),
    [sym__sectionDescend] = ACTIONS(15),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [9] = {
    [aux_sym_comment_repeat1] = STATE(18),
    [sym_key] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(13),
    [sym_escapeOperator] = ACTIONS(39),
    [sym__emptyLine] = ACTIONS(37),
    [sym_multilineFieldOperator] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym__sectionDescend] = ACTIONS(39),
  },
  [10] = {
    [sym_escapeOperator] = ACTIONS(41),
  },
  [11] = {
    [sym__endOfLine] = ACTIONS(43),
  },
  [12] = {
    [sym__endOfLine] = ACTIONS(45),
  },
  [13] = {
    [sym__escapedOrUnescapedSectionKey] = STATE(23),
    [sym_escapeOperator] = ACTIONS(47),
    [sym_sectionKey] = ACTIONS(49),
  },
  [14] = {
    [sym_token] = ACTIONS(51),
  },
  [15] = {
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(53),
    [sym_escapeOperator] = ACTIONS(55),
    [sym__emptyLine] = ACTIONS(53),
    [sym_multilineFieldOperator] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__sectionDescend] = ACTIONS(55),
  },
  [16] = {
    [sym__endOfLine] = ACTIONS(57),
    [sym_token] = ACTIONS(59),
  },
  [17] = {
    [sym_list] = STATE(17),
    [sym__escapedOrUnescapedKey] = STATE(6),
    [sym_empty] = STATE(17),
    [sym_section] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_field] = STATE(17),
    [sym_fieldset] = STATE(17),
    [aux_sym_comment_repeat1] = STATE(9),
    [sym_element] = STATE(17),
    [sym_key] = ACTIONS(61),
    [sym_commentOperator] = ACTIONS(64),
    [sym_escapeOperator] = ACTIONS(67),
    [sym__emptyLine] = ACTIONS(70),
    [sym_multilineFieldOperator] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym__sectionDescend] = ACTIONS(78),
  },
  [18] = {
    [aux_sym_comment_repeat1] = STATE(18),
    [sym_key] = ACTIONS(81),
    [sym_commentOperator] = ACTIONS(83),
    [sym_escapeOperator] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(81),
    [sym_multilineFieldOperator] = ACTIONS(86),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym__sectionDescend] = ACTIONS(86),
  },
  [19] = {
    [sym_elementOperator] = ACTIONS(88),
    [sym__endOfLine] = ACTIONS(88),
    [sym_copyOperator] = ACTIONS(88),
  },
  [20] = {
    [sym__multilineFieldEnd] = ACTIONS(90),
  },
  [21] = {
    [sym_key] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(92),
    [sym_escapeOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(92),
    [sym_multilineFieldOperator] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(94),
  },
  [22] = {
    [sym_escapedKey] = ACTIONS(96),
  },
  [23] = {
    [sym__endOfLine] = ACTIONS(98),
    [sym_deepCopyOperator] = ACTIONS(100),
    [sym_copyOperator] = ACTIONS(102),
  },
  [24] = {
    [sym__endOfLine] = ACTIONS(104),
  },
  [25] = {
    [sym__escapedOrUnescapedKey] = STATE(34),
    [aux_sym_entry_repeat2] = STATE(35),
    [aux_sym_fieldset_repeat1] = STATE(36),
    [sym_entry] = STATE(36),
    [aux_sym_list_repeat1] = STATE(37),
    [sym_comment] = STATE(38),
    [aux_sym_comment_repeat1] = STATE(75),
    [aux_sym_entry_repeat1] = STATE(38),
    [sym_continuation] = STATE(35),
    [sym_item] = STATE(37),
    [sym_directContinuationOperator] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_multilineFieldOperator] = ACTIONS(108),
    [sym__emptyLine] = ACTIONS(110),
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_itemOperator] = ACTIONS(113),
    [sym_key] = ACTIONS(115),
    [sym_commentOperator] = ACTIONS(118),
    [sym_escapeOperator] = ACTIONS(121),
    [sym__sectionDescend] = ACTIONS(108),
  },
  [26] = {
    [sym__endOfLine] = ACTIONS(124),
  },
  [27] = {
    [sym_multilineFieldOperator] = ACTIONS(126),
  },
  [28] = {
    [sym_escapeOperator] = ACTIONS(128),
  },
  [29] = {
    [sym_list] = STATE(43),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(43),
    [sym_section] = STATE(43),
    [aux_sym_document_repeat1] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_field] = STATE(43),
    [sym_fieldset] = STATE(43),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(43),
    [sym_key] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(134),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(138),
    [sym__sectionDescend] = ACTIONS(140),
  },
  [30] = {
    [sym_token] = ACTIONS(142),
  },
  [31] = {
    [sym__escapedOrUnescapedKey] = STATE(34),
    [aux_sym_fieldset_repeat1] = STATE(45),
    [sym_entry] = STATE(45),
    [aux_sym_list_repeat1] = STATE(46),
    [sym_comment] = STATE(47),
    [aux_sym_comment_repeat1] = STATE(114),
    [aux_sym_entry_repeat1] = STATE(47),
    [sym_item] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_multilineFieldOperator] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(146),
    [sym_itemOperator] = ACTIONS(113),
    [sym_key] = ACTIONS(149),
    [sym_commentOperator] = ACTIONS(152),
    [sym_escapeOperator] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(144),
  },
  [32] = {
    [sym_token] = ACTIONS(158),
  },
  [33] = {
    [sym_token] = ACTIONS(160),
  },
  [34] = {
    [sym_entryOperator] = ACTIONS(162),
  },
  [35] = {
    [sym_comment] = STATE(52),
    [aux_sym_entry_repeat2] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(52),
    [sym_continuation] = STATE(51),
    [sym_directContinuationOperator] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(164),
    [sym_multilineFieldOperator] = ACTIONS(164),
    [sym__emptyLine] = ACTIONS(166),
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_key] = ACTIONS(169),
    [sym_commentOperator] = ACTIONS(171),
    [sym_escapeOperator] = ACTIONS(164),
    [sym__sectionDescend] = ACTIONS(164),
  },
  [36] = {
    [sym_comment] = STATE(54),
    [sym__escapedOrUnescapedKey] = STATE(34),
    [aux_sym_fieldset_repeat1] = STATE(53),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(54),
    [sym_entry] = STATE(53),
    [sym_key] = ACTIONS(174),
    [sym_commentOperator] = ACTIONS(177),
    [sym_escapeOperator] = ACTIONS(180),
    [sym__emptyLine] = ACTIONS(183),
    [sym_multilineFieldOperator] = ACTIONS(186),
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym__sectionDescend] = ACTIONS(186),
  },
  [37] = {
    [sym_comment] = STATE(56),
    [sym_item] = STATE(55),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(56),
    [aux_sym_list_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_multilineFieldOperator] = ACTIONS(188),
    [sym__emptyLine] = ACTIONS(190),
    [sym_itemOperator] = ACTIONS(113),
    [sym_key] = ACTIONS(193),
    [sym_commentOperator] = ACTIONS(195),
    [sym_escapeOperator] = ACTIONS(188),
    [sym__sectionDescend] = ACTIONS(188),
  },
  [38] = {
    [sym_comment] = STATE(57),
    [sym__escapedOrUnescapedKey] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(75),
    [aux_sym_entry_repeat1] = STATE(57),
    [sym_continuation] = STATE(58),
    [sym_entry] = STATE(59),
    [sym_item] = STATE(60),
    [sym_directContinuationOperator] = ACTIONS(106),
    [sym_key] = ACTIONS(198),
    [sym_escapeOperator] = ACTIONS(200),
    [sym_commentOperator] = ACTIONS(202),
    [sym__emptyLine] = ACTIONS(204),
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_itemOperator] = ACTIONS(113),
  },
  [39] = {
    [sym_comment] = STATE(52),
    [aux_sym_entry_repeat2] = STATE(61),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(52),
    [sym_continuation] = STATE(61),
    [sym_directContinuationOperator] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_multilineFieldOperator] = ACTIONS(206),
    [sym__emptyLine] = ACTIONS(208),
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_key] = ACTIONS(211),
    [sym_commentOperator] = ACTIONS(213),
    [sym_escapeOperator] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(206),
  },
  [40] = {
    [sym_multilineFieldKey] = ACTIONS(216),
  },
  [41] = {
    [sym_deepCopyOperator] = ACTIONS(218),
    [sym__endOfLine] = ACTIONS(218),
    [sym_copyOperator] = ACTIONS(220),
  },
  [42] = {
    [sym_key] = ACTIONS(222),
    [sym_commentOperator] = ACTIONS(222),
    [sym_escapeOperator] = ACTIONS(224),
    [sym__emptyLine] = ACTIONS(222),
    [sym_multilineFieldOperator] = ACTIONS(224),
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym__sectionDescend] = ACTIONS(224),
  },
  [43] = {
    [sym_list] = STATE(77),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(77),
    [sym_section] = STATE(77),
    [aux_sym_document_repeat1] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_field] = STATE(77),
    [sym_fieldset] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(77),
    [sym_key] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(226),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(228),
    [sym__sectionDescend] = ACTIONS(140),
  },
  [44] = {
    [sym__endOfLine] = ACTIONS(230),
  },
  [45] = {
    [sym_comment] = STATE(54),
    [sym__escapedOrUnescapedKey] = STATE(34),
    [aux_sym_fieldset_repeat1] = STATE(53),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(54),
    [sym_entry] = STATE(53),
    [sym_key] = ACTIONS(232),
    [sym_commentOperator] = ACTIONS(235),
    [sym_escapeOperator] = ACTIONS(238),
    [sym__emptyLine] = ACTIONS(241),
    [sym_multilineFieldOperator] = ACTIONS(244),
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym__sectionDescend] = ACTIONS(244),
  },
  [46] = {
    [sym_comment] = STATE(56),
    [sym_item] = STATE(55),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(56),
    [aux_sym_list_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(246),
    [sym_multilineFieldOperator] = ACTIONS(246),
    [sym__emptyLine] = ACTIONS(248),
    [sym_itemOperator] = ACTIONS(113),
    [sym_key] = ACTIONS(251),
    [sym_commentOperator] = ACTIONS(253),
    [sym_escapeOperator] = ACTIONS(246),
    [sym__sectionDescend] = ACTIONS(246),
  },
  [47] = {
    [sym_comment] = STATE(93),
    [sym__escapedOrUnescapedKey] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(114),
    [aux_sym_entry_repeat1] = STATE(93),
    [sym_entry] = STATE(59),
    [sym_item] = STATE(60),
    [sym_key] = ACTIONS(198),
    [sym_escapeOperator] = ACTIONS(200),
    [sym_commentOperator] = ACTIONS(256),
    [sym__emptyLine] = ACTIONS(258),
    [sym_itemOperator] = ACTIONS(113),
  },
  [48] = {
    [sym__endOfLine] = ACTIONS(260),
  },
  [49] = {
    [sym__endOfLine] = ACTIONS(262),
  },
  [50] = {
    [sym_token] = ACTIONS(264),
  },
  [51] = {
    [sym_comment] = STATE(52),
    [aux_sym_entry_repeat2] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(52),
    [sym_continuation] = STATE(51),
    [sym_directContinuationOperator] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(271),
    [sym_spacedContinuationOperator] = ACTIONS(266),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(276),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [52] = {
    [sym_comment] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_continuation] = STATE(58),
    [sym_directContinuationOperator] = ACTIONS(279),
    [sym_commentOperator] = ACTIONS(281),
    [sym__emptyLine] = ACTIONS(283),
    [sym_spacedContinuationOperator] = ACTIONS(279),
  },
  [53] = {
    [sym_comment] = STATE(54),
    [sym__escapedOrUnescapedKey] = STATE(34),
    [aux_sym_fieldset_repeat1] = STATE(53),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(54),
    [sym_entry] = STATE(53),
    [sym_key] = ACTIONS(285),
    [sym_commentOperator] = ACTIONS(288),
    [sym_escapeOperator] = ACTIONS(291),
    [sym__emptyLine] = ACTIONS(294),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym__sectionDescend] = ACTIONS(297),
  },
  [54] = {
    [sym_comment] = STATE(118),
    [sym__escapedOrUnescapedKey] = STATE(34),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(118),
    [sym_entry] = STATE(59),
    [sym_key] = ACTIONS(198),
    [sym_escapeOperator] = ACTIONS(200),
    [sym_commentOperator] = ACTIONS(299),
    [sym__emptyLine] = ACTIONS(301),
  },
  [55] = {
    [sym_comment] = STATE(56),
    [sym_item] = STATE(55),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(56),
    [aux_sym_list_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym_multilineFieldOperator] = ACTIONS(303),
    [sym__emptyLine] = ACTIONS(305),
    [sym_itemOperator] = ACTIONS(308),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(313),
    [sym_escapeOperator] = ACTIONS(303),
    [sym__sectionDescend] = ACTIONS(303),
  },
  [56] = {
    [sym_comment] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_item] = STATE(60),
    [sym__emptyLine] = ACTIONS(283),
    [sym_itemOperator] = ACTIONS(316),
    [sym_commentOperator] = ACTIONS(281),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [aux_sym_entry_repeat1] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(75),
    [sym_directContinuationOperator] = ACTIONS(318),
    [sym_key] = ACTIONS(318),
    [sym_commentOperator] = ACTIONS(320),
    [sym_escapeOperator] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(325),
    [sym_spacedContinuationOperator] = ACTIONS(318),
    [sym_itemOperator] = ACTIONS(318),
  },
  [58] = {
    [sym_directContinuationOperator] = ACTIONS(274),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(274),
    [sym_spacedContinuationOperator] = ACTIONS(274),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(274),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [59] = {
    [sym_key] = ACTIONS(328),
    [sym_commentOperator] = ACTIONS(328),
    [sym_escapeOperator] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(328),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym__sectionDescend] = ACTIONS(297),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym_multilineFieldOperator] = ACTIONS(303),
    [sym__emptyLine] = ACTIONS(311),
    [sym_itemOperator] = ACTIONS(311),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [sym_escapeOperator] = ACTIONS(303),
    [sym__sectionDescend] = ACTIONS(303),
  },
  [61] = {
    [sym_comment] = STATE(52),
    [aux_sym_entry_repeat2] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(52),
    [sym_continuation] = STATE(51),
    [sym_directContinuationOperator] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(330),
    [sym_multilineFieldOperator] = ACTIONS(330),
    [sym__emptyLine] = ACTIONS(332),
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_key] = ACTIONS(335),
    [sym_commentOperator] = ACTIONS(337),
    [sym_escapeOperator] = ACTIONS(330),
    [sym__sectionDescend] = ACTIONS(330),
  },
  [62] = {
    [sym__endOfLine] = ACTIONS(340),
  },
  [63] = {
    [sym_key] = ACTIONS(342),
    [sym_commentOperator] = ACTIONS(342),
    [sym_escapeOperator] = ACTIONS(344),
    [sym__emptyLine] = ACTIONS(342),
    [sym_multilineFieldOperator] = ACTIONS(344),
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym__sectionDescend] = ACTIONS(344),
  },
  [64] = {
    [sym_list] = STATE(70),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(70),
    [sym_section] = STATE(70),
    [aux_sym_document_repeat1] = STATE(70),
    [sym_comment] = STATE(70),
    [sym_field] = STATE(70),
    [sym_fieldset] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(70),
    [sym_key] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(346),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(348),
    [sym__sectionDescend] = ACTIONS(140),
  },
  [65] = {
    [sym_directContinuationOperator] = ACTIONS(350),
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_multilineFieldOperator] = ACTIONS(352),
    [sym__emptyLine] = ACTIONS(350),
    [sym_spacedContinuationOperator] = ACTIONS(350),
    [sym_key] = ACTIONS(350),
    [sym_commentOperator] = ACTIONS(350),
    [sym_escapeOperator] = ACTIONS(352),
    [sym__sectionDescend] = ACTIONS(352),
  },
  [66] = {
    [sym_comment] = STATE(139),
    [aux_sym_entry_repeat2] = STATE(71),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(139),
    [sym_continuation] = STATE(71),
    [sym_directContinuationOperator] = ACTIONS(354),
    [ts_builtin_sym_end] = ACTIONS(356),
    [sym_multilineFieldOperator] = ACTIONS(356),
    [sym__emptyLine] = ACTIONS(358),
    [sym_spacedContinuationOperator] = ACTIONS(354),
    [sym_itemOperator] = ACTIONS(361),
    [sym_key] = ACTIONS(361),
    [sym_commentOperator] = ACTIONS(363),
    [sym_escapeOperator] = ACTIONS(356),
    [sym__sectionDescend] = ACTIONS(356),
  },
  [67] = {
    [sym__endOfLine] = ACTIONS(366),
  },
  [68] = {
    [sym_key] = ACTIONS(368),
    [sym_commentOperator] = ACTIONS(368),
    [sym_escapeOperator] = ACTIONS(370),
    [sym__emptyLine] = ACTIONS(368),
    [sym_multilineFieldOperator] = ACTIONS(370),
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym__sectionDescend] = ACTIONS(370),
  },
  [69] = {
    [sym_key] = ACTIONS(372),
    [sym_commentOperator] = ACTIONS(372),
    [sym_escapeOperator] = ACTIONS(374),
    [sym__emptyLine] = ACTIONS(372),
    [sym_multilineFieldOperator] = ACTIONS(374),
    [ts_builtin_sym_end] = ACTIONS(374),
    [sym__sectionDescend] = ACTIONS(374),
  },
  [70] = {
    [sym_list] = STATE(77),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(77),
    [sym_section] = STATE(77),
    [aux_sym_document_repeat1] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_field] = STATE(77),
    [sym_fieldset] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(77),
    [sym_key] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(226),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(376),
    [sym__sectionDescend] = ACTIONS(140),
  },
  [71] = {
    [sym_comment] = STATE(139),
    [aux_sym_entry_repeat2] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(139),
    [sym_continuation] = STATE(90),
    [sym_directContinuationOperator] = ACTIONS(354),
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym_multilineFieldOperator] = ACTIONS(378),
    [sym__emptyLine] = ACTIONS(380),
    [sym_spacedContinuationOperator] = ACTIONS(354),
    [sym_itemOperator] = ACTIONS(383),
    [sym_key] = ACTIONS(383),
    [sym_commentOperator] = ACTIONS(385),
    [sym_escapeOperator] = ACTIONS(378),
    [sym__sectionDescend] = ACTIONS(378),
  },
  [72] = {
    [sym_comment] = STATE(52),
    [aux_sym_entry_repeat2] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(52),
    [sym_continuation] = STATE(74),
    [sym_directContinuationOperator] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(388),
    [sym_multilineFieldOperator] = ACTIONS(388),
    [sym__emptyLine] = ACTIONS(390),
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_key] = ACTIONS(393),
    [sym_commentOperator] = ACTIONS(395),
    [sym_escapeOperator] = ACTIONS(388),
    [sym__sectionDescend] = ACTIONS(388),
  },
  [73] = {
    [sym_key] = ACTIONS(398),
    [sym_commentOperator] = ACTIONS(398),
    [sym_escapeOperator] = ACTIONS(400),
    [sym__emptyLine] = ACTIONS(398),
    [sym_multilineFieldOperator] = ACTIONS(400),
    [ts_builtin_sym_end] = ACTIONS(400),
    [sym__sectionDescend] = ACTIONS(400),
  },
  [74] = {
    [sym_comment] = STATE(52),
    [aux_sym_entry_repeat2] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(52),
    [sym_continuation] = STATE(51),
    [sym_directContinuationOperator] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(402),
    [sym_multilineFieldOperator] = ACTIONS(402),
    [sym__emptyLine] = ACTIONS(404),
    [sym_spacedContinuationOperator] = ACTIONS(106),
    [sym_key] = ACTIONS(407),
    [sym_commentOperator] = ACTIONS(409),
    [sym_escapeOperator] = ACTIONS(402),
    [sym__sectionDescend] = ACTIONS(402),
  },
  [75] = {
    [aux_sym_comment_repeat1] = STATE(78),
    [sym_directContinuationOperator] = ACTIONS(37),
    [sym_key] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(202),
    [sym_escapeOperator] = ACTIONS(39),
    [sym__emptyLine] = ACTIONS(37),
    [sym_spacedContinuationOperator] = ACTIONS(37),
    [sym_itemOperator] = ACTIONS(37),
  },
  [76] = {
    [sym_key] = ACTIONS(53),
    [sym_commentOperator] = ACTIONS(53),
    [sym__sectionAscend] = ACTIONS(55),
    [sym__emptyLine] = ACTIONS(53),
    [sym_escapeOperator] = ACTIONS(55),
    [sym_multilineFieldOperator] = ACTIONS(55),
    [sym__sectionDescend] = ACTIONS(55),
  },
  [77] = {
    [sym_list] = STATE(77),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(77),
    [sym_section] = STATE(77),
    [aux_sym_document_repeat1] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_field] = STATE(77),
    [sym_fieldset] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(77),
    [sym_key] = ACTIONS(412),
    [sym_commentOperator] = ACTIONS(415),
    [sym__sectionAscend] = ACTIONS(76),
    [sym__emptyLine] = ACTIONS(418),
    [sym_escapeOperator] = ACTIONS(67),
    [sym_multilineFieldOperator] = ACTIONS(421),
    [sym__sectionDescend] = ACTIONS(424),
  },
  [78] = {
    [aux_sym_comment_repeat1] = STATE(78),
    [sym_directContinuationOperator] = ACTIONS(81),
    [sym_key] = ACTIONS(81),
    [sym_commentOperator] = ACTIONS(427),
    [sym_escapeOperator] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(81),
    [sym_spacedContinuationOperator] = ACTIONS(81),
    [sym_itemOperator] = ACTIONS(81),
  },
  [79] = {
    [sym_entryOperator] = ACTIONS(88),
  },
  [80] = {
    [sym_directContinuationOperator] = ACTIONS(92),
    [sym_key] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(92),
    [sym_escapeOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(92),
    [sym_spacedContinuationOperator] = ACTIONS(92),
    [sym_itemOperator] = ACTIONS(92),
  },
  [81] = {
    [sym__escapedOrUnescapedKey] = STATE(172),
    [aux_sym_entry_repeat2] = STATE(83),
    [aux_sym_fieldset_repeat1] = STATE(84),
    [sym_entry] = STATE(84),
    [aux_sym_list_repeat1] = STATE(85),
    [sym_comment] = STATE(134),
    [aux_sym_comment_repeat1] = STATE(75),
    [aux_sym_entry_repeat1] = STATE(134),
    [sym_continuation] = STATE(83),
    [sym_item] = STATE(85),
    [sym_directContinuationOperator] = ACTIONS(430),
    [sym_multilineFieldOperator] = ACTIONS(108),
    [sym__emptyLine] = ACTIONS(432),
    [sym_spacedContinuationOperator] = ACTIONS(430),
    [sym_itemOperator] = ACTIONS(435),
    [sym_key] = ACTIONS(437),
    [sym_commentOperator] = ACTIONS(118),
    [sym__sectionAscend] = ACTIONS(108),
    [sym_escapeOperator] = ACTIONS(121),
    [sym__sectionDescend] = ACTIONS(108),
  },
  [82] = {
    [sym__escapedOrUnescapedKey] = STATE(172),
    [aux_sym_fieldset_repeat1] = STATE(88),
    [sym_entry] = STATE(88),
    [aux_sym_list_repeat1] = STATE(89),
    [sym_comment] = STATE(136),
    [aux_sym_comment_repeat1] = STATE(114),
    [aux_sym_entry_repeat1] = STATE(136),
    [sym_item] = STATE(89),
    [sym_multilineFieldOperator] = ACTIONS(144),
    [sym__emptyLine] = ACTIONS(440),
    [sym_itemOperator] = ACTIONS(435),
    [sym_key] = ACTIONS(443),
    [sym_commentOperator] = ACTIONS(152),
    [sym__sectionAscend] = ACTIONS(144),
    [sym_escapeOperator] = ACTIONS(155),
    [sym__sectionDescend] = ACTIONS(144),
  },
  [83] = {
    [sym_comment] = STATE(148),
    [aux_sym_entry_repeat2] = STATE(110),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(148),
    [sym_continuation] = STATE(110),
    [sym_directContinuationOperator] = ACTIONS(430),
    [sym_multilineFieldOperator] = ACTIONS(164),
    [sym__emptyLine] = ACTIONS(446),
    [sym_spacedContinuationOperator] = ACTIONS(430),
    [sym_key] = ACTIONS(169),
    [sym_commentOperator] = ACTIONS(171),
    [sym__sectionAscend] = ACTIONS(164),
    [sym_escapeOperator] = ACTIONS(164),
    [sym__sectionDescend] = ACTIONS(164),
  },
  [84] = {
    [sym_comment] = STATE(140),
    [sym__escapedOrUnescapedKey] = STATE(172),
    [aux_sym_fieldset_repeat1] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(140),
    [sym_entry] = STATE(91),
    [sym_key] = ACTIONS(449),
    [sym_commentOperator] = ACTIONS(177),
    [sym__sectionAscend] = ACTIONS(186),
    [sym__emptyLine] = ACTIONS(452),
    [sym_escapeOperator] = ACTIONS(180),
    [sym_multilineFieldOperator] = ACTIONS(186),
    [sym__sectionDescend] = ACTIONS(186),
  },
  [85] = {
    [sym_comment] = STATE(141),
    [sym_item] = STATE(92),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(141),
    [aux_sym_list_repeat1] = STATE(92),
    [sym_multilineFieldOperator] = ACTIONS(188),
    [sym__emptyLine] = ACTIONS(455),
    [sym_itemOperator] = ACTIONS(435),
    [sym_key] = ACTIONS(193),
    [sym_commentOperator] = ACTIONS(195),
    [sym__sectionAscend] = ACTIONS(188),
    [sym_escapeOperator] = ACTIONS(188),
    [sym__sectionDescend] = ACTIONS(188),
  },
  [86] = {
    [sym_comment] = STATE(148),
    [aux_sym_entry_repeat2] = STATE(97),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(148),
    [sym_continuation] = STATE(97),
    [sym_directContinuationOperator] = ACTIONS(430),
    [sym_multilineFieldOperator] = ACTIONS(206),
    [sym__emptyLine] = ACTIONS(458),
    [sym_spacedContinuationOperator] = ACTIONS(430),
    [sym_key] = ACTIONS(211),
    [sym_commentOperator] = ACTIONS(213),
    [sym__sectionAscend] = ACTIONS(206),
    [sym_escapeOperator] = ACTIONS(206),
    [sym__sectionDescend] = ACTIONS(206),
  },
  [87] = {
    [sym_key] = ACTIONS(222),
    [sym_commentOperator] = ACTIONS(222),
    [sym__sectionAscend] = ACTIONS(224),
    [sym__emptyLine] = ACTIONS(222),
    [sym_escapeOperator] = ACTIONS(224),
    [sym_multilineFieldOperator] = ACTIONS(224),
    [sym__sectionDescend] = ACTIONS(224),
  },
  [88] = {
    [sym_comment] = STATE(140),
    [sym__escapedOrUnescapedKey] = STATE(172),
    [aux_sym_fieldset_repeat1] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(140),
    [sym_entry] = STATE(91),
    [sym_key] = ACTIONS(461),
    [sym_commentOperator] = ACTIONS(235),
    [sym__sectionAscend] = ACTIONS(244),
    [sym__emptyLine] = ACTIONS(464),
    [sym_escapeOperator] = ACTIONS(238),
    [sym_multilineFieldOperator] = ACTIONS(244),
    [sym__sectionDescend] = ACTIONS(244),
  },
  [89] = {
    [sym_comment] = STATE(141),
    [sym_item] = STATE(92),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(141),
    [aux_sym_list_repeat1] = STATE(92),
    [sym_multilineFieldOperator] = ACTIONS(246),
    [sym__emptyLine] = ACTIONS(467),
    [sym_itemOperator] = ACTIONS(435),
    [sym_key] = ACTIONS(251),
    [sym_commentOperator] = ACTIONS(253),
    [sym__sectionAscend] = ACTIONS(246),
    [sym_escapeOperator] = ACTIONS(246),
    [sym__sectionDescend] = ACTIONS(246),
  },
  [90] = {
    [sym_comment] = STATE(139),
    [aux_sym_entry_repeat2] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(139),
    [sym_continuation] = STATE(90),
    [sym_directContinuationOperator] = ACTIONS(470),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(473),
    [sym_spacedContinuationOperator] = ACTIONS(470),
    [sym_itemOperator] = ACTIONS(274),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(276),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [91] = {
    [sym_comment] = STATE(140),
    [sym__escapedOrUnescapedKey] = STATE(172),
    [aux_sym_fieldset_repeat1] = STATE(91),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(140),
    [sym_entry] = STATE(91),
    [sym_key] = ACTIONS(476),
    [sym_commentOperator] = ACTIONS(288),
    [sym__sectionAscend] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(479),
    [sym_escapeOperator] = ACTIONS(291),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym__sectionDescend] = ACTIONS(297),
  },
  [92] = {
    [sym_comment] = STATE(141),
    [sym_item] = STATE(92),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(141),
    [aux_sym_list_repeat1] = STATE(92),
    [sym_multilineFieldOperator] = ACTIONS(303),
    [sym__emptyLine] = ACTIONS(482),
    [sym_itemOperator] = ACTIONS(485),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(313),
    [sym__sectionAscend] = ACTIONS(303),
    [sym_escapeOperator] = ACTIONS(303),
    [sym__sectionDescend] = ACTIONS(303),
  },
  [93] = {
    [sym_comment] = STATE(93),
    [aux_sym_entry_repeat1] = STATE(93),
    [aux_sym_comment_repeat1] = STATE(114),
    [sym_key] = ACTIONS(318),
    [sym_commentOperator] = ACTIONS(488),
    [sym_escapeOperator] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(491),
    [sym_itemOperator] = ACTIONS(318),
  },
  [94] = {
    [sym_directContinuationOperator] = ACTIONS(274),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(274),
    [sym_spacedContinuationOperator] = ACTIONS(274),
    [sym_itemOperator] = ACTIONS(274),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(274),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [95] = {
    [sym_key] = ACTIONS(328),
    [sym_commentOperator] = ACTIONS(328),
    [sym__sectionAscend] = ACTIONS(297),
    [sym__emptyLine] = ACTIONS(328),
    [sym_escapeOperator] = ACTIONS(297),
    [sym_multilineFieldOperator] = ACTIONS(297),
    [sym__sectionDescend] = ACTIONS(297),
  },
  [96] = {
    [sym_multilineFieldOperator] = ACTIONS(303),
    [sym__emptyLine] = ACTIONS(311),
    [sym_itemOperator] = ACTIONS(311),
    [sym_key] = ACTIONS(311),
    [sym_commentOperator] = ACTIONS(311),
    [sym__sectionAscend] = ACTIONS(303),
    [sym_escapeOperator] = ACTIONS(303),
    [sym__sectionDescend] = ACTIONS(303),
  },
  [97] = {
    [sym_comment] = STATE(148),
    [aux_sym_entry_repeat2] = STATE(110),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(148),
    [sym_continuation] = STATE(110),
    [sym_directContinuationOperator] = ACTIONS(430),
    [sym_multilineFieldOperator] = ACTIONS(330),
    [sym__emptyLine] = ACTIONS(494),
    [sym_spacedContinuationOperator] = ACTIONS(430),
    [sym_key] = ACTIONS(335),
    [sym_commentOperator] = ACTIONS(337),
    [sym__sectionAscend] = ACTIONS(330),
    [sym_escapeOperator] = ACTIONS(330),
    [sym__sectionDescend] = ACTIONS(330),
  },
  [98] = {
    [sym_key] = ACTIONS(342),
    [sym_commentOperator] = ACTIONS(342),
    [sym__sectionAscend] = ACTIONS(344),
    [sym__emptyLine] = ACTIONS(342),
    [sym_escapeOperator] = ACTIONS(344),
    [sym_multilineFieldOperator] = ACTIONS(344),
    [sym__sectionDescend] = ACTIONS(344),
  },
  [99] = {
    [sym_directContinuationOperator] = ACTIONS(350),
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_multilineFieldOperator] = ACTIONS(352),
    [sym__emptyLine] = ACTIONS(350),
    [sym_spacedContinuationOperator] = ACTIONS(350),
    [sym_itemOperator] = ACTIONS(350),
    [sym_key] = ACTIONS(350),
    [sym_commentOperator] = ACTIONS(350),
    [sym_escapeOperator] = ACTIONS(352),
    [sym__sectionDescend] = ACTIONS(352),
  },
  [100] = {
    [sym_comment] = STATE(151),
    [aux_sym_entry_repeat2] = STATE(103),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(151),
    [sym_continuation] = STATE(103),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(356),
    [sym__emptyLine] = ACTIONS(499),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_itemOperator] = ACTIONS(361),
    [sym_key] = ACTIONS(361),
    [sym_commentOperator] = ACTIONS(363),
    [sym__sectionAscend] = ACTIONS(356),
    [sym_escapeOperator] = ACTIONS(356),
    [sym__sectionDescend] = ACTIONS(356),
  },
  [101] = {
    [sym_key] = ACTIONS(368),
    [sym_commentOperator] = ACTIONS(368),
    [sym__sectionAscend] = ACTIONS(370),
    [sym__emptyLine] = ACTIONS(368),
    [sym_escapeOperator] = ACTIONS(370),
    [sym_multilineFieldOperator] = ACTIONS(370),
    [sym__sectionDescend] = ACTIONS(370),
  },
  [102] = {
    [sym_key] = ACTIONS(372),
    [sym_commentOperator] = ACTIONS(372),
    [sym__sectionAscend] = ACTIONS(374),
    [sym__emptyLine] = ACTIONS(372),
    [sym_escapeOperator] = ACTIONS(374),
    [sym_multilineFieldOperator] = ACTIONS(374),
    [sym__sectionDescend] = ACTIONS(374),
  },
  [103] = {
    [sym_comment] = STATE(151),
    [aux_sym_entry_repeat2] = STATE(117),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(151),
    [sym_continuation] = STATE(117),
    [sym_directContinuationOperator] = ACTIONS(497),
    [sym_multilineFieldOperator] = ACTIONS(378),
    [sym__emptyLine] = ACTIONS(502),
    [sym_spacedContinuationOperator] = ACTIONS(497),
    [sym_itemOperator] = ACTIONS(383),
    [sym_key] = ACTIONS(383),
    [sym_commentOperator] = ACTIONS(385),
    [sym__sectionAscend] = ACTIONS(378),
    [sym_escapeOperator] = ACTIONS(378),
    [sym__sectionDescend] = ACTIONS(378),
  },
  [104] = {
    [sym_comment] = STATE(148),
    [aux_sym_entry_repeat2] = STATE(106),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(148),
    [sym_continuation] = STATE(106),
    [sym_directContinuationOperator] = ACTIONS(430),
    [sym_multilineFieldOperator] = ACTIONS(388),
    [sym__emptyLine] = ACTIONS(505),
    [sym_spacedContinuationOperator] = ACTIONS(430),
    [sym_key] = ACTIONS(393),
    [sym_commentOperator] = ACTIONS(395),
    [sym__sectionAscend] = ACTIONS(388),
    [sym_escapeOperator] = ACTIONS(388),
    [sym__sectionDescend] = ACTIONS(388),
  },
  [105] = {
    [sym_key] = ACTIONS(398),
    [sym_commentOperator] = ACTIONS(398),
    [sym__sectionAscend] = ACTIONS(400),
    [sym__emptyLine] = ACTIONS(398),
    [sym_escapeOperator] = ACTIONS(400),
    [sym_multilineFieldOperator] = ACTIONS(400),
    [sym__sectionDescend] = ACTIONS(400),
  },
  [106] = {
    [sym_comment] = STATE(148),
    [aux_sym_entry_repeat2] = STATE(110),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(148),
    [sym_continuation] = STATE(110),
    [sym_directContinuationOperator] = ACTIONS(430),
    [sym_multilineFieldOperator] = ACTIONS(402),
    [sym__emptyLine] = ACTIONS(508),
    [sym_spacedContinuationOperator] = ACTIONS(430),
    [sym_key] = ACTIONS(407),
    [sym_commentOperator] = ACTIONS(409),
    [sym__sectionAscend] = ACTIONS(402),
    [sym_escapeOperator] = ACTIONS(402),
    [sym__sectionDescend] = ACTIONS(402),
  },
  [107] = {
    [aux_sym_comment_repeat1] = STATE(108),
    [sym_key] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(39),
    [sym__emptyLine] = ACTIONS(37),
    [sym_escapeOperator] = ACTIONS(39),
    [sym_multilineFieldOperator] = ACTIONS(39),
    [sym__sectionDescend] = ACTIONS(39),
  },
  [108] = {
    [aux_sym_comment_repeat1] = STATE(108),
    [sym_key] = ACTIONS(81),
    [sym_commentOperator] = ACTIONS(511),
    [sym__sectionAscend] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(81),
    [sym_escapeOperator] = ACTIONS(86),
    [sym_multilineFieldOperator] = ACTIONS(86),
    [sym__sectionDescend] = ACTIONS(86),
  },
  [109] = {
    [sym_key] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(92),
    [sym__sectionAscend] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(92),
    [sym_escapeOperator] = ACTIONS(94),
    [sym_multilineFieldOperator] = ACTIONS(94),
    [sym__sectionDescend] = ACTIONS(94),
  },
  [110] = {
    [sym_comment] = STATE(148),
    [aux_sym_entry_repeat2] = STATE(110),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(148),
    [sym_continuation] = STATE(110),
    [sym_directContinuationOperator] = ACTIONS(514),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(517),
    [sym_spacedContinuationOperator] = ACTIONS(514),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(276),
    [sym__sectionAscend] = ACTIONS(269),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [111] = {
    [sym_comment] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_directContinuationOperator] = ACTIONS(323),
    [sym_commentOperator] = ACTIONS(520),
    [sym__emptyLine] = ACTIONS(523),
    [sym_spacedContinuationOperator] = ACTIONS(323),
    [sym_itemOperator] = ACTIONS(323),
  },
  [112] = {
    [sym_directContinuationOperator] = ACTIONS(274),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(274),
    [sym_spacedContinuationOperator] = ACTIONS(274),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(274),
    [sym__sectionAscend] = ACTIONS(269),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [113] = {
    [sym_directContinuationOperator] = ACTIONS(350),
    [sym_multilineFieldOperator] = ACTIONS(352),
    [sym__emptyLine] = ACTIONS(350),
    [sym_spacedContinuationOperator] = ACTIONS(350),
    [sym_key] = ACTIONS(350),
    [sym_commentOperator] = ACTIONS(350),
    [sym__sectionAscend] = ACTIONS(352),
    [sym_escapeOperator] = ACTIONS(352),
    [sym__sectionDescend] = ACTIONS(352),
  },
  [114] = {
    [aux_sym_comment_repeat1] = STATE(115),
    [sym_key] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(256),
    [sym_escapeOperator] = ACTIONS(39),
    [sym__emptyLine] = ACTIONS(37),
    [sym_itemOperator] = ACTIONS(37),
  },
  [115] = {
    [aux_sym_comment_repeat1] = STATE(115),
    [sym_key] = ACTIONS(81),
    [sym_commentOperator] = ACTIONS(526),
    [sym_escapeOperator] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(81),
    [sym_itemOperator] = ACTIONS(81),
  },
  [116] = {
    [sym_key] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(92),
    [sym_escapeOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(92),
    [sym_itemOperator] = ACTIONS(92),
  },
  [117] = {
    [sym_comment] = STATE(151),
    [aux_sym_entry_repeat2] = STATE(117),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(151),
    [sym_continuation] = STATE(117),
    [sym_directContinuationOperator] = ACTIONS(529),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(532),
    [sym_spacedContinuationOperator] = ACTIONS(529),
    [sym_itemOperator] = ACTIONS(274),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(276),
    [sym__sectionAscend] = ACTIONS(269),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [118] = {
    [sym_comment] = STATE(118),
    [aux_sym_entry_repeat1] = STATE(118),
    [aux_sym_comment_repeat1] = STATE(124),
    [sym_key] = ACTIONS(318),
    [sym_commentOperator] = ACTIONS(535),
    [sym_escapeOperator] = ACTIONS(323),
    [sym__emptyLine] = ACTIONS(538),
  },
  [119] = {
    [sym_directContinuationOperator] = ACTIONS(274),
    [sym_multilineFieldOperator] = ACTIONS(269),
    [sym__emptyLine] = ACTIONS(274),
    [sym_spacedContinuationOperator] = ACTIONS(274),
    [sym_itemOperator] = ACTIONS(274),
    [sym_key] = ACTIONS(274),
    [sym_commentOperator] = ACTIONS(274),
    [sym__sectionAscend] = ACTIONS(269),
    [sym_escapeOperator] = ACTIONS(269),
    [sym__sectionDescend] = ACTIONS(269),
  },
  [120] = {
    [sym_directContinuationOperator] = ACTIONS(350),
    [sym_multilineFieldOperator] = ACTIONS(352),
    [sym__emptyLine] = ACTIONS(350),
    [sym_spacedContinuationOperator] = ACTIONS(350),
    [sym_itemOperator] = ACTIONS(350),
    [sym_key] = ACTIONS(350),
    [sym_commentOperator] = ACTIONS(350),
    [sym__sectionAscend] = ACTIONS(352),
    [sym_escapeOperator] = ACTIONS(352),
    [sym__sectionDescend] = ACTIONS(352),
  },
  [121] = {
    [aux_sym_comment_repeat1] = STATE(122),
    [sym_directContinuationOperator] = ACTIONS(39),
    [sym_commentOperator] = ACTIONS(281),
    [sym__emptyLine] = ACTIONS(39),
    [sym_spacedContinuationOperator] = ACTIONS(39),
    [sym_itemOperator] = ACTIONS(39),
  },
  [122] = {
    [aux_sym_comment_repeat1] = STATE(122),
    [sym_directContinuationOperator] = ACTIONS(86),
    [sym_commentOperator] = ACTIONS(541),
    [sym__emptyLine] = ACTIONS(86),
    [sym_spacedContinuationOperator] = ACTIONS(86),
    [sym_itemOperator] = ACTIONS(86),
  },
  [123] = {
    [sym_directContinuationOperator] = ACTIONS(94),
    [sym_commentOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(94),
    [sym_spacedContinuationOperator] = ACTIONS(94),
    [sym_itemOperator] = ACTIONS(94),
  },
  [124] = {
    [aux_sym_comment_repeat1] = STATE(125),
    [sym_key] = ACTIONS(37),
    [sym_commentOperator] = ACTIONS(299),
    [sym_escapeOperator] = ACTIONS(39),
    [sym__emptyLine] = ACTIONS(37),
  },
  [125] = {
    [aux_sym_comment_repeat1] = STATE(125),
    [sym_key] = ACTIONS(81),
    [sym_commentOperator] = ACTIONS(544),
    [sym_escapeOperator] = ACTIONS(86),
    [sym__emptyLine] = ACTIONS(81),
  },
  [126] = {
    [sym_key] = ACTIONS(92),
    [sym_commentOperator] = ACTIONS(92),
    [sym_escapeOperator] = ACTIONS(94),
    [sym__emptyLine] = ACTIONS(92),
  },
  [127] = {
    [sym__endOfLine] = ACTIONS(547),
    [sym_elementOperator] = ACTIONS(549),
    [sym_copyOperator] = ACTIONS(551),
  },
  [128] = {
    [sym_escapeOperator] = ACTIONS(553),
  },
  [129] = {
    [sym__endOfLine] = ACTIONS(555),
  },
  [130] = {
    [sym__endOfLine] = ACTIONS(557),
    [sym_token] = ACTIONS(559),
  },
  [131] = {
    [sym__endOfLine] = ACTIONS(561),
  },
  [132] = {
    [sym__endOfLine] = ACTIONS(563),
  },
  [133] = {
    [sym_list] = STATE(135),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(135),
    [sym_section] = STATE(135),
    [aux_sym_document_repeat1] = STATE(135),
    [sym_comment] = STATE(135),
    [sym_field] = STATE(135),
    [sym_fieldset] = STATE(135),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(135),
    [sym_key] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(565),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(567),
    [sym__sectionDescend] = ACTIONS(140),
  },
  [134] = {
    [sym_comment] = STATE(57),
    [sym__escapedOrUnescapedKey] = STATE(172),
    [aux_sym_comment_repeat1] = STATE(75),
    [aux_sym_entry_repeat1] = STATE(57),
    [sym_continuation] = STATE(112),
    [sym_entry] = STATE(95),
    [sym_item] = STATE(96),
    [sym_directContinuationOperator] = ACTIONS(430),
    [sym_key] = ACTIONS(569),
    [sym_escapeOperator] = ACTIONS(200),
    [sym_commentOperator] = ACTIONS(202),
    [sym__emptyLine] = ACTIONS(204),
    [sym_spacedContinuationOperator] = ACTIONS(430),
    [sym_itemOperator] = ACTIONS(435),
  },
  [135] = {
    [sym_list] = STATE(77),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(77),
    [sym_section] = STATE(77),
    [aux_sym_document_repeat1] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_field] = STATE(77),
    [sym_fieldset] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(77),
    [sym_key] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(226),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(571),
    [sym__sectionDescend] = ACTIONS(140),
  },
  [136] = {
    [sym_comment] = STATE(93),
    [sym__escapedOrUnescapedKey] = STATE(172),
    [aux_sym_comment_repeat1] = STATE(114),
    [aux_sym_entry_repeat1] = STATE(93),
    [sym_entry] = STATE(95),
    [sym_item] = STATE(96),
    [sym_key] = ACTIONS(569),
    [sym_escapeOperator] = ACTIONS(200),
    [sym_commentOperator] = ACTIONS(256),
    [sym__emptyLine] = ACTIONS(258),
    [sym_itemOperator] = ACTIONS(435),
  },
  [137] = {
    [sym__endOfLine] = ACTIONS(573),
  },
  [138] = {
    [sym__endOfLine] = ACTIONS(575),
  },
  [139] = {
    [sym_comment] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_continuation] = STATE(94),
    [sym_directContinuationOperator] = ACTIONS(577),
    [sym_commentOperator] = ACTIONS(281),
    [sym__emptyLine] = ACTIONS(283),
    [sym_spacedContinuationOperator] = ACTIONS(577),
  },
  [140] = {
    [sym_comment] = STATE(118),
    [sym__escapedOrUnescapedKey] = STATE(172),
    [aux_sym_comment_repeat1] = STATE(124),
    [aux_sym_entry_repeat1] = STATE(118),
    [sym_entry] = STATE(95),
    [sym_key] = ACTIONS(569),
    [sym_escapeOperator] = ACTIONS(200),
    [sym_commentOperator] = ACTIONS(299),
    [sym__emptyLine] = ACTIONS(301),
  },
  [141] = {
    [sym_comment] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_item] = STATE(96),
    [sym__emptyLine] = ACTIONS(283),
    [sym_itemOperator] = ACTIONS(579),
    [sym_commentOperator] = ACTIONS(281),
  },
  [142] = {
    [sym__endOfLine] = ACTIONS(581),
  },
  [143] = {
    [sym_list] = STATE(145),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(145),
    [sym_section] = STATE(145),
    [aux_sym_document_repeat1] = STATE(145),
    [sym_comment] = STATE(145),
    [sym_field] = STATE(145),
    [sym_fieldset] = STATE(145),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(145),
    [sym_key] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(583),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(585),
    [sym__sectionDescend] = ACTIONS(140),
  },
  [144] = {
    [sym__endOfLine] = ACTIONS(587),
  },
  [145] = {
    [sym_list] = STATE(77),
    [sym__escapedOrUnescapedKey] = STATE(127),
    [sym_empty] = STATE(77),
    [sym_section] = STATE(77),
    [aux_sym_document_repeat1] = STATE(77),
    [sym_comment] = STATE(77),
    [sym_field] = STATE(77),
    [sym_fieldset] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(107),
    [sym_element] = STATE(77),
    [sym_key] = ACTIONS(130),
    [sym_escapeOperator] = ACTIONS(7),
    [sym_multilineFieldOperator] = ACTIONS(132),
    [sym__emptyLine] = ACTIONS(226),
    [sym_commentOperator] = ACTIONS(136),
    [sym__sectionAscend] = ACTIONS(589),
    [sym__sectionDescend] = ACTIONS(140),
  },
  [146] = {
    [sym__endOfLine] = ACTIONS(591),
  },
  [147] = {
    [sym__endOfLine] = ACTIONS(593),
  },
  [148] = {
    [sym_comment] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_continuation] = STATE(112),
    [sym_directContinuationOperator] = ACTIONS(595),
    [sym_commentOperator] = ACTIONS(281),
    [sym__emptyLine] = ACTIONS(283),
    [sym_spacedContinuationOperator] = ACTIONS(595),
  },
  [149] = {
    [sym__endOfLine] = ACTIONS(597),
  },
  [150] = {
    [sym__endOfLine] = ACTIONS(599),
  },
  [151] = {
    [sym_comment] = STATE(111),
    [aux_sym_comment_repeat1] = STATE(121),
    [aux_sym_entry_repeat1] = STATE(111),
    [sym_continuation] = STATE(119),
    [sym_directContinuationOperator] = ACTIONS(601),
    [sym_commentOperator] = ACTIONS(281),
    [sym__emptyLine] = ACTIONS(283),
    [sym_spacedContinuationOperator] = ACTIONS(601),
  },
  [152] = {
    [sym__endOfLine] = ACTIONS(603),
  },
  [153] = {
    [sym__endOfLine] = ACTIONS(605),
  },
  [154] = {
    [sym_escapedKey] = ACTIONS(607),
  },
  [155] = {
    [sym_token] = ACTIONS(609),
  },
  [156] = {
    [sym_token] = ACTIONS(611),
  },
  [157] = {
    [sym__endOfLine] = ACTIONS(613),
    [sym_deepCopyOperator] = ACTIONS(615),
    [sym_copyOperator] = ACTIONS(617),
  },
  [158] = {
    [sym_token] = ACTIONS(619),
  },
  [159] = {
    [sym_token] = ACTIONS(621),
  },
  [160] = {
    [sym_multilineFieldKey] = ACTIONS(623),
  },
  [161] = {
    [sym__endOfLine] = ACTIONS(625),
  },
  [162] = {
    [sym_token] = ACTIONS(627),
  },
  [163] = {
    [sym_token] = ACTIONS(629),
  },
  [164] = {
    [sym_token] = ACTIONS(631),
  },
  [165] = {
    [sym_token] = ACTIONS(633),
  },
  [166] = {
    [sym_token] = ACTIONS(635),
  },
  [167] = {
    [sym_token] = ACTIONS(637),
  },
  [168] = {
    [sym_token] = ACTIONS(639),
  },
  [169] = {
    [sym__escapedOrUnescapedSectionKey] = STATE(157),
    [sym_escapeOperator] = ACTIONS(47),
    [sym_sectionKey] = ACTIONS(641),
  },
  [170] = {
    [sym_multilineFieldOperator] = ACTIONS(643),
  },
  [171] = {
    [sym_token] = ACTIONS(645),
  },
  [172] = {
    [sym_entryOperator] = ACTIONS(647),
  },
  [173] = {
    [sym_sectionOperator] = ACTIONS(649),
  },
  [174] = {
    [sym__multilineFieldEnd] = ACTIONS(651),
  },
  [175] = {
    [sym__endOfLine] = ACTIONS(653),
  },
  [176] = {
    [sym_multilineFieldKey] = ACTIONS(655),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(6),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(7),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = true}, SHIFT(22),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_empty, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_empty, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(25),
  [59] = {.count = 1, .reusable = true}, SHIFT(26),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [76] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [81] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2),
  [83] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym__escapedOrUnescapedKey, 3),
  [90] = {.count = 1, .reusable = true}, SHIFT(27),
  [92] = {.count = 1, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [94] = {.count = 1, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 3, .production_id = 1),
  [96] = {.count = 1, .reusable = true}, SHIFT(28),
  [98] = {.count = 1, .reusable = true}, SHIFT(29),
  [100] = {.count = 1, .reusable = true}, SHIFT(30),
  [102] = {.count = 1, .reusable = false}, SHIFT(30),
  [104] = {.count = 1, .reusable = true}, SHIFT(31),
  [106] = {.count = 1, .reusable = false}, SHIFT(32),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [110] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(38),
  [113] = {.count = 1, .reusable = false}, SHIFT(33),
  [115] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(34),
  [118] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(155),
  [121] = {.count = 2, .reusable = true}, REDUCE(sym_element, 3), SHIFT(154),
  [124] = {.count = 1, .reusable = true}, SHIFT(39),
  [126] = {.count = 1, .reusable = true}, SHIFT(40),
  [128] = {.count = 1, .reusable = true}, SHIFT(41),
  [130] = {.count = 1, .reusable = false}, SHIFT(127),
  [132] = {.count = 1, .reusable = true}, SHIFT(176),
  [134] = {.count = 1, .reusable = false}, SHIFT(43),
  [136] = {.count = 1, .reusable = false}, SHIFT(163),
  [138] = {.count = 1, .reusable = true}, SHIFT(42),
  [140] = {.count = 1, .reusable = true}, SHIFT(173),
  [142] = {.count = 1, .reusable = true}, SHIFT(44),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_element, 4, .production_id = 2),
  [146] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(47),
  [149] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(34),
  [152] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(165),
  [155] = {.count = 2, .reusable = true}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(154),
  [158] = {.count = 1, .reusable = true}, SHIFT(48),
  [160] = {.count = 1, .reusable = true}, SHIFT(49),
  [162] = {.count = 1, .reusable = true}, SHIFT(50),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4),
  [166] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(52),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4),
  [171] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(167),
  [174] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(34),
  [177] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(168),
  [180] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 4), SHIFT(154),
  [183] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(54),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 4),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [190] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(56),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_list, 4),
  [195] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(167),
  [198] = {.count = 1, .reusable = false}, SHIFT(34),
  [200] = {.count = 1, .reusable = true}, SHIFT(154),
  [202] = {.count = 1, .reusable = false}, SHIFT(155),
  [204] = {.count = 1, .reusable = false}, SHIFT(57),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_field, 4, .production_id = 3),
  [208] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(52),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3),
  [213] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(167),
  [216] = {.count = 1, .reusable = true}, SHIFT(62),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym__escapedOrUnescapedSectionKey, 3),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym__escapedOrUnescapedSectionKey, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_section, 5),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [226] = {.count = 1, .reusable = false}, SHIFT(77),
  [228] = {.count = 1, .reusable = true}, SHIFT(63),
  [230] = {.count = 1, .reusable = true}, SHIFT(64),
  [232] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(34),
  [235] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(168),
  [238] = {.count = 2, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(154),
  [241] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(54),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_fieldset, 5, .production_id = 2),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5, .production_id = 2),
  [248] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(56),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2),
  [253] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(167),
  [256] = {.count = 1, .reusable = false}, SHIFT(165),
  [258] = {.count = 1, .reusable = false}, SHIFT(93),
  [260] = {.count = 1, .reusable = true}, SHIFT(65),
  [262] = {.count = 1, .reusable = true}, SHIFT(66),
  [264] = {.count = 1, .reusable = true}, SHIFT(67),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(32),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat2, 2),
  [271] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(52),
  [274] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(167),
  [279] = {.count = 1, .reusable = true}, SHIFT(32),
  [281] = {.count = 1, .reusable = true}, SHIFT(167),
  [283] = {.count = 1, .reusable = true}, SHIFT(111),
  [285] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(34),
  [288] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(168),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(154),
  [294] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(54),
  [297] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [299] = {.count = 1, .reusable = false}, SHIFT(168),
  [301] = {.count = 1, .reusable = false}, SHIFT(118),
  [303] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_repeat1, 2),
  [305] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(56),
  [308] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(33),
  [311] = {.count = 1, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2),
  [313] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(167),
  [316] = {.count = 1, .reusable = true}, SHIFT(33),
  [318] = {.count = 1, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2),
  [320] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(155),
  [323] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [325] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(57),
  [328] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_field, 5, .production_id = 3),
  [332] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(52),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3),
  [337] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(167),
  [340] = {.count = 1, .reusable = true}, SHIFT(68),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym_section, 6),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_section, 6),
  [346] = {.count = 1, .reusable = false}, SHIFT(70),
  [348] = {.count = 1, .reusable = true}, SHIFT(69),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_continuation, 3, .production_id = 4),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_continuation, 3, .production_id = 4),
  [354] = {.count = 1, .reusable = false}, SHIFT(158),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3, .production_id = 4),
  [358] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(139),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4),
  [363] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(167),
  [366] = {.count = 1, .reusable = true}, SHIFT(72),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_field, 7),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_field, 7),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_section, 7, .production_id = 5),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_section, 7, .production_id = 5),
  [376] = {.count = 1, .reusable = true}, SHIFT(73),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4, .production_id = 4),
  [380] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(139),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4),
  [385] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(167),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 4, .production_id = 3),
  [390] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(52),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3),
  [395] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(167),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_section, 8, .production_id = 5),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_section, 8, .production_id = 5),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .production_id = 3),
  [404] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(52),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3),
  [409] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(167),
  [412] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [415] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(163),
  [418] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(173),
  [427] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(155),
  [430] = {.count = 1, .reusable = false}, SHIFT(164),
  [432] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(134),
  [435] = {.count = 1, .reusable = false}, SHIFT(159),
  [437] = {.count = 2, .reusable = false}, REDUCE(sym_element, 3), SHIFT(172),
  [440] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(136),
  [443] = {.count = 2, .reusable = false}, REDUCE(sym_element, 4, .production_id = 2), SHIFT(172),
  [446] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4), SHIFT(148),
  [449] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(172),
  [452] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 4), SHIFT(140),
  [455] = {.count = 2, .reusable = false}, REDUCE(sym_list, 4), SHIFT(141),
  [458] = {.count = 2, .reusable = false}, REDUCE(sym_field, 4, .production_id = 3), SHIFT(148),
  [461] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(172),
  [464] = {.count = 2, .reusable = false}, REDUCE(sym_fieldset, 5, .production_id = 2), SHIFT(140),
  [467] = {.count = 2, .reusable = false}, REDUCE(sym_list, 5, .production_id = 2), SHIFT(141),
  [470] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(158),
  [473] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(139),
  [476] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(172),
  [479] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fieldset_repeat1, 2), SHIFT_REPEAT(140),
  [482] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(141),
  [485] = {.count = 2, .reusable = false}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(159),
  [488] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(165),
  [491] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(93),
  [494] = {.count = 2, .reusable = false}, REDUCE(sym_field, 5, .production_id = 3), SHIFT(148),
  [497] = {.count = 1, .reusable = false}, SHIFT(166),
  [499] = {.count = 2, .reusable = false}, REDUCE(sym_item, 3, .production_id = 4), SHIFT(151),
  [502] = {.count = 2, .reusable = false}, REDUCE(sym_item, 4, .production_id = 4), SHIFT(151),
  [505] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 4, .production_id = 3), SHIFT(148),
  [508] = {.count = 2, .reusable = false}, REDUCE(sym_entry, 5, .production_id = 3), SHIFT(148),
  [511] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(163),
  [514] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(164),
  [517] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(148),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(167),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(111),
  [526] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(165),
  [529] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(166),
  [532] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat2, 2), SHIFT_REPEAT(151),
  [535] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(168),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(118),
  [541] = {.count = 2, .reusable = true}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(167),
  [544] = {.count = 2, .reusable = false}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(168),
  [547] = {.count = 1, .reusable = true}, SHIFT(76),
  [549] = {.count = 1, .reusable = true}, SHIFT(130),
  [551] = {.count = 1, .reusable = true}, SHIFT(156),
  [553] = {.count = 1, .reusable = true}, SHIFT(79),
  [555] = {.count = 1, .reusable = true}, SHIFT(80),
  [557] = {.count = 1, .reusable = true}, SHIFT(81),
  [559] = {.count = 1, .reusable = true}, SHIFT(132),
  [561] = {.count = 1, .reusable = true}, SHIFT(82),
  [563] = {.count = 1, .reusable = true}, SHIFT(86),
  [565] = {.count = 1, .reusable = false}, SHIFT(135),
  [567] = {.count = 1, .reusable = true}, SHIFT(87),
  [569] = {.count = 1, .reusable = false}, SHIFT(172),
  [571] = {.count = 1, .reusable = true}, SHIFT(98),
  [573] = {.count = 1, .reusable = true}, SHIFT(99),
  [575] = {.count = 1, .reusable = true}, SHIFT(100),
  [577] = {.count = 1, .reusable = true}, SHIFT(158),
  [579] = {.count = 1, .reusable = true}, SHIFT(159),
  [581] = {.count = 1, .reusable = true}, SHIFT(101),
  [583] = {.count = 1, .reusable = false}, SHIFT(145),
  [585] = {.count = 1, .reusable = true}, SHIFT(102),
  [587] = {.count = 1, .reusable = true}, SHIFT(104),
  [589] = {.count = 1, .reusable = true}, SHIFT(105),
  [591] = {.count = 1, .reusable = true}, SHIFT(109),
  [593] = {.count = 1, .reusable = true}, SHIFT(113),
  [595] = {.count = 1, .reusable = true}, SHIFT(164),
  [597] = {.count = 1, .reusable = true}, SHIFT(116),
  [599] = {.count = 1, .reusable = true}, SHIFT(120),
  [601] = {.count = 1, .reusable = true}, SHIFT(166),
  [603] = {.count = 1, .reusable = true}, SHIFT(123),
  [605] = {.count = 1, .reusable = true}, SHIFT(126),
  [607] = {.count = 1, .reusable = true}, SHIFT(128),
  [609] = {.count = 1, .reusable = true}, SHIFT(129),
  [611] = {.count = 1, .reusable = true}, SHIFT(131),
  [613] = {.count = 1, .reusable = true}, SHIFT(133),
  [615] = {.count = 1, .reusable = true}, SHIFT(171),
  [617] = {.count = 1, .reusable = false}, SHIFT(171),
  [619] = {.count = 1, .reusable = true}, SHIFT(137),
  [621] = {.count = 1, .reusable = true}, SHIFT(138),
  [623] = {.count = 1, .reusable = true}, SHIFT(142),
  [625] = {.count = 1, .reusable = true}, SHIFT(143),
  [627] = {.count = 1, .reusable = true}, SHIFT(144),
  [629] = {.count = 1, .reusable = true}, SHIFT(146),
  [631] = {.count = 1, .reusable = true}, SHIFT(147),
  [633] = {.count = 1, .reusable = true}, SHIFT(149),
  [635] = {.count = 1, .reusable = true}, SHIFT(150),
  [637] = {.count = 1, .reusable = true}, SHIFT(152),
  [639] = {.count = 1, .reusable = true}, SHIFT(153),
  [641] = {.count = 1, .reusable = true}, SHIFT(157),
  [643] = {.count = 1, .reusable = true}, SHIFT(160),
  [645] = {.count = 1, .reusable = true}, SHIFT(161),
  [647] = {.count = 1, .reusable = true}, SHIFT(162),
  [649] = {.count = 1, .reusable = true}, SHIFT(169),
  [651] = {.count = 1, .reusable = true}, SHIFT(170),
  [653] = {.count = 1, .reusable = true}, SHIFT(174),
  [655] = {.count = 1, .reusable = true}, SHIFT(175),
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
