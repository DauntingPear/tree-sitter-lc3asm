module.exports = grammar({
  name: "lc3asm",
  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source: $ => repeat($._item),

    _item: $ => choice(
      // label (MyLabel: )
      // label directive operand (DATA .FILL 3)
      // directive (.end)
      // directive operand (.orig x3000)
      // instruction label (JSR MyLabel, BRnzp MyLabel)
      // instruction operands (ADD R0,R0,R0)
      // instruction operand label (ST R0,MyLabel)
      // label instruction (MyLabel ADD R0,R0,R0)
      // comments
      $.meta,
      $.instruction,
      $.trap,
      $.label_jump,

    ),

    instruction: $ => prec.left(1, choice(
      $.opcode,
      $.trap,
      seq($.trap, $.hex), // TRAPs
      seq($.opcode, $.reg, optional(","), $.reg, optional(","), optional(choice($.int, $.hex, $.reg))),
      seq($.opcode, choice($.int, $.label_jump, $.reg)), // JMP codes
      seq($.opcode, $.reg, optional(","), choice($.label, $.int)),
      seq($.label, $.directive, choice($.int, $.hex, $.string)),
    )),

    opcode: $ => prec(1, choice(
      $.arith,
      $.load,
      $.store,
      $.jump,
      $.return,
      $.branch,
    )),

    arith: $ => choice(
      "ADD",
      "AND",
      "NOT",
    ),

    load: $ => choice(
      "LD",
      "LDI",
      "LDR",
      "LEA",
    ),

    store: $ => choice(
      "ST",
      "STI",
      "STR",
    ),

    jump: $ => choice(
      "JSR",
      "JMP",
      "JSRR",
    ),

    return: $ => choice(
      "RET",
      "RTI",
    ),

    branch: $ => /BR[nzp]{0,3}/,

    positive: $ => "p",
    negative: $ => "n",
    zero: $ => "z",

    directive: $ => choice(
      ".FILL",
      ".BLKW",
      ".STRINGZ",
    ),

    trap: $ => choice(
      "GETC",
      "OUT",
      "PUTS",
      "IN",
      "PUTSP",
      "HALT",
      "TRAP",
    ),


    reg: $ => token(seq("R", /\d/)),
    int: $ => seq(optional("#"), optional("-"), /\d+/),


    label: $ => seq(/[a-zA-Z0-9_]+/, optional(":")),
    label_jump: $ => seq(/[a-zA-Z0-9_]+/, optional(':')),
    // Meta identifiers are assembler directives which do not succeed labels
    meta: $ => seq(
      field('kind', $.meta_ident),
      optional(choice(
        $.hex,
      ))
    ),


    meta_ident: $ => choice(
      ".END",
      ".ORIG",
      ".orig",
      ".end"
    ),

    hex: $ => seq("x", /[0-9A-Fa-f]+/),
    string: $ => /"[^"]*"/,

    line_comment: $ =>
      choice(
        /(;).*/,
      ),
    comment: _ => token(choice(
      seq(';', /.*/),
    )),
  }
});

function sep(separator, rule) {
  return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}
