/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "micko.y"

  #include <string.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include "defs.h"
  #include "symtab.h"
  #include "codegen.h"

  int yyparse(void);
  int yylex(void);
  int yyerror(char *s);
  void warning(char *s);

  extern int yylineno;
  int out_lin = 0;
  char char_buffer[CHAR_BUFFER_LENGTH];
  int error_count = 0;
  int warning_count = 0;
  int var_num = 0;
  int arr_num = 0;
  int fun_idx = -1;
  int fcall_idx = -1;
  int lab_num = -1;
  int loop_num = -1;
  int array_first_elem = -1;
  int array_elem_num = -1;
  int iterator = 0;
  FILE *output;

#line 101 "micko.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "micko.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__TYPE = 3,                      /* _TYPE  */
  YYSYMBOL__IF = 4,                        /* _IF  */
  YYSYMBOL__ELSE = 5,                      /* _ELSE  */
  YYSYMBOL__FOR = 6,                       /* _FOR  */
  YYSYMBOL__INC = 7,                       /* _INC  */
  YYSYMBOL__RETURN = 8,                    /* _RETURN  */
  YYSYMBOL__ID = 9,                        /* _ID  */
  YYSYMBOL__INT_NUMBER = 10,               /* _INT_NUMBER  */
  YYSYMBOL__UINT_NUMBER = 11,              /* _UINT_NUMBER  */
  YYSYMBOL__LPAREN = 12,                   /* _LPAREN  */
  YYSYMBOL__RPAREN = 13,                   /* _RPAREN  */
  YYSYMBOL__LBRACKET = 14,                 /* _LBRACKET  */
  YYSYMBOL__RBRACKET = 15,                 /* _RBRACKET  */
  YYSYMBOL__ASSIGN = 16,                   /* _ASSIGN  */
  YYSYMBOL__SEMICOLON = 17,                /* _SEMICOLON  */
  YYSYMBOL__AROP = 18,                     /* _AROP  */
  YYSYMBOL__RELOP = 19,                    /* _RELOP  */
  YYSYMBOL_ONLY_IF = 20,                   /* ONLY_IF  */
  YYSYMBOL__LSB = 21,                      /* _LSB  */
  YYSYMBOL__RSB = 22,                      /* _RSB  */
  YYSYMBOL__COMMA = 23,                    /* _COMMA  */
  YYSYMBOL__AMPERSAND = 24,                /* _AMPERSAND  */
  YYSYMBOL__ASTERISK = 25,                 /* _ASTERISK  */
  YYSYMBOL_YYACCEPT = 26,                  /* $accept  */
  YYSYMBOL_program = 27,                   /* program  */
  YYSYMBOL_function_list = 28,             /* function_list  */
  YYSYMBOL_function = 29,                  /* function  */
  YYSYMBOL_30_1 = 30,                      /* $@1  */
  YYSYMBOL_parameter = 31,                 /* parameter  */
  YYSYMBOL_body = 32,                      /* body  */
  YYSYMBOL_33_2 = 33,                      /* $@2  */
  YYSYMBOL_variable_list = 34,             /* variable_list  */
  YYSYMBOL_variable = 35,                  /* variable  */
  YYSYMBOL_36_3 = 36,                      /* $@3  */
  YYSYMBOL_literal_list = 37,              /* literal_list  */
  YYSYMBOL_statement_list = 38,            /* statement_list  */
  YYSYMBOL_statement = 39,                 /* statement  */
  YYSYMBOL_for_statement = 40,             /* for_statement  */
  YYSYMBOL_41_4 = 41,                      /* @4  */
  YYSYMBOL_42_5 = 42,                      /* $@5  */
  YYSYMBOL_43_6 = 43,                      /* $@6  */
  YYSYMBOL_compound_statement = 44,        /* compound_statement  */
  YYSYMBOL_assignment_statement = 45,      /* assignment_statement  */
  YYSYMBOL_num_exp = 46,                   /* num_exp  */
  YYSYMBOL_exp = 47,                       /* exp  */
  YYSYMBOL_literal = 48,                   /* literal  */
  YYSYMBOL_function_call = 49,             /* function_call  */
  YYSYMBOL_50_7 = 50,                      /* $@7  */
  YYSYMBOL_argument = 51,                  /* argument  */
  YYSYMBOL_if_statement = 52,              /* if_statement  */
  YYSYMBOL_if_part = 53,                   /* if_part  */
  YYSYMBOL_54_8 = 54,                      /* @8  */
  YYSYMBOL_55_9 = 55,                      /* $@9  */
  YYSYMBOL_rel_exp = 56,                   /* rel_exp  */
  YYSYMBOL_return_statement = 57           /* return_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   96

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  26
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    69,    69,    77,    78,    83,    82,   108,   110,   120,
     119,   129,   130,   134,   142,   162,   161,   190,   197,   211,
     212,   216,   217,   218,   219,   220,   225,   231,   242,   224,
     276,   280,   294,   317,   319,   341,   343,   353,   372,   389,
     406,   412,   417,   420,   426,   425,   445,   447,   459,   462,
     468,   473,   467,   486,   496
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_TYPE", "_IF",
  "_ELSE", "_FOR", "_INC", "_RETURN", "_ID", "_INT_NUMBER", "_UINT_NUMBER",
  "_LPAREN", "_RPAREN", "_LBRACKET", "_RBRACKET", "_ASSIGN", "_SEMICOLON",
  "_AROP", "_RELOP", "ONLY_IF", "_LSB", "_RSB", "_COMMA", "_AMPERSAND",
  "_ASTERISK", "$accept", "program", "function_list", "function", "$@1",
  "parameter", "body", "$@2", "variable_list", "variable", "$@3",
  "literal_list", "statement_list", "statement", "for_statement", "@4",
  "$@5", "$@6", "compound_statement", "assignment_statement", "num_exp",
  "exp", "literal", "function_call", "$@7", "argument", "if_statement",
  "if_part", "@8", "$@9", "rel_exp", "return_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-45)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      22,    20,    34,    22,   -53,   -53,   -53,   -53,    30,    45,
      47,    52,   -53,    44,   -53,   -53,    63,    -1,   -53,   -53,
      51,    41,    18,   -53,   -53,   -53,    48,    57,   -53,    -6,
      19,   -53,   -53,   -53,   -53,   -53,   -53,   -53,    66,   -53,
      64,   -53,    60,     9,    -6,    65,    67,    -4,   -53,   -53,
     -53,    -6,    41,    35,     3,    29,    -6,    68,    41,    69,
      -3,   -53,   -53,   -53,    -6,    37,    53,   -53,   -53,    70,
     -53,    42,   -53,    62,    58,    -6,   -53,   -53,   -53,    71,
     -53,    -6,    72,    41,   -53,    73,    75,    -6,    41,    73,
       3,   -53,   -53,    46,    13,   -53,   -53,    76,   -53,    77,
      41,    -6,   -53,   -53,   -53,    78,    74,    79,    83,     3,
     -53
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     5,     1,     4,     0,     7,
       0,     0,     8,     0,    11,     6,     9,     0,    19,    12,
       0,     0,     0,    13,    42,    43,     0,     0,    26,     0,
       0,    19,    10,    20,    25,    21,    22,    23,    48,    24,
       0,    50,     0,    36,     0,     0,     0,     0,    33,    35,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,    54,     0,     0,     0,    30,    49,     0,
      14,     0,    51,     0,     0,    46,    41,    34,    31,     0,
      15,     0,     0,     0,    37,    47,     0,     0,     0,    53,
       0,    27,    45,     0,     0,    17,    52,     0,    32,     0,
       0,     0,    16,    18,    28,     0,     0,     0,     0,     0,
      29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,    86,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,    59,   -52,   -53,   -53,   -53,   -53,   -53,   -53,
     -28,    28,   -21,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -19,   -53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     8,    11,    15,    18,    16,    19,
      88,    94,    22,    33,    34,    42,    97,   105,    35,    36,
      71,    48,    49,    50,    59,    86,    37,    38,    56,    82,
      72,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      26,    47,    68,    43,    24,    25,    44,    27,    20,    28,
      76,    29,    30,    63,    64,    64,    60,    31,    45,    46,
      21,   -44,    27,    65,    28,     1,    29,    30,    99,     5,
      58,    66,    31,    32,     6,    51,   100,    74,    96,    27,
      52,    28,     9,    29,    30,    69,    70,    85,    10,    31,
      67,    24,    25,    89,    78,    64,    12,   110,    14,    93,
      64,    81,    91,    98,    64,    13,    17,    95,    23,    41,
      40,    54,    57,    55,    61,    79,    62,    73,    83,   103,
      84,    75,   104,   107,    80,    90,   108,    87,    92,     7,
      53,    64,    77,   101,   102,   106,   109
};

static const yytype_int8 yycheck[] =
{
      21,    29,    54,     9,    10,    11,    12,     4,     9,     6,
      13,     8,     9,    17,    18,    18,    44,    14,    24,    25,
      21,    12,     4,    51,     6,     3,     8,     9,    15,     9,
      21,    52,    14,    15,     0,    16,    23,    58,    90,     4,
      21,     6,    12,     8,     9,    16,    17,    75,     3,    14,
      15,    10,    11,    81,    17,    18,     9,   109,    14,    87,
      18,    19,    83,    17,    18,    13,     3,    88,    17,    12,
      22,     5,    12,     9,     9,    22,     9,     9,    16,   100,
      22,    12,   101,     9,    14,    13,     7,    16,    13,     3,
      31,    18,    64,    17,    17,    17,    13
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    27,    28,    29,     9,     0,    29,    30,    12,
       3,    31,     9,    13,    14,    32,    34,     3,    33,    35,
       9,    21,    38,    17,    10,    11,    48,     4,     6,     8,
       9,    14,    15,    39,    40,    44,    45,    52,    53,    57,
      22,    12,    41,     9,    12,    24,    25,    46,    47,    48,
      49,    16,    21,    38,     5,     9,    54,    12,    21,    50,
      46,     9,     9,    17,    18,    46,    48,    15,    39,    16,
      17,    46,    56,     9,    48,    12,    13,    47,    17,    22,
      14,    19,    55,    16,    22,    46,    51,    16,    36,    46,
      13,    48,    13,    46,    37,    48,    39,    42,    17,    15,
      23,    17,    17,    48,    56,    43,    17,     9,     7,    13,
      39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    26,    27,    28,    28,    30,    29,    31,    31,    33,
      32,    34,    34,    35,    35,    36,    35,    37,    37,    38,
      38,    39,    39,    39,    39,    39,    41,    42,    43,    40,
      44,    45,    45,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    48,    48,    50,    49,    51,    51,    52,    52,
      54,    55,    53,    56,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     0,     7,     0,     2,     0,
       5,     0,     2,     3,     6,     0,    11,     1,     3,     0,
       2,     1,     1,     1,     1,     1,     0,     0,     0,    15,
       3,     4,     7,     1,     3,     1,     1,     4,     2,     2,
       1,     3,     1,     1,     0,     5,     0,     1,     1,     3,
       0,     0,     7,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: function_list  */
