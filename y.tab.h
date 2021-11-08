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
    IFELSE = 263,
    FOR = 264,
    WHILE = 265,
    DOUBLE = 266,
    INTW = 267,
    STRINGW = 268,
    CHARNEW = 269,
    PUBLIC = 270,
    CLASS = 271,
    STATIC = 272,
    VOID = 273,
    CHAR = 274,
    IF = 275,
    ELSE = 276,
    COMMENT = 277,
    SUMSUM = 278,
    MENMEN = 279,
    SUMIGUAL = 280,
    MENIGUAL = 281,
    MULTIGUAL = 282,
    DIVIGUAL = 283,
    IGUALIGUAL = 284,
    MENORIGUAL = 285,
    MAYORIGUAL = 286,
    DIFF = 287,
    NOIGUAL = 288,
    YY = 289,
    OO = 290,
    NOT = 291,
    MAYOR = 292,
    MENOR = 293,
    MULT = 294,
    SUM = 295,
    MEN = 296,
    DIV = 297,
    IGUAL = 298,
    MOD = 299,
    PAper = 300,
    PCier = 301,
    CAper = 302,
    CCier = 303,
    LAper = 304,
    LCier = 305,
    PComa = 306,
    SALTOLINEA = 307
  };
#endif
/* Tokens.  */
#define STRING 258
#define ID 259
#define INT 260
#define REAL 261
#define BOOLEAN 262
#define IFELSE 263
#define FOR 264
#define WHILE 265
#define DOUBLE 266
#define INTW 267
#define STRINGW 268
#define CHARNEW 269
#define PUBLIC 270
#define CLASS 271
#define STATIC 272
#define VOID 273
#define CHAR 274
#define IF 275
#define ELSE 276
#define COMMENT 277
#define SUMSUM 278
#define MENMEN 279
#define SUMIGUAL 280
#define MENIGUAL 281
#define MULTIGUAL 282
#define DIVIGUAL 283
#define IGUALIGUAL 284
#define MENORIGUAL 285
#define MAYORIGUAL 286
#define DIFF 287
#define NOIGUAL 288
#define YY 289
#define OO 290
#define NOT 291
#define MAYOR 292
#define MENOR 293
#define MULT 294
#define SUM 295
#define MEN 296
#define DIV 297
#define IGUAL 298
#define MOD 299
#define PAper 300
#define PCier 301
#define CAper 302
#define CCier 303
#define LAper 304
#define LCier 305
#define PComa 306
#define SALTOLINEA 307

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
