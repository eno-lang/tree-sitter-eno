module.exports = grammar({
  name: 'eno',

  extras: $ => [
    /[ \t\uFEFF\u2060\u200B]/
  ],

  externals: $ => [
    $._endOfLine,
    $._sectionAscend,
    $._sectionDescend
  ],

  rules: {
    document: $ => repeat($._instruction),

    _commentOrEmpty: $ => choice(
      $.comment,
      $._emptyLine
    ),

    _emptyLine: $ => /[ \t\uFEFF\u2060\u200B]*\n/,

    _instruction: $ => choice(
      $._commentOrEmpty,
      $.field,
      $.section
    ),

    comment: $ => prec.right(
      repeat1(
        seq(
          $.commentOperator,
          alias($.token, 'comment'),
          $._endOfLine
        )
      )
    ),

    field: $ => seq(
      $.key,
      $.elementOperator,
      alias($.token, 'value'),
      $._endOfLine
    ),

    section: $ => seq(
      $._sectionDescend,
      $.sectionOperator,
      $.key,
      optional(
        seq(
          choice($.copyOperator, $.deepCopyOperator),
          alias($.token, 'template')
        )
      ),
      $._endOfLine,
      repeat($._instruction),
      $._sectionAscend
    ),

    // _instruction: $ => choice(
    //   $.section
    //   $._ambiguousElement,
    //   $._field,
    //   seq($.directContinuationOperator, alias($.token, 'value')),
    //   seq($.spacedContinuationOperator, alias($.token, 'value')),
    //   seq($.sectionOperator, $.key),
    //   $.fieldset,
    //   $.list,
    //   '\n',
    //   seq($.sectionOperator, $.key, optional(seq('\n', alias($.document, 'section')))),
    // ),

    _ambiguousElement: $ => seq(
      $.key,
      $.elementOperator
    ),

    fieldset: $ => prec(2, seq(
      $.key,
      $.elementOperator,
      '\n',
      seq($.key, $.entryOperator, alias($.token, 'value'))
    )),

    list: $ => prec(2, seq(
      $.key,
      $.elementOperator,
      '\n',
      seq($.key, $.itemOperator, alias($.token, 'value'))
    )),

    key: $ => /[^>:=<\-#|\\\s]|[^>:=<\-#|\\\s][^>:=<\-#|\\\n]*[^>:=<\-#|\\\s]/,
    token: $ => /\S|\S[^\n]*\S/,

    directContinuationOperator: $ => '|',
    spacedContinuationOperator: $ => '\\',
    commentOperator: $ => '>',
    copyOperator: $ => '<',
    deepCopyOperator: $ => '<<',
    entryOperator: $ => '=',
    itemOperator: $ => '-',
    elementOperator: $ => ':',
    sectionOperator: $ => /#+/
  }
});