#line 70 "micko.y"
      {  
        if(lookup_symbol("main", FUN) == NO_INDEX)
          err("undefined reference to 'main'");
      }
#line 1217 "micko.tab.c"
    break;

  case 5: /* $@1: %empty  */
#line 83 "micko.y"
      {
        fun_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fun_idx == NO_INDEX)
          fun_idx = insert_symbol((yyvsp[0].s), FUN, (yyvsp[-1].i), NO_ATR, NO_ATR);
        else 
          err("redefinition of function '%s'", (yyvsp[0].s));

        code("\n%s:", (yyvsp[0].s));
        code("\n\t\tPUSH\t%%14");
        code("\n\t\tMOV \t%%15,%%14");
      }
#line 1233 "micko.tab.c"
    break;

  case 6: /* function: _TYPE _ID $@1 _LPAREN parameter _RPAREN body  */
#line 95 "micko.y"
      {
        clear_symbols(fun_idx + 1);
        var_num = 0;
        
        code("\n@%s_exit:", (yyvsp[-5].s));
        code("\n\t\tMOV \t%%14,%%15");
        code("\n\t\tPOP \t%%14");
        code("\n\t\tRET");
      }
#line 1247 "micko.tab.c"
    break;

  case 7: /* parameter: %empty  */
#line 108 "micko.y"
      { set_atr1(fun_idx, 0); }
