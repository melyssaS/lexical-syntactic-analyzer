/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "LAB02_Ariza_Camero_Zambrano.y" /* yacc.c:339  */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern FILE * yyin;
extern FILE * yyout;
extern char *yytext;
int errores = 0;
void yyerror(const char *s);
int yylex();
void disp();
void add(int dato, int pos);

int error_pos[100];
int indice = 0;


#line 85 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STATIC = 258,
    PUBLIC = 259,
    CLASS = 260,
    VOID = 261,
    NEW = 262,
    VBLE = 263,
    PARANTA = 264,
    PARANTC = 265,
    CORCHETEA = 266,
    CORCHETEC = 267,
    LLAVEA = 268,
    LLAVEC = 269,
    OPASIGN = 270,
    STRING = 271,
    INT = 272,
    FLOAT = 273,
    DOUBLE = 274,
    BOOLEAN = 275,
    CHAR = 276,
    PCOMA = 277,
    DOSPUNTOS = 278,
    COMA = 279,
    NUMENTERO = 280,
    NUMREAL = 281,
    VBLECHAR = 282,
    VBLECADENA = 283,
    VBLEBOOL = 284,
    COMMENT = 285,
    OPSUM = 286,
    OPRES = 287,
    OPMUL = 288,
    OPDIV = 289,
    OPMOD = 290,
    MASMAS = 291,
    SUSTSUST = 292,
    MASASIG = 293,
    SUSTASIG = 294,
    PORASIG = 295,
    DIVASIG = 296,
    IGUALIGUAL = 297,
    MENIGUAL = 298,
    MAYIGUAL = 299,
    DIFERENTE = 300,
    MAYOR = 301,
    MENOR = 302,
    OPERY = 303,
    OPERO = 304,
    OPERN = 305,
    IF = 306,
    ELSE = 307,
    IFELSE = 308,
    FOR = 309,
    WHILE = 310,
    DO = 311,
    NEWLINE = 312,
    ERRORLEX = 313
  };
#endif
/* Tokens.  */
#define STATIC 258
#define PUBLIC 259
#define CLASS 260
#define VOID 261
#define NEW 262
#define VBLE 263
#define PARANTA 264
#define PARANTC 265
#define CORCHETEA 266
#define CORCHETEC 267
#define LLAVEA 268
#define LLAVEC 269
#define OPASIGN 270
#define STRING 271
#define INT 272
#define FLOAT 273
#define DOUBLE 274
#define BOOLEAN 275
#define CHAR 276
#define PCOMA 277
#define DOSPUNTOS 278
#define COMA 279
#define NUMENTERO 280
#define NUMREAL 281
#define VBLECHAR 282
#define VBLECADENA 283
#define VBLEBOOL 284
#define COMMENT 285
#define OPSUM 286
#define OPRES 287
#define OPMUL 288
#define OPDIV 289
#define OPMOD 290
#define MASMAS 291
#define SUSTSUST 292
#define MASASIG 293
#define SUSTASIG 294
#define PORASIG 295
#define DIVASIG 296
#define IGUALIGUAL 297
#define MENIGUAL 298
#define MAYIGUAL 299
#define DIFERENTE 300
#define MAYOR 301
#define MENOR 302
#define OPERY 303
#define OPERO 304
#define OPERN 305
#define IF 306
#define ELSE 307
#define IFELSE 308
#define FOR 309
#define WHILE 310
#define DO 311
#define NEWLINE 312
#define ERRORLEX 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 266 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   577

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  325

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    50,    52,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    66,    67,    68,    69,    72,    73,    74,
      75,    78,    79,    80,    83,    84,    85,    86,    89,    90,
      91,    94,    95,    96,    97,    98,    99,   100,   103,   104,
     105,   108,   109,   110,   111,   114,   115,   116,   117,   118,
     121,   122,   125,   126,   127,   128,   130,   131,   132,   134,
     135,   136,   137,   139,   140,   141,   142,   143,   146,   147,
     148,   149,   150,   151,   152,   154,   155,   156,   158,   159,
     160,   163,   164,   167,   168,   169,   170,   171,   172,   174,
     175,   178,   179,   182,   183,   184,   185,   188,   189,   190,
     192,   193,   195,   196,   197,   200,   203,   205,   206,   207,
     208,   209,   210,   213,   214,   216,   217,   218,   222,   223,
     226,   226,   226,   226,   226,   226,   227,   231,   232,   233,
     236,   237,   240,   241,   242,   245,   245,   247,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STATIC", "PUBLIC", "CLASS", "VOID",
  "NEW", "VBLE", "PARANTA", "PARANTC", "CORCHETEA", "CORCHETEC", "LLAVEA",
  "LLAVEC", "OPASIGN", "STRING", "INT", "FLOAT", "DOUBLE", "BOOLEAN",
  "CHAR", "PCOMA", "DOSPUNTOS", "COMA", "NUMENTERO", "NUMREAL", "VBLECHAR",
  "VBLECADENA", "VBLEBOOL", "COMMENT", "OPSUM", "OPRES", "OPMUL", "OPDIV",
  "OPMOD", "MASMAS", "SUSTSUST", "MASASIG", "SUSTASIG", "PORASIG",
  "DIVASIG", "IGUALIGUAL", "MENIGUAL", "MAYIGUAL", "DIFERENTE", "MAYOR",
  "MENOR", "OPERY", "OPERO", "OPERN", "IF", "ELSE", "IFELSE", "FOR",
  "WHILE", "DO", "NEWLINE", "ERRORLEX", "$accept", "line", "begin",
  "secondline", "assignment", "intType", "floatType", "charType",
  "stringType", "boolType", "assi_sindatatype", "concate", "doubleType",
  "opAritmet", "opAritmetDobles", "opAritmetespecial", "exp", "op",
  "op_der", "opAll", "exp_com", "repet", "asig_compuesta",
  "op_condicion_simple", "op_condicion_compuesta", "condicion_simple",
  "con_compuesta", "if", "elseif", "bucles", "while", "dowhile",
  "dataType", "statement1", "statement3", "for", "vbleAll", "vector",
  "llaves", "matrix", "opvbleArray", "vbleArray", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -201

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-201)))

