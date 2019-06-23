module.exports = grammar({
  name: 'eno',

  conflicts: $ => [
    [$._elementOrFieldsetOrList, $.field],
    [$.element, $.field, $.fieldset, $.list],
    [$.element, $.fieldset],
    [$.element, $.fieldset, $.list],
    [$.field],
    [$.fieldset],
    [$.entry],
    [$.item],
    [$.list]
  ],

  extras: $ => [
    /[ \t\uFEFF\u2060\u200B]/
  ],

  externals: $ => [
    $._endOfLine,
    $._sectionAscend,
    $._sectionDescend
  ],

  inline: $ => [
    $._commentOrEmpty,
    $._elementOrFieldsetOrList,
    $._instruction
  ],

  rules: {
    document: $ => repeat($._instruction),

    _commentOrEmpty: $ => choice($.comment, $._emptyLine),

    _elementOrFieldsetOrList: $ => seq(
      $.key,
      choice(
        $.elementOperator,
        seq($.copyOperator, alias($.token, 'template'))
      ),
      $._endOfLine
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

    comment: $ => prec.right(repeat1(seq(
      $.commentOperator,
      alias($.token, 'comment'),
      $._endOfLine
    ))),

    continuation: $ => seq(
      choice($.directContinuationOperator, $.spacedContinuationOperator),
      alias($.token, 'value'),
      $._endOfLine
    ),

    element: $ => $._elementOrFieldsetOrList,

    empty: $ => seq(
      $.key,
      $._endOfLine
    ),

    entry: $ => seq(
      $.key,
      $.entryOperator,
      alias($.token, 'value'),
      $._endOfLine,
      repeat(seq(
        repeat($._commentOrEmpty),
        $.continuation
      ))
    ),

    field: $ => choice(
      seq(
        $.key,
        $.elementOperator,
        alias($.token, 'value'),
        $._endOfLine,
        repeat(seq(
          repeat($._commentOrEmpty),
          $.continuation
        ))
      ),
      seq(
        $.key,
        $.elementOperator,
        $._endOfLine,
        repeat1(seq(
          repeat($._commentOrEmpty),
          $.continuation
        ))
      )
    ),

    fieldset: $ => seq(
      $._elementOrFieldsetOrList,
      repeat1(seq(
        repeat($._commentOrEmpty),
        $.entry
      ))
    ),

    item: $ => seq(
      $.itemOperator,
      alias($.token, 'value'),
      $._endOfLine,
      repeat(seq(
        repeat($._commentOrEmpty),
        $.continuation
      ))
    ),

    list: $ => seq(
      $._elementOrFieldsetOrList,
      repeat1(seq(
        repeat($._commentOrEmpty),
        $.item
      ))
    ),

    section: $ => seq(
      $._sectionDescend,
      $.sectionOperator,
      $.key,
      optional(seq(
        choice($.copyOperator, $.deepCopyOperator),
        alias($.token, 'template')
      )),
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
