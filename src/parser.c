#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 158
#define LARGE_STATE_COUNT 73
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym__intertoken_token1 = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_POUND_SEMI = 3,
  anon_sym_POUND_BANG = 4,
  aux_sym_directive_token1 = 5,
  anon_sym_POUND_PIPE = 6,
  aux_sym_block_comment_token1 = 7,
  anon_sym_PIPE_POUND = 8,
  sym_boolean = 9,
  sym_number = 10,
  sym_character = 11,
  anon_sym_DQUOTE = 12,
  sym_string_content = 13,
  sym_escape_sequence = 14,
  sym_symbol = 15,
  sym_keyword = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_SQUOTE = 23,
  anon_sym_BQUOTE = 24,
  anon_sym_POUND_SQUOTE = 25,
  anon_sym_POUND_BQUOTE = 26,
  anon_sym_COMMA = 27,
  anon_sym_COMMA_AT = 28,
  anon_sym_POUND_COMMA = 29,
  anon_sym_POUND_COMMA_AT = 30,
  anon_sym_POUND_LPAREN = 31,
  anon_sym_POUNDvu8_LPAREN = 32,
  sym_program = 33,
  sym__token = 34,
  sym__intertoken = 35,
  sym_comment = 36,
  sym_directive = 37,
  sym_block_comment = 38,
  sym__datum = 39,
  sym_string = 40,
  sym_list = 41,
  sym_first_symbol = 42,
  sym_quote = 43,
  sym_quasiquote = 44,
  sym_syntax = 45,
  sym_quasisyntax = 46,
  sym_unquote = 47,
  sym_unquote_splicing = 48,
  sym_unsyntax = 49,
  sym_unsyntax_splicing = 50,
  sym_vector = 51,
  sym_byte_vector = 52,
  aux_sym_program_repeat1 = 53,
  aux_sym_comment_repeat1 = 54,
  aux_sym_block_comment_repeat1 = 55,
  aux_sym_string_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__intertoken_token1] = "_intertoken_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_directive_token1] = "directive_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_symbol] = "symbol",
  [sym_keyword] = "keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [anon_sym_POUND_LPAREN] = "#(",
  [anon_sym_POUNDvu8_LPAREN] = "#vu8(",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__intertoken] = "_intertoken",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_block_comment] = "block_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_list] = "list",
  [sym_first_symbol] = "first_symbol",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_syntax] = "syntax",
  [sym_quasisyntax] = "quasisyntax",
  [sym_unquote] = "unquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_unsyntax] = "unsyntax",
  [sym_unsyntax_splicing] = "unsyntax_splicing",
  [sym_vector] = "vector",
  [sym_byte_vector] = "byte_vector",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__intertoken_token1] = aux_sym__intertoken_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_symbol] = sym_symbol,
  [sym_keyword] = sym_keyword,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [anon_sym_POUND_LPAREN] = anon_sym_POUND_LPAREN,
  [anon_sym_POUNDvu8_LPAREN] = anon_sym_POUNDvu8_LPAREN,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__intertoken] = sym__intertoken,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_block_comment] = sym_block_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [sym_first_symbol] = sym_first_symbol,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_syntax] = sym_syntax,
  [sym_quasisyntax] = sym_quasisyntax,
  [sym_unquote] = sym_unquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_unsyntax] = sym_unsyntax,
  [sym_unsyntax_splicing] = sym_unsyntax_splicing,
  [sym_vector] = sym_vector,
  [sym_byte_vector] = sym_byte_vector,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__intertoken_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDvu8_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__intertoken] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_first_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_quasisyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_vector] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [6] = 3,
  [7] = 4,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 15,
  [21] = 21,
  [22] = 17,
  [23] = 13,
  [24] = 9,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 19,
  [30] = 18,
  [31] = 11,
  [32] = 28,
  [33] = 27,
  [34] = 26,
  [35] = 25,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 47,
  [51] = 46,
  [52] = 45,
  [53] = 44,
  [54] = 43,
  [55] = 55,
  [56] = 41,
  [57] = 57,
  [58] = 42,
  [59] = 36,
  [60] = 39,
  [61] = 38,
  [62] = 55,
  [63] = 37,
  [64] = 57,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 66,
  [69] = 69,
  [70] = 69,
  [71] = 40,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 106,
  [110] = 72,
  [111] = 98,
  [112] = 94,
  [113] = 103,
  [114] = 101,
  [115] = 99,
  [116] = 97,
  [117] = 91,
  [118] = 88,
  [119] = 86,
  [120] = 85,
  [121] = 84,
  [122] = 83,
  [123] = 95,
  [124] = 75,
  [125] = 76,
  [126] = 77,
  [127] = 78,
  [128] = 73,
  [129] = 79,
  [130] = 80,
  [131] = 87,
  [132] = 89,
  [133] = 82,
  [134] = 96,
  [135] = 74,
  [136] = 93,
  [137] = 81,
  [138] = 92,
  [139] = 90,
  [140] = 104,
  [141] = 102,
  [142] = 100,
  [143] = 143,
  [144] = 143,
  [145] = 145,
  [146] = 146,
  [147] = 145,
  [148] = 145,
  [149] = 143,
  [150] = 150,
  [151] = 150,
  [152] = 152,
  [153] = 152,
  [154] = 154,
  [155] = 91,
  [156] = 74,
  [157] = 157,
};

static TSCharacterRange aux_sym__intertoken_token1_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000},
};

static TSCharacterRange aux_sym_directive_token1_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'^', '_'},
  {'a', 'z'}, {'~', 0x9f}, {0xa1, 0x167f}, {0x1681, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x2fff},
  {0x3001, 0x10ffff},
};

static TSCharacterRange sym_escape_sequence_character_set_1[] = {
  {'\t', '\n'}, {' ', ' '}, {0x85, 0x85}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000},
};

