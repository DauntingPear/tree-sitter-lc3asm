#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_ADD = 2,
  anon_sym_AND = 3,
  anon_sym_NOT = 4,
  anon_sym_LD = 5,
  anon_sym_LDI = 6,
  anon_sym_LDR = 7,
  anon_sym_LEA = 8,
  anon_sym_ST = 9,
  anon_sym_STI = 10,
  anon_sym_STR = 11,
  anon_sym_JSR = 12,
  anon_sym_JMP = 13,
  anon_sym_JSRR = 14,
  anon_sym_RET = 15,
  anon_sym_RTI = 16,
  sym_branch = 17,
  sym_positive = 18,
  sym_negative = 19,
  sym_zero = 20,
  anon_sym_DOTFILL = 21,
  anon_sym_DOTBLKW = 22,
  anon_sym_DOTSTRINGZ = 23,
  anon_sym_GETC = 24,
  anon_sym_OUT = 25,
  anon_sym_PUTS = 26,
  anon_sym_IN = 27,
  anon_sym_PUTSP = 28,
  anon_sym_HALT = 29,
  anon_sym_TRAP = 30,
  sym_reg = 31,
  anon_sym_POUND = 32,
  anon_sym_DASH = 33,
  aux_sym_int_token1 = 34,
  aux_sym_label_token1 = 35,
  anon_sym_COLON = 36,
  anon_sym_DOTEND = 37,
  anon_sym_DOTORIG = 38,
  anon_sym_DOTorig = 39,
  anon_sym_DOTend = 40,
  anon_sym_x = 41,
  aux_sym_hex_token1 = 42,
  sym_string = 43,
  aux_sym_line_comment_token1 = 44,
  sym_comment = 45,
  sym_source = 46,
  sym__item = 47,
  sym_instruction = 48,
  sym_opcode = 49,
  sym_arith = 50,
  sym_load = 51,
  sym_store = 52,
  sym_jump = 53,
  sym_return = 54,
  sym_directive = 55,
  sym_trap = 56,
  sym_int = 57,
  sym_label = 58,
  sym_label_jump = 59,
  sym_meta = 60,
  sym_meta_ident = 61,
  sym_hex = 62,
  aux_sym_source_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_ADD] = "ADD",
  [anon_sym_AND] = "AND",
  [anon_sym_NOT] = "NOT",
  [anon_sym_LD] = "LD",
  [anon_sym_LDI] = "LDI",
  [anon_sym_LDR] = "LDR",
  [anon_sym_LEA] = "LEA",
  [anon_sym_ST] = "ST",
  [anon_sym_STI] = "STI",
  [anon_sym_STR] = "STR",
  [anon_sym_JSR] = "JSR",
  [anon_sym_JMP] = "JMP",
  [anon_sym_JSRR] = "JSRR",
  [anon_sym_RET] = "RET",
  [anon_sym_RTI] = "RTI",
  [sym_branch] = "branch",
  [sym_positive] = "positive",
  [sym_negative] = "negative",
  [sym_zero] = "zero",
  [anon_sym_DOTFILL] = ".FILL",
  [anon_sym_DOTBLKW] = ".BLKW",
  [anon_sym_DOTSTRINGZ] = ".STRINGZ",
  [anon_sym_GETC] = "GETC",
  [anon_sym_OUT] = "OUT",
  [anon_sym_PUTS] = "PUTS",
  [anon_sym_IN] = "IN",
  [anon_sym_PUTSP] = "PUTSP",
  [anon_sym_HALT] = "HALT",
  [anon_sym_TRAP] = "TRAP",
  [sym_reg] = "reg",
  [anon_sym_POUND] = "#",
  [anon_sym_DASH] = "-",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_DOTEND] = ".END",
  [anon_sym_DOTORIG] = ".ORIG",
  [anon_sym_DOTorig] = ".orig",
  [anon_sym_DOTend] = ".end",
  [anon_sym_x] = "x",
  [aux_sym_hex_token1] = "hex_token1",
  [sym_string] = "string",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__item] = "_item",
  [sym_instruction] = "instruction",
  [sym_opcode] = "opcode",
  [sym_arith] = "arith",
  [sym_load] = "load",
  [sym_store] = "store",
  [sym_jump] = "jump",
  [sym_return] = "return",
  [sym_directive] = "directive",
  [sym_trap] = "trap",
  [sym_int] = "int",
  [sym_label] = "label",
  [sym_label_jump] = "label_jump",
  [sym_meta] = "meta",
  [sym_meta_ident] = "meta_ident",
  [sym_hex] = "hex",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ADD] = anon_sym_ADD,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_LD] = anon_sym_LD,
  [anon_sym_LDI] = anon_sym_LDI,
  [anon_sym_LDR] = anon_sym_LDR,
  [anon_sym_LEA] = anon_sym_LEA,
  [anon_sym_ST] = anon_sym_ST,
  [anon_sym_STI] = anon_sym_STI,
  [anon_sym_STR] = anon_sym_STR,
  [anon_sym_JSR] = anon_sym_JSR,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_JSRR] = anon_sym_JSRR,
  [anon_sym_RET] = anon_sym_RET,
  [anon_sym_RTI] = anon_sym_RTI,
  [sym_branch] = sym_branch,
  [sym_positive] = sym_positive,
  [sym_negative] = sym_negative,
  [sym_zero] = sym_zero,
  [anon_sym_DOTFILL] = anon_sym_DOTFILL,
  [anon_sym_DOTBLKW] = anon_sym_DOTBLKW,
  [anon_sym_DOTSTRINGZ] = anon_sym_DOTSTRINGZ,
  [anon_sym_GETC] = anon_sym_GETC,
  [anon_sym_OUT] = anon_sym_OUT,
  [anon_sym_PUTS] = anon_sym_PUTS,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_PUTSP] = anon_sym_PUTSP,
  [anon_sym_HALT] = anon_sym_HALT,
  [anon_sym_TRAP] = anon_sym_TRAP,
  [sym_reg] = sym_reg,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOTEND] = anon_sym_DOTEND,
  [anon_sym_DOTORIG] = anon_sym_DOTORIG,
  [anon_sym_DOTorig] = anon_sym_DOTorig,
  [anon_sym_DOTend] = anon_sym_DOTend,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_hex_token1] = aux_sym_hex_token1,
  [sym_string] = sym_string,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__item] = sym__item,
  [sym_instruction] = sym_instruction,
  [sym_opcode] = sym_opcode,
  [sym_arith] = sym_arith,
  [sym_load] = sym_load,
  [sym_store] = sym_store,
  [sym_jump] = sym_jump,
  [sym_return] = sym_return,
  [sym_directive] = sym_directive,
  [sym_trap] = sym_trap,
  [sym_int] = sym_int,
  [sym_label] = sym_label,
  [sym_label_jump] = sym_label_jump,
  [sym_meta] = sym_meta,
  [sym_meta_ident] = sym_meta_ident,
  [sym_hex] = sym_hex,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LEA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSRR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RTI] = {
    .visible = true,
    .named = false,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_positive] = {
    .visible = true,
    .named = true,
  },
  [sym_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_zero] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTFILL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTBLKW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTSTRINGZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GETC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUTSP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRAP] = {
    .visible = true,
    .named = false,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTEND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTORIG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTorig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_arith] = {
    .visible = true,
    .named = true,
  },
  [sym_load] = {
    .visible = true,
    .named = true,
  },
  [sym_store] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_trap] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_label_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '"', 2,
        '#', 68,
        ',', 34,
        '-', 69,
        '.', 5,
        ':', 105,
        ';', 114,
        'A', 76,
        'B', 90,
        'G', 80,
        'H', 72,
        'I', 86,
        'J', 85,
        'L', 77,
        'N', 87,
        'O', 101,
        'P', 102,
        'R', 81,
        'S', 94,
        'T', 92,
        'n', 55,
        'p', 54,
        'x', 111,
        'z', 56,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(113);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == ';') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(14);
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'G') ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == 'G') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'I') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'K') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'W') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'Z') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 29:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '#', 68,
        ',', 34,
        '-', 69,
        '.', 7,
        ';', 115,
        'A', 76,
        'B', 90,
        'G', 80,
        'H', 72,
        'I', 86,
        'J', 85,
        'L', 77,
        'N', 87,
        'O', 101,
        'P', 102,
        'R', 81,
        'S', 94,
        'T', 92,
        'x', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 30:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '#', 68,
        ',', 34,
        '-', 69,
        '.', 7,
        ';', 115,
        'A', 76,
        'B', 90,
        'G', 80,
        'H', 72,
        'I', 86,
        'J', 85,
        'L', 77,
        'N', 87,
        'O', 101,
        'P', 102,
        'R', 81,
        'S', 94,
        'T', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '.', 5,
        ':', 105,
        ';', 115,
        'A', 76,
        'B', 90,
        'G', 80,
        'H', 72,
        'I', 86,
        'J', 85,
        'L', 77,
        'N', 87,
        'O', 101,
        'P', 102,
        'R', 82,
        'S', 94,
        'T', 92,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '.', 7,
        ';', 115,
        'A', 76,
        'B', 90,
        'G', 80,
        'H', 72,
        'I', 86,
        'J', 85,
        'L', 77,
        'N', 87,
        'O', 101,
        'P', 102,
        'R', 82,
        'S', 94,
        'T', 92,
        'x', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_ADD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LD);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LDI);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LDR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LEA);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ST);
      if (lookahead == 'I') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STI);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_JSR);
      if (lookahead == 'R') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_JMP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_JSRR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RTI);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'z') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(104);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'z') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(104);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 'n' ||
          lookahead == 'p' ||
          lookahead == 'z') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(104);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_positive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_negative);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_zero);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOTFILL);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOTBLKW);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOTSTRINGZ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GETC);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PUTS);
      if (lookahead == 'P') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_IN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PUTSP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_HALT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_TRAP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'A') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'A') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'A') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'C') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'N') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'D') ADVANCE(38);
      if (lookahead == 'E') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'D') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'D') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'E') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'I') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'L') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'M') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'N') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'O') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'P') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'P') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'R') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'R') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'R') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'S') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'T') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'T') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'T') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'T') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'T') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'T') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'T') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'U') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == 'U') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOTEND);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOTORIG);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOTorig);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOTend);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_x);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 31},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 31},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ADD] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_LD] = ACTIONS(1),
    [anon_sym_LDI] = ACTIONS(1),
    [anon_sym_LDR] = ACTIONS(1),
    [anon_sym_LEA] = ACTIONS(1),
    [anon_sym_ST] = ACTIONS(1),
    [anon_sym_STI] = ACTIONS(1),
    [anon_sym_STR] = ACTIONS(1),
    [anon_sym_JSR] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_JSRR] = ACTIONS(1),
    [anon_sym_RET] = ACTIONS(1),
    [anon_sym_RTI] = ACTIONS(1),
    [sym_branch] = ACTIONS(1),
    [sym_positive] = ACTIONS(1),
    [sym_negative] = ACTIONS(1),
    [sym_zero] = ACTIONS(1),
    [anon_sym_DOTFILL] = ACTIONS(1),
    [anon_sym_DOTBLKW] = ACTIONS(1),
    [anon_sym_DOTSTRINGZ] = ACTIONS(1),
    [anon_sym_GETC] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
    [anon_sym_PUTS] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_PUTSP] = ACTIONS(1),
    [anon_sym_HALT] = ACTIONS(1),
    [anon_sym_TRAP] = ACTIONS(1),
    [sym_reg] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOTEND] = ACTIONS(1),
    [anon_sym_DOTORIG] = ACTIONS(1),
    [anon_sym_DOTorig] = ACTIONS(1),
    [anon_sym_DOTend] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_line_comment_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(40),
    [sym__item] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_opcode] = STATE(9),
    [sym_arith] = STATE(15),
    [sym_load] = STATE(15),
    [sym_store] = STATE(15),
    [sym_jump] = STATE(15),
    [sym_return] = STATE(15),
    [sym_trap] = STATE(19),
    [sym_label] = STATE(38),
    [sym_label_jump] = STATE(3),
    [sym_meta] = STATE(3),
    [sym_meta_ident] = STATE(18),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ADD] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(7),
    [anon_sym_NOT] = ACTIONS(7),
    [anon_sym_LD] = ACTIONS(9),
    [anon_sym_LDI] = ACTIONS(9),
    [anon_sym_LDR] = ACTIONS(9),
    [anon_sym_LEA] = ACTIONS(9),
    [anon_sym_ST] = ACTIONS(11),
    [anon_sym_STI] = ACTIONS(11),
    [anon_sym_STR] = ACTIONS(11),
    [anon_sym_JSR] = ACTIONS(13),
    [anon_sym_JMP] = ACTIONS(13),
    [anon_sym_JSRR] = ACTIONS(13),
    [anon_sym_RET] = ACTIONS(15),
    [anon_sym_RTI] = ACTIONS(15),
    [sym_branch] = ACTIONS(17),
    [anon_sym_GETC] = ACTIONS(19),
    [anon_sym_OUT] = ACTIONS(19),
    [anon_sym_PUTS] = ACTIONS(19),
    [anon_sym_IN] = ACTIONS(19),
    [anon_sym_PUTSP] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_TRAP] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(21),
    [anon_sym_DOTEND] = ACTIONS(23),
    [anon_sym_DOTORIG] = ACTIONS(23),
    [anon_sym_DOTorig] = ACTIONS(23),
    [anon_sym_DOTend] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [2] = {
    [sym__item] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_opcode] = STATE(9),
    [sym_arith] = STATE(15),
    [sym_load] = STATE(15),
    [sym_store] = STATE(15),
    [sym_jump] = STATE(15),
    [sym_return] = STATE(15),
    [sym_trap] = STATE(19),
    [sym_label] = STATE(38),
    [sym_label_jump] = STATE(2),
    [sym_meta] = STATE(2),
    [sym_meta_ident] = STATE(18),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_ADD] = ACTIONS(29),
    [anon_sym_AND] = ACTIONS(29),
    [anon_sym_NOT] = ACTIONS(29),
    [anon_sym_LD] = ACTIONS(32),
    [anon_sym_LDI] = ACTIONS(32),
    [anon_sym_LDR] = ACTIONS(32),
    [anon_sym_LEA] = ACTIONS(32),
    [anon_sym_ST] = ACTIONS(35),
    [anon_sym_STI] = ACTIONS(35),
    [anon_sym_STR] = ACTIONS(35),
    [anon_sym_JSR] = ACTIONS(38),
    [anon_sym_JMP] = ACTIONS(38),
    [anon_sym_JSRR] = ACTIONS(38),
    [anon_sym_RET] = ACTIONS(41),
    [anon_sym_RTI] = ACTIONS(41),
    [sym_branch] = ACTIONS(44),
    [anon_sym_GETC] = ACTIONS(47),
    [anon_sym_OUT] = ACTIONS(47),
    [anon_sym_PUTS] = ACTIONS(47),
    [anon_sym_IN] = ACTIONS(47),
    [anon_sym_PUTSP] = ACTIONS(47),
    [anon_sym_HALT] = ACTIONS(47),
    [anon_sym_TRAP] = ACTIONS(47),
    [aux_sym_label_token1] = ACTIONS(50),
    [anon_sym_DOTEND] = ACTIONS(53),
    [anon_sym_DOTORIG] = ACTIONS(53),
    [anon_sym_DOTorig] = ACTIONS(53),
    [anon_sym_DOTend] = ACTIONS(53),
    [sym_comment] = ACTIONS(25),
  },
  [3] = {
    [sym__item] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_opcode] = STATE(9),
    [sym_arith] = STATE(15),
    [sym_load] = STATE(15),
    [sym_store] = STATE(15),
    [sym_jump] = STATE(15),
    [sym_return] = STATE(15),
    [sym_trap] = STATE(19),
    [sym_label] = STATE(38),
    [sym_label_jump] = STATE(2),
    [sym_meta] = STATE(2),
    [sym_meta_ident] = STATE(18),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_ADD] = ACTIONS(7),
    [anon_sym_AND] = ACTIONS(7),
    [anon_sym_NOT] = ACTIONS(7),
    [anon_sym_LD] = ACTIONS(9),
    [anon_sym_LDI] = ACTIONS(9),
    [anon_sym_LDR] = ACTIONS(9),
    [anon_sym_LEA] = ACTIONS(9),
    [anon_sym_ST] = ACTIONS(11),
    [anon_sym_STI] = ACTIONS(11),
    [anon_sym_STR] = ACTIONS(11),
    [anon_sym_JSR] = ACTIONS(13),
    [anon_sym_JMP] = ACTIONS(13),
    [anon_sym_JSRR] = ACTIONS(13),
    [anon_sym_RET] = ACTIONS(15),
    [anon_sym_RTI] = ACTIONS(15),
    [sym_branch] = ACTIONS(17),
    [anon_sym_GETC] = ACTIONS(19),
    [anon_sym_OUT] = ACTIONS(19),
    [anon_sym_PUTS] = ACTIONS(19),
    [anon_sym_IN] = ACTIONS(19),
    [anon_sym_PUTSP] = ACTIONS(19),
    [anon_sym_HALT] = ACTIONS(19),
    [anon_sym_TRAP] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(21),
    [anon_sym_DOTEND] = ACTIONS(23),
    [anon_sym_DOTORIG] = ACTIONS(23),
    [anon_sym_DOTorig] = ACTIONS(23),
    [anon_sym_DOTend] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [4] = {
    [sym_int] = STATE(30),
    [sym_hex] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_ADD] = ACTIONS(62),
    [anon_sym_AND] = ACTIONS(62),
    [anon_sym_NOT] = ACTIONS(62),
    [anon_sym_LD] = ACTIONS(62),
    [anon_sym_LDI] = ACTIONS(62),
    [anon_sym_LDR] = ACTIONS(62),
    [anon_sym_LEA] = ACTIONS(62),
    [anon_sym_ST] = ACTIONS(62),
    [anon_sym_STI] = ACTIONS(62),
    [anon_sym_STR] = ACTIONS(62),
    [anon_sym_JSR] = ACTIONS(62),
    [anon_sym_JMP] = ACTIONS(62),
    [anon_sym_JSRR] = ACTIONS(62),
    [anon_sym_RET] = ACTIONS(62),
    [anon_sym_RTI] = ACTIONS(62),
    [sym_branch] = ACTIONS(62),
    [anon_sym_GETC] = ACTIONS(62),
    [anon_sym_OUT] = ACTIONS(62),
    [anon_sym_PUTS] = ACTIONS(62),
    [anon_sym_IN] = ACTIONS(62),
    [anon_sym_PUTSP] = ACTIONS(62),
    [anon_sym_HALT] = ACTIONS(62),
    [anon_sym_TRAP] = ACTIONS(62),
    [sym_reg] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [aux_sym_int_token1] = ACTIONS(70),
    [aux_sym_label_token1] = ACTIONS(62),
    [anon_sym_DOTEND] = ACTIONS(58),
    [anon_sym_DOTORIG] = ACTIONS(58),
    [anon_sym_DOTorig] = ACTIONS(58),
    [anon_sym_DOTend] = ACTIONS(58),
    [anon_sym_x] = ACTIONS(72),
    [sym_comment] = ACTIONS(25),
  },
  [5] = {
    [sym_int] = STATE(33),
    [sym_hex] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_ADD] = ACTIONS(78),
    [anon_sym_AND] = ACTIONS(78),
    [anon_sym_NOT] = ACTIONS(78),
    [anon_sym_LD] = ACTIONS(78),
    [anon_sym_LDI] = ACTIONS(78),
    [anon_sym_LDR] = ACTIONS(78),
    [anon_sym_LEA] = ACTIONS(78),
    [anon_sym_ST] = ACTIONS(78),
    [anon_sym_STI] = ACTIONS(78),
    [anon_sym_STR] = ACTIONS(78),
    [anon_sym_JSR] = ACTIONS(78),
    [anon_sym_JMP] = ACTIONS(78),
    [anon_sym_JSRR] = ACTIONS(78),
    [anon_sym_RET] = ACTIONS(78),
    [anon_sym_RTI] = ACTIONS(78),
    [sym_branch] = ACTIONS(78),
    [anon_sym_GETC] = ACTIONS(78),
    [anon_sym_OUT] = ACTIONS(78),
    [anon_sym_PUTS] = ACTIONS(78),
    [anon_sym_IN] = ACTIONS(78),
    [anon_sym_PUTSP] = ACTIONS(78),
    [anon_sym_HALT] = ACTIONS(78),
    [anon_sym_TRAP] = ACTIONS(78),
    [sym_reg] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [aux_sym_int_token1] = ACTIONS(70),
    [aux_sym_label_token1] = ACTIONS(78),
    [anon_sym_DOTEND] = ACTIONS(74),
    [anon_sym_DOTORIG] = ACTIONS(74),
    [anon_sym_DOTorig] = ACTIONS(74),
    [anon_sym_DOTend] = ACTIONS(74),
    [anon_sym_x] = ACTIONS(72),
    [sym_comment] = ACTIONS(25),
  },
  [6] = {
    [sym_int] = STATE(26),
    [sym_label] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_ADD] = ACTIONS(86),
    [anon_sym_AND] = ACTIONS(86),
    [anon_sym_NOT] = ACTIONS(86),
    [anon_sym_LD] = ACTIONS(86),
    [anon_sym_LDI] = ACTIONS(86),
    [anon_sym_LDR] = ACTIONS(86),
    [anon_sym_LEA] = ACTIONS(86),
    [anon_sym_ST] = ACTIONS(86),
    [anon_sym_STI] = ACTIONS(86),
    [anon_sym_STR] = ACTIONS(86),
    [anon_sym_JSR] = ACTIONS(86),
    [anon_sym_JMP] = ACTIONS(86),
    [anon_sym_JSRR] = ACTIONS(86),
    [anon_sym_RET] = ACTIONS(86),
    [anon_sym_RTI] = ACTIONS(86),
    [sym_branch] = ACTIONS(86),
    [anon_sym_GETC] = ACTIONS(86),
    [anon_sym_OUT] = ACTIONS(86),
    [anon_sym_PUTS] = ACTIONS(86),
    [anon_sym_IN] = ACTIONS(86),
    [anon_sym_PUTSP] = ACTIONS(86),
    [anon_sym_HALT] = ACTIONS(86),
    [anon_sym_TRAP] = ACTIONS(86),
    [sym_reg] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [aux_sym_int_token1] = ACTIONS(70),
    [aux_sym_label_token1] = ACTIONS(86),
    [anon_sym_DOTEND] = ACTIONS(82),
    [anon_sym_DOTORIG] = ACTIONS(82),
    [anon_sym_DOTorig] = ACTIONS(82),
    [anon_sym_DOTend] = ACTIONS(82),
    [sym_comment] = ACTIONS(25),
  },
  [7] = {
    [sym_int] = STATE(34),
    [sym_hex] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_ADD] = ACTIONS(92),
    [anon_sym_AND] = ACTIONS(92),
    [anon_sym_NOT] = ACTIONS(92),
    [anon_sym_LD] = ACTIONS(92),
    [anon_sym_LDI] = ACTIONS(92),
    [anon_sym_LDR] = ACTIONS(92),
    [anon_sym_LEA] = ACTIONS(92),
    [anon_sym_ST] = ACTIONS(92),
    [anon_sym_STI] = ACTIONS(92),
    [anon_sym_STR] = ACTIONS(92),
    [anon_sym_JSR] = ACTIONS(92),
    [anon_sym_JMP] = ACTIONS(92),
    [anon_sym_JSRR] = ACTIONS(92),
    [anon_sym_RET] = ACTIONS(92),
    [anon_sym_RTI] = ACTIONS(92),
    [sym_branch] = ACTIONS(92),
    [anon_sym_GETC] = ACTIONS(92),
    [anon_sym_OUT] = ACTIONS(92),
    [anon_sym_PUTS] = ACTIONS(92),
    [anon_sym_IN] = ACTIONS(92),
    [anon_sym_PUTSP] = ACTIONS(92),
    [anon_sym_HALT] = ACTIONS(92),
    [anon_sym_TRAP] = ACTIONS(92),
    [sym_reg] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [aux_sym_int_token1] = ACTIONS(70),
    [aux_sym_label_token1] = ACTIONS(92),
    [anon_sym_DOTEND] = ACTIONS(90),
    [anon_sym_DOTORIG] = ACTIONS(90),
    [anon_sym_DOTorig] = ACTIONS(90),
    [anon_sym_DOTend] = ACTIONS(90),
    [anon_sym_x] = ACTIONS(72),
    [sym_comment] = ACTIONS(25),
  },
  [8] = {
    [sym_int] = STATE(33),
    [sym_hex] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_ADD] = ACTIONS(78),
    [anon_sym_AND] = ACTIONS(78),
    [anon_sym_NOT] = ACTIONS(78),
    [anon_sym_LD] = ACTIONS(78),
    [anon_sym_LDI] = ACTIONS(78),
    [anon_sym_LDR] = ACTIONS(78),
    [anon_sym_LEA] = ACTIONS(78),
    [anon_sym_ST] = ACTIONS(78),
    [anon_sym_STI] = ACTIONS(78),
    [anon_sym_STR] = ACTIONS(78),
    [anon_sym_JSR] = ACTIONS(78),
    [anon_sym_JMP] = ACTIONS(78),
    [anon_sym_JSRR] = ACTIONS(78),
    [anon_sym_RET] = ACTIONS(78),
    [anon_sym_RTI] = ACTIONS(78),
    [sym_branch] = ACTIONS(78),
    [anon_sym_GETC] = ACTIONS(78),
    [anon_sym_OUT] = ACTIONS(78),
    [anon_sym_PUTS] = ACTIONS(78),
    [anon_sym_IN] = ACTIONS(78),
    [anon_sym_PUTSP] = ACTIONS(78),
    [anon_sym_HALT] = ACTIONS(78),
    [anon_sym_TRAP] = ACTIONS(78),
    [sym_reg] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [aux_sym_int_token1] = ACTIONS(70),
    [aux_sym_label_token1] = ACTIONS(78),
    [anon_sym_DOTEND] = ACTIONS(74),
    [anon_sym_DOTORIG] = ACTIONS(74),
    [anon_sym_DOTorig] = ACTIONS(74),
    [anon_sym_DOTend] = ACTIONS(74),
    [anon_sym_x] = ACTIONS(72),
    [sym_comment] = ACTIONS(25),
  },
  [9] = {
    [sym_int] = STATE(25),
    [sym_label_jump] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_ADD] = ACTIONS(98),
    [anon_sym_AND] = ACTIONS(98),
    [anon_sym_NOT] = ACTIONS(98),
    [anon_sym_LD] = ACTIONS(98),
    [anon_sym_LDI] = ACTIONS(98),
    [anon_sym_LDR] = ACTIONS(98),
    [anon_sym_LEA] = ACTIONS(98),
    [anon_sym_ST] = ACTIONS(98),
    [anon_sym_STI] = ACTIONS(98),
    [anon_sym_STR] = ACTIONS(98),
    [anon_sym_JSR] = ACTIONS(98),
    [anon_sym_JMP] = ACTIONS(98),
    [anon_sym_JSRR] = ACTIONS(98),
    [anon_sym_RET] = ACTIONS(98),
    [anon_sym_RTI] = ACTIONS(98),
    [sym_branch] = ACTIONS(98),
    [anon_sym_GETC] = ACTIONS(98),
    [anon_sym_OUT] = ACTIONS(98),
    [anon_sym_PUTS] = ACTIONS(98),
    [anon_sym_IN] = ACTIONS(98),
    [anon_sym_PUTSP] = ACTIONS(98),
    [anon_sym_HALT] = ACTIONS(98),
    [anon_sym_TRAP] = ACTIONS(98),
    [sym_reg] = ACTIONS(100),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(68),
    [aux_sym_int_token1] = ACTIONS(70),
    [aux_sym_label_token1] = ACTIONS(98),
    [anon_sym_DOTEND] = ACTIONS(96),
    [anon_sym_DOTORIG] = ACTIONS(96),
    [anon_sym_DOTorig] = ACTIONS(96),
    [anon_sym_DOTend] = ACTIONS(96),
    [sym_comment] = ACTIONS(25),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_ADD] = ACTIONS(104),
    [anon_sym_AND] = ACTIONS(104),
    [anon_sym_NOT] = ACTIONS(104),
    [anon_sym_LD] = ACTIONS(104),
    [anon_sym_LDI] = ACTIONS(104),
    [anon_sym_LDR] = ACTIONS(104),
    [anon_sym_LEA] = ACTIONS(104),
    [anon_sym_ST] = ACTIONS(104),
    [anon_sym_STI] = ACTIONS(104),
    [anon_sym_STR] = ACTIONS(104),
    [anon_sym_JSR] = ACTIONS(104),
    [anon_sym_JMP] = ACTIONS(104),
    [anon_sym_JSRR] = ACTIONS(104),
    [anon_sym_RET] = ACTIONS(104),
    [anon_sym_RTI] = ACTIONS(104),
    [sym_branch] = ACTIONS(104),
    [anon_sym_GETC] = ACTIONS(104),
    [anon_sym_OUT] = ACTIONS(104),
    [anon_sym_PUTS] = ACTIONS(104),
    [anon_sym_IN] = ACTIONS(104),
    [anon_sym_PUTSP] = ACTIONS(104),
    [anon_sym_HALT] = ACTIONS(104),
    [anon_sym_TRAP] = ACTIONS(104),
    [sym_reg] = ACTIONS(104),
    [anon_sym_POUND] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [aux_sym_int_token1] = ACTIONS(104),
    [aux_sym_label_token1] = ACTIONS(104),
    [anon_sym_DOTEND] = ACTIONS(102),
    [anon_sym_DOTORIG] = ACTIONS(102),
    [anon_sym_DOTorig] = ACTIONS(102),
    [anon_sym_DOTend] = ACTIONS(102),
    [sym_comment] = ACTIONS(25),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_ADD] = ACTIONS(108),
    [anon_sym_AND] = ACTIONS(108),
    [anon_sym_NOT] = ACTIONS(108),
    [anon_sym_LD] = ACTIONS(108),
    [anon_sym_LDI] = ACTIONS(108),
    [anon_sym_LDR] = ACTIONS(108),
    [anon_sym_LEA] = ACTIONS(108),
    [anon_sym_ST] = ACTIONS(108),
    [anon_sym_STI] = ACTIONS(108),
    [anon_sym_STR] = ACTIONS(108),
    [anon_sym_JSR] = ACTIONS(108),
    [anon_sym_JMP] = ACTIONS(108),
    [anon_sym_JSRR] = ACTIONS(108),
    [anon_sym_RET] = ACTIONS(108),
    [anon_sym_RTI] = ACTIONS(108),
    [sym_branch] = ACTIONS(108),
    [anon_sym_GETC] = ACTIONS(108),
    [anon_sym_OUT] = ACTIONS(108),
    [anon_sym_PUTS] = ACTIONS(108),
    [anon_sym_IN] = ACTIONS(108),
    [anon_sym_PUTSP] = ACTIONS(108),
    [anon_sym_HALT] = ACTIONS(108),
    [anon_sym_TRAP] = ACTIONS(108),
    [sym_reg] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [aux_sym_int_token1] = ACTIONS(108),
    [aux_sym_label_token1] = ACTIONS(108),
    [anon_sym_DOTEND] = ACTIONS(106),
    [anon_sym_DOTORIG] = ACTIONS(106),
    [anon_sym_DOTorig] = ACTIONS(106),
    [anon_sym_DOTend] = ACTIONS(106),
    [sym_comment] = ACTIONS(25),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_ADD] = ACTIONS(112),
    [anon_sym_AND] = ACTIONS(112),
    [anon_sym_NOT] = ACTIONS(112),
    [anon_sym_LD] = ACTIONS(112),
    [anon_sym_LDI] = ACTIONS(112),
    [anon_sym_LDR] = ACTIONS(112),
    [anon_sym_LEA] = ACTIONS(112),
    [anon_sym_ST] = ACTIONS(112),
    [anon_sym_STI] = ACTIONS(112),
    [anon_sym_STR] = ACTIONS(112),
    [anon_sym_JSR] = ACTIONS(112),
    [anon_sym_JMP] = ACTIONS(112),
    [anon_sym_JSRR] = ACTIONS(112),
    [anon_sym_RET] = ACTIONS(112),
    [anon_sym_RTI] = ACTIONS(112),
    [sym_branch] = ACTIONS(112),
    [anon_sym_GETC] = ACTIONS(112),
    [anon_sym_OUT] = ACTIONS(112),
    [anon_sym_PUTS] = ACTIONS(112),
    [anon_sym_IN] = ACTIONS(112),
    [anon_sym_PUTSP] = ACTIONS(112),
    [anon_sym_HALT] = ACTIONS(112),
    [anon_sym_TRAP] = ACTIONS(112),
    [sym_reg] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [aux_sym_int_token1] = ACTIONS(112),
    [aux_sym_label_token1] = ACTIONS(112),
    [anon_sym_DOTEND] = ACTIONS(110),
    [anon_sym_DOTORIG] = ACTIONS(110),
    [anon_sym_DOTorig] = ACTIONS(110),
    [anon_sym_DOTend] = ACTIONS(110),
    [sym_comment] = ACTIONS(25),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_ADD] = ACTIONS(116),
    [anon_sym_AND] = ACTIONS(116),
    [anon_sym_NOT] = ACTIONS(116),
    [anon_sym_LD] = ACTIONS(116),
    [anon_sym_LDI] = ACTIONS(116),
    [anon_sym_LDR] = ACTIONS(116),
    [anon_sym_LEA] = ACTIONS(116),
    [anon_sym_ST] = ACTIONS(116),
    [anon_sym_STI] = ACTIONS(116),
    [anon_sym_STR] = ACTIONS(116),
    [anon_sym_JSR] = ACTIONS(116),
    [anon_sym_JMP] = ACTIONS(116),
    [anon_sym_JSRR] = ACTIONS(116),
    [anon_sym_RET] = ACTIONS(116),
    [anon_sym_RTI] = ACTIONS(116),
    [sym_branch] = ACTIONS(116),
    [anon_sym_GETC] = ACTIONS(116),
    [anon_sym_OUT] = ACTIONS(116),
    [anon_sym_PUTS] = ACTIONS(116),
    [anon_sym_IN] = ACTIONS(116),
    [anon_sym_PUTSP] = ACTIONS(116),
    [anon_sym_HALT] = ACTIONS(116),
    [anon_sym_TRAP] = ACTIONS(116),
    [sym_reg] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [aux_sym_int_token1] = ACTIONS(116),
    [aux_sym_label_token1] = ACTIONS(116),
    [anon_sym_DOTEND] = ACTIONS(114),
    [anon_sym_DOTORIG] = ACTIONS(114),
    [anon_sym_DOTorig] = ACTIONS(114),
    [anon_sym_DOTend] = ACTIONS(114),
    [sym_comment] = ACTIONS(25),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_ADD] = ACTIONS(120),
    [anon_sym_AND] = ACTIONS(120),
    [anon_sym_NOT] = ACTIONS(120),
    [anon_sym_LD] = ACTIONS(120),
    [anon_sym_LDI] = ACTIONS(120),
    [anon_sym_LDR] = ACTIONS(120),
    [anon_sym_LEA] = ACTIONS(120),
    [anon_sym_ST] = ACTIONS(120),
    [anon_sym_STI] = ACTIONS(120),
    [anon_sym_STR] = ACTIONS(120),
    [anon_sym_JSR] = ACTIONS(120),
    [anon_sym_JMP] = ACTIONS(120),
    [anon_sym_JSRR] = ACTIONS(120),
    [anon_sym_RET] = ACTIONS(120),
    [anon_sym_RTI] = ACTIONS(120),
    [sym_branch] = ACTIONS(120),
    [anon_sym_GETC] = ACTIONS(120),
    [anon_sym_OUT] = ACTIONS(120),
    [anon_sym_PUTS] = ACTIONS(120),
    [anon_sym_IN] = ACTIONS(120),
    [anon_sym_PUTSP] = ACTIONS(120),
    [anon_sym_HALT] = ACTIONS(120),
    [anon_sym_TRAP] = ACTIONS(120),
    [sym_reg] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [aux_sym_int_token1] = ACTIONS(120),
    [aux_sym_label_token1] = ACTIONS(120),
    [anon_sym_DOTEND] = ACTIONS(118),
    [anon_sym_DOTORIG] = ACTIONS(118),
    [anon_sym_DOTorig] = ACTIONS(118),
    [anon_sym_DOTend] = ACTIONS(118),
    [sym_comment] = ACTIONS(25),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_ADD] = ACTIONS(124),
    [anon_sym_AND] = ACTIONS(124),
    [anon_sym_NOT] = ACTIONS(124),
    [anon_sym_LD] = ACTIONS(124),
    [anon_sym_LDI] = ACTIONS(124),
    [anon_sym_LDR] = ACTIONS(124),
    [anon_sym_LEA] = ACTIONS(124),
    [anon_sym_ST] = ACTIONS(124),
    [anon_sym_STI] = ACTIONS(124),
    [anon_sym_STR] = ACTIONS(124),
    [anon_sym_JSR] = ACTIONS(124),
    [anon_sym_JMP] = ACTIONS(124),
    [anon_sym_JSRR] = ACTIONS(124),
    [anon_sym_RET] = ACTIONS(124),
    [anon_sym_RTI] = ACTIONS(124),
    [sym_branch] = ACTIONS(124),
    [anon_sym_GETC] = ACTIONS(124),
    [anon_sym_OUT] = ACTIONS(124),
    [anon_sym_PUTS] = ACTIONS(124),
    [anon_sym_IN] = ACTIONS(124),
    [anon_sym_PUTSP] = ACTIONS(124),
    [anon_sym_HALT] = ACTIONS(124),
    [anon_sym_TRAP] = ACTIONS(124),
    [sym_reg] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [aux_sym_int_token1] = ACTIONS(124),
    [aux_sym_label_token1] = ACTIONS(124),
    [anon_sym_DOTEND] = ACTIONS(122),
    [anon_sym_DOTORIG] = ACTIONS(122),
    [anon_sym_DOTorig] = ACTIONS(122),
    [anon_sym_DOTend] = ACTIONS(122),
    [sym_comment] = ACTIONS(25),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_ADD] = ACTIONS(128),
    [anon_sym_AND] = ACTIONS(128),
    [anon_sym_NOT] = ACTIONS(128),
    [anon_sym_LD] = ACTIONS(128),
    [anon_sym_LDI] = ACTIONS(128),
    [anon_sym_LDR] = ACTIONS(128),
    [anon_sym_LEA] = ACTIONS(128),
    [anon_sym_ST] = ACTIONS(128),
    [anon_sym_STI] = ACTIONS(128),
    [anon_sym_STR] = ACTIONS(128),
    [anon_sym_JSR] = ACTIONS(128),
    [anon_sym_JMP] = ACTIONS(128),
    [anon_sym_JSRR] = ACTIONS(128),
    [anon_sym_RET] = ACTIONS(128),
    [anon_sym_RTI] = ACTIONS(128),
    [sym_branch] = ACTIONS(128),
    [anon_sym_DOTFILL] = ACTIONS(130),
    [anon_sym_DOTBLKW] = ACTIONS(130),
    [anon_sym_DOTSTRINGZ] = ACTIONS(130),
    [anon_sym_GETC] = ACTIONS(128),
    [anon_sym_OUT] = ACTIONS(128),
    [anon_sym_PUTS] = ACTIONS(128),
    [anon_sym_IN] = ACTIONS(128),
    [anon_sym_PUTSP] = ACTIONS(128),
    [anon_sym_HALT] = ACTIONS(128),
    [anon_sym_TRAP] = ACTIONS(128),
    [aux_sym_label_token1] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_DOTEND] = ACTIONS(126),
    [anon_sym_DOTORIG] = ACTIONS(126),
    [anon_sym_DOTorig] = ACTIONS(126),
    [anon_sym_DOTend] = ACTIONS(126),
    [sym_comment] = ACTIONS(25),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_ADD] = ACTIONS(136),
    [anon_sym_AND] = ACTIONS(136),
    [anon_sym_NOT] = ACTIONS(136),
    [anon_sym_LD] = ACTIONS(136),
    [anon_sym_LDI] = ACTIONS(136),
    [anon_sym_LDR] = ACTIONS(136),
    [anon_sym_LEA] = ACTIONS(136),
    [anon_sym_ST] = ACTIONS(136),
    [anon_sym_STI] = ACTIONS(136),
    [anon_sym_STR] = ACTIONS(136),
    [anon_sym_JSR] = ACTIONS(136),
    [anon_sym_JMP] = ACTIONS(136),
    [anon_sym_JSRR] = ACTIONS(136),
    [anon_sym_RET] = ACTIONS(136),
    [anon_sym_RTI] = ACTIONS(136),
    [sym_branch] = ACTIONS(136),
    [anon_sym_DOTFILL] = ACTIONS(138),
    [anon_sym_DOTBLKW] = ACTIONS(138),
    [anon_sym_DOTSTRINGZ] = ACTIONS(138),
    [anon_sym_GETC] = ACTIONS(136),
    [anon_sym_OUT] = ACTIONS(136),
    [anon_sym_PUTS] = ACTIONS(136),
    [anon_sym_IN] = ACTIONS(136),
    [anon_sym_PUTSP] = ACTIONS(136),
    [anon_sym_HALT] = ACTIONS(136),
    [anon_sym_TRAP] = ACTIONS(136),
    [aux_sym_label_token1] = ACTIONS(136),
    [anon_sym_DOTEND] = ACTIONS(134),
    [anon_sym_DOTORIG] = ACTIONS(134),
    [anon_sym_DOTorig] = ACTIONS(134),
    [anon_sym_DOTend] = ACTIONS(134),
    [sym_comment] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_x,
    STATE(24), 1,
      sym_hex,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(142), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [43] = 5,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_x,
    STATE(25), 1,
      sym_hex,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(98), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [86] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(146), 25,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
      anon_sym_x,
  [124] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(148), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [164] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(154), 25,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
      anon_sym_x,
  [202] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(158), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [239] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(160), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(162), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [276] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(86), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [313] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(62), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [350] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(164), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(166), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [387] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(136), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [424] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(170), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [461] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(78), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [498] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(172), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [535] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(176), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [572] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(92), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [609] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_DOTEND,
      anon_sym_DOTORIG,
      anon_sym_DOTorig,
      anon_sym_DOTend,
    ACTIONS(180), 24,
      anon_sym_ADD,
      anon_sym_AND,
      anon_sym_NOT,
      anon_sym_LD,
      anon_sym_LDI,
      anon_sym_LDR,
      anon_sym_LEA,
      anon_sym_ST,
      anon_sym_STI,
      anon_sym_STR,
      anon_sym_JSR,
      anon_sym_JMP,
      anon_sym_JSRR,
      anon_sym_RET,
      anon_sym_RTI,
      sym_branch,
      anon_sym_GETC,
      anon_sym_OUT,
      anon_sym_PUTS,
      anon_sym_IN,
      anon_sym_PUTSP,
      anon_sym_HALT,
      anon_sym_TRAP,
      aux_sym_label_token1,
  [646] = 7,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_POUND,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(182), 1,
      aux_sym_int_token1,
    ACTIONS(184), 1,
      anon_sym_x,
    ACTIONS(186), 1,
      sym_string,
    STATE(26), 2,
      sym_int,
      sym_hex,
  [669] = 7,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_POUND,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      aux_sym_int_token1,
    ACTIONS(188), 1,
      sym_reg,
    ACTIONS(190), 1,
      aux_sym_label_token1,
    STATE(30), 2,
      sym_int,
      sym_label,
  [692] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(192), 5,
      anon_sym_POUND,
      anon_sym_DASH,
      aux_sym_int_token1,
      anon_sym_x,
      sym_string,
  [703] = 3,
    ACTIONS(25), 1,
      sym_comment,
    STATE(35), 1,
      sym_directive,
    ACTIONS(194), 3,
      anon_sym_DOTFILL,
      anon_sym_DOTBLKW,
      anon_sym_DOTSTRINGZ,
  [715] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
    ACTIONS(198), 1,
      aux_sym_int_token1,
  [725] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [732] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_hex_token1,
  [739] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_int_token1,
  [746] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym_int_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 43,
  [SMALL_STATE(20)] = 86,
  [SMALL_STATE(21)] = 124,
  [SMALL_STATE(22)] = 164,
  [SMALL_STATE(23)] = 202,
  [SMALL_STATE(24)] = 239,
  [SMALL_STATE(25)] = 276,
  [SMALL_STATE(26)] = 313,
  [SMALL_STATE(27)] = 350,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 424,
  [SMALL_STATE(30)] = 461,
  [SMALL_STATE(31)] = 498,
  [SMALL_STATE(32)] = 535,
  [SMALL_STATE(33)] = 572,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 646,
  [SMALL_STATE(36)] = 669,
  [SMALL_STATE(37)] = 692,
  [SMALL_STATE(38)] = 703,
  [SMALL_STATE(39)] = 715,
  [SMALL_STATE(40)] = 725,
  [SMALL_STATE(41)] = 732,
  [SMALL_STATE(42)] = 739,
  [SMALL_STATE(43)] = 746,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 5, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arith, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arith, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_store, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_jump, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_jump, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_jump, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_jump, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 1, 0, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trap, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trap, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_ident, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_ident, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2, 0, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 6, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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

TS_PUBLIC const TSLanguage *tree_sitter_lc3asm(void) {
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
