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
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 56
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
  anon_sym_POUND_PIPE = 5,
  aux_sym_block_comment_token1 = 6,
  anon_sym_PIPE_POUND = 7,
  sym_boolean = 8,
  sym_number = 9,
  sym_character = 10,
  anon_sym_DQUOTE = 11,
  sym_string_content = 12,
  sym_escape_sequence = 13,
  sym_symbol = 14,
  sym_keyword = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  sym_first_symbol = 22,
  anon_sym_SQUOTE = 23,
  anon_sym_BQUOTE = 24,
  anon_sym_POUND_SQUOTE = 25,
  anon_sym_POUND_BQUOTE = 26,
  anon_sym_COMMA = 27,
  anon_sym_COMMA_AT = 28,
  anon_sym_POUND_COMMA = 29,
  anon_sym_POUND_COMMA_AT = 30,
  sym_vector_tag = 31,
  sym_byte_vector_tag = 32,
  sym_program = 33,
  sym__token = 34,
  sym__intertoken = 35,
  sym_comment = 36,
  sym_directive = 37,
  sym_block_comment = 38,
  sym__datum = 39,
  sym_string = 40,
  sym_list = 41,
  sym_quote = 42,
  sym_quasiquote = 43,
  sym_syntax = 44,
  sym_quasisyntax = 45,
  sym_unquote = 46,
  sym_unquote_splicing = 47,
  sym_unsyntax = 48,
  sym_unsyntax_splicing = 49,
  sym_vector = 50,
  sym_byte_vector = 51,
  aux_sym_program_repeat1 = 52,
  aux_sym_comment_repeat1 = 53,
  aux_sym_block_comment_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__intertoken_token1] = "_intertoken_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#!",
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
  [sym_first_symbol] = "first_symbol",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_POUND_SQUOTE] = "#'",
  [anon_sym_POUND_BQUOTE] = "#`",
  [anon_sym_COMMA] = ",",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_POUND_COMMA] = "#,",
  [anon_sym_POUND_COMMA_AT] = "#,@",
  [sym_vector_tag] = "vector_tag",
  [sym_byte_vector_tag] = "byte_vector_tag",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__intertoken] = "_intertoken",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_block_comment] = "block_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_list] = "list",
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
  [sym_first_symbol] = sym_first_symbol,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_POUND_SQUOTE] = anon_sym_POUND_SQUOTE,
  [anon_sym_POUND_BQUOTE] = anon_sym_POUND_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_POUND_COMMA] = anon_sym_POUND_COMMA,
  [anon_sym_POUND_COMMA_AT] = anon_sym_POUND_COMMA_AT,
  [sym_vector_tag] = sym_vector_tag,
  [sym_byte_vector_tag] = sym_byte_vector_tag,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__intertoken] = sym__intertoken,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_block_comment] = sym_block_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
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
  [sym_first_symbol] = {
    .visible = true,
    .named = true,
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
  [sym_vector_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_vector_tag] = {
    .visible = true,
    .named = true,
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 73,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 54,
  [82] = 59,
  [83] = 83,
  [84] = 84,
  [85] = 85,
};

static TSCharacterRange aux_sym__intertoken_token1_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000},
};

static TSCharacterRange sym_escape_sequence_character_set_1[] = {
  {'\t', '\n'}, {' ', ' '}, {0x85, 0x85}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x202f, 0x202f}, {0x205f, 0x205f},
  {0x3000, 0x3000},
};

static TSCharacterRange sym_escape_sequence_character_set_2[] = {
  {'\t', '\n'}, {'\r', '\r'}, {' ', ' '}, {0x85, 0x85}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200a}, {0x2028, 0x2028},
  {0x202f, 0x202f}, {0x205f, 0x205f}, {0x3000, 0x3000},
};

