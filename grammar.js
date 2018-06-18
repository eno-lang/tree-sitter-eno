module.exports = grammar({
  name: 'eno',

  extras: $ => [
    /\s/
  ],

  rules: {
    document: $ => optional($.section),

    section: $ => prec.right(seq(
      $._instruction,
      repeat(
        seq(
          '\n',
          $._instruction
        )
      )
    )),

    _instruction: $ => choice(
      seq($.commentOperator, alias($.token, 'comment')),
      seq($.name, $.nameOperator),
      seq($.name, $.nameOperator, alias($.token, 'value')),
      seq($.sectionOperator, $.name),
      // seq($.sectionOperator, $.name, optional(seq('\n', $.section))),
    ),

    name: $ => /[^>:=<\-#|\\\s]|[^>:=<\-#|\\\s][^>:=<\-#|\\\n]*[^>:=<\-#|\\\s]/,
    token: $ => /\S|\S[^\n]*\S/,

    nameOperator: $ => ':',
    sectionOperator: $ => /#+/,
    commentOperator: $ => '>'
    // instruction: $ => choice(
    //   $.block,
    //   $.field,
    //   $.nameInstruction
    // ),

    // block: $ => seq(
    //   'block'
    // ),
    //
    // field: $ => seq(
    //   'field',
    //   $.blanks,
    //   ':',
    //   $.blanks,
    //   'value'
    // ),
    //
    // nameInstruction: $ => seq(
    //   $.name,
    //   $.blanks,
    //   ':'
    // ),
    //
    // name: $ => /\S\S{2}\S/,
    // // name: $ => /\S|\S[^\n]*\S/,
    //
    // // name: $ => /[^<>`:=]+/,
    // blanks: $ => /[^\S\n]*/,
    // newline: $ => /\n/,

    // block: $ => seq(
    //   '-- hello',
    //   'fun',
    //   '-- hello'
    // ),

  }
});