#line 1253 "micko.tab.c"
    break;

  case 8: /* parameter: _TYPE _ID  */
#line 111 "micko.y"
      {
        insert_symbol((yyvsp[0].s), PAR, (yyvsp[-1].i), 1, NO_ATR);
        set_atr1(fun_idx, 1);
        set_atr2(fun_idx, (yyvsp[-1].i));
      }
#line 1263 "micko.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 120 "micko.y"
      {
        if(var_num)
          code("\n\t\tSUBS\t%%15,$%d,%%15", 4*(var_num+arr_num));
        code("\n@%s_body:", get_name(fun_idx));
      }
#line 1273 "micko.tab.c"
    break;

  case 13: /* variable: _TYPE _ID _SEMICOLON  */
#line 135 "micko.y"
      {
        if(lookup_symbol((yyvsp[-1].s), VAR|PAR) == NO_INDEX)
           insert_symbol((yyvsp[-1].s), VAR, (yyvsp[-2].i), ++var_num, 0);
        else 
           err("redefinition of '%s'", (yyvsp[-1].s));
      }
#line 1284 "micko.tab.c"
    break;

  case 14: /* variable: _TYPE _LSB literal _RSB _ID _SEMICOLON  */
#line 143 "micko.y"
      {
        if(get_type((yyvsp[-3].i)) == UINT)
          err("invalid index value");
      	int idx;
        if(lookup_symbol((yyvsp[-1].s), VAR|PAR|ARRAY) == NO_INDEX)
           idx = insert_symbol((yyvsp[-1].s), ARRAY, (yyvsp[-5].i), ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", (yyvsp[-1].s));
        
        int max = atoi(get_name((yyvsp[-3].i)));
        if(max < 1) 
           err("index out of bounds");
        arr_num += max;
        for (int i = 0; i < max; i++) {
        	insert_symbol(strdup((yyvsp[-1].s)), ARRAY, (yyvsp[-5].i), idx, i);
        }
      }
#line 1306 "micko.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 162 "micko.y"
                {
        if(get_type((yyvsp[-4].i)) == UINT)
          err("invalid index value");
      	int idx;
        if(lookup_symbol((yyvsp[-2].s), VAR|PAR|ARRAY) == NO_INDEX)
           idx = insert_symbol((yyvsp[-2].s), ARRAY, (yyvsp[-6].i), ++var_num, NO_ATR);
        else 
           err("redefinition of '%s'", (yyvsp[-2].s));
        
        int max = atoi(get_name((yyvsp[-4].i)));
        if(max < 1) 
           err("index out of bounds");
        arr_num += max;
        array_first_elem = idx + 1;
        array_elem_num = max;
        for (int i = 0; i < max; i++) {
        	insert_symbol(strdup((yyvsp[-2].s)), ARRAY, (yyvsp[-6].i), idx, i);
        }
        iterator = 0;
  		}
#line 1331 "micko.tab.c"
    break;

  case 16: /* variable: _TYPE _LSB literal _RSB _ID _ASSIGN _LBRACKET $@3 literal_list _RBRACKET _SEMICOLON  */
#line 183 "micko.y"
                        {
		 		if (iterator < array_elem_num)
           err("too few elements");
		 	}
#line 1340 "micko.tab.c"
    break;

  case 17: /* literal_list: literal  */
#line 191 "micko.y"
                        {
        if (get_type((yyvsp[0].i)) != get_type(array_first_elem + iterator))
		      err("incompatible types");
		    gen_mov((yyvsp[0].i), array_first_elem);
        iterator++;
			}
#line 1351 "micko.tab.c"
    break;

  case 18: /* literal_list: literal_list _COMMA literal  */
#line 198 "micko.y"
                        {
				if (iterator >= array_elem_num)
           err("too many elements");
        else {
        	if (get_type((yyvsp[0].i)) != get_type(array_first_elem + iterator))
           	err("incompatible types");
        	gen_mov((yyvsp[0].i), array_first_elem + iterator);
        } 
        iterator++;
			}
#line 1366 "micko.tab.c"
    break;

  case 26: /* @4: %empty  */
#line 225 "micko.y"
                        {
				loop_num++;
				(yyval.i) = loop_num;
			}
#line 1375 "micko.tab.c"
    break;

  case 27: /* $@5: %empty  */
#line 231 "micko.y"
                        {
				int idx = lookup_symbol((yyvsp[-2].s), VAR|PAR);
        if(idx == NO_INDEX)
          err("'%s' undeclared", (yyvsp[-2].s));
          
				gen_mov((yyvsp[0].i),idx);
				
        code("\n@for_cmp_%d:", (yyvsp[-4].i));
			}
#line 1389 "micko.tab.c"
    break;

  case 28: /* $@6: %empty  */
#line 242 "micko.y"
                        {
				code("\n\t\t%s\t@for_end_%d", opp_jumps[(yyvsp[0].i)], (yyvsp[-7].i));
			}
#line 1397 "micko.tab.c"
    break;

  case 29: /* for_statement: _FOR @4 _LPAREN _ID _ASSIGN literal $@5 _SEMICOLON rel_exp $@6 _SEMICOLON _ID _INC _RPAREN statement  */
#line 247 "micko.y"
                        {
				int idx = lookup_symbol((yyvsp[-3].s), VAR|PAR);
        if(idx == NO_INDEX)
          err("'%s' undeclared", (yyvsp[-3].s));
        if(idx != lookup_symbol((yyvsp[-11].s), VAR|PAR))
          err("Iterators don't match");
        
        if ((yyvsp[-2].i) == INC) {
        	if(get_type(idx) == INT)
						code("\n\t\tADDS\t");
					else
						code("\n\t\tADDU\t");
        }
        else {
        	if(get_type(idx) == INT)
						code("\n\t\tSUBS\t");
					else
						code("\n\t\tSUBU\t");
        }
        
        gen_sym_name(idx);
				code(",$1,");
				gen_sym_name(idx);
        code("\n\t\tJMP \t@for_cmp_%d", (yyvsp[-13].i));
        
        code("\n@for_end_%d:", (yyvsp[-13].i));
			}
#line 1429 "micko.tab.c"
    break;

  case 31: /* assignment_statement: _ID _ASSIGN num_exp _SEMICOLON  */
#line 281 "micko.y"
      {
        int idx = lookup_symbol((yyvsp[-3].s), VAR|PAR|ARRAY);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-3].s));
          
        else {
          if(get_type(idx) != get_type((yyvsp[-1].i))) 
          	err("incompatible types in assignment");
          else 
          	gen_mov((yyvsp[-1].i), idx);
        }
      }
