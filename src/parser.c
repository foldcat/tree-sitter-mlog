#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  anon_sym_DASH = 2,
  sym__word = 3,
  sym_number = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  anon_sym_op = 7,
  sym_jump = 8,
  sym_string = 9,
  sym__eol = 10,
  sym_source_file = 11,
  sym__definition = 12,
  sym__instruction = 13,
  sym_generic_instruction = 14,
  sym_scope = 15,
  sym__operands = 16,
  sym__args = 17,
  sym__arg = 18,
  sym_state = 19,
  sym_keyword = 20,
  sym__state_name = 21,
  sym_boolean = 22,
  sym_prefix_instruction = 23,
  sym_jump_scope = 24,
  sym_prefix_operation = 25,
  sym_prefix_scope = 26,
  sym_prefix_operator = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym__args_repeat1 = 29,
  aux_sym__state_name_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_DASH] = "-",
  [sym__word] = "_word",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_op] = "op",
  [sym_jump] = "jump",
  [sym_string] = "string",
  [sym__eol] = "_eol",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__instruction] = "_instruction",
  [sym_generic_instruction] = "generic_instruction",
  [sym_scope] = "scope",
  [sym__operands] = "_operands",
  [sym__args] = "_args",
  [sym__arg] = "_arg",
  [sym_state] = "state",
  [sym_keyword] = "keyword",
  [sym__state_name] = "_state_name",
  [sym_boolean] = "boolean",
  [sym_prefix_instruction] = "prefix_instruction",
  [sym_jump_scope] = "jump_scope",
  [sym_prefix_operation] = "prefix_operation",
  [sym_prefix_scope] = "prefix_scope",
  [sym_prefix_operator] = "prefix_operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__args_repeat1] = "_args_repeat1",
  [aux_sym__state_name_repeat1] = "_state_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym__word] = sym__word,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_op] = anon_sym_op,
  [sym_jump] = sym_jump,
  [sym_string] = sym_string,
  [sym__eol] = sym__eol,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__instruction] = sym__instruction,
  [sym_generic_instruction] = sym_generic_instruction,
  [sym_scope] = sym_scope,
  [sym__operands] = sym__operands,
  [sym__args] = sym__args,
  [sym__arg] = sym__arg,
  [sym_state] = sym_state,
  [sym_keyword] = sym_keyword,
  [sym__state_name] = sym__state_name,
  [sym_boolean] = sym_boolean,
  [sym_prefix_instruction] = sym_prefix_instruction,
  [sym_jump_scope] = sym_jump_scope,
  [sym_prefix_operation] = sym_prefix_operation,
  [sym_prefix_scope] = sym_prefix_scope,
  [sym_prefix_operator] = sym_prefix_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__args_repeat1] = aux_sym__args_repeat1,
  [aux_sym__state_name_repeat1] = aux_sym__state_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_op] = {
    .visible = true,
    .named = false,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_generic_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym__operands] = {
    .visible = false,
    .named = true,
  },
  [sym__args] = {
    .visible = false,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_state] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__state_name] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__state_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_jump = 2,
  field_jump_target = 3,
  field_left = 4,
  field_operation = 5,
  field_prefix_instruction = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_jump] = "jump",
  [field_jump_target] = "jump_target",
  [field_left] = "left",
  [field_operation] = "operation",
  [field_prefix_instruction] = "prefix_instruction",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operation, 0},
  [1] =
    {field_prefix_instruction, 0},
    {field_prefix_instruction, 1},
  [3] =
    {field_body, 1},
    {field_operation, 0},
  [5] =
    {field_left, 0},
    {field_right, 1},
  [7] =
    {field_jump, 0},
    {field_jump_target, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 11,
  [23] = 21,
  [24] = 10,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 14,
  [32] = 12,
  [33] = 33,
  [34] = 13,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'j') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 't') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'p') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_op);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_jump);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_op] = ACTIONS(1),
    [sym_jump] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__definition] = STATE(3),
    [sym__instruction] = STATE(27),
    [sym_generic_instruction] = STATE(27),
    [sym__arg] = STATE(4),
    [sym_state] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_prefix_instruction] = STATE(27),
    [sym_jump_scope] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_op] = ACTIONS(13),
    [sym_jump] = ACTIONS(15),
    [sym_string] = ACTIONS(9),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym__instruction] = STATE(27),
    [sym_generic_instruction] = STATE(27),
    [sym__arg] = STATE(4),
    [sym_state] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_prefix_instruction] = STATE(27),
    [sym_jump_scope] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [sym__word] = ACTIONS(22),
    [sym_number] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(28),
    [anon_sym_false] = ACTIONS(28),
    [anon_sym_op] = ACTIONS(31),
    [sym_jump] = ACTIONS(34),
    [sym_string] = ACTIONS(25),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym__instruction] = STATE(27),
    [sym_generic_instruction] = STATE(27),
    [sym__arg] = STATE(4),
    [sym_state] = STATE(4),
    [sym_keyword] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_prefix_instruction] = STATE(27),
    [sym_jump_scope] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_op] = ACTIONS(13),
    [sym_jump] = ACTIONS(15),
    [sym_string] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      sym__eol,
    STATE(37), 1,
      sym_scope,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 2,
      sym_number,
      sym_string,
    STATE(36), 2,
      sym__operands,
      sym__args,
    STATE(7), 5,
      sym__arg,
      sym_state,
      sym_keyword,
      sym_boolean,
      aux_sym__args_repeat1,
  [32] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      sym__word,
    STATE(25), 1,
      sym_prefix_scope,
    STATE(26), 1,
      sym__args,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_number,
      sym_string,
    STATE(7), 5,
      sym__arg,
      sym_state,
      sym_keyword,
      sym_boolean,
      aux_sym__args_repeat1,
  [60] = 6,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(50), 1,
      sym__word,
    ACTIONS(59), 1,
      sym__eol,
    ACTIONS(53), 2,
      sym_number,
      sym_string,
    ACTIONS(56), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 5,
      sym__arg,
      sym_state,
      sym_keyword,
      sym_boolean,
      aux_sym__args_repeat1,
  [85] = 6,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym__eol,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(61), 2,
      sym_number,
      sym_string,
    STATE(6), 5,
      sym__arg,
      sym_state,
      sym_keyword,
      sym_boolean,
      aux_sym__args_repeat1,
  [110] = 5,
    ACTIONS(65), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym__word,
    ACTIONS(69), 2,
      sym_number,
      sym_string,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 4,
      sym__arg,
      sym_state,
      sym_keyword,
      sym_boolean,
  [131] = 2,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_number,
      sym_string,
    ACTIONS(75), 5,
      sym__word,
      anon_sym_true,
      anon_sym_false,
      anon_sym_op,
      sym_jump,
  [145] = 3,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      sym__eol,
    ACTIONS(77), 6,
      anon_sym_AT,
      sym__word,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_string,
  [160] = 3,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      sym__eol,
    ACTIONS(83), 6,
      anon_sym_AT,
      sym__word,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_string,
  [175] = 2,
    ACTIONS(89), 1,
      sym__eol,
    ACTIONS(87), 6,
      anon_sym_AT,
      sym__word,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_string,
  [187] = 2,
    ACTIONS(93), 1,
      sym__eol,
    ACTIONS(91), 6,
      anon_sym_AT,
      sym__word,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_string,
  [199] = 2,
    ACTIONS(97), 1,
      sym__eol,
    ACTIONS(95), 6,
      anon_sym_AT,
      sym__word,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      sym_string,
  [211] = 2,
    ACTIONS(99), 3,
      anon_sym_AT,
      sym_number,
      sym_string,
    ACTIONS(101), 3,
      sym__word,
      anon_sym_true,
      anon_sym_false,
  [222] = 3,
    ACTIONS(103), 1,
      sym__word,
    STATE(5), 1,
      sym_prefix_operator,
    STATE(28), 1,
      sym_prefix_operation,
  [232] = 3,
    ACTIONS(105), 1,
      sym__word,
    STATE(21), 1,
      aux_sym__state_name_repeat1,
    STATE(34), 1,
      sym__state_name,
  [242] = 3,
    ACTIONS(103), 1,
      sym__word,
    STATE(5), 1,
      sym_prefix_operator,
    STATE(29), 1,
      sym_prefix_operation,
  [252] = 3,
    ACTIONS(107), 1,
      sym__word,
    STATE(13), 1,
      sym__state_name,
    STATE(23), 1,
      aux_sym__state_name_repeat1,
  [262] = 2,
    ACTIONS(109), 1,
      sym__word,
    STATE(20), 1,
      aux_sym__state_name_repeat1,
  [269] = 2,
    ACTIONS(112), 1,
      sym__word,
    STATE(20), 1,
      aux_sym__state_name_repeat1,
  [276] = 2,
    ACTIONS(85), 1,
      sym__word,
    ACTIONS(114), 1,
      anon_sym_DASH,
  [283] = 2,
    ACTIONS(116), 1,
      sym__word,
    STATE(20), 1,
      aux_sym__state_name_repeat1,
  [290] = 2,
    ACTIONS(81), 1,
      sym__word,
    ACTIONS(114), 1,
      anon_sym_DASH,
  [297] = 1,
    ACTIONS(118), 1,
      sym__eol,
  [301] = 1,
    ACTIONS(120), 1,
      sym__eol,
  [305] = 1,
    ACTIONS(122), 1,
      sym__eol,
  [309] = 1,
    ACTIONS(124), 1,
      sym__eol,
  [313] = 1,
    ACTIONS(126), 1,
      sym__eol,
  [317] = 1,
    ACTIONS(114), 1,
      anon_sym_DASH,
  [321] = 1,
    ACTIONS(97), 1,
      sym__word,
  [325] = 1,
    ACTIONS(89), 1,
      sym__word,
  [329] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [333] = 1,
    ACTIONS(93), 1,
      sym__word,
  [337] = 1,
    ACTIONS(130), 1,
      sym__word,
  [341] = 1,
    ACTIONS(132), 1,
      sym__eol,
  [345] = 1,
    ACTIONS(134), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 175,
  [SMALL_STATE(13)] = 187,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 232,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 252,
  [SMALL_STATE(20)] = 262,
  [SMALL_STATE(21)] = 269,
  [SMALL_STATE(22)] = 276,
  [SMALL_STATE(23)] = 283,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 301,
  [SMALL_STATE(27)] = 305,
  [SMALL_STATE(28)] = 309,
  [SMALL_STATE(29)] = 313,
  [SMALL_STATE(30)] = 317,
  [SMALL_STATE(31)] = 321,
  [SMALL_STATE(32)] = 325,
  [SMALL_STATE(33)] = 329,
  [SMALL_STATE(34)] = 333,
  [SMALL_STATE(35)] = 337,
  [SMALL_STATE(36)] = 341,
  [SMALL_STATE(37)] = 345,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_instruction, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(19),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(12),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_name, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_name, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_name, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_name, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_operator, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_operator, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__state_name_repeat1, 2), SHIFT_REPEAT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_operation, 2, .production_id = 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_scope, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_scope, 3, .production_id = 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_instruction, 2, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__state_name_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_instruction, 2, .production_id = 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mlog() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