#define YYTABLE_NINF -87

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -201,    31,  -201,   -29,   182,   180,    30,    56,   102,   156,
     188,   196,  -201,   199,     1,   214,   242,    91,  -201,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
     194,   212,  -201,  -201,  -201,   223,  -201,   113,   115,  -201,
     270,   291,   172,  -201,  -201,  -201,  -201,  -201,  -201,   274,
     157,   148,   207,   213,   209,   225,   211,   233,   237,    69,
      69,   289,   347,    69,  -201,   298,   305,   312,    20,  -201,
     154,  -201,   293,   314,    86,   131,  -201,  -201,   307,   308,
     309,     3,   374,  -201,   322,  -201,   323,   315,    16,  -201,
     365,  -201,  -201,   328,   437,  -201,  -201,   181,  -201,    14,
    -201,    29,  -201,    69,   330,   458,  -201,    11,    19,  -201,
     331,  -201,  -201,  -201,  -201,  -201,  -201,   340,   339,    26,
      95,  -201,  -201,   183,   527,   266,   527,   349,   361,  -201,
      54,   288,  -201,  -201,  -201,  -201,    63,  -201,  -201,  -201,
    -201,  -201,  -201,   131,    54,  -201,   373,   377,    76,    78,
     131,   239,   359,  -201,  -201,  -201,   398,  -201,  -201,   144,
     356,   378,   109,   379,   243,   405,     8,   389,   446,   406,
     412,   413,   420,   458,    32,    69,  -201,  -201,  -201,  -201,
    -201,  -201,    97,   388,  -201,  -201,    69,   430,   158,   157,
     187,    69,   442,   363,   224,   252,  -201,   455,   460,  -201,
    -201,  -201,  -201,  -201,  -201,    59,   462,   266,   118,   459,
     296,  -201,  -201,   471,  -201,  -201,  -201,   443,   518,   478,
    -201,  -201,  -201,  -201,   325,  -201,  -201,   131,   509,  -201,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,    97,
    -201,    44,   323,  -201,  -201,  -201,  -201,   322,  -201,   241,
    -201,  -201,  -201,   157,   484,    -8,  -201,   502,  -201,  -201,
     504,    54,  -201,   266,    54,   179,  -201,   349,   503,  -201,
    -201,  -201,   491,   475,   149,   518,   517,  -201,   324,   368,
    -201,   529,   532,   396,    69,  -201,   542,   531,   544,  -201,
     533,   546,  -201,  -201,  -201,   528,   247,   549,  -201,    96,
    -201,   550,   552,  -201,   131,  -201,   157,   551,   540,    54,
     560,   440,   518,  -201,  -201,  -201,   559,   561,  -201,   468,
    -201,  -201,  -201,   512,  -201
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   121,   117,   119,   120,
     118,   122,     8,     0,     0,     0,     0,     0,     3,     4,
       5,     6,    14,    15,    16,    18,    17,    13,    19,    22,
       9,     0,    10,   112,   113,     0,   114,     0,     0,     7,
       0,     0,     0,    60,    61,    62,    63,    64,    65,     0,
       0,     0,    89,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,    20,
       0,    21,     0,     0,    71,     0,    69,    70,     0,    49,
       0,     0,     0,    68,    72,    46,    71,     0,     0,    34,
       0,    23,    91,     0,     0,    27,    92,     0,    51,     0,
      40,     0,    31,     0,     0,     0,   106,     0,     0,     2,
       0,   121,   117,   119,   120,   118,   122,     0,     0,     0,
       0,     2,     2,     0,     0,     0,     0,     0,     0,     2,
       0,     0,    42,    44,    43,    45,     0,    41,    55,    56,
      57,    58,    59,     0,     0,    47,    50,    49,     0,    71,
       0,    69,    70,    84,    83,    81,     0,    87,    88,    72,
      89,    90,    71,    69,    70,     0,    71,    70,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,     0,     0,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,   132,
     130,   131,   135,   134,   133,     0,     0,     0,     0,     0,
       0,   146,   145,     0,    67,    50,    49,    48,    66,     0,
      35,    36,    37,    24,     0,    25,    26,     0,     0,    28,
      29,    30,    52,    53,    54,    38,    39,    32,    33,     0,
     104,     0,    75,    73,    74,    76,   101,    77,     2,   103,
       2,   111,   124,     0,     0,     0,     2,     0,   108,   109,
       0,     0,   139,     0,     0,     0,   144,     0,     0,    11,
     147,   148,    67,    66,    71,     0,   101,   105,     0,     0,
     123,     0,     0,     0,     0,   142,     0,   136,     0,   140,
     141,     0,   102,   107,   110,     0,     0,     0,   115,     0,
     138,     0,     0,     2,     0,   125,     0,     0,     0,     0,
       0,     0,   127,   126,     2,   116,     0,     0,   129,     0,
     143,     2,   128,     0,    12
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,   -64,  -201,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,   -70,  -201,  -139,   276,   277,   -74,   -48,   336,  -201,
    -201,    -3,  -201,   403,  -201,  -201,   -57,  -201,  -201,  -201,
    -201,  -201,   -54,  -201,  -201,  -201,  -200,  -201,   310,  -201,
    -140,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    81,    28,   143,    49,    50,    82,    83,   246,   157,
     158,    53,    29,   182,   186,   106,   107,    30,    31,    32,
      33,    34,    35,   118,   297,    36,   205,    37,   208,    38,
     213,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,   131,    87,   108,   219,    55,   119,   265,   117,   159,
      60,   105,   105,   159,   282,   105,   156,   227,   148,   130,
     165,   183,   169,   168,   146,   135,   227,   124,    39,   187,
     232,     2,     3,   125,   136,     4,   192,   171,    51,     5,
     184,   185,   240,   170,   147,   188,   174,     6,     7,     8,
       9,    10,    11,    61,   277,   173,   172,   194,   195,   184,
     185,    12,   211,   287,    52,   210,   217,   184,   185,   218,
     198,   215,   206,   262,   184,   185,   224,    86,   103,   212,
     184,   185,    13,   263,    14,    15,    16,    17,    18,   130,
     161,   216,   184,   185,    76,    77,     3,   130,   222,     4,
     223,   247,   -80,     5,    64,   242,   308,   136,   -50,   193,
      54,     6,     7,     8,     9,    10,    11,   -50,   241,   104,
     130,   286,   243,   244,   288,    12,   245,   105,    68,   249,
      70,   229,   266,   -80,   255,    69,   227,    71,   105,    86,
      75,   252,   267,   105,   184,   185,    13,   159,    14,    15,
      16,    17,    18,   273,   275,   144,    76,    77,   247,     3,
     130,   126,     4,    88,    56,    86,     5,   127,   -82,   316,
      89,   -80,   251,   -80,     6,     7,     8,     9,    10,    11,
      74,    75,    76,    77,   278,    40,   279,    41,    12,   166,
      75,   196,   283,   289,   197,    42,    57,    76,    77,    78,
      79,    80,   253,   263,    58,   280,    76,   167,    59,    13,
     254,    14,    15,    16,    17,    18,    43,    44,    45,    46,
      47,    48,    90,    62,    94,     3,    97,   299,     4,    91,
     312,    95,     5,    98,    67,    92,   105,    93,   258,   311,
       6,     7,     8,     9,    10,    11,    65,    96,    99,    93,
     319,    63,   101,     3,    12,   100,     4,   323,   313,   102,
       5,   225,   304,   -78,    66,   230,   259,   -79,     6,     7,
       8,     9,    10,    11,   199,    13,    72,    14,    15,    16,
      17,    18,    12,    43,    44,    45,    46,    47,    48,   184,
     185,   200,   201,   202,   203,   204,    85,     3,   214,    73,
       4,   128,   109,    13,     5,    14,    15,    16,    17,    18,
     269,   121,     6,     7,     8,     9,    10,    11,   122,   138,
     139,   140,   141,   142,   123,     3,    12,   129,     4,   132,
     133,   134,     5,   144,   130,   272,   160,   145,   293,   175,
       6,     7,     8,     9,    10,    11,   189,    13,   190,    14,
      15,    16,    17,    18,    12,   110,   138,   139,   140,   141,
     142,   191,   207,   111,   112,   113,   114,   115,   116,     3,
     209,   228,     4,   149,   150,    13,     5,    14,    15,    16,
      17,    18,   294,   -79,     6,     7,     8,     9,    10,    11,
     151,   152,   153,   154,   155,   220,   137,     3,    12,   221,
       4,   248,    93,   -78,     5,   138,   139,   140,   141,   142,
     298,   233,     6,     7,     8,     9,    10,    11,   257,    13,
     226,    14,    15,    16,    17,    18,    12,   231,   235,   138,
     139,   140,   141,   142,   236,   237,   138,   139,   140,   141,
     142,     3,   238,   250,     4,   162,   150,    13,     5,    14,
      15,    16,    17,    18,   318,   256,     6,     7,     8,     9,
      10,    11,   163,   164,   153,   154,   155,   260,   234,     3,
      12,   261,     4,   264,   136,   268,     5,   138,   139,   140,
     141,   142,   322,   270,     6,     7,     8,     9,    10,    11,
     271,    13,   281,    14,    15,    16,    17,    18,    12,   -85,
     176,   177,   178,   179,   180,   181,   138,   139,   140,   141,
     142,   284,   285,     3,   291,   -86,     4,   274,   150,    13,
       5,    14,    15,    16,    17,    18,   324,   292,     6,     7,
       8,     9,    10,    11,   163,   152,   153,   154,   155,   295,
     296,   303,    12,   111,   112,   113,   114,   115,   116,   138,
     139,   140,   141,   142,   300,   263,   301,   267,   302,   307,
     310,   309,   315,    13,   314,    14,    15,    16,    17,    18,
     317,   320,   305,   306,   321,   276,   239,   290
};

