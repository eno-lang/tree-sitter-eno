module.exports = grammar({
  name: 'eno',

  conflicts: $ => [
    [$.element, $.fieldset],
    [$.element, $.field, $.fieldset, $.list],
    [$.field],
    [$.entry],
    [$.item]
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

    comment: $ => prec.right(
      repeat1(
        seq(
          $.commentOperator,
          alias($.token, 'comment'),
          $._endOfLine
        )
      )
    ),

    continuation: $ => seq(
      choice($.directContinuationOperator, $.spacedContinuationOperator),
      alias($.token, 'value'),
      $._endOfLine
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

    entry: $ => seq(
      $.key,
      $.entryOperator,
      alias($.token, 'value'),
      $._endOfLine,
      repeat(
        seq(
          repeat($._commentOrEmpty),
          $.continuation
        )
      )
    ),

    field: $ => choice(
      seq(
        $.key,
        $.elementOperator,
        alias($.token, 'value'),
        $._endOfLine,
        repeat(
          seq(
            repeat($._commentOrEmpty),
            $.continuation
          )
        )
      ),
      seq(
        $.key,
        $.elementOperator,
        $._endOfLine,
        repeat1(
          seq(
            repeat($._commentOrEmpty),
            $.continuation
          )
        )
      )
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
      $._endOfLine,
      repeat(
        seq(
          repeat($._commentOrEmpty),
          $.continuation
        )
      )
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
