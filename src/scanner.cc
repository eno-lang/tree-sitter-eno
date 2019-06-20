#include <tree_sitter/parser.h>

namespace {

enum TokenType {
  END_OF_LINE,
  SECTION_ASCEND,
  SECTION_DESCEND
};

struct Scanner {
  Scanner() {
    depth = 0;
  }

  unsigned serialize(char *buffer) {
    if(depth == 0) {
      return 0;
    }

    buffer[0] = depth;
    return 1;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length > 0) {
      depth = buffer[0];
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if ((valid_symbols[SECTION_DESCEND] || valid_symbols[SECTION_ASCEND]) &&
        lexer->lookahead == '#') {
      uint16_t new_depth = 0;

      lexer->mark_end(lexer);

      do {
        lexer->advance(lexer, false);
        new_depth++;
      } while (lexer->lookahead == '#');

      if (new_depth == depth + 1) {
        depth = new_depth;
        lexer->result_symbol = SECTION_DESCEND;
        return true;
      } else if (new_depth <= depth) {
        depth--;
        lexer->result_symbol = SECTION_ASCEND;
        return true;
      } else {
        return false;  // hierarchy layer skip (e.g. from '# foo' to '### foo')
      }
    } else if (valid_symbols[SECTION_ASCEND] && lexer->lookahead == 0) {
      if (depth > 0) {
        depth--;
        lexer->result_symbol = SECTION_ASCEND;
        return true;
      }
    } else if (valid_symbols[END_OF_LINE] &&
               (lexer->lookahead == '\n' || lexer->lookahead == 0)) {
      lexer->result_symbol = END_OF_LINE;

      if (lexer->lookahead == '\n') {
        lexer->advance(lexer, true);
      }

      return true;
    }

    return false;
  }

  uint16_t depth;
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
