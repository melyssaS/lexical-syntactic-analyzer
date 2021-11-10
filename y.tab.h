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
    FLOAT = 268,
    INTW = 269,
    STRINGW = 270,
    BOOLEANW = 271,
    CHARNEW = 272,
    PUBLIC = 273,
    CLASS = 274,
    STATIC = 275,
    VOID = 276,
    CHAR = 277,
    IF = 278,
    ELSE = 279,
    NEW = 280,
    DO = 281,
    COMMENT = 282,
    SUMSUM = 283,
    MENMEN = 284,
    SUMIGUAL = 285,
    MENIGUAL = 286,
    MULTIGUAL = 287,
    DIVIGUAL = 288,
    IGUALIGUAL = 289,
    MENORIGUAL = 290,
    MAYORIGUAL = 291,
    DIFF = 292,
    NOIGUAL = 293,
    YY = 294,
    OO = 295,
    NOT = 296,
    MAYOR = 297,
    MENOR = 298,
    MULT = 299,
    SUM = 300,
    MEN = 301,
    DIV = 302,
    IGUAL = 303,
    MOD = 304,
    PAper = 305,
    PCier = 306,
    CAper = 307,
    CCier = 308,
    LAper = 309,
    LCier = 310,
    PComa = 311,
    COMA = 312,
    PUNTOS = 313,
    SALTOLINEA = 314
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
#define FLOAT 268
#define INTW 269
#define STRINGW 270
#define BOOLEANW 271
#define CHARNEW 272
#define PUBLIC 273
#define CLASS 274
#define STATIC 275
#define VOID 276
#define CHAR 277
#define IF 278
#define ELSE 279
#define NEW 280
#define DO 281
#define COMMENT 282
#define SUMSUM 283
#define MENMEN 284
#define SUMIGUAL 285
#define MENIGUAL 286
#define MULTIGUAL 287
#define DIVIGUAL 288
#define IGUALIGUAL 289
#define MENORIGUAL 290
#define MAYORIGUAL 291
#define DIFF 292
#define NOIGUAL 293
#define YY 294
#define OO 295
#define NOT 296
#define MAYOR 297
#define MENOR 298
#define MULT 299
#define SUM 300
#define MEN 301
#define DIV 302
#define IGUAL 303
#define MOD 304
#define PAper 305
#define PCier 306
#define CAper 307
#define CCier 308
#define LAper 309
#define LCier 310
#define PComa 311
#define COMA 312
#define PUNTOS 313
#define SALTOLINEA 314

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