#line 1446 "micko.tab.c"
    break;

  case 32: /* assignment_statement: _ID _LSB literal _RSB _ASSIGN num_exp _SEMICOLON  */
#line 295 "micko.y"
      {
        if(get_type((yyvsp[-4].i)) == UINT)
          err("invalid index value");
        int idx = lookup_symbol((yyvsp[-6].s), ARRAY);
        if(idx == NO_INDEX)
          err("invalid lvalue '%s' in assignment", (yyvsp[-6].s));
        if(get_type(idx) != get_type((yyvsp[-1].i))) 
          err("incompatible types in assignment");
          
        else {
        	int offset = atoi(get_name((yyvsp[-4].i)));
        	int elem_index = idx - get_atr2(idx) + offset;
        	
          if(offset < 0 || offset > get_atr2(idx)) 
          	err("index out of range");
          else 
          	gen_mov((yyvsp[-1].i), elem_index);
        }
      }
#line 1470 "micko.tab.c"
    break;

  case 34: /* num_exp: num_exp _AROP exp  */
#line 320 "micko.y"
      {
		    if (get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i))) {
		      err("invalid operands: arithmetic operation");
        }
        else {
		      int t1 = get_type((yyvsp[-2].i));    
		      code("\n\t\t%s\t", ar_instructions[(yyvsp[-1].i) + (t1 - 1) * AROP_NUMBER]);
		      gen_sym_name((yyvsp[-2].i));
		      code(",");
		      gen_sym_name((yyvsp[0].i));
		      code(",");
		      free_if_reg((yyvsp[0].i));
		      free_if_reg((yyvsp[-2].i));
		      (yyval.i) = take_reg();
		      gen_sym_name((yyval.i));
		      set_type((yyval.i), t1);
        }
      }
