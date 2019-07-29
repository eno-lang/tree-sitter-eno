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

  // DON'T REORDER (must match the one in scanner.cc)
  externals: $ => [
    $._endOfLine,
    $.escapedKey,
    $._sectionAscend,
    $._sectionDescend,
    $.escapeOperator,
    $.multilineFieldKey,
    $.multilineFieldOperator
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
      $._escapedOrUnescapedKey,
      choice(
        $.elementOperator,
        seq($.copyOperator, alias($.token, 'template'))
      ),
      $._endOfLine
    ),

    _emptyLine: $ => /[ \t\uFEFF\u2060\u200B]*\n/,

    _escapedOrUnescapedKey: $ => choice(
      $.key,
      seq(
        $.escapeOperator,
        alias($.escapedKey, 'key'),
        $.escapeOperator
      )
    ),

    _instruction: $ => choice(
      $._commentOrEmpty,
      $.element,
      $.empty,
      $.field,
      $.fieldset,
      $.list,
      $.section
    ),

    key: $ => /[^`>:=<\-#|\\\s]|[^`>:=<\-#|\\\s][^>:=<\-#|\\\n]*[^>:=<\-#|\\\s]/,

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
      $._escapedOrUnescapedKey,
      $._endOfLine
    ),

    entry: $ => seq(
      $._escapedOrUnescapedKey,
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
        $._escapedOrUnescapedKey,
        $.elementOperator,
        alias($.token, 'value'),
        $._endOfLine,
        repeat(seq(
          repeat($._commentOrEmpty),
          $.continuation
        ))
      ),
      seq(
        $._escapedOrUnescapedKey,
        $.elementOperator,
        $._endOfLine,
        repeat1(seq(
          repeat($._commentOrEmpty),
          $.continuation
        ))
      ),
      seq(
        $.multilineFieldOperator,
        $.multilineFieldKey,
        $._endOfLine,
        $.multilineFieldOperator,
        $.multilineFieldKey,
        $._endOfLine
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
      $._escapedOrUnescapedKey,  // TODO: Implement distinct, looser section key constraints
      optional(seq(
        choice($.copyOperator, $.deepCopyOperator),
        alias($.token, 'template')
      )),
      $._endOfLine,
      repeat($._instruction),
      $._sectionAscend
    ),

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
