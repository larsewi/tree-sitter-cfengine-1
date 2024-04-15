#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 8
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_body_keyword = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  sym_bundle_keyword = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DASH_GT = 9,
  anon_sym_EQ_GT = 10,
  sym_quoted_string = 11,
  sym_identifier = 12,
  sym_qualified_identifier = 13,
  sym_promise_guard = 14,
  sym_class_guard = 15,
  sym_comment = 16,
  sym_macro = 17,
  sym_source_file = 18,
  sym__block = 19,
  sym_body_block = 20,
  sym_body_body = 21,
  sym__body_attribute = 22,
  sym_class_guarded_body_attributes = 23,
  sym_bundle_block = 24,
  sym_parameter_list = 25,
  sym_bundle_body = 26,
  sym_bundle_section = 27,
  sym__right_value = 28,
  sym_call = 29,
  sym_list = 30,
  sym__value_list = 31,
  sym_class_guarded_promises = 32,
  sym_promise = 33,
  sym_attribute = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_body_body_repeat1 = 36,
  aux_sym_body_body_repeat2 = 37,
  aux_sym_parameter_list_repeat1 = 38,
  aux_sym_bundle_body_repeat1 = 39,
  aux_sym_bundle_section_repeat1 = 40,
  aux_sym_bundle_section_repeat2 = 41,
  aux_sym__value_list_repeat1 = 42,
  aux_sym_promise_repeat1 = 43,
  alias_sym_attribute_name = 44,
  alias_sym_body_name = 45,
  alias_sym_body_type = 46,
  alias_sym_bundle_name = 47,
  alias_sym_bundle_type = 48,
  alias_sym_calling_identifier = 49,
  alias_sym_promiser = 50,
  alias_sym_stakeholder = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_body_keyword] = "body_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [sym_bundle_keyword] = "bundle_keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [sym_quoted_string] = "quoted_string",
  [sym_identifier] = "parameter",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_promise_guard] = "promise_guard",
  [sym_class_guard] = "class_guard",
  [sym_comment] = "comment",
  [sym_macro] = "macro",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_body_block] = "body_block",
  [sym_body_body] = "body_body",
  [sym__body_attribute] = "_body_attribute",
  [sym_class_guarded_body_attributes] = "class_guarded_body_attributes",
  [sym_bundle_block] = "bundle_block",
  [sym_parameter_list] = "parameter_list",
  [sym_bundle_body] = "bundle_body",
  [sym_bundle_section] = "bundle_section",
  [sym__right_value] = "_right_value",
  [sym_call] = "call",
  [sym_list] = "list",
  [sym__value_list] = "_value_list",
  [sym_class_guarded_promises] = "class_guarded_promises",
  [sym_promise] = "promise",
  [sym_attribute] = "attribute",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_body_body_repeat1] = "body_body_repeat1",
  [aux_sym_body_body_repeat2] = "body_body_repeat2",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_bundle_body_repeat1] = "bundle_body_repeat1",
  [aux_sym_bundle_section_repeat1] = "bundle_section_repeat1",
  [aux_sym_bundle_section_repeat2] = "bundle_section_repeat2",
  [aux_sym__value_list_repeat1] = "_value_list_repeat1",
  [aux_sym_promise_repeat1] = "promise_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_body_name] = "body_name",
  [alias_sym_body_type] = "body_type",
  [alias_sym_bundle_name] = "bundle_name",
  [alias_sym_bundle_type] = "bundle_type",
  [alias_sym_calling_identifier] = "calling_identifier",
  [alias_sym_promiser] = "promiser",
  [alias_sym_stakeholder] = "stakeholder",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_body_keyword] = sym_body_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_bundle_keyword] = sym_bundle_keyword,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_quoted_string] = sym_quoted_string,
  [sym_identifier] = sym_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_promise_guard] = sym_promise_guard,
  [sym_class_guard] = sym_class_guard,
  [sym_comment] = sym_comment,
  [sym_macro] = sym_macro,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_body_block] = sym_body_block,
  [sym_body_body] = sym_body_body,
  [sym__body_attribute] = sym__body_attribute,
  [sym_class_guarded_body_attributes] = sym_class_guarded_body_attributes,
  [sym_bundle_block] = sym_bundle_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_bundle_body] = sym_bundle_body,
  [sym_bundle_section] = sym_bundle_section,
  [sym__right_value] = sym__right_value,
  [sym_call] = sym_call,
  [sym_list] = sym_list,
  [sym__value_list] = sym__value_list,
  [sym_class_guarded_promises] = sym_class_guarded_promises,
  [sym_promise] = sym_promise,
  [sym_attribute] = sym_attribute,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_body_body_repeat1] = aux_sym_body_body_repeat1,
  [aux_sym_body_body_repeat2] = aux_sym_body_body_repeat2,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_bundle_body_repeat1] = aux_sym_bundle_body_repeat1,
  [aux_sym_bundle_section_repeat1] = aux_sym_bundle_section_repeat1,
  [aux_sym_bundle_section_repeat2] = aux_sym_bundle_section_repeat2,
  [aux_sym__value_list_repeat1] = aux_sym__value_list_repeat1,
  [aux_sym_promise_repeat1] = aux_sym_promise_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_body_name] = alias_sym_body_name,
  [alias_sym_body_type] = alias_sym_body_type,
  [alias_sym_bundle_name] = alias_sym_bundle_name,
  [alias_sym_bundle_type] = alias_sym_bundle_type,
  [alias_sym_calling_identifier] = alias_sym_calling_identifier,
  [alias_sym_promiser] = alias_sym_promiser,
  [alias_sym_stakeholder] = alias_sym_stakeholder,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_body_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_bundle_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_promise_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_class_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_body_block] = {
    .visible = true,
    .named = true,
  },
  [sym_body_body] = {
    .visible = true,
    .named = true,
  },
  [sym__body_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_class_guarded_body_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle_section] = {
    .visible = true,
    .named = true,
  },
  [sym__right_value] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__value_list] = {
    .visible = false,
    .named = true,
  },
  [sym_class_guarded_promises] = {
    .visible = true,
    .named = true,
  },
  [sym_promise] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_promise_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_body_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_body_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_bundle_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_calling_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_promiser] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_stakeholder] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_body_type,
    [2] = alias_sym_body_name,
  },
  [2] = {
    [1] = alias_sym_bundle_type,
    [2] = alias_sym_bundle_name,
  },
  [3] = {
    [0] = alias_sym_attribute_name,
  },
  [4] = {
    [0] = alias_sym_promiser,
  },
  [5] = {
    [0] = alias_sym_calling_identifier,
  },
  [6] = {
    [0] = alias_sym_promiser,
    [2] = alias_sym_stakeholder,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__right_value, 2,
    sym__right_value,
    alias_sym_stakeholder,
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
};