static const yytype_uint16 yycheck[] =
{
      64,    75,    50,    60,   144,     8,    63,   207,    62,    90,
       9,    59,    60,    94,    22,    63,    90,   156,    88,    11,
      94,    10,     8,    97,     8,    22,   165,     7,    57,    10,
      22,     0,     1,    13,    31,     4,    10,     8,     8,     8,
      48,    49,    10,    29,    28,   109,   103,    16,    17,    18,
      19,    20,    21,    52,    10,   103,    27,   121,   122,    48,
      49,    30,     8,   263,     8,   129,   136,    48,    49,   143,
     124,     8,   126,    14,    48,    49,   150,     8,     9,    25,
      48,    49,    51,    24,    53,    54,    55,    56,    57,    11,
      93,    28,    48,    49,    25,    26,     1,    11,    22,     4,
      22,   182,    24,     8,    13,     8,    10,    31,    22,    14,
       8,    16,    17,    18,    19,    20,    21,    31,   175,    50,
      11,   261,    25,    26,   264,    30,    29,   175,    15,   186,
      15,    22,    14,    24,   191,    22,   275,    22,   186,     8,
       9,   189,    24,   191,    48,    49,    51,   228,    53,    54,
      55,    56,    57,   227,   228,    11,    25,    26,   239,     1,
      11,     7,     4,    15,     8,     8,     8,    13,    24,   309,
      22,    22,    14,    24,    16,    17,    18,    19,    20,    21,
       8,     9,    25,    26,   248,     3,   250,     5,    30,     8,
       9,     8,   256,    14,    11,    15,     8,    25,    26,    27,
      28,    29,    15,    24,     8,   253,    25,    26,     9,    51,
      23,    53,    54,    55,    56,    57,    36,    37,    38,    39,
      40,    41,    15,     9,    15,     1,    15,   284,     4,    22,
     304,    22,     8,    22,    11,    22,   284,    24,    14,   303,
      16,    17,    18,    19,    20,    21,    52,    22,    15,    24,
     314,     9,    15,     1,    30,    22,     4,   321,   306,    22,
       8,    22,    15,    24,    52,    22,    14,    24,    16,    17,
      18,    19,    20,    21,     8,    51,     6,    53,    54,    55,
      56,    57,    30,    36,    37,    38,    39,    40,    41,    48,
      49,    25,    26,    27,    28,    29,    22,     1,    10,     8,
       4,     8,    13,    51,     8,    53,    54,    55,    56,    57,
      14,    13,    16,    17,    18,    19,    20,    21,    13,    31,
      32,    33,    34,    35,    12,     1,    30,    13,     4,    22,
      22,    22,     8,    11,    11,    10,     8,    22,    14,     9,
      16,    17,    18,    19,    20,    21,    15,    51,     8,    53,
      54,    55,    56,    57,    30,     8,    31,    32,    33,    34,
      35,    22,    13,    16,    17,    18,    19,    20,    21,     1,
       9,    15,     4,     8,     9,    51,     8,    53,    54,    55,
      56,    57,    14,    24,    16,    17,    18,    19,    20,    21,
      25,    26,    27,    28,    29,    22,    22,     1,    30,    22,
       4,    13,    24,    24,     8,    31,    32,    33,    34,    35,
      14,    22,    16,    17,    18,    19,    20,    21,    55,    51,
      22,    53,    54,    55,    56,    57,    30,    22,    22,    31,
      32,    33,    34,    35,    22,    22,    31,    32,    33,    34,
      35,     1,    22,    13,     4,     8,     9,    51,     8,    53,
      54,    55,    56,    57,    14,    13,    16,    17,    18,    19,
      20,    21,    25,    26,    27,    28,    29,    12,    22,     1,
      30,    11,     4,    11,    31,    16,     8,    31,    32,    33,
      34,    35,    14,    12,    16,    17,    18,    19,    20,    21,
      12,    51,     8,    53,    54,    55,    56,    57,    30,    24,
      42,    43,    44,    45,    46,    47,    31,    32,    33,    34,
      35,     9,     8,     1,    11,    24,     4,     8,     9,    51,
       8,    53,    54,    55,    56,    57,    14,    10,    16,    17,
      18,    19,    20,    21,    25,    26,    27,    28,    29,    10,
       8,    13,    30,    16,    17,    18,    19,    20,    21,    31,
      32,    33,    34,    35,    12,    24,    12,    24,    12,    10,
       8,    11,    22,    51,    13,    53,    54,    55,    56,    57,
      10,    12,   296,   296,    13,   239,   173,   267
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,     0,     1,     4,     8,    16,    17,    18,    19,
      20,    21,    30,    51,    53,    54,    55,    56,    57,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    71,    81,
      86,    87,    88,    89,    90,    91,    94,    96,    98,    57,
       3,     5,    15,    36,    37,    38,    39,    40,    41,    73,
      74,     8,     8,    80,     8,    80,     8,     8,     8,     9,
       9,    52,     9,     9,    13,    52,    52,    11,    15,    22,
      15,    22,     6,     8,     8,     9,    25,    26,    27,    28,
      29,    70,    75,    76,   100,    22,     8,    76,    15,    22,
      15,    22,    22,    24,    15,    22,    22,    15,    22,    15,
      22,    15,    22,     9,    50,    76,    84,    85,    85,    13,
       8,    16,    17,    18,    19,    20,    21,    91,    92,    85,
      60,    13,    13,    12,     7,    13,     7,    13,     8,    13,
      11,    75,    22,    22,    22,    22,    31,    22,    31,    32,
      33,    34,    35,    72,    11,    22,     8,    28,    70,     8,
       9,    25,    26,    27,    28,    29,    75,    78,    79,   100,
       8,    80,     8,    25,    26,    75,     8,    26,    75,     8,
      29,     8,    27,    76,    85,     9,    42,    43,    44,    45,
      46,    47,    82,    10,    48,    49,    83,    10,    60,    15,
       8,    22,    10,    14,    60,    60,     8,    11,    91,     8,
      25,    26,    27,    28,    29,    95,    91,    13,    97,     9,
      60,     8,    25,    99,    10,     8,    28,    70,    75,    99,
      22,    22,    22,    22,    75,    22,    22,    72,    15,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    82,
      10,    85,     8,    25,    26,    29,    77,   100,    13,    85,
      13,    14,    76,    15,    23,    85,    13,    55,    14,    14,
      12,    11,    14,    24,    11,    95,    14,    24,    16,    14,
      12,    12,    10,    75,     8,    75,    77,    10,    60,    60,
      76,     8,    22,    60,     9,     8,    99,    95,    99,    14,
      97,    11,    10,    14,    14,    10,     8,    93,    14,    85,
      12,    12,    12,    13,    15,    73,    74,    10,    10,    11,
       8,    60,    75,    76,    13,    22,    99,    10,    14,    60,
      12,    13,    14,    60,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    61,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    79,    80,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    85,    85,    85,    85,    86,    86,    86,
      87,    87,    88,    88,    88,    89,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    98,    98,    98,    99,    99,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     3,     2,     2,
       2,     6,    13,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     3,     5,     5,     5,     3,     5,     5,
       5,     3,     5,     5,     3,     5,     5,     5,     5,     5,
       3,     4,     4,     4,     4,     4,     3,     4,     3,     1,
       1,     3,     5,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     3,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     3,     3,     4,     1,     7,     5,     5,
       7,     5,     1,     1,     1,     7,     9,     1,     1,     1,
       1,     1,     1,     4,     3,     2,     3,     3,    11,    10,
       1,     1,     1,     1,     1,     1,     3,     4,     7,     5,
       3,     3,     6,    10,     5,     1,     1,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 40 "LAB02_Ariza_Camero_Zambrano.y" /* yacc.c:1646  */
    {fprintf(yyout,"AIUDAAAAAAA");}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1716 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 250 "LAB02_Ariza_Camero_Zambrano.y" /* yacc.c:1906  */

int main()
{	

	yyin=fopen("prueba.java","r");
	yyout=fopen("Salida.txt","w");
	do {
	
		yyparse();

	} while(!feof(yyin));

	if(errores==0){
		fprintf(yyout, "\n No hubo ningun error sintactico.");
		fprintf(stderr, "No hubo ningun error sintactico.\n");
	}

	disp();

	fprintf(yyout,"\n*****LISTA DE ERRORES SINTÁCTICOS***** \n");
	fprintf(yyout, "El número total de errores es de: %i.\n",errores);
	for (int i=0; i<indice; i++){
		fprintf(yyout, "La línea %i tiene un error de tipo: syntax error\n",error_pos[i]);
	}

	
}
void yyerror(const char *s) 
{
	errores++;
	if(strcmp(yytext,"\n")==0){
		//fprintf(yyout, "\n La línea %d tiene un error de tipo: %s\n",(yylineno-1),s);
		fprintf(stderr, "\n La línea %d tiene un error de tipo: %s\n",(yylineno-1),s);
	}
		//fprintf(yyout, "\n La línea %d tiene un error de tipo: %s\n",yylineno,s);
	fprintf(stderr, "La línea %d tiene un error de tipo: %s\n",yylineno,s);
	add(yylineno,indice);
	indice++;
}
void add(int dato, int pos){
		error_pos[pos] = dato;
}

