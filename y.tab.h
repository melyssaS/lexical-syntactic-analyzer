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
     DO = 280,
     COMMENT = 281,
     SUMSUM = 282,
     MENMEN = 283,
     SUMIGUAL = 284,
     MENIGUAL = 285,
     MULTIGUAL = 286,
     DIVIGUAL = 287,
     IGUALIGUAL = 288,
     MENORIGUAL = 289,
     MAYORIGUAL = 290,
     DIFF = 291,
     NOIGUAL = 292,
     YY = 293,
     OO = 294,
     NOT = 295,
     MAYOR = 296,
     MENOR = 297,
     MULT = 298,
     SUM = 299,
     MEN = 300,
     DIV = 301,
     IGUAL = 302,
     MOD = 303,
     PAper = 304,
     PCier = 305,
     CAper = 306,
     CCier = 307,
     LAper = 308,
     LCier = 309,
     PComa = 310,
     COMA = 311,
     PUNTOS = 312,
     SALTOLINEA = 313
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
#define DO 280
#define COMMENT 281
#define SUMSUM 282
#define MENMEN 283
#define SUMIGUAL 284
#define MENIGUAL 285
#define MULTIGUAL 286
#define DIVIGUAL 287
#define IGUALIGUAL 288
#define MENORIGUAL 289
#define MAYORIGUAL 290
#define DIFF 291
#define NOIGUAL 292
#define YY 293
#define OO 294
#define NOT 295
#define MAYOR 296
#define MENOR 297
#define MULT 298
#define SUM 299
#define MEN 300
#define DIV 301
#define IGUAL 302
#define MOD 303
#define PAper 304
#define PCier 305
#define CAper 306
#define CCier 307
#define LAper 308
#define LCier 309
#define PComa 310
#define COMA 311
#define PUNTOS 312
#define SALTOLINEA 313




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
