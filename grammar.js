module.exports = grammar({
  name: 'mlog',

  rules: {
    source_file: $ => repeat($._definition),
    // definition is an instruction followed by an end-of-line
    _definition: $ => seq(
      $._instruction,
      $._eol
    ),
    // instruction can be a generic instruction or specific type of instruction
    _instruction: $ => choice(
      $.generic_instruction,
      prec(1, $.prefix_instruction),
      prec(1, $.jump_scope)
    ),
    generic_instruction: $ => seq(
      field('operation', $._arg),
      field('body', optional($.scope))
    ),
    scope: $ => $._operands,
    _operands: $ => choice(
      $._args
    ),
    _args: $ => prec.right(repeat1($._arg)),
    _arg: $ => seq(
      choice(
        $.state,
        // $.number,
        $.keyword,
        $.string,
        prec(1, $.number),
        prec(1, $.boolean)
      )
    ),
    state: $ => seq("@", $._state_name),
    keyword: $ => $._word,
    _state_name: $ => seq(repeat(seq($._word, "-")), $._word),
    _word: _ => /[a-zA-Z]+/,
    number: _ => /[+-]?\d+(\.\d+)?(e[+-]?\d+)?/,
    boolean: _ => choice("true", "false"),
    prefix_instruction: $ => field('prefix_instruction',
        seq('op', $.prefix_operation),
      ),
    jump_scope: $ => seq(
      field("jump", $.jump),
      field("jump_target",$._arg),
      $.prefix_operation
    ),
    jump: _ => "jump",
    prefix_operation: $ => field('prefix_operation', seq(
      // field('left', $._prefix_operator),
      field('left', $.prefix_operator),
      // field('left', $._word),
      field('right', $.prefix_scope)
    )),
    prefix_scope: $ => $._args,
    prefix_operator: $ => $._word,
    // _prefix_operator: _ => choice(
    //   "add",
    //   "sub",
    //   "mul",
    //   "div",
    //   "idiv",
    //   "mod",
    //   "pow",
    //   "equal",
    //   "notEqual",
    //   "land",
    //   "lessThan",
    //   "lessThanEq",
    //   "greaterThan",
    //   "greaterThanEq",
    //   "strictEqual",
    //   "shl",
    //   "shr",
    //   "or",
    //   "and",
    //   "xor",
    //   "not",
    //   "max",
    //   "min",
    //   "angle",
    //   "angleDiff",
    //   "len",
    //   "noise",
    //   "abs",
    //   "log",
    //   "log10",
    //   "floor"
    // ),
    string: _ => /\"[^\n\r]*\"/,
    _eol: _ => /[\n\r]+/,
    // word: $ => choice($._word, $._prefix_operator)
    word: $ => choice($._word)
  }
});
