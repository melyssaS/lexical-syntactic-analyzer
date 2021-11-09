/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     NEW = 279,
     COMMENT = 280,
     SUMSUM = 281,
     MENMEN = 282,
     SUMIGUAL = 283,
     MENIGUAL = 284,
     MULTIGUAL = 285,
     DIVIGUAL = 286,
     IGUALIGUAL = 287,
     MENORIGUAL = 288,
     MAYORIGUAL = 289,
     DIFF = 290,
     NOIGUAL = 291,
     YY = 292,
     OO = 293,
     NOT = 294,
     MAYOR = 295,
     MENOR = 296,
     MULT = 297,
     SUM = 298,
     MEN = 299,
     DIV = 300,
     IGUAL = 301,
     MOD = 302,
     PAper = 303,
     PCier = 304,
     CAper = 305,
     CCier = 306,
     LAper = 307,
     LCier = 308,
     PComa = 309,
     SALTOLINEA = 310
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
#define NEW 279
#define COMMENT 280
#define SUMSUM 281
#define MENMEN 282
#define SUMIGUAL 283
#define MENIGUAL 284
#define MULTIGUAL 285
#define DIVIGUAL 286
#define IGUALIGUAL 287
#define MENORIGUAL 288
#define MAYORIGUAL 289
#define DIFF 290
#define NOIGUAL 291
#define YY 292
#define OO 293
#define NOT 294
#define MAYOR 295
#define MENOR 296
#define MULT 297
#define SUM 298
#define MEN 299
#define DIV 300
#define IGUAL 301
#define MOD 302
#define PAper 303
#define PCier 304
#define CAper 305
#define CCier 306
#define LAper 307
#define LCier 308
#define PComa 309
#define SALTOLINEA 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;
