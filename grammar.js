module.exports = grammar({
  name: 'eno',

  extras: $ => [
    /[^\S\n]/
  ],

  rules: {
    document: $ => optional(
      seq(
        $._instruction,
        repeat(
          seq(
            '\n',
            $._instruction
          )
        )
      )
    ),

    _instruction: $ => choice(
      $._comment,
      $._emptyElement,
      $._field,
      seq($.appendWithNewlineOperator, alias($.token, 'value')),
      seq($.appendWithSpaceOperator, alias($.token, 'value')),
      seq($.sectionOperator, $.name),
      $.dictionary,
      $.list,
      '\n',
      // seq($.sectionOperator, $.name, optional(seq('\n', alias($.document, 'section')))),
    ),

    _comment: $ => seq(
      $.commentOperator,
      alias($.token, 'comment')
    ),

    _emptyElement: $ => seq(
      $.name,
      $.nameOperator
    ),

    _field: $ => seq(
      $.name,
      $.nameOperator,
      alias($.token, 'value')
    ),

    dictionary: $ => prec(2, seq(
      $.name,
      $.nameOperator,
      '\n',
      seq($.name, $.entryOperator, alias($.token, 'value'))
    )),

    list: $ => prec(2, seq(
      $.name,
      $.nameOperator,
      '\n',
      seq($.name, $.itemOperator, alias($.token, 'value'))
    )),

    name: $ => /[^>:=<\-#|\\\s]|[^>:=<\-#|\\\s][^>:=<\-#|\\\n]*[^>:=<\-#|\\\s]/,
    token: $ => /\S|\S[^\n]*\S/,

    appendWithNewlineOperator: $ => '|',
    appendWithSpaceOperator: $ => '\\',
    commentOperator: $ => '>',
    copyOperator: $ => '<',
    deepCopyOperator: $ => '<<',
    entryOperator: $ => '=',
    itemOperator: $ => '-',
    nameOperator: $ => ':',
    sectionOperator: $ => /#+/
  }
});