static TSCharacterRange sym_escape_sequence_character_set_2[] = {
  {'\t', '\n'}, {'\r', '\r'}, {' ', ' '}, {0x85, 0x85}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2028},
  {0x202f, 0x202f}, {0x205f, 0x205f}, {0x3000, 0x3000},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(296);
      ADVANCE_MAP(
        '"', 619,
        '#', 423,
        '\'', 728,
        '(', 722,
        ')', 723,
        ',', 732,
        ';', 298,
        '[', 724,
        ']', 725,
        '`', 729,
        '{', 726,
        '|', 422,
        '}', 727,
      );
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(297);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(624);
      if (lookahead == '\r') ADVANCE(623);
      if (lookahead == 'X') ADVANCE(625);
      if (lookahead == 'x') ADVANCE(625);
      if (lookahead == 0x85 ||
          lookahead == 0x2028) ADVANCE(624);
      if (set_contains(sym_escape_sequence_character_set_2, 11, lookahead)) ADVANCE(622);
      if (lookahead != 0) ADVANCE(621);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(623);
      if (lookahead == '\n' ||
          lookahead == 0x85 ||
          lookahead == 0x2028) ADVANCE(624);
      if (set_contains(sym_escape_sequence_character_set_2, 11, lookahead)) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 300,
        '\'', 730,
        '(', 737,
        ',', 735,
        ':', 176,
        ';', 299,
        '\\', 107,
        '`', 731,
        'v', 173,
        '|', 420,
        'B', 432,
        'b', 432,
        'D', 25,
        'd', 25,
        'F', 426,
        'f', 426,
        'O', 486,
        'o', 486,
        'T', 427,
        't', 427,
        'X', 499,
        'x', 499,
        'E', 8,
        'I', 8,
        'e', 8,
        'i', 8,
      );
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(300);
      if (lookahead == ';') ADVANCE(299);
      if (lookahead == '|') ADVANCE(420);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 619,
        '#', 3,
        '\'', 728,
        '(', 722,
        ')', 723,
        ',', 733,
        '.', 397,
        ';', 298,
        '[', 724,
        ']', 725,
        '`', 729,
        '{', 726,
        '|', 119,
        '}', 727,
        '+', 323,
        '-', 323,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(419);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '|') ADVANCE(422);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(428);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(428);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 10,
        '.', 13,
        '/', 261,
        'i', 428,
        '|', 256,
        'E', 185,
        'e', 185,
        'D', 185,
        'F', 185,
        'L', 185,
        'S', 185,
        'd', 185,
        'f', 185,
        'l', 185,
        's', 185,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '|') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '#', 15,
        'i', 428,
        '|', 256,
        'E', 185,
        'e', 185,
        'D', 185,
        'F', 185,
        'L', 185,
        'S', 185,
        'd', 185,
        'f', 185,
        'l', 185,
        's', 185,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '|') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(428);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(428);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == ';') ADVANCE(298);
      if (lookahead == '|') ADVANCE(119);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(419);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(738);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '|') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '.', 140,
        '/', 256,
        'i', 428,
        '|', 256,
        'E', 185,
        'e', 185,
        'D', 185,
        'F', 185,
        'L', 185,
        'S', 185,
        'd', 185,
        'f', 185,
        'l', 185,
        's', 185,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == 'I') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '0') ADVANCE(428);
      END_STATE();
    case 68:
      if (lookahead == '0') ADVANCE(532);
      END_STATE();
    case 69:
      if (lookahead == '0') ADVANCE(139);
      END_STATE();
    case 70:
      if (lookahead == '0') ADVANCE(536);
      END_STATE();
    case 71:
      if (lookahead == '0') ADVANCE(546);
      END_STATE();
    case 72:
      if (lookahead == '0') ADVANCE(547);
      END_STATE();
    case 73:
      if (lookahead == '0') ADVANCE(533);
      END_STATE();
    case 74:
      if (lookahead == '0') ADVANCE(537);
      END_STATE();
    case 75:
      if (lookahead == '0') ADVANCE(534);
      END_STATE();
    case 76:
      if (lookahead == '0') ADVANCE(538);
      END_STATE();
    case 77:
      if (lookahead == '8') ADVANCE(30);
      END_STATE();
    case 78:
      if (lookahead == ';') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == ';') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == ';') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == ';') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(195);
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(216);
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 92:
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 93:
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 95:
      if (lookahead == 'F') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '|') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '|') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(27);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 107:
      ADVANCE_MAP(
        'N', 616,
        'S', 617,
        'X', 618,
        'a', 613,
        'b', 605,
        'd', 610,
        'e', 614,
        'l', 611,
        'n', 603,
        'p', 606,
        'r', 609,
        's', 604,
        't', 608,
        'v', 615,
        'x', 618,
      );
      if (lookahead != 0) ADVANCE(602);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 116:
      if (lookahead == 'W') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 117:
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '|') ADVANCE(626);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 118:
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '|') ADVANCE(720);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == '|') ADVANCE(301);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(602);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(607);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(602);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(428);
      END_STATE();
    case 140:
      ADVANCE_MAP(
        'i', 428,
        '|', 256,
        'E', 185,
        'e', 185,
        'D', 185,
        'F', 185,
        'L', 185,
        'S', 185,
        'd', 185,
        'f', 185,
        'l', 185,
        's', 185,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '|') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(27);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(147);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '|') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(65);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(565);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(169);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(602);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 166:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(602);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 176:
      if (lookahead == '|') ADVANCE(118);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(721);
      END_STATE();
    case 177:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 178:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 179:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 180:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 181:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      END_STATE();
    case 182:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 183:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 184:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 185:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 186:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 188:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 189:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 192:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 193:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 194:
      ADVANCE_MAP(
        'B', 517,
        'b', 517,
        'D', 35,
        'd', 35,
        'O', 519,
        'o', 519,
        'X', 521,
        'x', 521,
      );
      END_STATE();
    case 195:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 198:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 199:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 200:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 201:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 202:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 203:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 204:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 206:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 215:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 219:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 221:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 222:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(206);
      END_STATE();
    case 223:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(284);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(117);
      END_STATE();
    case 224:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(289);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(118);
      END_STATE();
    case 225:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(294);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(119);
      END_STATE();
    case 226:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(476);
      END_STATE();
    case 227:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(469);
      END_STATE();
    case 228:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(483);
      END_STATE();
    case 229:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 230:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 231:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      END_STATE();
    case 232:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(485);
      END_STATE();
    case 233:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(594);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(489);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(470);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(496);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(147);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(491);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(498);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(596);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(500);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(503);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 290:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 291:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 292:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 293:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      END_STATE();
    case 294:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 295:
      if (eof) ADVANCE(296);
      ADVANCE_MAP(
        '"', 619,
        '#', 3,
        '\'', 728,
        '(', 722,
        ')', 723,
        ',', 733,
        '.', 697,
        ';', 298,
        '[', 724,
        ']', 725,
        '`', 729,
        '{', 726,
        '|', 117,
        '}', 727,
        '+', 635,
        '-', 635,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(719);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__intertoken_token1);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '#', 430,
        '.', 303,
        '/', 399,
        '@', 327,
        '|', 246,
        '+', 328,
        '-', 328,
        'E', 376,
        'e', 376,
        'D', 377,
        'F', 377,
        'L', 377,
        'S', 377,
        'd', 377,
        'f', 377,
        'l', 377,
        's', 377,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '#', 434,
        '@', 327,
        '|', 246,
        '+', 328,
        '-', 328,
        'E', 376,
        'e', 376,
        'D', 377,
        'F', 377,
        'L', 377,
        'S', 377,
        'd', 377,
        'f', 377,
        'l', 377,
        's', 377,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '#', 437,
        '.', 305,
        '/', 401,
        '@', 327,
        'i', 419,
        '|', 248,
        '+', 328,
        '-', 328,
        'E', 378,
        'e', 378,
        'D', 379,
        'F', 379,
        'L', 379,
        'S', 379,
        'd', 379,
        'f', 379,
        'l', 379,
        's', 379,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '#', 442,
        '@', 327,
        'i', 419,
        '|', 248,
        '+', 328,
        '-', 328,
        'E', 378,
        'e', 378,
        'D', 379,
        'F', 379,
        'L', 379,
        'S', 379,
        'd', 379,
        'f', 379,
        'l', 379,
        's', 379,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '#', 450,
        '.', 312,
        '/', 405,
        '|', 250,
        'E', 380,
        'e', 380,
        'D', 380,
        'F', 380,
        'L', 380,
        'S', 380,
        'd', 380,
        'f', 380,
        'l', 380,
        's', 380,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(405);
      if (lookahead == '|') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '#', 10,
        '.', 314,
        '/', 407,
        'i', 419,
        '|', 256,
        'E', 381,
        'e', 381,
        'D', 381,
        'F', 381,
        'L', 381,
        'S', 381,
        'd', 381,
        'f', 381,
        'l', 381,
        's', 381,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '|') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '#', 466,
        '|', 250,
        'E', 380,
        'e', 380,
        'D', 380,
        'F', 380,
        'L', 380,
        'S', 380,
        'd', 380,
        'f', 380,
        'l', 380,
        's', 380,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '|') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '#', 15,
        'i', 419,
        '|', 256,
        'E', 381,
        'e', 381,
        'D', 381,
        'F', 381,
        'L', 381,
        'S', 381,
        'd', 381,
        'f', 381,
        'l', 381,
        's', 381,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '|') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(340);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(387);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '.', 374,
        '/', 418,
        '|', 250,
        'E', 380,
        'e', 380,
        'D', 380,
        'F', 380,
        'L', 380,
        'S', 380,
        'd', 380,
        'f', 380,
        'l', 380,
        's', 380,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '.', 365,
        '/', 415,
        'i', 419,
        '|', 256,
        'E', 381,
        'e', 381,
        'D', 381,
        'F', 381,
        'L', 381,
        'S', 381,
        'd', 381,
        'f', 381,
        'l', 381,
        's', 381,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(398);
      if (lookahead == 'I') ADVANCE(391);
      if (lookahead == 'N') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(341);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(339);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(403);
      if (lookahead == 'I') ADVANCE(396);
      if (lookahead == 'N') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(403);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(404);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'N') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(396);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'i') ADVANCE(395);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == 'I') ADVANCE(396);
      if (lookahead == 'N') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(414);
      if (lookahead == 'I') ADVANCE(395);
      if (lookahead == 'N') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '.') ADVANCE(342);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '0') ADVANCE(419);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '0') ADVANCE(347);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '0') ADVANCE(369);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '0') ADVANCE(348);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '@') ADVANCE(327);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '@') ADVANCE(330);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '@') ADVANCE(330);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(334);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'A') ADVANCE(392);
      if (lookahead == 'a') ADVANCE(356);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'A') ADVANCE(393);
      if (lookahead == 'a') ADVANCE(357);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'A') ADVANCE(394);
      if (lookahead == 'a') ADVANCE(358);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'F') ADVANCE(318);
      if (lookahead == 'f') ADVANCE(338);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'F') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(324);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'F') ADVANCE(325);
      if (lookahead == 'f') ADVANCE(325);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N') ADVANCE(388);
      if (lookahead == 'n') ADVANCE(352);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(338);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(324);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N') ADVANCE(325);
      if (lookahead == 'n') ADVANCE(325);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N') ADVANCE(389);
      if (lookahead == 'n') ADVANCE(353);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(354);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'a') ADVANCE(371);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'a') ADVANCE(372);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'f') ADVANCE(324);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'f') ADVANCE(325);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        'i', 419,
        '|', 256,
        'E', 381,
        'e', 381,
        'D', 381,
        'F', 381,
        'L', 381,
        'S', 381,
        'd', 381,
        'f', 381,
        'l', 381,
        's', 381,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'i') ADVANCE(419);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'i') ADVANCE(419);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'n') ADVANCE(363);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'n') ADVANCE(324);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'n') ADVANCE(325);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'n') ADVANCE(364);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      ADVANCE_MAP(
        '|', 250,
        'E', 380,
        'e', 380,
        'D', 380,
        'F', 380,
        'L', 380,
        'S', 380,
        'd', 380,
        'f', 380,
        'l', 380,
        's', 380,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(318);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(324);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(325);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(388);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(389);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(420);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 430,
        '.', 433,
        '/', 699,
        '@', 639,
        '|', 246,
        '+', 640,
        '-', 640,
        'E', 677,
        'e', 677,
        'D', 678,
        'F', 678,
        'L', 678,
        'S', 678,
        'd', 678,
        'f', 678,
        'l', 678,
        's', 678,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(430);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 430,
        '.', 435,
        '/', 274,
        '@', 43,
        '|', 246,
        '+', 44,
        '-', 44,
        'E', 179,
        'e', 179,
        'D', 180,
        'F', 180,
        'L', 180,
        'S', 180,
        'd', 180,
        'f', 180,
        'l', 180,
        's', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '|') ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(516);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 434,
        '@', 639,
        '|', 246,
        '+', 640,
        '-', 640,
        'E', 677,
        'e', 677,
        'D', 678,
        'F', 678,
        'L', 678,
        'S', 678,
        'd', 678,
        'f', 678,
        'l', 678,
        's', 678,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 434,
        '@', 43,
        '|', 246,
        '+', 44,
        '-', 44,
        'E', 179,
        'e', 179,
        'D', 180,
        'F', 180,
        'L', 180,
        'S', 180,
        'd', 180,
        'f', 180,
        'l', 180,
        's', 180,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 437,
        '.', 441,
        '/', 701,
        '@', 639,
        'i', 601,
        '|', 248,
        '+', 640,
        '-', 640,
        'E', 679,
        'e', 679,
        'D', 680,
        'F', 680,
        'L', 680,
        'S', 680,
        'd', 680,
        'f', 680,
        'l', 680,
        's', 680,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(437);
      if (lookahead == '.') ADVANCE(442);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 437,
        '.', 443,
        '/', 276,
        '@', 43,
        'i', 428,
        '|', 248,
        '+', 44,
        '-', 44,
        'E', 182,
        'e', 182,
        'D', 183,
        'F', 183,
        'L', 183,
        'S', 183,
        'd', 183,
        'f', 183,
        'l', 183,
        's', 183,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 442,
        '@', 639,
        'i', 601,
        '|', 248,
        '+', 640,
        '-', 640,
        'E', 679,
        'e', 679,
        'D', 680,
        'F', 680,
        'L', 680,
        'S', 680,
        'd', 680,
        'f', 680,
        'l', 680,
        's', 680,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(442);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 442,
        '@', 43,
        'i', 428,
        '|', 248,
        '+', 44,
        '-', 44,
        'E', 182,
        'e', 182,
        'D', 183,
        'F', 183,
        'L', 183,
        'S', 183,
        'd', 183,
        'f', 183,
        'l', 183,
        's', 183,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(639);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 450,
        '.', 462,
        '/', 705,
        '|', 250,
        'E', 681,
        'e', 681,
        'D', 681,
        'F', 681,
        'L', 681,
        'S', 681,
        'd', 681,
        'f', 681,
        'l', 681,
        's', 681,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '.') ADVANCE(467);
      if (lookahead == '/') ADVANCE(260);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(260);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 450,
        '.', 463,
        '/', 260,
        '|', 250,
        'E', 184,
        'e', 184,
        'D', 184,
        'F', 184,
        'L', 184,
        'S', 184,
        'd', 184,
        'f', 184,
        'l', 184,
        's', 184,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '.') ADVANCE(464);
      if (lookahead == '/') ADVANCE(705);
      if (lookahead == '|') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '.') ADVANCE(465);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '|') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(454);
      if (lookahead == '/') ADVANCE(227);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(454);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(457);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(457);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '@') ADVANCE(639);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 466,
        '|', 250,
        'E', 681,
        'e', 681,
        'D', 681,
        'F', 681,
        'L', 681,
        'S', 681,
        'd', 681,
        'f', 681,
        'l', 681,
        's', 681,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 466,
        '|', 250,
        'E', 184,
        'e', 184,
        'D', 184,
        'F', 184,
        'L', 184,
        'S', 184,
        'd', 184,
        'f', 184,
        'l', 184,
        's', 184,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '|') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '|') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(466);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(466);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(468);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '@') ADVANCE(567);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '@') ADVANCE(581);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(477);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(479);
      if (lookahead == '/') ADVANCE(239);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(479);
      if (lookahead == '/') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(482);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '@') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(482);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == '@') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(484);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(484);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(484);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(567);
      if (lookahead == '|') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == '@') ADVANCE(582);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '@') ADVANCE(567);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '@') ADVANCE(581);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(490);
      if (lookahead == '@') ADVANCE(581);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == '/') ADVANCE(286);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(492);
      if (lookahead == '/') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(495);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == '@') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '@') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '@') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '@') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == '|') ADVANCE(280);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '@') ADVANCE(582);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '@') ADVANCE(582);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '@') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(504);
      if (lookahead == '@') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(577);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '|') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(586);
      if (lookahead == '/') ADVANCE(715);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 575,
        '/', 715,
        '|', 250,
        'E', 681,
        'e', 681,
        'D', 681,
        'F', 681,
        'L', 681,
        'S', 681,
        'd', 681,
        'f', 681,
        'l', 681,
        's', 681,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 576,
        '/', 250,
        '|', 250,
        'E', 184,
        'e', 184,
        'D', 184,
        'F', 184,
        'L', 184,
        'S', 184,
        'd', 184,
        'f', 184,
        'l', 184,
        's', 184,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(639);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(639);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '@', 566,
        'I', 207,
        'N', 188,
        'i', 555,
        'n', 83,
        '|', 273,
        '+', 97,
        '-', 97,
        '0', 456,
        '1', 456,
      );
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '|') ADVANCE(272);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(516);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '@', 567,
        'I', 218,
        'N', 192,
        'i', 559,
        'n', 87,
        '|', 279,
        '+', 99,
        '-', 99,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(481);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(567);
      if (lookahead == '|') ADVANCE(278);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '@', 568,
        'I', 219,
        'N', 193,
        'i', 560,
        'n', 88,
        '|', 281,
        '+', 101,
        '-', 101,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == '|') ADVANCE(280);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(642);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(642);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(571);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(584);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(104);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(585);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(105);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(644);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(646);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(572);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(573);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(574);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(649);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(480);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(688);
      if (lookahead == 'n') ADVANCE(658);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(689);
      if (lookahead == 'n') ADVANCE(659);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(667);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(548);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(480);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(561);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(549);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '|', 250,
        'E', 681,
        'e', 681,
        'D', 681,
        'F', 681,
        'L', 681,
        'S', 681,
        'd', 681,
        'f', 681,
        'l', 681,
        's', 681,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '|', 250,
        'E', 184,
        'e', 184,
        'D', 184,
        'F', 184,
        'L', 184,
        'S', 184,
        'd', 184,
        'f', 184,
        'l', 184,
        's', 184,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(593);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(480);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(588);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(480);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_number);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P') ADVANCE(187);
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(602);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\r') ADVANCE(623);
      if (lookahead == '\n' ||
          lookahead == 0x85 ||
          lookahead == 0x2028) ADVANCE(624);
      if (set_contains(sym_escape_sequence_character_set_2, 11, lookahead)) ADVANCE(2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == 0x85) ADVANCE(624);
      if (set_contains(sym_escape_sequence_character_set_1, 9, lookahead)) ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_escape_sequence);
      if ((set_contains(sym_escape_sequence_character_set_1, 9, lookahead)) &&
          lookahead != '\n' &&
          lookahead != 0x85) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        '#', 10,
        '.', 629,
        '/', 707,
        'i', 601,
        '|', 256,
        'E', 682,
        'e', 682,
        'D', 682,
        'F', 682,
        'L', 682,
        'S', 682,
        'd', 682,
        'f', 682,
        'l', 682,
        's', 682,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '/') ADVANCE(707);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '|') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        '#', 15,
        'i', 601,
        '|', 256,
        'E', 682,
        'e', 682,
        'D', 682,
        'F', 682,
        'L', 682,
        'S', 682,
        'd', 682,
        'f', 682,
        'l', 682,
        's', 682,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '|') ADVANCE(256);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(652);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(671);
      if (lookahead == '/') ADVANCE(716);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        '.', 669,
        '/', 716,
        'i', 601,
        '|', 256,
        'E', 682,
        'e', 682,
        'D', 682,
        'F', 682,
        'L', 682,
        'S', 682,
        'd', 682,
        'f', 682,
        'l', 682,
        's', 682,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == 'I') ADVANCE(691);
      if (lookahead == 'N') ADVANCE(685);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(653);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(651);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == 'I') ADVANCE(696);
      if (lookahead == 'N') ADVANCE(687);
      if (lookahead == 'i') ADVANCE(664);
      if (lookahead == 'n') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(703);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(704);
      if (lookahead == 'I') ADVANCE(695);
      if (lookahead == 'N') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(627);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(709);
      if (lookahead == 'i') ADVANCE(676);
      if (lookahead == 'n') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(709);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(710);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 'n') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(711);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(711);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(696);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(712);
      if (lookahead == 'I') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(633);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(713);
      if (lookahead == 'I') ADVANCE(696);
      if (lookahead == 'N') ADVANCE(687);
      if (lookahead == 'i') ADVANCE(664);
      if (lookahead == 'n') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(713);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(714);
      if (lookahead == 'I') ADVANCE(695);
      if (lookahead == 'N') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 'n') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(654);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(601);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(535);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(673);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(541);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(692);
      if (lookahead == 'a') ADVANCE(661);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'a') ADVANCE(662);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(694);
      if (lookahead == 'a') ADVANCE(663);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'f') ADVANCE(650);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(636);
      if (lookahead == 'f') ADVANCE(636);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(637);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(632);
      if (lookahead == 'n') ADVANCE(650);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(636);
      if (lookahead == 'n') ADVANCE(636);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(637);
      if (lookahead == 'n') ADVANCE(637);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(690);
      if (lookahead == 'n') ADVANCE(660);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(674);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(675);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(636);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(637);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        'i', 601,
        '|', 256,
        'E', 682,
        'e', 682,
        'D', 682,
        'F', 682,
        'L', 682,
        'S', 682,
        'd', 682,
        'f', 682,
        'l', 682,
        's', 682,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == '|') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(601);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(601);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(636);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(637);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(668);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(693);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(632);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(636);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(637);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(688);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(632);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(690);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(671);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_symbol);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_keyword);
      if ((!eof && set_contains(aux_sym_directive_token1_character_set_2, 17, lookahead))) ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_POUND_LPAREN);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_POUNDvu8_LPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 295},
  [2] = {.lex_state = 295},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 295},
  [10] = {.lex_state = 295},
  [11] = {.lex_state = 295},
  [12] = {.lex_state = 295},
  [13] = {.lex_state = 295},
  [14] = {.lex_state = 295},
  [15] = {.lex_state = 295},
  [16] = {.lex_state = 295},
  [17] = {.lex_state = 295},
  [18] = {.lex_state = 295},
  [19] = {.lex_state = 295},
  [20] = {.lex_state = 295},
  [21] = {.lex_state = 295},
  [22] = {.lex_state = 295},
  [23] = {.lex_state = 295},
  [24] = {.lex_state = 295},
  [25] = {.lex_state = 295},
  [26] = {.lex_state = 295},
  [27] = {.lex_state = 295},
  [28] = {.lex_state = 295},
  [29] = {.lex_state = 295},
  [30] = {.lex_state = 295},
  [31] = {.lex_state = 295},
  [32] = {.lex_state = 295},
  [33] = {.lex_state = 295},
  [34] = {.lex_state = 295},
  [35] = {.lex_state = 295},
  [36] = {.lex_state = 295},
  [37] = {.lex_state = 295},
  [38] = {.lex_state = 295},
  [39] = {.lex_state = 295},
  [40] = {.lex_state = 295},
  [41] = {.lex_state = 295},
  [42] = {.lex_state = 295},
  [43] = {.lex_state = 295},
  [44] = {.lex_state = 295},
  [45] = {.lex_state = 295},
  [46] = {.lex_state = 295},
  [47] = {.lex_state = 295},
  [48] = {.lex_state = 295},
  [49] = {.lex_state = 295},
  [50] = {.lex_state = 295},
  [51] = {.lex_state = 295},
  [52] = {.lex_state = 295},
  [53] = {.lex_state = 295},
  [54] = {.lex_state = 295},
  [55] = {.lex_state = 295},
  [56] = {.lex_state = 295},
  [57] = {.lex_state = 295},
  [58] = {.lex_state = 295},
  [59] = {.lex_state = 295},
  [60] = {.lex_state = 295},
  [61] = {.lex_state = 295},
  [62] = {.lex_state = 295},
  [63] = {.lex_state = 295},
  [64] = {.lex_state = 295},
  [65] = {.lex_state = 295},
  [66] = {.lex_state = 295},
  [67] = {.lex_state = 295},
  [68] = {.lex_state = 295},
  [69] = {.lex_state = 295},
  [70] = {.lex_state = 295},
  [71] = {.lex_state = 295},
  [72] = {.lex_state = 295},
  [73] = {.lex_state = 295},
  [74] = {.lex_state = 295},
  [75] = {.lex_state = 295},
  [76] = {.lex_state = 295},
  [77] = {.lex_state = 295},
  [78] = {.lex_state = 295},
  [79] = {.lex_state = 295},
  [80] = {.lex_state = 295},
  [81] = {.lex_state = 295},
  [82] = {.lex_state = 295},
  [83] = {.lex_state = 295},
  [84] = {.lex_state = 295},
  [85] = {.lex_state = 295},
  [86] = {.lex_state = 295},
  [87] = {.lex_state = 295},
  [88] = {.lex_state = 295},
  [89] = {.lex_state = 295},
  [90] = {.lex_state = 295},
  [91] = {.lex_state = 295},
  [92] = {.lex_state = 295},
  [93] = {.lex_state = 295},
  [94] = {.lex_state = 295},
  [95] = {.lex_state = 295},
  [96] = {.lex_state = 295},
  [97] = {.lex_state = 295},
  [98] = {.lex_state = 295},
  [99] = {.lex_state = 295},
  [100] = {.lex_state = 295},
  [101] = {.lex_state = 295},
  [102] = {.lex_state = 295},
  [103] = {.lex_state = 295},
  [104] = {.lex_state = 295},
  [105] = {.lex_state = 295},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 24},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 24},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 24},
  [118] = {.lex_state = 24},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 24},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 24},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 24},
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 24},
  [131] = {.lex_state = 24},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 24},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 24},
  [136] = {.lex_state = 24},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 24},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__intertoken_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(157),
    [sym__token] = STATE(21),
    [sym__intertoken] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_directive] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_list] = STATE(21),
    [sym_quote] = STATE(21),
    [sym_quasiquote] = STATE(21),
    [sym_syntax] = STATE(21),
    [sym_quasisyntax] = STATE(21),
    [sym_unquote] = STATE(21),
    [sym_unquote_splicing] = STATE(21),
    [sym_unsyntax] = STATE(21),
    [sym_unsyntax_splicing] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_byte_vector] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__intertoken_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(5),
    [sym_number] = ACTIONS(15),
    [sym_character] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(15),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym__intertoken_token1] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(50),
    [anon_sym_POUND_SEMI] = ACTIONS(53),
    [anon_sym_POUND_BANG] = ACTIONS(56),
    [anon_sym_POUND_PIPE] = ACTIONS(59),
    [sym_boolean] = ACTIONS(47),
    [sym_number] = ACTIONS(62),
    [sym_character] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [sym_symbol] = ACTIONS(62),
    [sym_keyword] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_POUND_SQUOTE] = ACTIONS(83),
    [anon_sym_POUND_BQUOTE] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_COMMA_AT] = ACTIONS(92),
    [anon_sym_POUND_COMMA] = ACTIONS(95),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(98),
    [anon_sym_POUND_LPAREN] = ACTIONS(101),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(104),
  },
  [3] = {
    [sym__token] = STATE(17),
    [sym__intertoken] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_directive] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym__datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_list] = STATE(17),
    [sym_first_symbol] = STATE(9),
    [sym_quote] = STATE(17),
    [sym_quasiquote] = STATE(17),
    [sym_syntax] = STATE(17),
    [sym_quasisyntax] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_unquote_splicing] = STATE(17),
    [sym_unsyntax] = STATE(17),
    [sym_unsyntax_splicing] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_byte_vector] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [aux_sym__intertoken_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [aux_sym_directive_token1] = ACTIONS(109),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(111),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(111),
    [sym_keyword] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [4] = {
    [sym__token] = STATE(27),
    [sym__intertoken] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym__datum] = STATE(27),
    [sym_string] = STATE(27),
    [sym_list] = STATE(27),
    [sym_first_symbol] = STATE(28),
    [sym_quote] = STATE(27),
    [sym_quasiquote] = STATE(27),
    [sym_syntax] = STATE(27),
    [sym_quasisyntax] = STATE(27),
    [sym_unquote] = STATE(27),
    [sym_unquote_splicing] = STATE(27),
    [sym_unsyntax] = STATE(27),
    [sym_unsyntax_splicing] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_byte_vector] = STATE(27),
    [aux_sym_program_repeat1] = STATE(27),
    [aux_sym__intertoken_token1] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [aux_sym_directive_token1] = ACTIONS(109),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [sym_character] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(117),
    [sym_keyword] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [5] = {
    [sym__token] = STATE(25),
    [sym__intertoken] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_directive] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym__datum] = STATE(25),
    [sym_string] = STATE(25),
    [sym_list] = STATE(25),
    [sym_first_symbol] = STATE(26),
    [sym_quote] = STATE(25),
    [sym_quasiquote] = STATE(25),
    [sym_syntax] = STATE(25),
    [sym_quasisyntax] = STATE(25),
    [sym_unquote] = STATE(25),
    [sym_unquote_splicing] = STATE(25),
    [sym_unsyntax] = STATE(25),
    [sym_unsyntax_splicing] = STATE(25),
    [sym_vector] = STATE(25),
    [sym_byte_vector] = STATE(25),
    [aux_sym_program_repeat1] = STATE(25),
    [aux_sym__intertoken_token1] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [aux_sym_directive_token1] = ACTIONS(109),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_character] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(123),
    [sym_keyword] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [6] = {
    [sym__token] = STATE(22),
    [sym__intertoken] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_list] = STATE(22),
    [sym_first_symbol] = STATE(24),
    [sym_quote] = STATE(22),
    [sym_quasiquote] = STATE(22),
    [sym_syntax] = STATE(22),
    [sym_quasisyntax] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_unquote_splicing] = STATE(22),
    [sym_unsyntax] = STATE(22),
    [sym_unsyntax_splicing] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_byte_vector] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [aux_sym__intertoken_token1] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [aux_sym_directive_token1] = ACTIONS(109),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(125),
    [sym_number] = ACTIONS(127),
    [sym_character] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(127),
    [sym_keyword] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [7] = {
    [sym__token] = STATE(33),
    [sym__intertoken] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_directive] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym__datum] = STATE(33),
    [sym_string] = STATE(33),
    [sym_list] = STATE(33),
    [sym_first_symbol] = STATE(32),
    [sym_quote] = STATE(33),
    [sym_quasiquote] = STATE(33),
    [sym_syntax] = STATE(33),
    [sym_quasisyntax] = STATE(33),
    [sym_unquote] = STATE(33),
    [sym_unquote_splicing] = STATE(33),
    [sym_unsyntax] = STATE(33),
    [sym_unsyntax_splicing] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_byte_vector] = STATE(33),
    [aux_sym_program_repeat1] = STATE(33),
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [aux_sym_directive_token1] = ACTIONS(109),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [8] = {
    [sym__token] = STATE(35),
    [sym__intertoken] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_directive] = STATE(35),
    [sym_block_comment] = STATE(35),
    [sym__datum] = STATE(35),
    [sym_string] = STATE(35),
    [sym_list] = STATE(35),
    [sym_first_symbol] = STATE(34),
    [sym_quote] = STATE(35),
    [sym_quasiquote] = STATE(35),
    [sym_syntax] = STATE(35),
    [sym_quasisyntax] = STATE(35),
    [sym_unquote] = STATE(35),
    [sym_unquote_splicing] = STATE(35),
    [sym_unsyntax] = STATE(35),
    [sym_unsyntax_splicing] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_byte_vector] = STATE(35),
    [aux_sym_program_repeat1] = STATE(35),
    [aux_sym__intertoken_token1] = ACTIONS(133),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [aux_sym_directive_token1] = ACTIONS(109),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [sym_character] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(135),
    [sym_keyword] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [9] = {
    [sym__token] = STATE(11),
    [sym__intertoken] = STATE(11),
    [sym_comment] = STATE(11),
    [sym_directive] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym__datum] = STATE(11),
    [sym_string] = STATE(11),
    [sym_list] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_quasiquote] = STATE(11),
    [sym_syntax] = STATE(11),
    [sym_quasisyntax] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym_unquote_splicing] = STATE(11),
    [sym_unsyntax] = STATE(11),
    [sym_unsyntax_splicing] = STATE(11),
    [sym_vector] = STATE(11),
    [sym_byte_vector] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [aux_sym__intertoken_token1] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_character] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(139),
    [sym_keyword] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [10] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [11] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [12] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [13] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [16] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [18] = {
    [sym__token] = STATE(15),
    [sym__intertoken] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_directive] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_list] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_quasiquote] = STATE(15),
    [sym_syntax] = STATE(15),
    [sym_quasisyntax] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_unquote_splicing] = STATE(15),
    [sym_unsyntax] = STATE(15),
    [sym_unsyntax_splicing] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_byte_vector] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym__intertoken_token1] = ACTIONS(157),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(157),
    [sym_number] = ACTIONS(159),
    [sym_character] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(159),
    [sym_keyword] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [19] = {
    [sym__token] = STATE(14),
    [sym__intertoken] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_directive] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_list] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_quasiquote] = STATE(14),
    [sym_syntax] = STATE(14),
    [sym_quasisyntax] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_unquote_splicing] = STATE(14),
    [sym_unsyntax] = STATE(14),
    [sym_unsyntax_splicing] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_byte_vector] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
    [aux_sym__intertoken_token1] = ACTIONS(163),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(163),
    [sym_number] = ACTIONS(165),
    [sym_character] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(165),
    [sym_keyword] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [20] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [21] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [22] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [23] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [24] = {
    [sym__token] = STATE(31),
    [sym__intertoken] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_directive] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym__datum] = STATE(31),
    [sym_string] = STATE(31),
    [sym_list] = STATE(31),
    [sym_quote] = STATE(31),
    [sym_quasiquote] = STATE(31),
    [sym_syntax] = STATE(31),
    [sym_quasisyntax] = STATE(31),
    [sym_unquote] = STATE(31),
    [sym_unquote_splicing] = STATE(31),
    [sym_unsyntax] = STATE(31),
    [sym_unsyntax_splicing] = STATE(31),
    [sym_vector] = STATE(31),
    [sym_byte_vector] = STATE(31),
    [aux_sym_program_repeat1] = STATE(31),
    [aux_sym__intertoken_token1] = ACTIONS(175),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(175),
    [sym_number] = ACTIONS(177),
    [sym_character] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(177),
    [sym_keyword] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [25] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [26] = {
    [sym__token] = STATE(16),
    [sym__intertoken] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_directive] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym__datum] = STATE(16),
    [sym_string] = STATE(16),
    [sym_list] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_quasiquote] = STATE(16),
    [sym_syntax] = STATE(16),
    [sym_quasisyntax] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_unquote_splicing] = STATE(16),
    [sym_unsyntax] = STATE(16),
    [sym_unsyntax_splicing] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_byte_vector] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [aux_sym__intertoken_token1] = ACTIONS(179),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(179),
    [sym_number] = ACTIONS(181),
    [sym_character] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(181),
    [sym_keyword] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [27] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [28] = {
    [sym__token] = STATE(23),
    [sym__intertoken] = STATE(23),
    [sym_comment] = STATE(23),
    [sym_directive] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym__datum] = STATE(23),
    [sym_string] = STATE(23),
    [sym_list] = STATE(23),
    [sym_quote] = STATE(23),
    [sym_quasiquote] = STATE(23),
    [sym_syntax] = STATE(23),
    [sym_quasisyntax] = STATE(23),
    [sym_unquote] = STATE(23),
    [sym_unquote_splicing] = STATE(23),
    [sym_unsyntax] = STATE(23),
    [sym_unsyntax_splicing] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_byte_vector] = STATE(23),
    [aux_sym_program_repeat1] = STATE(23),
    [aux_sym__intertoken_token1] = ACTIONS(183),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(183),
    [sym_number] = ACTIONS(185),
    [sym_character] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(185),
    [sym_keyword] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [29] = {
    [sym__token] = STATE(10),
    [sym__intertoken] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_directive] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_list] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_quasiquote] = STATE(10),
    [sym_syntax] = STATE(10),
    [sym_quasisyntax] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym_unquote_splicing] = STATE(10),
    [sym_unsyntax] = STATE(10),
    [sym_unsyntax_splicing] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_byte_vector] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym__intertoken_token1] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(187),
    [sym_number] = ACTIONS(189),
    [sym_character] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(189),
    [sym_keyword] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [30] = {
    [sym__token] = STATE(20),
    [sym__intertoken] = STATE(20),
    [sym_comment] = STATE(20),
    [sym_directive] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym__datum] = STATE(20),
    [sym_string] = STATE(20),
    [sym_list] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_quasiquote] = STATE(20),
    [sym_syntax] = STATE(20),
    [sym_quasisyntax] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_unquote_splicing] = STATE(20),
    [sym_unsyntax] = STATE(20),
    [sym_unsyntax_splicing] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_byte_vector] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [aux_sym__intertoken_token1] = ACTIONS(193),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(193),
    [sym_number] = ACTIONS(195),
    [sym_character] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(195),
    [sym_keyword] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [31] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [32] = {
    [sym__token] = STATE(13),
    [sym__intertoken] = STATE(13),
    [sym_comment] = STATE(13),
    [sym_directive] = STATE(13),
    [sym_block_comment] = STATE(13),
    [sym__datum] = STATE(13),
    [sym_string] = STATE(13),
    [sym_list] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_quasiquote] = STATE(13),
    [sym_syntax] = STATE(13),
    [sym_quasisyntax] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_unquote_splicing] = STATE(13),
    [sym_unsyntax] = STATE(13),
    [sym_unsyntax_splicing] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_byte_vector] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [aux_sym__intertoken_token1] = ACTIONS(199),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(199),
    [sym_number] = ACTIONS(201),
    [sym_character] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(201),
    [sym_keyword] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [33] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [34] = {
    [sym__token] = STATE(12),
    [sym__intertoken] = STATE(12),
    [sym_comment] = STATE(12),
    [sym_directive] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym__datum] = STATE(12),
    [sym_string] = STATE(12),
    [sym_list] = STATE(12),
    [sym_quote] = STATE(12),
    [sym_quasiquote] = STATE(12),
    [sym_syntax] = STATE(12),
    [sym_quasisyntax] = STATE(12),
    [sym_unquote] = STATE(12),
    [sym_unquote_splicing] = STATE(12),
    [sym_unsyntax] = STATE(12),
    [sym_unsyntax_splicing] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_byte_vector] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [aux_sym__intertoken_token1] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(203),
    [sym_number] = ACTIONS(205),
    [sym_character] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(205),
    [sym_keyword] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [35] = {
    [sym__token] = STATE(2),
    [sym__intertoken] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_quasiquote] = STATE(2),
    [sym_syntax] = STATE(2),
    [sym_quasisyntax] = STATE(2),
    [sym_unquote] = STATE(2),
    [sym_unquote_splicing] = STATE(2),
    [sym_unsyntax] = STATE(2),
    [sym_unsyntax_splicing] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_byte_vector] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym__intertoken_token1] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_character] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(145),
    [sym_keyword] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [36] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(85),
    [sym_string] = STATE(85),
    [sym_list] = STATE(85),
    [sym_quote] = STATE(85),
    [sym_quasiquote] = STATE(85),
    [sym_syntax] = STATE(85),
    [sym_quasisyntax] = STATE(85),
    [sym_unquote] = STATE(85),
    [sym_unquote_splicing] = STATE(85),
    [sym_unsyntax] = STATE(85),
    [sym_unsyntax_splicing] = STATE(85),
    [sym_vector] = STATE(85),
    [sym_byte_vector] = STATE(85),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(209),
    [sym_number] = ACTIONS(211),
    [sym_character] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(211),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [37] = {
    [sym__intertoken] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_directive] = STATE(51),
    [sym_block_comment] = STATE(51),
    [sym__datum] = STATE(94),
    [sym_string] = STATE(94),
    [sym_list] = STATE(94),
    [sym_quote] = STATE(94),
    [sym_quasiquote] = STATE(94),
    [sym_syntax] = STATE(94),
    [sym_quasisyntax] = STATE(94),
    [sym_unquote] = STATE(94),
    [sym_unquote_splicing] = STATE(94),
    [sym_unsyntax] = STATE(94),
    [sym_unsyntax_splicing] = STATE(94),
    [sym_vector] = STATE(94),
    [sym_byte_vector] = STATE(94),
    [aux_sym_comment_repeat1] = STATE(51),
    [aux_sym__intertoken_token1] = ACTIONS(213),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(215),
    [sym_number] = ACTIONS(217),
    [sym_character] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(217),
    [sym_keyword] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [38] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(99),
    [sym_string] = STATE(99),
    [sym_list] = STATE(99),
    [sym_quote] = STATE(99),
    [sym_quasiquote] = STATE(99),
    [sym_syntax] = STATE(99),
    [sym_quasisyntax] = STATE(99),
    [sym_unquote] = STATE(99),
    [sym_unquote_splicing] = STATE(99),
    [sym_unsyntax] = STATE(99),
    [sym_unsyntax_splicing] = STATE(99),
    [sym_vector] = STATE(99),
    [sym_byte_vector] = STATE(99),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(219),
    [sym_number] = ACTIONS(221),
    [sym_character] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(221),
    [sym_keyword] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [39] = {
    [sym__intertoken] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_directive] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_list] = STATE(100),
    [sym_quote] = STATE(100),
    [sym_quasiquote] = STATE(100),
    [sym_syntax] = STATE(100),
    [sym_quasisyntax] = STATE(100),
    [sym_unquote] = STATE(100),
    [sym_unquote_splicing] = STATE(100),
    [sym_unsyntax] = STATE(100),
    [sym_unsyntax_splicing] = STATE(100),
    [sym_vector] = STATE(100),
    [sym_byte_vector] = STATE(100),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__intertoken_token1] = ACTIONS(223),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(225),
    [sym_number] = ACTIONS(227),
    [sym_character] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(227),
    [sym_keyword] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [40] = {
    [sym__intertoken] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_directive] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym__datum] = STATE(102),
    [sym_string] = STATE(102),
    [sym_list] = STATE(102),
    [sym_quote] = STATE(102),
    [sym_quasiquote] = STATE(102),
    [sym_syntax] = STATE(102),
    [sym_quasisyntax] = STATE(102),
    [sym_unquote] = STATE(102),
    [sym_unquote_splicing] = STATE(102),
    [sym_unsyntax] = STATE(102),
    [sym_unsyntax_splicing] = STATE(102),
    [sym_vector] = STATE(102),
    [sym_byte_vector] = STATE(102),
    [aux_sym_comment_repeat1] = STATE(41),
    [aux_sym__intertoken_token1] = ACTIONS(229),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(231),
    [sym_number] = ACTIONS(233),
    [sym_character] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(233),
    [sym_keyword] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [41] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(84),
    [sym_string] = STATE(84),
    [sym_list] = STATE(84),
    [sym_quote] = STATE(84),
    [sym_quasiquote] = STATE(84),
    [sym_syntax] = STATE(84),
    [sym_quasisyntax] = STATE(84),
    [sym_unquote] = STATE(84),
    [sym_unquote_splicing] = STATE(84),
    [sym_unsyntax] = STATE(84),
    [sym_unsyntax_splicing] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_byte_vector] = STATE(84),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(235),
    [sym_number] = ACTIONS(237),
    [sym_character] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(237),
    [sym_keyword] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [42] = {
    [sym__intertoken] = STATE(61),
    [sym_comment] = STATE(61),
    [sym_directive] = STATE(61),
    [sym_block_comment] = STATE(61),
    [sym__datum] = STATE(131),
    [sym_string] = STATE(131),
    [sym_list] = STATE(131),
    [sym_quote] = STATE(131),
    [sym_quasiquote] = STATE(131),
    [sym_syntax] = STATE(131),
    [sym_quasisyntax] = STATE(131),
    [sym_unquote] = STATE(131),
    [sym_unquote_splicing] = STATE(131),
    [sym_unsyntax] = STATE(131),
    [sym_unsyntax_splicing] = STATE(131),
    [sym_vector] = STATE(131),
    [sym_byte_vector] = STATE(131),
    [aux_sym_comment_repeat1] = STATE(61),
    [aux_sym__intertoken_token1] = ACTIONS(239),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(241),
    [sym_number] = ACTIONS(243),
    [sym_character] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(243),
    [sym_keyword] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [43] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(83),
    [sym_string] = STATE(83),
    [sym_list] = STATE(83),
    [sym_quote] = STATE(83),
    [sym_quasiquote] = STATE(83),
    [sym_syntax] = STATE(83),
    [sym_quasisyntax] = STATE(83),
    [sym_unquote] = STATE(83),
    [sym_unquote_splicing] = STATE(83),
    [sym_unsyntax] = STATE(83),
    [sym_unsyntax_splicing] = STATE(83),
    [sym_vector] = STATE(83),
    [sym_byte_vector] = STATE(83),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(273),
    [sym_number] = ACTIONS(275),
    [sym_character] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(275),
    [sym_keyword] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [44] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(127),
    [sym_string] = STATE(127),
    [sym_list] = STATE(127),
    [sym_quote] = STATE(127),
    [sym_quasiquote] = STATE(127),
    [sym_syntax] = STATE(127),
    [sym_quasisyntax] = STATE(127),
    [sym_unquote] = STATE(127),
    [sym_unquote_splicing] = STATE(127),
    [sym_unsyntax] = STATE(127),
    [sym_unsyntax_splicing] = STATE(127),
    [sym_vector] = STATE(127),
    [sym_byte_vector] = STATE(127),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(277),
    [sym_number] = ACTIONS(279),
    [sym_character] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(279),
    [sym_keyword] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [45] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(95),
    [sym_string] = STATE(95),
    [sym_list] = STATE(95),
    [sym_quote] = STATE(95),
    [sym_quasiquote] = STATE(95),
    [sym_syntax] = STATE(95),
    [sym_quasisyntax] = STATE(95),
    [sym_unquote] = STATE(95),
    [sym_unquote_splicing] = STATE(95),
    [sym_unsyntax] = STATE(95),
    [sym_unsyntax_splicing] = STATE(95),
    [sym_vector] = STATE(95),
    [sym_byte_vector] = STATE(95),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(281),
    [sym_number] = ACTIONS(283),
    [sym_character] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(283),
    [sym_keyword] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [46] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(126),
    [sym_string] = STATE(126),
    [sym_list] = STATE(126),
    [sym_quote] = STATE(126),
    [sym_quasiquote] = STATE(126),
    [sym_syntax] = STATE(126),
    [sym_quasisyntax] = STATE(126),
    [sym_unquote] = STATE(126),
    [sym_unquote_splicing] = STATE(126),
    [sym_unsyntax] = STATE(126),
    [sym_unsyntax_splicing] = STATE(126),
    [sym_vector] = STATE(126),
    [sym_byte_vector] = STATE(126),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(285),
    [sym_number] = ACTIONS(287),
    [sym_character] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(287),
    [sym_keyword] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [47] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(75),
    [sym_string] = STATE(75),
    [sym_list] = STATE(75),
    [sym_quote] = STATE(75),
    [sym_quasiquote] = STATE(75),
    [sym_syntax] = STATE(75),
    [sym_quasisyntax] = STATE(75),
    [sym_unquote] = STATE(75),
    [sym_unquote_splicing] = STATE(75),
    [sym_unsyntax] = STATE(75),
    [sym_unsyntax_splicing] = STATE(75),
    [sym_vector] = STATE(75),
    [sym_byte_vector] = STATE(75),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(289),
    [sym_number] = ACTIONS(291),
    [sym_character] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(291),
    [sym_keyword] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [48] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(125),
    [sym_string] = STATE(125),
    [sym_list] = STATE(125),
    [sym_quote] = STATE(125),
    [sym_quasiquote] = STATE(125),
    [sym_syntax] = STATE(125),
    [sym_quasisyntax] = STATE(125),
    [sym_unquote] = STATE(125),
    [sym_unquote_splicing] = STATE(125),
    [sym_unsyntax] = STATE(125),
    [sym_unsyntax_splicing] = STATE(125),
    [sym_vector] = STATE(125),
    [sym_byte_vector] = STATE(125),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(293),
    [sym_number] = ACTIONS(295),
    [sym_character] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(295),
    [sym_keyword] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [49] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(76),
    [sym_string] = STATE(76),
    [sym_list] = STATE(76),
    [sym_quote] = STATE(76),
    [sym_quasiquote] = STATE(76),
    [sym_syntax] = STATE(76),
    [sym_quasisyntax] = STATE(76),
    [sym_unquote] = STATE(76),
    [sym_unquote_splicing] = STATE(76),
    [sym_unsyntax] = STATE(76),
    [sym_unsyntax_splicing] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_byte_vector] = STATE(76),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(297),
    [sym_number] = ACTIONS(299),
    [sym_character] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(299),
    [sym_keyword] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [50] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(124),
    [sym_string] = STATE(124),
    [sym_list] = STATE(124),
    [sym_quote] = STATE(124),
    [sym_quasiquote] = STATE(124),
    [sym_syntax] = STATE(124),
    [sym_quasisyntax] = STATE(124),
    [sym_unquote] = STATE(124),
    [sym_unquote_splicing] = STATE(124),
    [sym_unsyntax] = STATE(124),
    [sym_unsyntax_splicing] = STATE(124),
    [sym_vector] = STATE(124),
    [sym_byte_vector] = STATE(124),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(301),
    [sym_number] = ACTIONS(303),
    [sym_character] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(303),
    [sym_keyword] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [51] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(77),
    [sym_string] = STATE(77),
    [sym_list] = STATE(77),
    [sym_quote] = STATE(77),
    [sym_quasiquote] = STATE(77),
    [sym_syntax] = STATE(77),
    [sym_quasisyntax] = STATE(77),
    [sym_unquote] = STATE(77),
    [sym_unquote_splicing] = STATE(77),
    [sym_unsyntax] = STATE(77),
    [sym_unsyntax_splicing] = STATE(77),
    [sym_vector] = STATE(77),
    [sym_byte_vector] = STATE(77),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(305),
    [sym_number] = ACTIONS(307),
    [sym_character] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(307),
    [sym_keyword] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [52] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(123),
    [sym_string] = STATE(123),
    [sym_list] = STATE(123),
    [sym_quote] = STATE(123),
    [sym_quasiquote] = STATE(123),
    [sym_syntax] = STATE(123),
    [sym_quasisyntax] = STATE(123),
    [sym_unquote] = STATE(123),
    [sym_unquote_splicing] = STATE(123),
    [sym_unsyntax] = STATE(123),
    [sym_unsyntax_splicing] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_byte_vector] = STATE(123),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(309),
    [sym_number] = ACTIONS(311),
    [sym_character] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(311),
    [sym_keyword] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [53] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(78),
    [sym_string] = STATE(78),
    [sym_list] = STATE(78),
    [sym_quote] = STATE(78),
    [sym_quasiquote] = STATE(78),
    [sym_syntax] = STATE(78),
    [sym_quasisyntax] = STATE(78),
    [sym_unquote] = STATE(78),
    [sym_unquote_splicing] = STATE(78),
    [sym_unsyntax] = STATE(78),
    [sym_unsyntax_splicing] = STATE(78),
    [sym_vector] = STATE(78),
    [sym_byte_vector] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(313),
    [sym_number] = ACTIONS(315),
    [sym_character] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(315),
    [sym_keyword] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [54] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(122),
    [sym_string] = STATE(122),
    [sym_list] = STATE(122),
    [sym_quote] = STATE(122),
    [sym_quasiquote] = STATE(122),
    [sym_syntax] = STATE(122),
    [sym_quasisyntax] = STATE(122),
    [sym_unquote] = STATE(122),
    [sym_unquote_splicing] = STATE(122),
    [sym_unsyntax] = STATE(122),
    [sym_unsyntax_splicing] = STATE(122),
    [sym_vector] = STATE(122),
    [sym_byte_vector] = STATE(122),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(317),
    [sym_number] = ACTIONS(319),
    [sym_character] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(319),
    [sym_keyword] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [55] = {
    [sym__intertoken] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_directive] = STATE(53),
    [sym_block_comment] = STATE(53),
    [sym__datum] = STATE(96),
    [sym_string] = STATE(96),
    [sym_list] = STATE(96),
    [sym_quote] = STATE(96),
    [sym_quasiquote] = STATE(96),
    [sym_syntax] = STATE(96),
    [sym_quasisyntax] = STATE(96),
    [sym_unquote] = STATE(96),
    [sym_unquote_splicing] = STATE(96),
    [sym_unsyntax] = STATE(96),
    [sym_unsyntax_splicing] = STATE(96),
    [sym_vector] = STATE(96),
    [sym_byte_vector] = STATE(96),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym__intertoken_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(323),
    [sym_number] = ACTIONS(325),
    [sym_character] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(325),
    [sym_keyword] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [56] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_list] = STATE(121),
    [sym_quote] = STATE(121),
    [sym_quasiquote] = STATE(121),
    [sym_syntax] = STATE(121),
    [sym_quasisyntax] = STATE(121),
    [sym_unquote] = STATE(121),
    [sym_unquote_splicing] = STATE(121),
    [sym_unsyntax] = STATE(121),
    [sym_unsyntax_splicing] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_byte_vector] = STATE(121),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(327),
    [sym_number] = ACTIONS(329),
    [sym_character] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(329),
    [sym_keyword] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [57] = {
    [sym__intertoken] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym__datum] = STATE(81),
    [sym_string] = STATE(81),
    [sym_list] = STATE(81),
    [sym_quote] = STATE(81),
    [sym_quasiquote] = STATE(81),
    [sym_syntax] = STATE(81),
    [sym_quasisyntax] = STATE(81),
    [sym_unquote] = STATE(81),
    [sym_unquote_splicing] = STATE(81),
    [sym_unsyntax] = STATE(81),
    [sym_unsyntax_splicing] = STATE(81),
    [sym_vector] = STATE(81),
    [sym_byte_vector] = STATE(81),
    [aux_sym_comment_repeat1] = STATE(49),
    [aux_sym__intertoken_token1] = ACTIONS(331),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(333),
    [sym_number] = ACTIONS(335),
    [sym_character] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(335),
    [sym_keyword] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [58] = {
    [sym__intertoken] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_directive] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym__datum] = STATE(87),
    [sym_string] = STATE(87),
    [sym_list] = STATE(87),
    [sym_quote] = STATE(87),
    [sym_quasiquote] = STATE(87),
    [sym_syntax] = STATE(87),
    [sym_quasisyntax] = STATE(87),
    [sym_unquote] = STATE(87),
    [sym_unquote_splicing] = STATE(87),
    [sym_unsyntax] = STATE(87),
    [sym_unsyntax_splicing] = STATE(87),
    [sym_vector] = STATE(87),
    [sym_byte_vector] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(38),
    [aux_sym__intertoken_token1] = ACTIONS(337),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(339),
    [sym_number] = ACTIONS(341),
    [sym_character] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(341),
    [sym_keyword] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [59] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(120),
    [sym_string] = STATE(120),
    [sym_list] = STATE(120),
    [sym_quote] = STATE(120),
    [sym_quasiquote] = STATE(120),
    [sym_syntax] = STATE(120),
    [sym_quasisyntax] = STATE(120),
    [sym_unquote] = STATE(120),
    [sym_unquote_splicing] = STATE(120),
    [sym_unsyntax] = STATE(120),
    [sym_unsyntax_splicing] = STATE(120),
    [sym_vector] = STATE(120),
    [sym_byte_vector] = STATE(120),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(343),
    [sym_number] = ACTIONS(345),
    [sym_character] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(345),
    [sym_keyword] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [60] = {
    [sym__intertoken] = STATE(59),
    [sym_comment] = STATE(59),
    [sym_directive] = STATE(59),
    [sym_block_comment] = STATE(59),
    [sym__datum] = STATE(142),
    [sym_string] = STATE(142),
    [sym_list] = STATE(142),
    [sym_quote] = STATE(142),
    [sym_quasiquote] = STATE(142),
    [sym_syntax] = STATE(142),
    [sym_quasisyntax] = STATE(142),
    [sym_unquote] = STATE(142),
    [sym_unquote_splicing] = STATE(142),
    [sym_unsyntax] = STATE(142),
    [sym_unsyntax_splicing] = STATE(142),
    [sym_vector] = STATE(142),
    [sym_byte_vector] = STATE(142),
    [aux_sym_comment_repeat1] = STATE(59),
    [aux_sym__intertoken_token1] = ACTIONS(347),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(349),
    [sym_number] = ACTIONS(351),
    [sym_character] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(351),
    [sym_keyword] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [61] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [sym__datum] = STATE(115),
    [sym_string] = STATE(115),
    [sym_list] = STATE(115),
    [sym_quote] = STATE(115),
    [sym_quasiquote] = STATE(115),
    [sym_syntax] = STATE(115),
    [sym_quasisyntax] = STATE(115),
    [sym_unquote] = STATE(115),
    [sym_unquote_splicing] = STATE(115),
    [sym_unsyntax] = STATE(115),
    [sym_unsyntax_splicing] = STATE(115),
    [sym_vector] = STATE(115),
    [sym_byte_vector] = STATE(115),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(353),
    [sym_number] = ACTIONS(355),
    [sym_character] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(355),
    [sym_keyword] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [62] = {
    [sym__intertoken] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_directive] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym__datum] = STATE(134),
    [sym_string] = STATE(134),
    [sym_list] = STATE(134),
    [sym_quote] = STATE(134),
    [sym_quasiquote] = STATE(134),
    [sym_syntax] = STATE(134),
    [sym_quasisyntax] = STATE(134),
    [sym_unquote] = STATE(134),
    [sym_unquote_splicing] = STATE(134),
    [sym_unsyntax] = STATE(134),
    [sym_unsyntax_splicing] = STATE(134),
    [sym_vector] = STATE(134),
    [sym_byte_vector] = STATE(134),
    [aux_sym_comment_repeat1] = STATE(44),
    [aux_sym__intertoken_token1] = ACTIONS(357),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(359),
    [sym_number] = ACTIONS(361),
    [sym_character] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(361),
    [sym_keyword] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [63] = {
    [sym__intertoken] = STATE(46),
    [sym_comment] = STATE(46),
    [sym_directive] = STATE(46),
    [sym_block_comment] = STATE(46),
    [sym__datum] = STATE(112),
    [sym_string] = STATE(112),
    [sym_list] = STATE(112),
    [sym_quote] = STATE(112),
    [sym_quasiquote] = STATE(112),
    [sym_syntax] = STATE(112),
    [sym_quasisyntax] = STATE(112),
    [sym_unquote] = STATE(112),
    [sym_unquote_splicing] = STATE(112),
    [sym_unsyntax] = STATE(112),
    [sym_unsyntax_splicing] = STATE(112),
    [sym_vector] = STATE(112),
    [sym_byte_vector] = STATE(112),
    [aux_sym_comment_repeat1] = STATE(46),
    [aux_sym__intertoken_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(365),
    [sym_number] = ACTIONS(367),
    [sym_character] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(367),
    [sym_keyword] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [64] = {
    [sym__intertoken] = STATE(48),
    [sym_comment] = STATE(48),
    [sym_directive] = STATE(48),
    [sym_block_comment] = STATE(48),
    [sym__datum] = STATE(137),
    [sym_string] = STATE(137),
    [sym_list] = STATE(137),
    [sym_quote] = STATE(137),
    [sym_quasiquote] = STATE(137),
    [sym_syntax] = STATE(137),
    [sym_quasisyntax] = STATE(137),
    [sym_unquote] = STATE(137),
    [sym_unquote_splicing] = STATE(137),
    [sym_unsyntax] = STATE(137),
    [sym_unsyntax_splicing] = STATE(137),
    [sym_vector] = STATE(137),
    [sym_byte_vector] = STATE(137),
    [aux_sym_comment_repeat1] = STATE(48),
    [aux_sym__intertoken_token1] = ACTIONS(369),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(371),
    [sym_number] = ACTIONS(373),
    [sym_character] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(373),
    [sym_keyword] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [65] = {
    [sym__intertoken] = STATE(50),
    [sym_comment] = STATE(50),
    [sym_directive] = STATE(50),
    [sym_block_comment] = STATE(50),
    [sym__datum] = STATE(138),
    [sym_string] = STATE(138),
    [sym_list] = STATE(138),
    [sym_quote] = STATE(138),
    [sym_quasiquote] = STATE(138),
    [sym_syntax] = STATE(138),
    [sym_quasisyntax] = STATE(138),
    [sym_unquote] = STATE(138),
    [sym_unquote_splicing] = STATE(138),
    [sym_unsyntax] = STATE(138),
    [sym_unsyntax_splicing] = STATE(138),
    [sym_vector] = STATE(138),
    [sym_byte_vector] = STATE(138),
    [aux_sym_comment_repeat1] = STATE(50),
    [aux_sym__intertoken_token1] = ACTIONS(375),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(377),
    [sym_number] = ACTIONS(379),
    [sym_character] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(379),
    [sym_keyword] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [66] = {
    [sym__intertoken] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_directive] = STATE(52),
    [sym_block_comment] = STATE(52),
    [sym__datum] = STATE(139),
    [sym_string] = STATE(139),
    [sym_list] = STATE(139),
    [sym_quote] = STATE(139),
    [sym_quasiquote] = STATE(139),
    [sym_syntax] = STATE(139),
    [sym_quasisyntax] = STATE(139),
    [sym_unquote] = STATE(139),
    [sym_unquote_splicing] = STATE(139),
    [sym_unsyntax] = STATE(139),
    [sym_unsyntax_splicing] = STATE(139),
    [sym_vector] = STATE(139),
    [sym_byte_vector] = STATE(139),
    [aux_sym_comment_repeat1] = STATE(52),
    [aux_sym__intertoken_token1] = ACTIONS(381),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(383),
    [sym_number] = ACTIONS(385),
    [sym_character] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(385),
    [sym_keyword] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [67] = {
    [sym__intertoken] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_directive] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym__datum] = STATE(92),
    [sym_string] = STATE(92),
    [sym_list] = STATE(92),
    [sym_quote] = STATE(92),
    [sym_quasiquote] = STATE(92),
    [sym_syntax] = STATE(92),
    [sym_quasisyntax] = STATE(92),
    [sym_unquote] = STATE(92),
    [sym_unquote_splicing] = STATE(92),
    [sym_unsyntax] = STATE(92),
    [sym_unsyntax_splicing] = STATE(92),
    [sym_vector] = STATE(92),
    [sym_byte_vector] = STATE(92),
    [aux_sym_comment_repeat1] = STATE(47),
    [aux_sym__intertoken_token1] = ACTIONS(387),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(389),
    [sym_number] = ACTIONS(391),
    [sym_character] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(391),
    [sym_keyword] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [68] = {
    [sym__intertoken] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_directive] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym__datum] = STATE(90),
    [sym_string] = STATE(90),
    [sym_list] = STATE(90),
    [sym_quote] = STATE(90),
    [sym_quasiquote] = STATE(90),
    [sym_syntax] = STATE(90),
    [sym_quasisyntax] = STATE(90),
    [sym_unquote] = STATE(90),
    [sym_unquote_splicing] = STATE(90),
    [sym_unsyntax] = STATE(90),
    [sym_unsyntax_splicing] = STATE(90),
    [sym_vector] = STATE(90),
    [sym_byte_vector] = STATE(90),
    [aux_sym_comment_repeat1] = STATE(45),
    [aux_sym__intertoken_token1] = ACTIONS(393),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(395),
    [sym_number] = ACTIONS(397),
    [sym_character] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(397),
    [sym_keyword] = ACTIONS(395),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [69] = {
    [sym__intertoken] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_directive] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym__datum] = STATE(104),
    [sym_string] = STATE(104),
    [sym_list] = STATE(104),
    [sym_quote] = STATE(104),
    [sym_quasiquote] = STATE(104),
    [sym_syntax] = STATE(104),
    [sym_quasisyntax] = STATE(104),
    [sym_unquote] = STATE(104),
    [sym_unquote_splicing] = STATE(104),
    [sym_unsyntax] = STATE(104),
    [sym_unsyntax_splicing] = STATE(104),
    [sym_vector] = STATE(104),
    [sym_byte_vector] = STATE(104),
    [aux_sym_comment_repeat1] = STATE(43),
    [aux_sym__intertoken_token1] = ACTIONS(399),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(401),
    [sym_number] = ACTIONS(403),
    [sym_character] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(403),
    [sym_keyword] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [anon_sym_POUND_LPAREN] = ACTIONS(41),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(43),
  },
  [70] = {
    [sym__intertoken] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_directive] = STATE(54),
    [sym_block_comment] = STATE(54),
    [sym__datum] = STATE(140),
    [sym_string] = STATE(140),
    [sym_list] = STATE(140),
    [sym_quote] = STATE(140),
    [sym_quasiquote] = STATE(140),
    [sym_syntax] = STATE(140),
    [sym_quasisyntax] = STATE(140),
    [sym_unquote] = STATE(140),
    [sym_unquote_splicing] = STATE(140),
    [sym_unsyntax] = STATE(140),
    [sym_unsyntax_splicing] = STATE(140),
    [sym_vector] = STATE(140),
    [sym_byte_vector] = STATE(140),
    [aux_sym_comment_repeat1] = STATE(54),
    [aux_sym__intertoken_token1] = ACTIONS(405),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(407),
    [sym_number] = ACTIONS(409),
    [sym_character] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(409),
    [sym_keyword] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [71] = {
    [sym__intertoken] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_directive] = STATE(56),
    [sym_block_comment] = STATE(56),
    [sym__datum] = STATE(141),
    [sym_string] = STATE(141),
    [sym_list] = STATE(141),
    [sym_quote] = STATE(141),
    [sym_quasiquote] = STATE(141),
    [sym_syntax] = STATE(141),
    [sym_quasisyntax] = STATE(141),
    [sym_unquote] = STATE(141),
    [sym_unquote_splicing] = STATE(141),
    [sym_unsyntax] = STATE(141),
    [sym_unsyntax_splicing] = STATE(141),
    [sym_vector] = STATE(141),
    [sym_byte_vector] = STATE(141),
    [aux_sym_comment_repeat1] = STATE(56),
    [aux_sym__intertoken_token1] = ACTIONS(411),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(413),
    [sym_number] = ACTIONS(415),
    [sym_character] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_symbol] = ACTIONS(415),
    [sym_keyword] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_POUND_SQUOTE] = ACTIONS(257),
    [anon_sym_POUND_BQUOTE] = ACTIONS(259),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_COMMA_AT] = ACTIONS(263),
    [anon_sym_POUND_COMMA] = ACTIONS(265),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(267),
    [anon_sym_POUND_LPAREN] = ACTIONS(269),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(271),
  },
  [72] = {
    [sym__intertoken] = STATE(72),
    [sym_comment] = STATE(72),
    [sym_directive] = STATE(72),
    [sym_block_comment] = STATE(72),
    [aux_sym_comment_repeat1] = STATE(72),
    [aux_sym__intertoken_token1] = ACTIONS(417),
    [aux_sym_comment_token1] = ACTIONS(420),
    [anon_sym_POUND_SEMI] = ACTIONS(423),
    [anon_sym_POUND_BANG] = ACTIONS(426),
    [anon_sym_POUND_PIPE] = ACTIONS(429),
    [sym_boolean] = ACTIONS(432),
    [sym_number] = ACTIONS(434),
    [sym_character] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym_symbol] = ACTIONS(434),
    [sym_keyword] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [anon_sym_BQUOTE] = ACTIONS(432),
    [anon_sym_POUND_SQUOTE] = ACTIONS(432),
    [anon_sym_POUND_BQUOTE] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_COMMA_AT] = ACTIONS(432),
    [anon_sym_POUND_COMMA] = ACTIONS(434),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(432),
    [anon_sym_POUND_LPAREN] = ACTIONS(432),
    [anon_sym_POUNDvu8_LPAREN] = ACTIONS(432),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(438), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(436), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [33] = 2,
    ACTIONS(442), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(440), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [66] = 2,
    ACTIONS(446), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(444), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [99] = 2,
    ACTIONS(450), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(448), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [132] = 2,
    ACTIONS(454), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(452), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [165] = 2,
    ACTIONS(458), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(456), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [198] = 2,
    ACTIONS(462), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(460), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [231] = 2,
    ACTIONS(466), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(464), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [264] = 2,
    ACTIONS(470), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(468), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [297] = 2,
    ACTIONS(474), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(472), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [330] = 2,
    ACTIONS(478), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(476), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [363] = 2,
    ACTIONS(482), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(480), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [396] = 2,
    ACTIONS(486), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(484), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [429] = 2,
    ACTIONS(490), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(488), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [462] = 2,
    ACTIONS(494), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(492), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [495] = 2,
    ACTIONS(498), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(496), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [528] = 2,
    ACTIONS(502), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(500), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [561] = 2,
    ACTIONS(506), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(504), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [594] = 2,
    ACTIONS(510), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(508), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [627] = 2,
    ACTIONS(514), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(512), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [660] = 2,
    ACTIONS(518), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(516), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [693] = 2,
    ACTIONS(522), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(520), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [726] = 2,
    ACTIONS(526), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(524), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [759] = 2,
    ACTIONS(530), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(528), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [792] = 2,
    ACTIONS(534), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(532), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [825] = 2,
    ACTIONS(538), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(536), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [858] = 2,
    ACTIONS(542), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(540), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [891] = 2,
    ACTIONS(546), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(544), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [924] = 2,
    ACTIONS(550), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(548), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [957] = 2,
    ACTIONS(554), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(552), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [990] = 2,
    ACTIONS(558), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(556), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [1023] = 2,
    ACTIONS(562), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(560), 24,
      ts_builtin_sym_end,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [1056] = 2,
    ACTIONS(566), 4,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
    ACTIONS(564), 23,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_PIPE,
      sym_boolean,
      sym_character,
      anon_sym_DQUOTE,
      sym_keyword,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_POUND_SQUOTE,
      anon_sym_POUND_BQUOTE,
      anon_sym_COMMA_AT,
      anon_sym_POUND_COMMA_AT,
      anon_sym_POUND_LPAREN,
      anon_sym_POUNDvu8_LPAREN,
  [1088] = 7,
    ACTIONS(568), 1,
      aux_sym__intertoken_token1,
    ACTIONS(570), 1,
      aux_sym_comment_token1,
    ACTIONS(572), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(574), 1,
      anon_sym_POUND_BANG,
    ACTIONS(576), 1,
      aux_sym_directive_token1,
    ACTIONS(578), 1,
      anon_sym_POUND_PIPE,
    STATE(107), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1114] = 7,
    ACTIONS(570), 1,
      aux_sym_comment_token1,
    ACTIONS(572), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(574), 1,
      anon_sym_POUND_BANG,
    ACTIONS(578), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(580), 1,
      aux_sym__intertoken_token1,
    ACTIONS(582), 1,
      aux_sym_directive_token1,
    STATE(110), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1140] = 7,
    ACTIONS(570), 1,
      aux_sym_comment_token1,
    ACTIONS(572), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(574), 1,
      anon_sym_POUND_BANG,
    ACTIONS(578), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(580), 1,
      aux_sym__intertoken_token1,
    ACTIONS(584), 1,
      aux_sym_directive_token1,
    STATE(110), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1166] = 7,
    ACTIONS(570), 1,
      aux_sym_comment_token1,
    ACTIONS(572), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(574), 1,
      anon_sym_POUND_BANG,
    ACTIONS(578), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(586), 1,
      aux_sym__intertoken_token1,
    ACTIONS(588), 1,
      aux_sym_directive_token1,
    STATE(108), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1192] = 7,
    ACTIONS(432), 1,
      aux_sym_directive_token1,
    ACTIONS(590), 1,
      aux_sym__intertoken_token1,
    ACTIONS(593), 1,
      aux_sym_comment_token1,
    ACTIONS(596), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(599), 1,
      anon_sym_POUND_BANG,
    ACTIONS(602), 1,
      anon_sym_POUND_PIPE,
    STATE(110), 5,
      sym__intertoken,
      sym_comment,
      sym_directive,
      sym_block_comment,
      aux_sym_comment_repeat1,
  [1218] = 1,
    ACTIONS(536), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1227] = 1,
    ACTIONS(520), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1236] = 1,
    ACTIONS(556), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1245] = 1,
    ACTIONS(548), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1254] = 1,
    ACTIONS(540), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1263] = 1,
    ACTIONS(532), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1272] = 1,
    ACTIONS(508), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1281] = 1,
    ACTIONS(496), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1290] = 1,
    ACTIONS(488), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1299] = 1,
    ACTIONS(484), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1308] = 1,
    ACTIONS(480), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1317] = 1,
    ACTIONS(476), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1326] = 1,
    ACTIONS(524), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1335] = 1,
    ACTIONS(444), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1344] = 1,
    ACTIONS(448), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1353] = 1,
    ACTIONS(452), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1362] = 1,
    ACTIONS(456), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1371] = 1,
    ACTIONS(436), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1380] = 1,
    ACTIONS(460), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1389] = 1,
    ACTIONS(464), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1398] = 1,
    ACTIONS(492), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1407] = 1,
    ACTIONS(500), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1416] = 1,
    ACTIONS(472), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1425] = 1,
    ACTIONS(528), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1434] = 1,
    ACTIONS(440), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1443] = 1,
    ACTIONS(516), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1452] = 1,
    ACTIONS(468), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1461] = 1,
    ACTIONS(512), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1470] = 1,
    ACTIONS(504), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1479] = 1,
    ACTIONS(560), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1488] = 1,
    ACTIONS(552), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1497] = 1,
    ACTIONS(544), 6,
      aux_sym__intertoken_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      aux_sym_directive_token1,
      anon_sym_POUND_PIPE,
  [1506] = 4,
    ACTIONS(605), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(607), 1,
      aux_sym_block_comment_token1,
    ACTIONS(609), 1,
      anon_sym_PIPE_POUND,
    STATE(146), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1520] = 4,
    ACTIONS(605), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(607), 1,
      aux_sym_block_comment_token1,
    ACTIONS(611), 1,
      anon_sym_PIPE_POUND,
    STATE(146), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1534] = 4,
    ACTIONS(605), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(613), 1,
      aux_sym_block_comment_token1,
    ACTIONS(615), 1,
      anon_sym_PIPE_POUND,
    STATE(143), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1548] = 4,
    ACTIONS(617), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(620), 1,
      aux_sym_block_comment_token1,
    ACTIONS(623), 1,
      anon_sym_PIPE_POUND,
    STATE(146), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1562] = 4,
    ACTIONS(605), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(625), 1,
      aux_sym_block_comment_token1,
    ACTIONS(627), 1,
      anon_sym_PIPE_POUND,
    STATE(144), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1576] = 4,
    ACTIONS(605), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(629), 1,
      aux_sym_block_comment_token1,
    ACTIONS(631), 1,
      anon_sym_PIPE_POUND,
    STATE(149), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1590] = 4,
    ACTIONS(605), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(607), 1,
      aux_sym_block_comment_token1,
    ACTIONS(633), 1,
      anon_sym_PIPE_POUND,
    STATE(146), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1604] = 3,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      aux_sym_string_repeat1,
    ACTIONS(637), 2,
      sym_string_content,
      sym_escape_sequence,
  [1615] = 3,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      aux_sym_string_repeat1,
    ACTIONS(637), 2,
      sym_string_content,
      sym_escape_sequence,
  [1626] = 3,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_repeat1,
    ACTIONS(643), 2,
      sym_string_content,
      sym_escape_sequence,
  [1637] = 3,
    ACTIONS(645), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      aux_sym_string_repeat1,
    ACTIONS(647), 2,
      sym_string_content,
      sym_escape_sequence,
  [1648] = 3,
    ACTIONS(649), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      aux_sym_string_repeat1,
    ACTIONS(651), 2,
      sym_string_content,
      sym_escape_sequence,
  [1659] = 2,
    ACTIONS(510), 1,
      aux_sym_block_comment_token1,
    ACTIONS(508), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1667] = 2,
    ACTIONS(442), 1,
      aux_sym_block_comment_token1,
    ACTIONS(440), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1675] = 1,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(73)] = 0,
  [SMALL_STATE(74)] = 33,
  [SMALL_STATE(75)] = 66,
  [SMALL_STATE(76)] = 99,
  [SMALL_STATE(77)] = 132,
  [SMALL_STATE(78)] = 165,
  [SMALL_STATE(79)] = 198,
  [SMALL_STATE(80)] = 231,
  [SMALL_STATE(81)] = 264,
  [SMALL_STATE(82)] = 297,
  [SMALL_STATE(83)] = 330,
  [SMALL_STATE(84)] = 363,
  [SMALL_STATE(85)] = 396,
  [SMALL_STATE(86)] = 429,
  [SMALL_STATE(87)] = 462,
  [SMALL_STATE(88)] = 495,
  [SMALL_STATE(89)] = 528,
  [SMALL_STATE(90)] = 561,
  [SMALL_STATE(91)] = 594,
  [SMALL_STATE(92)] = 627,
  [SMALL_STATE(93)] = 660,
  [SMALL_STATE(94)] = 693,
  [SMALL_STATE(95)] = 726,
  [SMALL_STATE(96)] = 759,
  [SMALL_STATE(97)] = 792,
  [SMALL_STATE(98)] = 825,
  [SMALL_STATE(99)] = 858,
  [SMALL_STATE(100)] = 891,
  [SMALL_STATE(101)] = 924,
  [SMALL_STATE(102)] = 957,
  [SMALL_STATE(103)] = 990,
  [SMALL_STATE(104)] = 1023,
  [SMALL_STATE(105)] = 1056,
  [SMALL_STATE(106)] = 1088,
  [SMALL_STATE(107)] = 1114,
  [SMALL_STATE(108)] = 1140,
  [SMALL_STATE(109)] = 1166,
  [SMALL_STATE(110)] = 1192,
  [SMALL_STATE(111)] = 1218,
  [SMALL_STATE(112)] = 1227,
  [SMALL_STATE(113)] = 1236,
  [SMALL_STATE(114)] = 1245,
  [SMALL_STATE(115)] = 1254,
  [SMALL_STATE(116)] = 1263,
  [SMALL_STATE(117)] = 1272,
  [SMALL_STATE(118)] = 1281,
  [SMALL_STATE(119)] = 1290,
  [SMALL_STATE(120)] = 1299,
  [SMALL_STATE(121)] = 1308,
  [SMALL_STATE(122)] = 1317,
  [SMALL_STATE(123)] = 1326,
  [SMALL_STATE(124)] = 1335,
  [SMALL_STATE(125)] = 1344,
  [SMALL_STATE(126)] = 1353,
  [SMALL_STATE(127)] = 1362,
  [SMALL_STATE(128)] = 1371,
  [SMALL_STATE(129)] = 1380,
  [SMALL_STATE(130)] = 1389,
  [SMALL_STATE(131)] = 1398,
  [SMALL_STATE(132)] = 1407,
  [SMALL_STATE(133)] = 1416,
  [SMALL_STATE(134)] = 1425,
  [SMALL_STATE(135)] = 1434,
  [SMALL_STATE(136)] = 1443,
  [SMALL_STATE(137)] = 1452,
  [SMALL_STATE(138)] = 1461,
  [SMALL_STATE(139)] = 1470,
  [SMALL_STATE(140)] = 1479,
  [SMALL_STATE(141)] = 1488,
  [SMALL_STATE(142)] = 1497,
  [SMALL_STATE(143)] = 1506,
  [SMALL_STATE(144)] = 1520,
  [SMALL_STATE(145)] = 1534,
  [SMALL_STATE(146)] = 1548,
  [SMALL_STATE(147)] = 1562,
  [SMALL_STATE(148)] = 1576,
  [SMALL_STATE(149)] = 1590,
  [SMALL_STATE(150)] = 1604,
  [SMALL_STATE(151)] = 1615,
  [SMALL_STATE(152)] = 1626,
  [SMALL_STATE(153)] = 1637,
  [SMALL_STATE(154)] = 1648,
  [SMALL_STATE(155)] = 1659,
  [SMALL_STATE(156)] = 1667,
  [SMALL_STATE(157)] = 1675,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 2, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_symbol, 1, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_symbol, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [654] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_scheme(void) {
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
