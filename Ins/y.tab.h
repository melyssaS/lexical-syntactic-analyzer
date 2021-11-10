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
