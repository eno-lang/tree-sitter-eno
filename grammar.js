module.exports = grammar({
  name: 'eno',

  conflicts: $ => [
    [$.element, $.fieldset],
    [$.element, $.fieldset, $.list]
  ],

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
      $.element,
      $.empty,
      $.field,
      $.fieldset,
      $.list,
      $.section
    ),

    element: $ => seq(
      $.key,
      $.elementOperator,
      $._endOfLine
    ),

    empty: $ => seq(
      $.key,
      $._endOfLine
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

    entry: $ => seq(
      $.key,
      $.entryOperator,
      alias($.token, 'value'),
      $._endOfLine
    ),

    field: $ => seq(
      $.key,
      $.elementOperator,
      alias($.token, 'value'),
      $._endOfLine
    ),

    fieldset: $ => seq(
      $.key,
      $.elementOperator,
      $._endOfLine,
      prec.right(
        repeat1(
          seq(
            repeat($._commentOrEmpty),
            $.entry
          )
        )
      )
    ),

    item: $ => seq(
      $.itemOperator,
      alias($.token, 'value'),
      $._endOfLine
    ),

    list: $ => seq(
      $.key,
      $.elementOperator,
      $._endOfLine,
      prec.right(
        repeat1(
          seq(
            repeat($._commentOrEmpty),
            $.item
          )
        )
      )
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
