/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    INT = 259,                     /* INT  */
    BOOL = 260,                    /* BOOL  */
    FLOAT = 261,                   /* FLOAT  */
    BGIN = 262,                    /* BGIN  */
    END = 263,                     /* END  */
    ASSIGN = 264,                  /* ASSIGN  */
    CLASS = 265,                   /* CLASS  */
    ACCESS = 266,                  /* ACCESS  */
    PLUS = 267,                    /* PLUS  */
    MINUS = 268,                   /* MINUS  */
    DIV = 269,                     /* DIV  */
    MUL = 270,                     /* MUL  */
    MOD = 271,                     /* MOD  */
    GT = 272,                      /* GT  */
    LT = 273,                      /* LT  */
    GEQ = 274,                     /* GEQ  */
    LEQ = 275,                     /* LEQ  */
    EQ = 276,                      /* EQ  */
    NEQ = 277,                     /* NEQ  */
    AND = 278,                     /* AND  */
    OR = 279,                      /* OR  */
    ARRAY = 280,                   /* ARRAY  */
    STRLEN = 281,                  /* STRLEN  */
    ASSIGN_STR = 282,              /* ASSIGN_STR  */
    CHAR = 283,                    /* CHAR  */
    IF = 284,                      /* IF  */
    ELSE = 285,                    /* ELSE  */
    WHILE = 286,                   /* WHILE  */
    FOR = 287,                     /* FOR  */
    ASSIGN_BOOL = 288,             /* ASSIGN_BOOL  */
    VAL_FLOAT = 289,               /* VAL_FLOAT  */
    EVAL = 290,                    /* EVAL  */
    RETURN = 291,                  /* RETURN  */
    VOID = 292,                    /* VOID  */
    NR = 293,                      /* NR  */
    STRING = 294                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INT 259
#define BOOL 260
#define FLOAT 261
#define BGIN 262
#define END 263
#define ASSIGN 264
#define CLASS 265
#define ACCESS 266
#define PLUS 267
#define MINUS 268
#define DIV 269
#define MUL 270
#define MOD 271
#define GT 272
#define LT 273
#define GEQ 274
#define LEQ 275
#define EQ 276
#define NEQ 277
#define AND 278
#define OR 279
#define ARRAY 280
#define STRLEN 281
#define ASSIGN_STR 282
#define CHAR 283
#define IF 284
#define ELSE 285
#define WHILE 286
#define FOR 287
#define ASSIGN_BOOL 288
#define VAL_FLOAT 289
#define EVAL 290
#define RETURN 291
#define VOID 292
#define NR 293
#define STRING 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 36 "limbaj.y"

int intval;
char *strval;

#line 150 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