#line 1493 "micko.tab.c"
    break;

  case 36: /* exp: _ID  */
#line 344 "micko.y"
      {
        (yyval.i) = lookup_symbol((yyvsp[0].s), VAR|PAR|ARRAY);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
        if(get_kind((yyval.i)) == ARRAY) {
		      err("invalid operand %s", get_name((yyval.i)));
        }
      }
#line 1506 "micko.tab.c"
    break;

  case 37: /* exp: _ID _LSB literal _RSB  */
#line 354 "micko.y"
      {
        if(get_type((yyvsp[-1].i)) == UINT)
          err("invalid index value");
        int idx = lookup_symbol((yyvsp[-3].s), ARRAY);
        if(idx == NO_INDEX)
          err("'%s' undeclared", (yyvsp[-3].s));
         
        int offset = atoi(get_name((yyvsp[-1].i)));
        if(offset < 0 || offset > get_atr2(idx)) {
          err("index out of range");
        }
        
		    (yyval.i) = take_reg();
        int elem_index = idx - get_atr2(idx) + offset;
        gen_mov(elem_index, (yyval.i));
      }
#line 1527 "micko.tab.c"
    break;

  case 38: /* exp: _AMPERSAND _ID  */
#line 373 "micko.y"
      {
        int idx = lookup_symbol((yyvsp[0].s), VAR|PAR|ARRAY);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
          
		    (yyval.i) = take_reg();
      	code("\n\t\tLOAD\t");
				gen_sym_name(idx);
				code(",");
				gen_sym_name((yyval.i));
		    set_atr2((yyval.i), idx);
		    set_type((yyval.i), get_type(idx)+2);
      }