static inline bool sym_class_guard_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '&'
      ? (c < ' '
        ? c == '\t'
        : c <= '!')
      : (c <= '&' || (c < '.'
        ? (c >= '(' && c <= ')')
        : c <= '.')))
    : (c <= '9' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || c == '|'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '!' ||
          ('&' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '|') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '|') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '|') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(54);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(10);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == '`') ADVANCE(46);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(1);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 34:
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_body_keyword);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_bundle_keyword);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '|') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_qualified_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_promise_guard);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_promise_guard);
      if (lookahead == ':') ADVANCE(54);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_class_guard);
      if (lookahead == ':') ADVANCE(54);
      if (sym_class_guard_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_body_keyword] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_bundle_keyword] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym__block] = STATE(10),
    [sym_body_block] = STATE(10),
    [sym_bundle_block] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_body_keyword] = ACTIONS(7),
    [sym_bundle_keyword] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_macro] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_quoted_string,
    ACTIONS(17), 1,
      sym_qualified_identifier,
    STATE(63), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(13), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(25), 2,
      sym_call,
      sym_list,
  [25] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_quoted_string,
    ACTIONS(17), 1,
      sym_qualified_identifier,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym__right_value,
    STATE(90), 1,
      sym__value_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(25), 2,
      sym_call,
      sym_list,
  [52] = 7,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(25), 1,
      sym_promise_guard,
    ACTIONS(27), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(13), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(28), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [77] = 7,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_class_guard,
    STATE(96), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(15), 2,
      sym__body_attribute,
      aux_sym_body_body_repeat1,
    STATE(37), 2,
      sym_class_guarded_body_attributes,
      aux_sym_body_body_repeat2,
  [102] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_quoted_string,
    ACTIONS(17), 1,
      sym_qualified_identifier,
    STATE(63), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(25), 2,
      sym_call,
      sym_list,
  [127] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_quoted_string,
    ACTIONS(17), 1,
      sym_qualified_identifier,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym__right_value,
    STATE(87), 1,
      sym__value_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(25), 2,
      sym_call,
      sym_list,
  [154] = 7,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(27), 1,
      sym_class_guard,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(4), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
    STATE(27), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [179] = 7,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_class_guard,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(5), 2,
      sym__body_attribute,
      aux_sym_body_body_repeat1,
    STATE(39), 2,
      sym_class_guarded_body_attributes,
      aux_sym_body_body_repeat2,
  [204] = 5,
    ACTIONS(7), 1,
      sym_body_keyword,
    ACTIONS(9), 1,
      sym_bundle_keyword,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(11), 4,
      sym__block,
      sym_body_block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [224] = 5,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_body_keyword,
    ACTIONS(52), 1,
      sym_bundle_keyword,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(11), 4,
      sym__block,
      sym_body_block,
      sym_bundle_block,
      aux_sym_source_file_repeat1,
  [244] = 5,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(57), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(55), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(13), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [263] = 5,
    ACTIONS(61), 1,
      sym_quoted_string,
    ACTIONS(64), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(59), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(13), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [282] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_quoted_string,
    ACTIONS(17), 1,
      sym_qualified_identifier,
    STATE(63), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(25), 2,
      sym_call,
      sym_list,
  [303] = 5,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(96), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(15), 2,
      sym__body_attribute,
      aux_sym_body_body_repeat1,
  [322] = 5,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(96), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(71), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(15), 2,
      sym__body_attribute,
      aux_sym_body_body_repeat1,
  [341] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_quoted_string,
    ACTIONS(17), 1,
      sym_qualified_identifier,
    STATE(76), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(25), 2,
      sym_call,
      sym_list,
  [362] = 3,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(73), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [377] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym_quoted_string,
    ACTIONS(17), 1,
      sym_qualified_identifier,
    STATE(26), 1,
      sym__right_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(25), 2,
      sym_call,
      sym_list,
  [398] = 5,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(96), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(16), 2,
      sym__body_attribute,
      aux_sym_body_body_repeat1,
  [417] = 7,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_DASH_GT,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute,
    STATE(61), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [440] = 5,
    ACTIONS(23), 1,
      sym_quoted_string,
    ACTIONS(89), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(87), 2,
      anon_sym_RBRACE,
      sym_class_guard,
    STATE(12), 2,
      sym_promise,
      aux_sym_bundle_section_repeat1,
  [459] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(91), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [471] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(93), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [483] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(73), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [495] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_promise_repeat1,
    STATE(68), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [515] = 5,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      sym_promise_guard,
    ACTIONS(27), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(30), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [533] = 5,
    ACTIONS(27), 1,
      sym_class_guard,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(30), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [551] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(103), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [563] = 5,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      sym_promise_guard,
    ACTIONS(109), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(30), 2,
      sym_class_guarded_promises,
      aux_sym_bundle_section_repeat2,
  [581] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(112), 5,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [593] = 3,
    ACTIONS(116), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(114), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [606] = 4,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(48), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [621] = 4,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__value_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [636] = 3,
    ACTIONS(128), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(126), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [649] = 4,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym__value_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [664] = 4,
    ACTIONS(33), 1,
      sym_class_guard,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(38), 2,
      sym_class_guarded_body_attributes,
      aux_sym_body_body_repeat2,
  [679] = 4,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(38), 2,
      sym_class_guarded_body_attributes,
      aux_sym_body_body_repeat2,
  [694] = 4,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_class_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(38), 2,
      sym_class_guarded_body_attributes,
      aux_sym_body_body_repeat2,
  [709] = 4,
    ACTIONS(120), 1,
      sym_promise_guard,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(33), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [724] = 4,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym__value_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(141), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [739] = 5,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_bundle_body,
    STATE(83), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [756] = 5,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_body_body,
    STATE(81), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [773] = 3,
    ACTIONS(154), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(152), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [786] = 3,
    ACTIONS(158), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(156), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [799] = 3,
    ACTIONS(162), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(160), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [812] = 3,
    ACTIONS(166), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(164), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [825] = 4,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    STATE(48), 2,
      sym_bundle_section,
      aux_sym_bundle_body_repeat1,
  [840] = 3,
    ACTIONS(175), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [853] = 3,
    ACTIONS(179), 1,
      sym_promise_guard,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(177), 3,
      anon_sym_RBRACE,
      sym_quoted_string,
      sym_class_guard,
  [866] = 4,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [880] = 4,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [894] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(185), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [904] = 4,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [918] = 4,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [932] = 4,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [946] = 4,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(82), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [960] = 4,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [974] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [984] = 4,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [998] = 4,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1012] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [1022] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(141), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1032] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [1042] = 4,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [1066] = 3,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(213), 2,
      anon_sym_RBRACE,
      sym_class_guard,
  [1078] = 4,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1092] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [1102] = 4,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1116] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [1126] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [1136] = 4,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1150] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      sym_body_keyword,
      sym_bundle_keyword,
  [1160] = 4,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_promise_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1174] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(232), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1183] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
    ACTIONS(223), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1192] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1203] = 3,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1214] = 3,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(80), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1225] = 3,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_body_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1236] = 3,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(80), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1247] = 3,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_bundle_body,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1258] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1269] = 3,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(77), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1280] = 3,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1291] = 2,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1299] = 2,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1307] = 2,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1315] = 2,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1323] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1331] = 2,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1339] = 2,
    ACTIONS(261), 1,
      anon_sym_EQ_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1347] = 2,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1355] = 2,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1363] = 2,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1371] = 2,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1379] = 2,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1387] = 2,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1395] = 2,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
  [1403] = 2,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_macro,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 244,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 282,
  [SMALL_STATE(15)] = 303,
  [SMALL_STATE(16)] = 322,
  [SMALL_STATE(17)] = 341,
  [SMALL_STATE(18)] = 362,
  [SMALL_STATE(19)] = 377,
  [SMALL_STATE(20)] = 398,
  [SMALL_STATE(21)] = 417,
  [SMALL_STATE(22)] = 440,
  [SMALL_STATE(23)] = 459,
  [SMALL_STATE(24)] = 471,
  [SMALL_STATE(25)] = 483,
  [SMALL_STATE(26)] = 495,
  [SMALL_STATE(27)] = 515,
  [SMALL_STATE(28)] = 533,
  [SMALL_STATE(29)] = 551,
  [SMALL_STATE(30)] = 563,
  [SMALL_STATE(31)] = 581,
  [SMALL_STATE(32)] = 593,
  [SMALL_STATE(33)] = 606,
  [SMALL_STATE(34)] = 621,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 664,
  [SMALL_STATE(38)] = 679,
  [SMALL_STATE(39)] = 694,
  [SMALL_STATE(40)] = 709,
  [SMALL_STATE(41)] = 724,
  [SMALL_STATE(42)] = 739,
  [SMALL_STATE(43)] = 756,
  [SMALL_STATE(44)] = 773,
  [SMALL_STATE(45)] = 786,
  [SMALL_STATE(46)] = 799,
  [SMALL_STATE(47)] = 812,
  [SMALL_STATE(48)] = 825,
  [SMALL_STATE(49)] = 840,
  [SMALL_STATE(50)] = 853,
  [SMALL_STATE(51)] = 866,
  [SMALL_STATE(52)] = 880,
  [SMALL_STATE(53)] = 894,
  [SMALL_STATE(54)] = 904,
  [SMALL_STATE(55)] = 918,
  [SMALL_STATE(56)] = 932,
  [SMALL_STATE(57)] = 946,
  [SMALL_STATE(58)] = 960,
  [SMALL_STATE(59)] = 974,
  [SMALL_STATE(60)] = 984,
  [SMALL_STATE(61)] = 998,
  [SMALL_STATE(62)] = 1012,
  [SMALL_STATE(63)] = 1022,
  [SMALL_STATE(64)] = 1032,
  [SMALL_STATE(65)] = 1042,
  [SMALL_STATE(66)] = 1056,
  [SMALL_STATE(67)] = 1066,
  [SMALL_STATE(68)] = 1078,
  [SMALL_STATE(69)] = 1092,
  [SMALL_STATE(70)] = 1102,
  [SMALL_STATE(71)] = 1116,
  [SMALL_STATE(72)] = 1126,
  [SMALL_STATE(73)] = 1136,
  [SMALL_STATE(74)] = 1150,
  [SMALL_STATE(75)] = 1160,
  [SMALL_STATE(76)] = 1174,
  [SMALL_STATE(77)] = 1183,
  [SMALL_STATE(78)] = 1192,
  [SMALL_STATE(79)] = 1203,
  [SMALL_STATE(80)] = 1214,
  [SMALL_STATE(81)] = 1225,
  [SMALL_STATE(82)] = 1236,
  [SMALL_STATE(83)] = 1247,
  [SMALL_STATE(84)] = 1258,
  [SMALL_STATE(85)] = 1269,
  [SMALL_STATE(86)] = 1280,
  [SMALL_STATE(87)] = 1291,
  [SMALL_STATE(88)] = 1299,
  [SMALL_STATE(89)] = 1307,
  [SMALL_STATE(90)] = 1315,
  [SMALL_STATE(91)] = 1323,
  [SMALL_STATE(92)] = 1331,
  [SMALL_STATE(93)] = 1339,
  [SMALL_STATE(94)] = 1347,
  [SMALL_STATE(95)] = 1355,
  [SMALL_STATE(96)] = 1363,
  [SMALL_STATE(97)] = 1371,
  [SMALL_STATE(98)] = 1379,
  [SMALL_STATE(99)] = 1387,
  [SMALL_STATE(100)] = 1395,
  [SMALL_STATE(101)] = 1403,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_list, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_list, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat1, 2), SHIFT_REPEAT(21),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_body_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_body_repeat1, 2), SHIFT_REPEAT(93),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_body_attributes, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_value, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_body_attributes, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_guarded_promises, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_guarded_promises, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, .production_id = 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_section, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bundle_section, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_section_repeat2, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_section_repeat2, 2), SHIFT_REPEAT(22),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_list, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 4, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 4, .production_id = 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_body_repeat2, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_body_repeat2, 2), SHIFT_REPEAT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_list_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_list_repeat1, 2), SHIFT_REPEAT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 6),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 5, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 5, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 7, .production_id = 6),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 7, .production_id = 6),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 2, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 2, .production_id = 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_body_repeat1, 2), SHIFT_REPEAT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 6, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 6, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promise, 3, .production_id = 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promise, 3, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_body, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_block, 4, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 4, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_body, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_attribute, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_attribute, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_block, 5, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_body, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle_body, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_promise_repeat1, 2), SHIFT_REPEAT(85),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_block, 5, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(95),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
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

TS_PUBLIC const TSLanguage *tree_sitter_cfengine() {
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
