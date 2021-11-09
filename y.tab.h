/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    STRING = 258,
    ID = 259,
    INT = 260,
    REAL = 261,
    BOOLEAN = 262,
    CHARID = 263,
    IFELSE = 264,
    FOR = 265,
    WHILE = 266,
    DOUBLE = 267,
    INTW = 268,
    STRINGW = 269,
    BOOLEANW = 270,
    CHARNEW = 271,
    PUBLIC = 272,
    CLASS = 273,
    STATIC = 274,
    VOID = 275,
    CHAR = 276,
    IF = 277,
    ELSE = 278,
    COMMENT = 279,
    SUMSUM = 280,
    MENMEN = 281,
    SUMIGUAL = 282,
    MENIGUAL = 283,
    MULTIGUAL = 284,
    DIVIGUAL = 285,
    IGUALIGUAL = 286,
    MENORIGUAL = 287,
    MAYORIGUAL = 288,
    DIFF = 289,
    NOIGUAL = 290,
    YY = 291,
    OO = 292,
    NOT = 293,
    MAYOR = 294,
    MENOR = 295,
    MULT = 296,
    SUM = 297,
    MEN = 298,
    DIV = 299,
    IGUAL = 300,
    MOD = 301,
    PAper = 302,
    PCier = 303,
    CAper = 304,
    CCier = 305,
    LAper = 306,
    LCier = 307,
    PComa = 308,
    SALTOLINEA = 309
  };
#endif
/* Tokens.  */
#define STRING 258
#define ID 259
#define INT 260
#define REAL 261
#define BOOLEAN 262
#define CHARID 263
#define IFELSE 264
#define FOR 265
#define WHILE 266
#define DOUBLE 267
#define INTW 268
#define STRINGW 269
#define BOOLEANW 270
#define CHARNEW 271
#define PUBLIC 272
#define CLASS 273
#define STATIC 274
#define VOID 275
#define CHAR 276
#define IF 277
#define ELSE 278
#define COMMENT 279
#define SUMSUM 280
#define MENMEN 281
#define SUMIGUAL 282
#define MENIGUAL 283
#define MULTIGUAL 284
#define DIVIGUAL 285
#define IGUALIGUAL 286
#define MENORIGUAL 287
#define MAYORIGUAL 288
#define DIFF 289
#define NOIGUAL 290
#define YY 291
#define OO 292
#define NOT 293
#define MAYOR 294
#define MENOR 295
#define MULT 296
#define SUM 297
#define MEN 298
#define DIV 299
#define IGUAL 300
#define MOD 301
#define PAper 302
#define PCier 303
#define CAper 304
#define CCier 305
#define LAper 306
#define LCier 307
#define PComa 308
#define SALTOLINEA 309

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
