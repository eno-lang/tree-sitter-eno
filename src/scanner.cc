#include <tree_sitter/parser.h>

// Serialization buffer indices
#define SECTION_DEPTH_INDEX 0
#define MULTILINE_DASHES_INDEX 1

namespace {

// DON'T REORDER (must match the one in grammar.js)
enum TokenType {
  _END_OF_LINE,
  _SECTION_ASCEND,
  _SECTION_DESCEND,
  MULTILINE_FIELD_KEY,
  MULTILINE_FIELD_OPERATOR
};

struct Scanner {
  Scanner() {
    multiline_dashes = 0;
    section_depth = 0;
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  unsigned serialize(char *buffer) {
    if (multiline_dashes == 0 && section_depth == 0) {
      return 0;
    }

    buffer[SECTION_DEPTH_INDEX] = section_depth;
    buffer[MULTILINE_DASHES_INDEX] = multiline_dashes;

    return 2;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length > 0) {
      section_depth = buffer[SECTION_DEPTH_INDEX];
      multiline_dashes = buffer[MULTILINE_DASHES_INDEX];
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[MULTILINE_FIELD_OPERATOR] && lexer->lookahead == '-') {
      uint16_t new_multiline_dashes = 0;

      lexer->mark_end(lexer);

      if (multiline_dashes == 0) {
        do {
          advance(lexer);
          new_multiline_dashes++;
        } while (lexer->lookahead == '-');

        if(new_multiline_dashes >= 2) {
          multiline_dashes = new_multiline_dashes;
          lexer->mark_end(lexer);
          lexer->result_symbol = MULTILINE_FIELD_OPERATOR;
          return true;
        }
      } else {
        do {
          advance(lexer);
          new_multiline_dashes++;
        } while (lexer->lookahead == '-' && new_multiline_dashes <= multiline_dashes);

        if(new_multiline_dashes == multiline_dashes) {
          lexer->mark_end(lexer);
          lexer->result_symbol = MULTILINE_FIELD_OPERATOR;
          return true;
        }
      }

      return false;
    } else if (valid_symbols[MULTILINE_FIELD_KEY]) {
      // Added because regular whitespace-as-extra detection
      // somehow didn't work here, possibly to be reinvestigated
      // at a later point (and refactored if applies).
      while (lexer->lookahead == ' ' ||
             lexer->lookahead == '\t' ||
             lexer->lookahead == '\uFEFF' ||
             lexer->lookahead == '\u2060' ||
             lexer->lookahead == '\u200B') {
        skip(lexer);
      }

      if (lexer->lookahead != '\n' && lexer->lookahead != 0) {
        do {
          advance(lexer);
        } while (lexer->lookahead != '\n' && lexer->lookahead != 0);

        lexer->result_symbol = MULTILINE_FIELD_KEY;
        return true;
      }
    } else if ((valid_symbols[_SECTION_DESCEND] || valid_symbols[_SECTION_ASCEND]) &&
               lexer->lookahead == '#') {
      uint16_t new_section_depth = 0;

      lexer->mark_end(lexer);

      do {
        advance(lexer);
        new_section_depth++;
      } while (lexer->lookahead == '#');

      if (new_section_depth == section_depth + 1) {
        section_depth = new_section_depth;
        lexer->result_symbol = _SECTION_DESCEND;
        return true;
      } else if (new_section_depth <= section_depth) {
        section_depth--;
        lexer->result_symbol = _SECTION_ASCEND;
        return true;
      } else {
        return false;  // hierarchy layer skip (e.g. from '# foo' to '### foo')
      }
    } else if (valid_symbols[_SECTION_ASCEND] && lexer->lookahead == 0) {
      if (section_depth > 0) {
        section_depth--;
        lexer->result_symbol = _SECTION_ASCEND;
        return true;
      }
    } else if (valid_symbols[_END_OF_LINE] &&
               (lexer->lookahead == '\n' || lexer->lookahead == 0)) {
      lexer->result_symbol = _END_OF_LINE;

      if (lexer->lookahead == '\n') {
        skip(lexer);
      }

      return true;
    }

    return false;
  }

  uint16_t multiline_dashes;
  uint16_t section_depth;
};

}

extern "C" {

void *tree_sitter_eno_external_scanner_create() {
  return new Scanner();
}

void tree_sitter_eno_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

unsigned tree_sitter_eno_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_eno_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

bool tree_sitter_eno_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

}