#line 1545 "micko.tab.c"
    break;

  case 39: /* exp: _ASTERISK _ID  */
#line 390 "micko.y"
      {
        int idx = lookup_symbol((yyvsp[0].s), VAR|PAR|ARRAY);
        if((yyval.i) == NO_INDEX)
          err("'%s' undeclared", (yyvsp[0].s));
          
        if(get_type(idx) != PINT && get_type(idx) != PUINT)
          err("operator can't be dereferenced");
          
		    (yyval.i) = take_reg();
      	code("\n\t\tUNLOAD\t");
				gen_sym_name(idx);
				code(",");
				gen_sym_name((yyval.i));
		    set_type((yyval.i), get_type(idx)-2);
      }
#line 1565 "micko.tab.c"
    break;

  case 40: /* exp: function_call  */
#line 407 "micko.y"
      {
        (yyval.i) = take_reg();
        gen_mov(FUN_REG, (yyval.i));
      }
#line 1574 "micko.tab.c"
    break;

  case 41: /* exp: _LPAREN num_exp _RPAREN  */
#line 413 "micko.y"
      { (yyval.i) = (yyvsp[-1].i); }
#line 1580 "micko.tab.c"
    break;

  case 42: /* literal: _INT_NUMBER  */
#line 418 "micko.y"
      { (yyval.i) = insert_literal((yyvsp[0].s), INT); }
#line 1586 "micko.tab.c"
    break;

  case 43: /* literal: _UINT_NUMBER  */
#line 421 "micko.y"
      { (yyval.i) = insert_literal((yyvsp[0].s), UINT); }
#line 1592 "micko.tab.c"
    break;

  case 44: /* $@7: %empty  */
#line 426 "micko.y"
      {
        fcall_idx = lookup_symbol((yyvsp[0].s), FUN);
        if(fcall_idx == NO_INDEX)
          err("'%s' is not a function", (yyvsp[0].s));
      }
#line 1602 "micko.tab.c"
    break;

  case 45: /* function_call: _ID $@7 _LPAREN argument _RPAREN  */
