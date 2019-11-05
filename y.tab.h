/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    VIER = 258,
    FUNF = 259,
    ACHT = 260,
    NEUN = 261,
    EIN = 262,
    ZWEI = 263,
    SECHS = 264,
    SIEBEN = 265,
    ELF = 266,
    ZOLF = 267,
    SECH = 268,
    SIEB = 269,
    ZWAN = 270,
    ZEHN = 271,
    ZIG = 272,
    DREI = 273,
    SSING = 274,
    HUNDERT = 275,
    TAUSEND = 276,
    UND = 277
  };
#endif
/* Tokens.  */
#define VIER 258
#define FUNF 259
#define ACHT 260
#define NEUN 261
#define EIN 262
#define ZWEI 263
#define SECHS 264
#define SIEBEN 265
#define ELF 266
#define ZOLF 267
#define SECH 268
#define SIEB 269
#define ZWAN 270
#define ZEHN 271
#define ZIG 272
#define DREI 273
#define SSING 274
#define HUNDERT 275
#define TAUSEND 276
#define UND 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "token.y" /* yacc.c:1921  */

    int i;

#line 106 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