static TSCharacterRange sym_symbol_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'!', '!'}, {'$', '&'}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'^', '_'},
  {'a', 'z'}, {'~', 0x9f}, {0xa1, 0x167f}, {0x1681, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x2fff},
  {0x3001, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(288);
      ADVANCE_MAP(
        '"', 492,
        '#', 611,
        '\'', 601,
        '(', 595,
        ')', 596,
        ',', 605,
        ';', 290,
        '[', 597,
        ']', 598,
        '`', 602,
        '{', 599,
        '|', 295,
        '}', 600,
      );
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(289);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead == '\r') ADVANCE(496);
      if (lookahead == 'X') ADVANCE(498);
      if (lookahead == 'x') ADVANCE(498);
      if (lookahead == 0x85 ||
          lookahead == 0x2028) ADVANCE(497);
      if (set_contains(sym_escape_sequence_character_set_2, 11, lookahead)) ADVANCE(495);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(496);
      if (lookahead == '\n' ||
          lookahead == 0x85 ||
          lookahead == 0x2028) ADVANCE(497);
      if (set_contains(sym_escape_sequence_character_set_2, 11, lookahead)) ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 492,
        '#', 610,
        '\'', 601,
        '(', 595,
        ')', 596,
        ',', 606,
        '.', 570,
        ';', 290,
        '[', 597,
        ']', 598,
        '`', 602,
        '{', 599,
        '|', 112,
        '}', 600,
        '+', 508,
        '-', 508,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(592);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(492);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 7,
        '.', 10,
        '/', 254,
        'i', 301,
        '|', 249,
        'E', 179,
        'e', 179,
        'D', 179,
        'F', 179,
        'L', 179,
        'S', 179,
        'd', 179,
        'f', 179,
        'l', 179,
        's', 179,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 12,
        'i', 301,
        '|', 249,
        'E', 179,
        'e', 179,
        'D', 179,
        'F', 179,
        'L', 179,
        'S', 179,
        'd', 179,
        'f', 179,
        'l', 179,
        's', 179,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(301);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '|') ADVANCE(295);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '.', 134,
        '/', 249,
        'i', 301,
        '|', 249,
        'E', 179,
        'e', 179,
        'D', 179,
        'F', 179,
        'L', 179,
        'S', 179,
        'd', 179,
        'f', 179,
        'l', 179,
        's', 179,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(211);
      if (lookahead == 'N') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(69);
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
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '0') ADVANCE(301);
      END_STATE();
    case 64:
      if (lookahead == '0') ADVANCE(405);
      END_STATE();
    case 65:
      if (lookahead == '0') ADVANCE(133);
      END_STATE();
    case 66:
      if (lookahead == '0') ADVANCE(409);
      END_STATE();
    case 67:
      if (lookahead == '0') ADVANCE(419);
      END_STATE();
    case 68:
      if (lookahead == '0') ADVANCE(420);
      END_STATE();
    case 69:
      if (lookahead == '0') ADVANCE(406);
      END_STATE();
    case 70:
      if (lookahead == '0') ADVANCE(410);
      END_STATE();
    case 71:
      if (lookahead == '0') ADVANCE(407);
      END_STATE();
    case 72:
      if (lookahead == '0') ADVANCE(411);
      END_STATE();
    case 73:
      if (lookahead == '8') ADVANCE(612);
      END_STATE();
    case 74:
      if (lookahead == ';') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ';') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ';') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(208);
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '|') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '|') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '|') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '|') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 102:
      ADVANCE_MAP(
        'N', 489,
        'S', 490,
        'X', 491,
        'a', 486,
        'b', 478,
        'd', 483,
        'e', 487,
        'l', 484,
        'n', 476,
        'p', 479,
        'r', 482,
        's', 477,
        't', 481,
        'v', 488,
        'x', 491,
      );
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 111:
      if (lookahead == 'W') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 112:
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '|') ADVANCE(499);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 113:
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead == '|') ADVANCE(593);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(475);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 134:
      ADVANCE_MAP(
        'i', 301,
        '|', 249,
        'E', 179,
        'e', 179,
        'D', 179,
        'F', 179,
        'L', 179,
        'S', 179,
        'd', 179,
        'f', 179,
        'l', 179,
        's', 179,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '|') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '|') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(163);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(475);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 170:
      if (lookahead == '|') ADVANCE(113);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(594);
      END_STATE();
    case 171:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 172:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 173:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 174:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 175:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 176:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 177:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 178:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 179:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 180:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 181:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 184:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 185:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 187:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 188:
      ADVANCE_MAP(
        'B', 390,
        'b', 390,
        'D', 31,
        'd', 31,
        'O', 392,
        'o', 392,
        'X', 394,
        'x', 394,
      );
      END_STATE();
    case 189:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 192:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 193:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 194:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 195:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 196:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 197:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 198:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 199:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 200:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 201:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 202:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 203:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 204:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 213:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 214:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      END_STATE();
    case 215:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 216:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 217:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(277);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(112);
      END_STATE();
    case 218:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(282);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == '|') ADVANCE(113);
      END_STATE();
    case 219:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(349);
      END_STATE();
    case 220:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 221:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(356);
      END_STATE();
    case 222:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(17);
      END_STATE();
    case 223:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 224:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(351);
      END_STATE();
    case 225:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(358);
      END_STATE();
    case 226:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(362);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(343);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(369);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(18);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(141);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(364);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(371);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(469);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 270:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 278:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 287:
      if (eof) ADVANCE(288);
      ADVANCE_MAP(
        '"', 492,
        '#', 610,
        '\'', 601,
        '(', 595,
        ')', 596,
        ',', 606,
        '.', 570,
        ';', 290,
        '[', 597,
        ']', 598,
        '`', 602,
        '{', 599,
        '|', 112,
        '}', 600,
        '+', 508,
        '-', 508,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(592);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__intertoken_token1);
      if (set_contains(aux_sym__intertoken_token1_character_set_1, 9, lookahead)) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(293);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 303,
        '.', 306,
        '/', 572,
        '@', 512,
        '|', 239,
        '+', 513,
        '-', 513,
        'E', 550,
        'e', 550,
        'D', 551,
        'F', 551,
        'L', 551,
        'S', 551,
        'd', 551,
        'f', 551,
        'l', 551,
        's', 551,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 303,
        '.', 308,
        '/', 267,
        '@', 39,
        '|', 239,
        '+', 40,
        '-', 40,
        'E', 173,
        'e', 173,
        'D', 174,
        'F', 174,
        'L', 174,
        'S', 174,
        'd', 174,
        'f', 174,
        'l', 174,
        's', 174,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(389);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 307,
        '@', 512,
        '|', 239,
        '+', 513,
        '-', 513,
        'E', 550,
        'e', 550,
        'D', 551,
        'F', 551,
        'L', 551,
        'S', 551,
        'd', 551,
        'f', 551,
        'l', 551,
        's', 551,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 307,
        '@', 39,
        '|', 239,
        '+', 40,
        '-', 40,
        'E', 173,
        'e', 173,
        'D', 174,
        'F', 174,
        'L', 174,
        'S', 174,
        'd', 174,
        'f', 174,
        'l', 174,
        's', 174,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 310,
        '.', 314,
        '/', 574,
        '@', 512,
        'i', 474,
        '|', 241,
        '+', 513,
        '-', 513,
        'E', 552,
        'e', 552,
        'D', 553,
        'F', 553,
        'L', 553,
        'S', 553,
        'd', 553,
        'f', 553,
        'l', 553,
        's', 553,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 310,
        '.', 316,
        '/', 269,
        '@', 39,
        'i', 301,
        '|', 241,
        '+', 40,
        '-', 40,
        'E', 176,
        'e', 176,
        'D', 177,
        'F', 177,
        'L', 177,
        'S', 177,
        'd', 177,
        'f', 177,
        'l', 177,
        's', 177,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 315,
        '@', 512,
        'i', 474,
        '|', 241,
        '+', 513,
        '-', 513,
        'E', 552,
        'e', 552,
        'D', 553,
        'F', 553,
        'L', 553,
        'S', 553,
        'd', 553,
        'f', 553,
        'l', 553,
        's', 553,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 315,
        '@', 39,
        'i', 301,
        '|', 241,
        '+', 40,
        '-', 40,
        'E', 176,
        'e', 176,
        'D', 177,
        'F', 177,
        'L', 177,
        'S', 177,
        'd', 177,
        'f', 177,
        'l', 177,
        's', 177,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(512);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 323,
        '.', 335,
        '/', 578,
        '|', 243,
        'E', 554,
        'e', 554,
        'D', 554,
        'F', 554,
        'L', 554,
        'S', 554,
        'd', 554,
        'f', 554,
        'l', 554,
        's', 554,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '/') ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(339);
      if (lookahead == '/') ADVANCE(253);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 323,
        '.', 336,
        '/', 253,
        '|', 243,
        'E', 178,
        'e', 178,
        'D', 178,
        'F', 178,
        'L', 178,
        'S', 178,
        'd', 178,
        'f', 178,
        'l', 178,
        's', 178,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead == '|') ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(323);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '|') ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '/') ADVANCE(220);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 339,
        '|', 243,
        'E', 554,
        'e', 554,
        'D', 554,
        'F', 554,
        'L', 554,
        'S', 554,
        'd', 554,
        'f', 554,
        'l', 554,
        's', 554,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '#', 339,
        '|', 243,
        'E', 178,
        'e', 178,
        'D', 178,
        'F', 178,
        'L', 178,
        'S', 178,
        'd', 178,
        'f', 178,
        'l', 178,
        's', 178,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '|') ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '|') ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(339);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(339);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '/') ADVANCE(232);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '/') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(355);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(138);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(361);
      if (lookahead == '/') ADVANCE(278);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(361);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '/') ADVANCE(279);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '/') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '@') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '@') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '|') ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(459);
      if (lookahead == '/') ADVANCE(588);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 448,
        '/', 588,
        '|', 243,
        'E', 554,
        'e', 554,
        'D', 554,
        'F', 554,
        'L', 554,
        'S', 554,
        'd', 554,
        'f', 554,
        'l', 554,
        's', 554,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 449,
        '/', 243,
        '|', 243,
        'E', 178,
        'e', 178,
        'D', 178,
        'F', 178,
        'L', 178,
        'S', 178,
        'd', 178,
        'f', 178,
        'l', 178,
        's', 178,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(512);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '@', 439,
        'I', 201,
        'N', 182,
        'i', 428,
        'n', 78,
        '|', 266,
        '+', 92,
        '-', 92,
        '0', 329,
        '1', 329,
      );
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(389);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '@', 440,
        'I', 212,
        'N', 186,
        'i', 432,
        'n', 82,
        '|', 272,
        '+', 94,
        '-', 94,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(354);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(440);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(347);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '@', 441,
        'I', 213,
        'N', 187,
        'i', 433,
        'n', 83,
        '|', 274,
        '+', 96,
        '-', 96,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(441);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(515);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(442);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(442);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(443);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(444);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(444);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(457);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(458);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(517);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(519);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(445);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(446);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(521);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(522);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '|') ADVANCE(241);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '|') ADVANCE(239);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '|') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '|') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '|') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '|') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(561);
      if (lookahead == 'n') ADVANCE(531);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(562);
      if (lookahead == 'n') ADVANCE(532);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '|') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '|') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(540);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(434);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(422);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '|', 243,
        'E', 554,
        'e', 554,
        'D', 554,
        'F', 554,
        'L', 554,
        'S', 554,
        'd', 554,
        'f', 554,
        'l', 554,
        's', 554,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '|', 243,
        'E', 178,
        'e', 178,
        'D', 178,
        'F', 178,
        'L', 178,
        'S', 178,
        'd', 178,
        'f', 178,
        'l', 178,
        's', 178,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '|') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(466);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(461);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(384);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(328);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_number);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\r') ADVANCE(496);
      if (lookahead == '\n' ||
          lookahead == 0x85 ||
          lookahead == 0x2028) ADVANCE(497);
      if (set_contains(sym_escape_sequence_character_set_2, 11, lookahead)) ADVANCE(2);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == 0x85) ADVANCE(497);
      if (set_contains(sym_escape_sequence_character_set_1, 9, lookahead)) ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_escape_sequence);
      if ((set_contains(sym_escape_sequence_character_set_1, 9, lookahead)) &&
          lookahead != '\n' &&
          lookahead != 0x85) ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        '#', 7,
        '.', 502,
        '/', 580,
        'i', 474,
        '|', 249,
        'E', 555,
        'e', 555,
        'D', 555,
        'F', 555,
        'L', 555,
        'S', 555,
        'd', 555,
        'f', 555,
        'l', 555,
        's', 555,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        '#', 12,
        'i', 474,
        '|', 249,
        'E', 555,
        'e', 555,
        'D', 555,
        'F', 555,
        'L', 555,
        'S', 555,
        'd', 555,
        'f', 555,
        'l', 555,
        's', 555,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(249);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(525);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(544);
      if (lookahead == '/') ADVANCE(589);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        '.', 542,
        '/', 589,
        'i', 474,
        '|', 249,
        'E', 555,
        'e', 555,
        'D', 555,
        'F', 555,
        'L', 555,
        'S', 555,
        'd', 555,
        'f', 555,
        'l', 555,
        's', 555,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(571);
      if (lookahead == 'I') ADVANCE(564);
      if (lookahead == 'N') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead == 'n') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(526);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(524);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == 'I') ADVANCE(569);
      if (lookahead == 'N') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(577);
      if (lookahead == 'I') ADVANCE(568);
      if (lookahead == 'N') ADVANCE(559);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(549);
      if (lookahead == 'n') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(582);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(583);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == 'I') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(586);
      if (lookahead == 'I') ADVANCE(569);
      if (lookahead == 'N') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(586);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == 'I') ADVANCE(568);
      if (lookahead == 'N') ADVANCE(559);
      if (lookahead == 'i') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(527);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(474);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(408);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(546);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(414);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(534);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(535);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A') ADVANCE(567);
      if (lookahead == 'a') ADVANCE(536);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(505);
      if (lookahead == 'f') ADVANCE(523);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(509);
      if (lookahead == 'f') ADVANCE(509);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F') ADVANCE(510);
      if (lookahead == 'f') ADVANCE(510);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(523);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(509);
      if (lookahead == 'n') ADVANCE(509);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(510);
      if (lookahead == 'n') ADVANCE(510);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead == 'n') ADVANCE(533);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(547);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(548);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(509);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(510);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_symbol);
      ADVANCE_MAP(
        'i', 474,
        '|', 249,
        'E', 555,
        'e', 555,
        'D', 555,
        'F', 555,
        'L', 555,
        'S', 555,
        'd', 555,
        'f', 555,
        'l', 555,
        's', 555,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '|') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(474);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(509);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(510);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(541);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(566);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(505);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(509);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(510);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(505);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_symbol);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_keyword);
      if ((!eof && set_contains(sym_symbol_character_set_2, 17, lookahead))) ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_POUND_SQUOTE);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_POUND_BQUOTE);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(607);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA);
      if (lookahead == '@') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_POUND_COMMA_AT);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_vector_tag);
      ADVANCE_MAP(
        '!', 292,
        '\'', 603,
        ',', 608,
        ':', 170,
        ';', 291,
        '\\', 102,
        '`', 604,
        'v', 167,
        '|', 293,
        'B', 305,
        'b', 305,
        'D', 22,
        'd', 22,
        'F', 299,
        'f', 299,
        'O', 359,
        'o', 359,
        'T', 300,
        't', 300,
        'X', 372,
        'x', 372,
        'E', 5,
        'I', 5,
        'e', 5,
        'i', 5,
      );
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_vector_tag);
      if (lookahead == '|') ADVANCE(293);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_byte_vector_tag);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 287},
  [2] = {.lex_state = 287},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 287},
  [7] = {.lex_state = 287},
  [8] = {.lex_state = 287},
  [9] = {.lex_state = 287},
  [10] = {.lex_state = 287},
  [11] = {.lex_state = 287},
  [12] = {.lex_state = 287},
  [13] = {.lex_state = 287},
  [14] = {.lex_state = 287},
  [15] = {.lex_state = 287},
  [16] = {.lex_state = 287},
  [17] = {.lex_state = 287},
  [18] = {.lex_state = 287},
  [19] = {.lex_state = 287},
  [20] = {.lex_state = 287},
  [21] = {.lex_state = 287},
  [22] = {.lex_state = 287},
  [23] = {.lex_state = 287},
  [24] = {.lex_state = 287},
  [25] = {.lex_state = 287},
  [26] = {.lex_state = 287},
  [27] = {.lex_state = 287},
  [28] = {.lex_state = 287},
  [29] = {.lex_state = 287},
  [30] = {.lex_state = 287},
  [31] = {.lex_state = 287},
  [32] = {.lex_state = 287},
  [33] = {.lex_state = 287},
  [34] = {.lex_state = 287},
  [35] = {.lex_state = 287},
  [36] = {.lex_state = 287},
  [37] = {.lex_state = 287},
  [38] = {.lex_state = 287},
  [39] = {.lex_state = 287},
  [40] = {.lex_state = 287},
  [41] = {.lex_state = 287},
  [42] = {.lex_state = 287},
  [43] = {.lex_state = 287},
  [44] = {.lex_state = 287},
  [45] = {.lex_state = 287},
  [46] = {.lex_state = 287},
  [47] = {.lex_state = 287},
  [48] = {.lex_state = 287},
  [49] = {.lex_state = 287},
  [50] = {.lex_state = 287},
  [51] = {.lex_state = 287},
  [52] = {.lex_state = 287},
  [53] = {.lex_state = 287},
  [54] = {.lex_state = 287},
  [55] = {.lex_state = 287},
  [56] = {.lex_state = 287},
  [57] = {.lex_state = 287},
  [58] = {.lex_state = 287},
  [59] = {.lex_state = 287},
  [60] = {.lex_state = 287},
  [61] = {.lex_state = 287},
  [62] = {.lex_state = 287},
  [63] = {.lex_state = 287},
  [64] = {.lex_state = 287},
  [65] = {.lex_state = 287},
  [66] = {.lex_state = 287},
  [67] = {.lex_state = 287},
  [68] = {.lex_state = 287},
  [69] = {.lex_state = 287},
  [70] = {.lex_state = 287},
  [71] = {.lex_state = 287},
  [72] = {.lex_state = 287},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 287},
  [84] = {.lex_state = 287},
  [85] = {.lex_state = 0},
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
    [sym_vector_tag] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(85),
    [sym__token] = STATE(6),
    [sym__intertoken] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_directive] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym__datum] = STATE(6),
    [sym_string] = STATE(6),
    [sym_list] = STATE(6),
    [sym_quote] = STATE(6),
    [sym_quasiquote] = STATE(6),
    [sym_syntax] = STATE(6),
    [sym_quasisyntax] = STATE(6),
    [sym_unquote] = STATE(6),
    [sym_unquote_splicing] = STATE(6),
    [sym_unsyntax] = STATE(6),
    [sym_unsyntax_splicing] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_byte_vector] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
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
    [sym_vector_tag] = ACTIONS(101),
    [sym_byte_vector_tag] = ACTIONS(104),
  },
  [3] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [sym_character] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(109),
    [sym_keyword] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_first_symbol] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [4] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [sym_character] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(117),
    [sym_keyword] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_first_symbol] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [5] = {
    [sym__token] = STATE(8),
    [sym__intertoken] = STATE(8),
    [sym_comment] = STATE(8),
    [sym_directive] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym__datum] = STATE(8),
    [sym_string] = STATE(8),
    [sym_list] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_quasiquote] = STATE(8),
    [sym_syntax] = STATE(8),
    [sym_quasisyntax] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_unquote_splicing] = STATE(8),
    [sym_unsyntax] = STATE(8),
    [sym_unsyntax_splicing] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_byte_vector] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [aux_sym__intertoken_token1] = ACTIONS(121),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_character] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(123),
    [sym_keyword] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_first_symbol] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [6] = {
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
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [7] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(133),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [8] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
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
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
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
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
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
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
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
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [13] = {
    [sym__token] = STATE(18),
    [sym__intertoken] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_directive] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym__datum] = STATE(18),
    [sym_string] = STATE(18),
    [sym_list] = STATE(18),
    [sym_quote] = STATE(18),
    [sym_quasiquote] = STATE(18),
    [sym_syntax] = STATE(18),
    [sym_quasisyntax] = STATE(18),
    [sym_unquote] = STATE(18),
    [sym_unquote_splicing] = STATE(18),
    [sym_unsyntax] = STATE(18),
    [sym_unsyntax_splicing] = STATE(18),
    [sym_vector] = STATE(18),
    [sym_byte_vector] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [aux_sym__intertoken_token1] = ACTIONS(145),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(145),
    [sym_number] = ACTIONS(147),
    [sym_character] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(147),
    [sym_keyword] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
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
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(135),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [15] = {
    [sym__token] = STATE(19),
    [sym__intertoken] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_directive] = STATE(19),
    [sym_block_comment] = STATE(19),
    [sym__datum] = STATE(19),
    [sym_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_quasiquote] = STATE(19),
    [sym_syntax] = STATE(19),
    [sym_quasisyntax] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_unquote_splicing] = STATE(19),
    [sym_unsyntax] = STATE(19),
    [sym_unsyntax_splicing] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_byte_vector] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym__intertoken_token1] = ACTIONS(149),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(149),
    [sym_number] = ACTIONS(151),
    [sym_character] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(151),
    [sym_keyword] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(135),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [16] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(153),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(153),
    [sym_number] = ACTIONS(155),
    [sym_character] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(155),
    [sym_keyword] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(157),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [17] = {
    [sym__token] = STATE(7),
    [sym__intertoken] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_directive] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym__datum] = STATE(7),
    [sym_string] = STATE(7),
    [sym_list] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_quasiquote] = STATE(7),
    [sym_syntax] = STATE(7),
    [sym_quasisyntax] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym_unquote_splicing] = STATE(7),
    [sym_unsyntax] = STATE(7),
    [sym_unsyntax_splicing] = STATE(7),
    [sym_vector] = STATE(7),
    [sym_byte_vector] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [aux_sym__intertoken_token1] = ACTIONS(159),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(159),
    [sym_number] = ACTIONS(161),
    [sym_character] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(161),
    [sym_keyword] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(163),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [18] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_POUND_SQUOTE] = ACTIONS(29),
    [anon_sym_POUND_BQUOTE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_COMMA_AT] = ACTIONS(35),
    [anon_sym_POUND_COMMA] = ACTIONS(37),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(39),
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [19] = {
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
    [aux_sym__intertoken_token1] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_character] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(131),
    [sym_keyword] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(143),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [20] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(70),
    [sym_string] = STATE(70),
    [sym_list] = STATE(70),
    [sym_quote] = STATE(70),
    [sym_quasiquote] = STATE(70),
    [sym_syntax] = STATE(70),
    [sym_quasisyntax] = STATE(70),
    [sym_unquote] = STATE(70),
    [sym_unquote_splicing] = STATE(70),
    [sym_unsyntax] = STATE(70),
    [sym_unsyntax_splicing] = STATE(70),
    [sym_vector] = STATE(70),
    [sym_byte_vector] = STATE(70),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(167),
    [sym_number] = ACTIONS(169),
    [sym_character] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(169),
    [sym_keyword] = ACTIONS(167),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [21] = {
    [sym__intertoken] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_directive] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym__datum] = STATE(57),
    [sym_string] = STATE(57),
    [sym_list] = STATE(57),
    [sym_quote] = STATE(57),
    [sym_quasiquote] = STATE(57),
    [sym_syntax] = STATE(57),
    [sym_quasisyntax] = STATE(57),
    [sym_unquote] = STATE(57),
    [sym_unquote_splicing] = STATE(57),
    [sym_unsyntax] = STATE(57),
    [sym_unsyntax_splicing] = STATE(57),
    [sym_vector] = STATE(57),
    [sym_byte_vector] = STATE(57),
    [aux_sym_comment_repeat1] = STATE(22),
    [aux_sym__intertoken_token1] = ACTIONS(171),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(173),
    [sym_number] = ACTIONS(175),
    [sym_character] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(175),
    [sym_keyword] = ACTIONS(173),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [22] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(42),
    [sym_string] = STATE(42),
    [sym_list] = STATE(42),
    [sym_quote] = STATE(42),
    [sym_quasiquote] = STATE(42),
    [sym_syntax] = STATE(42),
    [sym_quasisyntax] = STATE(42),
    [sym_unquote] = STATE(42),
    [sym_unquote_splicing] = STATE(42),
    [sym_unsyntax] = STATE(42),
    [sym_unsyntax_splicing] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_byte_vector] = STATE(42),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_character] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(179),
    [sym_keyword] = ACTIONS(177),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [23] = {
    [sym__intertoken] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_directive] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym__datum] = STATE(51),
    [sym_string] = STATE(51),
    [sym_list] = STATE(51),
    [sym_quote] = STATE(51),
    [sym_quasiquote] = STATE(51),
    [sym_syntax] = STATE(51),
    [sym_quasisyntax] = STATE(51),
    [sym_unquote] = STATE(51),
    [sym_unquote_splicing] = STATE(51),
    [sym_unsyntax] = STATE(51),
    [sym_unsyntax_splicing] = STATE(51),
    [sym_vector] = STATE(51),
    [sym_byte_vector] = STATE(51),
    [aux_sym_comment_repeat1] = STATE(26),
    [aux_sym__intertoken_token1] = ACTIONS(181),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [24] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(58),
    [sym_string] = STATE(58),
    [sym_list] = STATE(58),
    [sym_quote] = STATE(58),
    [sym_quasiquote] = STATE(58),
    [sym_syntax] = STATE(58),
    [sym_quasisyntax] = STATE(58),
    [sym_unquote] = STATE(58),
    [sym_unquote_splicing] = STATE(58),
    [sym_unsyntax] = STATE(58),
    [sym_unsyntax_splicing] = STATE(58),
    [sym_vector] = STATE(58),
    [sym_byte_vector] = STATE(58),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [25] = {
    [sym__intertoken] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym__datum] = STATE(49),
    [sym_string] = STATE(49),
    [sym_list] = STATE(49),
    [sym_quote] = STATE(49),
    [sym_quasiquote] = STATE(49),
    [sym_syntax] = STATE(49),
    [sym_quasisyntax] = STATE(49),
    [sym_unquote] = STATE(49),
    [sym_unquote_splicing] = STATE(49),
    [sym_unsyntax] = STATE(49),
    [sym_unsyntax_splicing] = STATE(49),
    [sym_vector] = STATE(49),
    [sym_byte_vector] = STATE(49),
    [aux_sym_comment_repeat1] = STATE(27),
    [aux_sym__intertoken_token1] = ACTIONS(191),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [26] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(56),
    [sym_string] = STATE(56),
    [sym_list] = STATE(56),
    [sym_quote] = STATE(56),
    [sym_quasiquote] = STATE(56),
    [sym_syntax] = STATE(56),
    [sym_quasisyntax] = STATE(56),
    [sym_unquote] = STATE(56),
    [sym_unquote_splicing] = STATE(56),
    [sym_unsyntax] = STATE(56),
    [sym_unsyntax_splicing] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_byte_vector] = STATE(56),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(197),
    [sym_number] = ACTIONS(199),
    [sym_character] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(199),
    [sym_keyword] = ACTIONS(197),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [27] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(72),
    [sym_string] = STATE(72),
    [sym_list] = STATE(72),
    [sym_quote] = STATE(72),
    [sym_quasiquote] = STATE(72),
    [sym_syntax] = STATE(72),
    [sym_quasisyntax] = STATE(72),
    [sym_unquote] = STATE(72),
    [sym_unquote_splicing] = STATE(72),
    [sym_unsyntax] = STATE(72),
    [sym_unsyntax_splicing] = STATE(72),
    [sym_vector] = STATE(72),
    [sym_byte_vector] = STATE(72),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(201),
    [sym_number] = ACTIONS(203),
    [sym_character] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(203),
    [sym_keyword] = ACTIONS(201),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [28] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(71),
    [sym_string] = STATE(71),
    [sym_list] = STATE(71),
    [sym_quote] = STATE(71),
    [sym_quasiquote] = STATE(71),
    [sym_syntax] = STATE(71),
    [sym_quasisyntax] = STATE(71),
    [sym_unquote] = STATE(71),
    [sym_unquote_splicing] = STATE(71),
    [sym_unsyntax] = STATE(71),
    [sym_unsyntax_splicing] = STATE(71),
    [sym_vector] = STATE(71),
    [sym_byte_vector] = STATE(71),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(205),
    [sym_number] = ACTIONS(207),
    [sym_character] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(207),
    [sym_keyword] = ACTIONS(205),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [29] = {
    [sym__intertoken] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_directive] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym__datum] = STATE(47),
    [sym_string] = STATE(47),
    [sym_list] = STATE(47),
    [sym_quote] = STATE(47),
    [sym_quasiquote] = STATE(47),
    [sym_syntax] = STATE(47),
    [sym_quasisyntax] = STATE(47),
    [sym_unquote] = STATE(47),
    [sym_unquote_splicing] = STATE(47),
    [sym_unsyntax] = STATE(47),
    [sym_unsyntax_splicing] = STATE(47),
    [sym_vector] = STATE(47),
    [sym_byte_vector] = STATE(47),
    [aux_sym_comment_repeat1] = STATE(28),
    [aux_sym__intertoken_token1] = ACTIONS(209),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(211),
    [sym_number] = ACTIONS(213),
    [sym_character] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(213),
    [sym_keyword] = ACTIONS(211),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [30] = {
    [sym__intertoken] = STATE(20),
    [sym_comment] = STATE(20),
    [sym_directive] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym__datum] = STATE(45),
    [sym_string] = STATE(45),
    [sym_list] = STATE(45),
    [sym_quote] = STATE(45),
    [sym_quasiquote] = STATE(45),
    [sym_syntax] = STATE(45),
    [sym_quasisyntax] = STATE(45),
    [sym_unquote] = STATE(45),
    [sym_unquote_splicing] = STATE(45),
    [sym_unsyntax] = STATE(45),
    [sym_unsyntax_splicing] = STATE(45),
    [sym_vector] = STATE(45),
    [sym_byte_vector] = STATE(45),
    [aux_sym_comment_repeat1] = STATE(20),
    [aux_sym__intertoken_token1] = ACTIONS(215),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(217),
    [sym_number] = ACTIONS(219),
    [sym_character] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(219),
    [sym_keyword] = ACTIONS(217),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [31] = {
    [sym__intertoken] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_directive] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym__datum] = STATE(43),
    [sym_string] = STATE(43),
    [sym_list] = STATE(43),
    [sym_quote] = STATE(43),
    [sym_quasiquote] = STATE(43),
    [sym_syntax] = STATE(43),
    [sym_quasisyntax] = STATE(43),
    [sym_unquote] = STATE(43),
    [sym_unquote_splicing] = STATE(43),
    [sym_unsyntax] = STATE(43),
    [sym_unsyntax_splicing] = STATE(43),
    [sym_vector] = STATE(43),
    [sym_byte_vector] = STATE(43),
    [aux_sym_comment_repeat1] = STATE(36),
    [aux_sym__intertoken_token1] = ACTIONS(221),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(223),
    [sym_number] = ACTIONS(225),
    [sym_character] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(225),
    [sym_keyword] = ACTIONS(223),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [32] = {
    [sym__intertoken] = STATE(38),
    [sym_comment] = STATE(38),
    [sym_directive] = STATE(38),
    [sym_block_comment] = STATE(38),
    [sym__datum] = STATE(41),
    [sym_string] = STATE(41),
    [sym_list] = STATE(41),
    [sym_quote] = STATE(41),
    [sym_quasiquote] = STATE(41),
    [sym_syntax] = STATE(41),
    [sym_quasisyntax] = STATE(41),
    [sym_unquote] = STATE(41),
    [sym_unquote_splicing] = STATE(41),
    [sym_unsyntax] = STATE(41),
    [sym_unsyntax_splicing] = STATE(41),
    [sym_vector] = STATE(41),
    [sym_byte_vector] = STATE(41),
    [aux_sym_comment_repeat1] = STATE(38),
    [aux_sym__intertoken_token1] = ACTIONS(227),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(229),
    [sym_number] = ACTIONS(231),
    [sym_character] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(231),
    [sym_keyword] = ACTIONS(229),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [33] = {
    [sym__intertoken] = STATE(39),
    [sym_comment] = STATE(39),
    [sym_directive] = STATE(39),
    [sym_block_comment] = STATE(39),
    [sym__datum] = STATE(44),
    [sym_string] = STATE(44),
    [sym_list] = STATE(44),
    [sym_quote] = STATE(44),
    [sym_quasiquote] = STATE(44),
    [sym_syntax] = STATE(44),
    [sym_quasisyntax] = STATE(44),
    [sym_unquote] = STATE(44),
    [sym_unquote_splicing] = STATE(44),
    [sym_unsyntax] = STATE(44),
    [sym_unsyntax_splicing] = STATE(44),
    [sym_vector] = STATE(44),
    [sym_byte_vector] = STATE(44),
    [aux_sym_comment_repeat1] = STATE(39),
    [aux_sym__intertoken_token1] = ACTIONS(233),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [34] = {
    [sym__intertoken] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_directive] = STATE(37),
    [sym_block_comment] = STATE(37),
    [sym__datum] = STATE(46),
    [sym_string] = STATE(46),
    [sym_list] = STATE(46),
    [sym_quote] = STATE(46),
    [sym_quasiquote] = STATE(46),
    [sym_syntax] = STATE(46),
    [sym_quasisyntax] = STATE(46),
    [sym_unquote] = STATE(46),
    [sym_unquote_splicing] = STATE(46),
    [sym_unsyntax] = STATE(46),
    [sym_unsyntax_splicing] = STATE(46),
    [sym_vector] = STATE(46),
    [sym_byte_vector] = STATE(46),
    [aux_sym_comment_repeat1] = STATE(37),
    [aux_sym__intertoken_token1] = ACTIONS(239),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(241),
    [sym_number] = ACTIONS(243),
    [sym_character] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(243),
    [sym_keyword] = ACTIONS(241),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [35] = {
    [sym__intertoken] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_directive] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym__datum] = STATE(55),
    [sym_string] = STATE(55),
    [sym_list] = STATE(55),
    [sym_quote] = STATE(55),
    [sym_quasiquote] = STATE(55),
    [sym_syntax] = STATE(55),
    [sym_quasisyntax] = STATE(55),
    [sym_unquote] = STATE(55),
    [sym_unquote_splicing] = STATE(55),
    [sym_unsyntax] = STATE(55),
    [sym_unsyntax_splicing] = STATE(55),
    [sym_vector] = STATE(55),
    [sym_byte_vector] = STATE(55),
    [aux_sym_comment_repeat1] = STATE(24),
    [aux_sym__intertoken_token1] = ACTIONS(245),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(247),
    [sym_number] = ACTIONS(249),
    [sym_character] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(249),
    [sym_keyword] = ACTIONS(247),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [36] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(69),
    [sym_string] = STATE(69),
    [sym_list] = STATE(69),
    [sym_quote] = STATE(69),
    [sym_quasiquote] = STATE(69),
    [sym_syntax] = STATE(69),
    [sym_quasisyntax] = STATE(69),
    [sym_unquote] = STATE(69),
    [sym_unquote_splicing] = STATE(69),
    [sym_unsyntax] = STATE(69),
    [sym_unsyntax_splicing] = STATE(69),
    [sym_vector] = STATE(69),
    [sym_byte_vector] = STATE(69),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(251),
    [sym_number] = ACTIONS(253),
    [sym_character] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(253),
    [sym_keyword] = ACTIONS(251),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [37] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(66),
    [sym_string] = STATE(66),
    [sym_list] = STATE(66),
    [sym_quote] = STATE(66),
    [sym_quasiquote] = STATE(66),
    [sym_syntax] = STATE(66),
    [sym_quasisyntax] = STATE(66),
    [sym_unquote] = STATE(66),
    [sym_unquote_splicing] = STATE(66),
    [sym_unsyntax] = STATE(66),
    [sym_unsyntax_splicing] = STATE(66),
    [sym_vector] = STATE(66),
    [sym_byte_vector] = STATE(66),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(255),
    [sym_number] = ACTIONS(257),
    [sym_character] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(257),
    [sym_keyword] = ACTIONS(255),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [38] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(68),
    [sym_string] = STATE(68),
    [sym_list] = STATE(68),
    [sym_quote] = STATE(68),
    [sym_quasiquote] = STATE(68),
    [sym_syntax] = STATE(68),
    [sym_quasisyntax] = STATE(68),
    [sym_unquote] = STATE(68),
    [sym_unquote_splicing] = STATE(68),
    [sym_unsyntax] = STATE(68),
    [sym_unsyntax_splicing] = STATE(68),
    [sym_vector] = STATE(68),
    [sym_byte_vector] = STATE(68),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(259),
    [sym_number] = ACTIONS(261),
    [sym_character] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(261),
    [sym_keyword] = ACTIONS(259),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [39] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym__datum] = STATE(67),
    [sym_string] = STATE(67),
    [sym_list] = STATE(67),
    [sym_quote] = STATE(67),
    [sym_quasiquote] = STATE(67),
    [sym_syntax] = STATE(67),
    [sym_quasisyntax] = STATE(67),
    [sym_unquote] = STATE(67),
    [sym_unquote_splicing] = STATE(67),
    [sym_unsyntax] = STATE(67),
    [sym_unsyntax_splicing] = STATE(67),
    [sym_vector] = STATE(67),
    [sym_byte_vector] = STATE(67),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(165),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym_boolean] = ACTIONS(263),
    [sym_number] = ACTIONS(265),
    [sym_character] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_symbol] = ACTIONS(265),
    [sym_keyword] = ACTIONS(263),
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
    [sym_vector_tag] = ACTIONS(41),
    [sym_byte_vector_tag] = ACTIONS(43),
  },
  [40] = {
    [sym__intertoken] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_directive] = STATE(40),
    [sym_block_comment] = STATE(40),
    [aux_sym_comment_repeat1] = STATE(40),
    [aux_sym__intertoken_token1] = ACTIONS(267),
    [aux_sym_comment_token1] = ACTIONS(270),
    [anon_sym_POUND_SEMI] = ACTIONS(273),
    [anon_sym_POUND_BANG] = ACTIONS(276),
    [anon_sym_POUND_PIPE] = ACTIONS(279),
    [sym_boolean] = ACTIONS(282),
    [sym_number] = ACTIONS(284),
    [sym_character] = ACTIONS(282),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [sym_symbol] = ACTIONS(284),
    [sym_keyword] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [anon_sym_BQUOTE] = ACTIONS(282),
    [anon_sym_POUND_SQUOTE] = ACTIONS(282),
    [anon_sym_POUND_BQUOTE] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_COMMA_AT] = ACTIONS(282),
    [anon_sym_POUND_COMMA] = ACTIONS(284),
    [anon_sym_POUND_COMMA_AT] = ACTIONS(282),
    [sym_vector_tag] = ACTIONS(284),
    [sym_byte_vector_tag] = ACTIONS(282),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(288), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(286), 23,
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
      sym_byte_vector_tag,
  [33] = 2,
    ACTIONS(292), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(290), 23,
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
      sym_byte_vector_tag,
  [66] = 2,
    ACTIONS(296), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(294), 23,
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
      sym_byte_vector_tag,
  [99] = 2,
    ACTIONS(300), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(298), 23,
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
      sym_byte_vector_tag,
  [132] = 2,
    ACTIONS(304), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(302), 23,
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
      sym_byte_vector_tag,
  [165] = 2,
    ACTIONS(308), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(306), 23,
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
      sym_byte_vector_tag,
  [198] = 2,
    ACTIONS(312), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(310), 23,
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
      sym_byte_vector_tag,
  [231] = 2,
    ACTIONS(316), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(314), 23,
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
      sym_byte_vector_tag,
  [264] = 2,
    ACTIONS(320), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(318), 23,
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
      sym_byte_vector_tag,
  [297] = 2,
    ACTIONS(324), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(322), 23,
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
      sym_byte_vector_tag,
  [330] = 2,
    ACTIONS(328), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(326), 23,
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
      sym_byte_vector_tag,
  [363] = 2,
    ACTIONS(332), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(330), 23,
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
      sym_byte_vector_tag,
  [396] = 2,
    ACTIONS(336), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(334), 23,
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
      sym_byte_vector_tag,
  [429] = 2,
    ACTIONS(340), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(338), 23,
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
      sym_byte_vector_tag,
  [462] = 2,
    ACTIONS(344), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(342), 23,
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
      sym_byte_vector_tag,
  [495] = 2,
    ACTIONS(348), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(346), 23,
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
      sym_byte_vector_tag,
  [528] = 2,
    ACTIONS(352), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(350), 23,
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
      sym_byte_vector_tag,
  [561] = 2,
    ACTIONS(356), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(354), 23,
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
      sym_byte_vector_tag,
  [594] = 2,
    ACTIONS(360), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(358), 23,
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
      sym_byte_vector_tag,
  [627] = 2,
    ACTIONS(364), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(362), 23,
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
      sym_byte_vector_tag,
  [660] = 2,
    ACTIONS(368), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(366), 23,
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
      sym_byte_vector_tag,
  [693] = 2,
    ACTIONS(372), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(370), 23,
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
      sym_byte_vector_tag,
  [726] = 2,
    ACTIONS(376), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(374), 23,
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
      sym_byte_vector_tag,
  [759] = 2,
    ACTIONS(380), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(378), 23,
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
      sym_byte_vector_tag,
  [792] = 2,
    ACTIONS(384), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(382), 23,
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
      sym_byte_vector_tag,
  [825] = 2,
    ACTIONS(388), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(386), 23,
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
      sym_byte_vector_tag,
  [858] = 2,
    ACTIONS(392), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(390), 23,
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
      sym_byte_vector_tag,
  [891] = 2,
    ACTIONS(396), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(394), 23,
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
      sym_byte_vector_tag,
  [924] = 2,
    ACTIONS(400), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(398), 23,
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
      sym_byte_vector_tag,
  [957] = 2,
    ACTIONS(404), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(402), 23,
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
      sym_byte_vector_tag,
  [990] = 2,
    ACTIONS(408), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(406), 23,
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
      sym_byte_vector_tag,
  [1023] = 2,
    ACTIONS(412), 5,
      sym_number,
      sym_symbol,
      anon_sym_COMMA,
      anon_sym_POUND_COMMA,
      sym_vector_tag,
    ACTIONS(410), 23,
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
      sym_byte_vector_tag,
  [1056] = 4,
    ACTIONS(414), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(416), 1,
      aux_sym_block_comment_token1,
    ACTIONS(418), 1,
      anon_sym_PIPE_POUND,
    STATE(75), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1070] = 4,
    ACTIONS(414), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(420), 1,
      aux_sym_block_comment_token1,
    ACTIONS(422), 1,
      anon_sym_PIPE_POUND,
    STATE(73), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1084] = 4,
    ACTIONS(424), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(427), 1,
      aux_sym_block_comment_token1,
    ACTIONS(430), 1,
      anon_sym_PIPE_POUND,
    STATE(75), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1098] = 4,
    ACTIONS(414), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(432), 1,
      aux_sym_block_comment_token1,
    ACTIONS(434), 1,
      anon_sym_PIPE_POUND,
    STATE(77), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1112] = 4,
    ACTIONS(414), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(416), 1,
      aux_sym_block_comment_token1,
    ACTIONS(436), 1,
      anon_sym_PIPE_POUND,
    STATE(75), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1126] = 3,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(440), 2,
      sym_string_content,
      sym_escape_sequence,
  [1137] = 3,
    ACTIONS(442), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_string_repeat1,
    ACTIONS(444), 2,
      sym_string_content,
      sym_escape_sequence,
  [1148] = 3,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(448), 2,
      sym_string_content,
      sym_escape_sequence,
  [1159] = 2,
    ACTIONS(340), 1,
      aux_sym_block_comment_token1,
    ACTIONS(338), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1167] = 2,
    ACTIONS(360), 1,
      aux_sym_block_comment_token1,
    ACTIONS(358), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [1175] = 1,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
  [1179] = 1,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
  [1183] = 1,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
  [SMALL_STATE(42)] = 33,
  [SMALL_STATE(43)] = 66,
  [SMALL_STATE(44)] = 99,
  [SMALL_STATE(45)] = 132,
  [SMALL_STATE(46)] = 165,
  [SMALL_STATE(47)] = 198,
  [SMALL_STATE(48)] = 231,
  [SMALL_STATE(49)] = 264,
  [SMALL_STATE(50)] = 297,
  [SMALL_STATE(51)] = 330,
  [SMALL_STATE(52)] = 363,
  [SMALL_STATE(53)] = 396,
  [SMALL_STATE(54)] = 429,
  [SMALL_STATE(55)] = 462,
  [SMALL_STATE(56)] = 495,
  [SMALL_STATE(57)] = 528,
  [SMALL_STATE(58)] = 561,
  [SMALL_STATE(59)] = 594,
  [SMALL_STATE(60)] = 627,
  [SMALL_STATE(61)] = 660,
  [SMALL_STATE(62)] = 693,
  [SMALL_STATE(63)] = 726,
  [SMALL_STATE(64)] = 759,
  [SMALL_STATE(65)] = 792,
  [SMALL_STATE(66)] = 825,
  [SMALL_STATE(67)] = 858,
  [SMALL_STATE(68)] = 891,
  [SMALL_STATE(69)] = 924,
  [SMALL_STATE(70)] = 957,
  [SMALL_STATE(71)] = 990,
  [SMALL_STATE(72)] = 1023,
  [SMALL_STATE(73)] = 1056,
  [SMALL_STATE(74)] = 1070,
  [SMALL_STATE(75)] = 1084,
  [SMALL_STATE(76)] = 1098,
  [SMALL_STATE(77)] = 1112,
  [SMALL_STATE(78)] = 1126,
  [SMALL_STATE(79)] = 1137,
  [SMALL_STATE(80)] = 1148,
  [SMALL_STATE(81)] = 1159,
  [SMALL_STATE(82)] = 1167,
  [SMALL_STATE(83)] = 1175,
  [SMALL_STATE(84)] = 1179,
  [SMALL_STATE(85)] = 1183,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax_splicing, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax_splicing, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_vector, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_vector, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 3, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 3, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasisyntax, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasisyntax, 3, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 3, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splicing, 3, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splicing, 3, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsyntax, 3, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unsyntax, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [455] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