#line 432 "micko.y"
      {
        if(get_atr1(fcall_idx) != (yyvsp[-1].i))
          err("wrong number of arguments");
        code("\n\t\t\tCALL\t%s", get_name(fcall_idx));
        if((yyvsp[-1].i) > 0)
          code("\n\t\t\tADDS\t%%15,$%d,%%15", (yyvsp[-1].i) * 4);
        set_type(FUN_REG, get_type(fcall_idx));
        (yyval.i) = FUN_REG;
      }
#line 1616 "micko.tab.c"
    break;

  case 46: /* argument: %empty  */
#line 445 "micko.y"
    { (yyval.i) = 0; }
#line 1622 "micko.tab.c"
    break;

  case 47: /* argument: num_exp  */
#line 448 "micko.y"
    { 
      if(get_atr2(fcall_idx) != get_type((yyvsp[0].i)))
        err("incompatible type for argument");
      free_if_reg((yyvsp[0].i));
      code("\n\t\t\tPUSH\t");
      gen_sym_name((yyvsp[0].i));
      (yyval.i) = 1;
    }
#line 1635 "micko.tab.c"
    break;

  case 48: /* if_statement: if_part  */
#line 460 "micko.y"
      { code("\n@exit%d:", (yyvsp[0].i)); }
#line 1641 "micko.tab.c"
    break;

  case 49: /* if_statement: if_part _ELSE statement  */
#line 463 "micko.y"
      { code("\n@exit%d:", (yyvsp[-2].i)); }
#line 1647 "micko.tab.c"
    break;

  case 50: /* @8: %empty  */
#line 468 "micko.y"
      {
        (yyval.i) = ++lab_num;
        code("\n@if%d:", lab_num);
      }
#line 1656 "micko.tab.c"
    break;

  case 51: /* $@9: %empty  */
#line 473 "micko.y"
      {
        code("\n\t\t%s\t@false%d", opp_jumps[(yyvsp[0].i)], (yyvsp[-1].i));
        code("\n@true%d:", (yyvsp[-1].i));
      }
#line 1665 "micko.tab.c"
    break;

  case 52: /* if_part: _IF _LPAREN @8 rel_exp $@9 _RPAREN statement  */
#line 478 "micko.y"
      {
        code("\n\t\tJMP \t@exit%d", (yyvsp[-4].i));
        code("\n@false%d:", (yyvsp[-4].i));
        (yyval.i) = (yyvsp[-4].i);
      }
#line 1675 "micko.tab.c"
    break;

  case 53: /* rel_exp: num_exp _RELOP num_exp  */
#line 487 "micko.y"
      {
        if(get_type((yyvsp[-2].i)) != get_type((yyvsp[0].i)))
          err("invalid operands: relational operator");
        (yyval.i) = (yyvsp[-1].i) + ((get_type((yyvsp[-2].i)) - 1) * RELOP_NUMBER);
        gen_cmp((yyvsp[-2].i), (yyvsp[0].i));
      }
#line 1686 "micko.tab.c"
    break;

  case 54: /* return_statement: _RETURN num_exp _SEMICOLON  */
#line 497 "micko.y"
      {
        if(get_type(fun_idx) != get_type((yyvsp[-1].i)))
          err("incompatible types in return");
        gen_mov((yyvsp[-1].i), FUN_REG);
        code("\n\t\tJMP \t@%s_exit", get_name(fun_idx));        
      }
#line 1697 "micko.tab.c"
    break;


#line 1701 "micko.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 505 "micko.y"


int yyerror(char *s) {
  fprintf(stderr, "\nline %d: ERROR: %s", yylineno, s);
  error_count++;
  return 0;
}

void warning(char *s) {
  fprintf(stderr, "\nline %d: WARNING: %s", yylineno, s);
  warning_count++;
}

int main() {
  int synerr;
  init_symtab();
  output = fopen("output.asm", "w+");

  synerr = yyparse();

  clear_symtab();
  fclose(output);
  
  if(warning_count)
    printf("\n%d warning(s).\n", warning_count);

  if(error_count) {
    remove("output.asm");
    printf("\n%d error(s).\n", error_count);
  }

  if(synerr)
    return -1;  //syntax error
  else if(error_count)
    return error_count & 127; //semantic errors
  else if(warning_count)
    return (warning_count & 127) + 127; //warnings
  else
    return 0; //OK
}

