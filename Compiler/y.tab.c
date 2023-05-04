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
#line 1 "limbaj.y"

#include <stdio.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

  char decl[1000][100];
  int n = 0;

  char declClass[1000][100];
  int n_class = 0;

  char declFunctie[1000][100];
  int n_functie = 0;

  char declGlobal[1000][1000];
  int n_global = 0;

  int valori[10000];
  char valoriStr[1000][100];
  int k_str = 0;
  int number;
  char var[30];
  char aux[30];
  char valStr[100];
  int value;
  struct table{
	char type[10];
	char nume[20];
	int valoareVar;
	char valoareString[100];
  } obiect;

#line 106 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 242 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_BOOL = 5,                       /* BOOL  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_BGIN = 7,                       /* BGIN  */
  YYSYMBOL_END = 8,                        /* END  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_CLASS = 10,                     /* CLASS  */
  YYSYMBOL_ACCESS = 11,                    /* ACCESS  */
  YYSYMBOL_PLUS = 12,                      /* PLUS  */
  YYSYMBOL_MINUS = 13,                     /* MINUS  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_MUL = 15,                       /* MUL  */
  YYSYMBOL_MOD = 16,                       /* MOD  */
  YYSYMBOL_GT = 17,                        /* GT  */
  YYSYMBOL_LT = 18,                        /* LT  */
  YYSYMBOL_GEQ = 19,                       /* GEQ  */
  YYSYMBOL_LEQ = 20,                       /* LEQ  */
  YYSYMBOL_EQ = 21,                        /* EQ  */
  YYSYMBOL_NEQ = 22,                       /* NEQ  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_ARRAY = 25,                     /* ARRAY  */
  YYSYMBOL_STRLEN = 26,                    /* STRLEN  */
  YYSYMBOL_ASSIGN_STR = 27,                /* ASSIGN_STR  */
  YYSYMBOL_CHAR = 28,                      /* CHAR  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_WHILE = 31,                     /* WHILE  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_ASSIGN_BOOL = 33,               /* ASSIGN_BOOL  */
  YYSYMBOL_VAL_FLOAT = 34,                 /* VAL_FLOAT  */
  YYSYMBOL_EVAL = 35,                      /* EVAL  */
  YYSYMBOL_RETURN = 36,                    /* RETURN  */
  YYSYMBOL_VOID = 37,                      /* VOID  */
  YYSYMBOL_NR = 38,                        /* NR  */
  YYSYMBOL_STRING = 39,                    /* STRING  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* ':'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_progr = 46,                     /* progr  */
  YYSYMBOL_declaratii = 47,                /* declaratii  */
  YYSYMBOL_declaratie = 48,                /* declaratie  */
  YYSYMBOL_decl_functie = 49,              /* decl_functie  */
  YYSYMBOL_blocFunctie = 50,               /* blocFunctie  */
  YYSYMBOL_blocFunctieVoid = 51,           /* blocFunctieVoid  */
  YYSYMBOL_list_functie = 52,              /* list_functie  */
  YYSYMBOL_statement_functie = 53,         /* statement_functie  */
  YYSYMBOL_blocClass = 54,                 /* blocClass  */
  YYSYMBOL_listClass = 55,                 /* listClass  */
  YYSYMBOL_statementClass = 56,            /* statementClass  */
  YYSYMBOL_lista_param = 57,               /* lista_param  */
  YYSYMBOL_param = 58,                     /* param  */
  YYSYMBOL_bloc = 59,                      /* bloc  */
  YYSYMBOL_list = 60,                      /* list  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_stmt = 62,                      /* stmt  */
  YYSYMBOL_blocfalse = 63,                 /* blocfalse  */
  YYSYMBOL_assignment = 64,                /* assignment  */
  YYSYMBOL_assign_str = 65,                /* assign_str  */
  YYSYMBOL_oper_str = 66,                  /* oper_str  */
  YYSYMBOL_lista_apel = 67,                /* lista_apel  */
  YYSYMBOL_assign_exp = 68,                /* assign_exp  */
  YYSYMBOL_aexp = 69,                      /* aexp  */
  YYSYMBOL_bexp = 70                       /* bexp  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   283

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  222

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      41,    42,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    40,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    55,    59,    60,    63,    73,    83,    93,
     103,   104,   105,   107,   111,   116,   121,   126,   130,   135,
     142,   144,   146,   147,   149,   150,   151,   152,   153,   163,
     173,   183,   193,   197,   199,   200,   201,   203,   213,   223,
     233,   243,   246,   247,   249,   253,   257,   265,   268,   269,
     272,   273,   274,   275,   278,   288,   298,   308,   318,   320,
     321,   322,   323,   324,   327,   329,   330,   331,   332,   333,
     336,   341,   353,   363,   364,   367,   368,   370,   381,   388,
     389,   394,   395,   396,   397,   398,   401,   402,   403,   404,
     405,   406,   407,   408
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "BOOL",
  "FLOAT", "BGIN", "END", "ASSIGN", "CLASS", "ACCESS", "PLUS", "MINUS",
  "DIV", "MUL", "MOD", "GT", "LT", "GEQ", "LEQ", "EQ", "NEQ", "AND", "OR",
  "ARRAY", "STRLEN", "ASSIGN_STR", "CHAR", "IF", "ELSE", "WHILE", "FOR",
  "ASSIGN_BOOL", "VAL_FLOAT", "EVAL", "RETURN", "VOID", "NR", "STRING",
  "';'", "'('", "')'", "':'", "','", "$accept", "progr", "declaratii",
  "declaratie", "decl_functie", "blocFunctie", "blocFunctieVoid",
  "list_functie", "statement_functie", "blocClass", "listClass",
  "statementClass", "lista_param", "param", "bloc", "list", "statement",
  "stmt", "blocfalse", "assignment", "assign_str", "oper_str",
  "lista_apel", "assign_exp", "aexp", "bexp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-158)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      63,    27,    10,    23,    44,    57,    61,    16,    18,  -158,
    -158,   100,    32,   113,    35,    92,    38,    67,  -158,   117,
    -158,  -158,  -158,    -1,  -158,  -158,    66,  -158,   187,  -158,
    -158,     1,    68,    54,   111,   115,   123,    91,   109,   124,
     142,    99,  -158,  -158,   149,  -158,  -158,   200,   211,   229,
     195,   155,  -158,   158,    71,   231,   233,   196,   234,   230,
     187,    13,   185,     6,    11,     4,   202,   201,   203,   205,
     206,   207,     4,     4,   239,     4,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,    14,    66,   208,   209,   210,   212,   213,
     187,   214,  -158,  -158,   153,  -158,  -158,   215,  -158,   216,
    -158,  -158,  -158,   194,  -158,  -158,  -158,   204,   171,  -158,
     186,  -158,  -158,  -158,  -158,  -158,    -5,   163,   235,   148,
     153,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,   110,    73,   248,   253,   255,   218,   107,  -158,  -158,
     220,  -158,    12,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   221,   224,   256,   256,
       4,   225,    30,   202,   226,   227,   228,   232,   236,     4,
    -158,  -158,  -158,  -158,  -158,   222,   197,   197,  -158,  -158,
    -158,   194,   194,   194,   194,   194,   194,  -158,  -158,  -158,
    -158,   240,  -158,  -158,   164,  -158,   266,   189,  -158,  -158,
    -158,  -158,  -158,   154,  -158,   256,     4,   237,   238,   241,
    -158,    93,   263,  -158,  -158,   270,  -158,   265,     4,   159,
     256,  -158
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     3,     4,
      12,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       5,     2,     6,     0,    11,     7,     0,     8,     0,    10,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    52,     0,    66,    65,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    49,    51,    44,
      45,    46,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    36,     0,    16,    18,     0,    80,     0,
      68,    79,    70,    77,    72,    69,    71,     0,    67,    75,
       0,    54,    58,    55,    56,    57,     0,     0,     0,     0,
       0,    13,    14,    43,    19,    37,    41,    38,    39,    34,
      40,     0,     0,     0,     0,     0,     0,     0,    22,    26,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    23,    25,    74,    73,     0,    81,    82,    83,    85,
      84,    88,    89,    90,    91,    92,    93,    86,    87,    50,
      76,    61,    62,    59,     0,    53,     0,     0,    28,    32,
      29,    30,    31,     0,    78,     0,     0,     0,     0,     0,
      63,     0,     0,    24,    27,     0,    20,     0,     0,     0,
       0,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,   267,  -158,  -158,  -158,   160,  -106,  -158,
     -52,  -158,    98,   198,  -157,  -158,   242,    -2,  -158,   106,
    -158,  -158,   116,  -158,   -63,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     7,     8,     9,    10,   122,    96,   137,   138,    29,
      59,    60,    51,    52,    21,    41,    42,   139,   192,   140,
      45,   175,   110,    46,   107,   108
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     103,   191,   193,    47,    48,    47,    48,    98,    93,    98,
     116,   117,   119,    13,   104,   173,    18,    43,   154,   155,
      94,   120,     1,     2,     3,    19,    14,    49,     4,    49,
      11,   171,    99,   131,   132,   133,   134,   158,   129,    43,
     100,    50,   101,    61,   101,   102,     5,    15,   210,   105,
     106,   174,    12,    95,   121,     6,   171,    67,   135,    37,
      16,    38,    39,   221,    17,   136,   196,     1,     2,     3,
      47,    48,    24,     4,    86,    27,   164,    63,    30,    68,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,     5,   187,   188,    49,    64,    87,   194,   165,    28,
       6,    65,    32,    33,    34,    35,   203,    76,    31,    66,
     131,   132,   133,   134,    69,   170,   154,   155,    70,    63,
      32,    33,    34,    35,    53,    44,    71,    36,    37,    62,
      38,    39,    72,   215,    40,   135,    37,    64,    38,    39,
      22,    23,   136,    65,   211,    36,    37,    44,    38,    39,
      73,   163,    40,    25,    26,   219,   131,   132,   133,   134,
     143,   144,   145,   146,   147,    74,   143,   144,   145,   146,
     147,   143,   144,   145,   146,   147,   143,   144,   145,   146,
     147,   135,    37,    75,    38,    39,   154,   155,   136,    78,
     161,    54,    55,    56,   154,   155,   209,    83,    57,    84,
      85,   220,    84,    79,   206,   159,   143,   144,   145,   146,
     147,   145,   146,   147,    80,    58,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    97,   156,    84,
     157,   208,    81,   157,    88,    82,    89,    91,    92,    90,
     109,   111,   118,   112,   160,   113,   114,   115,   124,   125,
     126,   166,   127,   128,   130,   141,   167,   142,   168,   169,
     172,   189,   190,    19,   204,   195,   198,   199,   200,   207,
     205,   216,   201,   217,   218,    20,   202,   212,   213,   197,
     162,   214,   123,    77
};

static const yytype_uint8 yycheck[] =
{
      63,   158,   159,     4,     5,     4,     5,     3,    60,     3,
      72,    73,    75,     3,     3,     3,     0,    19,    23,    24,
       7,     7,     4,     5,     6,     7,     3,    28,    10,    28,
       3,   137,    26,     3,     4,     5,     6,    42,    90,    41,
      34,    42,    38,    42,    38,    39,    28,     3,   205,    38,
      39,    39,    25,    40,    40,    37,   162,     3,    28,    29,
       3,    31,    32,   220,     3,    35,    36,     4,     5,     6,
       4,     5,    40,    10,     3,    40,     3,     9,    40,    25,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    28,   154,   155,    28,    27,    25,   160,    25,     7,
      37,    33,     3,     4,     5,     6,   169,     8,    41,    41,
       3,     4,     5,     6,     3,     8,    23,    24,     3,     9,
       3,     4,     5,     6,    26,    19,     3,    28,    29,    31,
      31,    32,    41,    40,    35,    28,    29,    27,    31,    32,
      40,    41,    35,    33,   206,    28,    29,    41,    31,    32,
      41,    41,    35,    40,    41,   218,     3,     4,     5,     6,
      12,    13,    14,    15,    16,    41,    12,    13,    14,    15,
      16,    12,    13,    14,    15,    16,    12,    13,    14,    15,
      16,    28,    29,    41,    31,    32,    23,    24,    35,    40,
      42,     4,     5,     6,    23,    24,    42,    42,    11,    44,
      42,    42,    44,     3,    40,    42,    12,    13,    14,    15,
      16,    14,    15,    16,     3,    28,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    42,    42,    44,
      44,    42,     3,    44,     3,    40,     3,     3,     8,    43,
      38,    40,     3,    40,     9,    40,    40,    40,    40,    40,
      40,     3,    40,    40,    40,    40,     3,    41,     3,    41,
      40,    40,    38,     7,    42,    40,    40,    40,    40,     3,
      30,     8,    40,     3,     9,     8,    40,    40,    40,   163,
     120,    40,    84,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    10,    28,    37,    46,    47,    48,
      49,     3,    25,     3,     3,     3,     3,     3,     0,     7,
      48,    59,    40,    41,    40,    40,    41,    40,     7,    54,
      40,    41,     3,     4,     5,     6,    28,    29,    31,    32,
      35,    60,    61,    62,    64,    65,    68,     4,     5,    28,
      42,    57,    58,    57,     4,     5,     6,    11,    28,    55,
      56,    42,    57,     9,    27,    33,    41,     3,    25,     3,
       3,     3,    41,    41,    41,    41,     8,    61,    40,     3,
       3,     3,    40,    42,    44,    42,     3,    25,     3,     3,
      43,     3,     8,    55,     7,    40,    51,    42,     3,    26,
      34,    38,    39,    69,     3,    38,    39,    69,    70,    38,
      67,    40,    40,    40,    40,    40,    70,    70,     3,    69,
       7,    40,    50,    58,    40,    40,    40,    40,    40,    55,
      40,     3,     4,     5,     6,    28,    35,    52,    53,    62,
      64,    40,    41,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    42,    44,    42,    42,
       9,    42,    52,    41,     3,    25,     3,     3,     3,    41,
       8,    53,    40,     3,    39,    66,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    40,
      38,    59,    63,    59,    69,    40,    36,    67,    40,    40,
      40,    40,    40,    69,    42,    30,    40,     3,    42,    42,
      59,    70,    40,    40,    40,    40,     8,     3,     9,    69,
      42,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    46,    47,    47,    48,    48,    48,    48,
      48,    48,    48,    49,    49,    49,    49,    49,    49,    49,
      50,    51,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    55,    55,    55,    56,    56,    56,
      56,    56,    57,    57,    58,    58,    58,    59,    60,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    63,    64,    64,    64,    64,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     1,     6,     6,     5,     5,     6,     5,     6,
       6,     3,     1,     2,     5,     2,     1,     5,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     3,     3,     3,
       3,     3,     1,     3,     2,     2,     2,     3,     1,     2,
       5,     2,     1,     5,     3,     3,     3,     3,     3,     5,
      13,     5,     5,     7,     0,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     3,     6,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
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
  case 2: /* progr: declaratii bloc  */
#line 54 "limbaj.y"
                       {printf("program corect sintactic\n");}
#line 1443 "y.tab.c"
    break;

  case 3: /* progr: declaratii  */
#line 55 "limbaj.y"
                  {printf("program corect sintactic\n");}
#line 1449 "y.tab.c"
    break;

  case 6: /* declaratie: INT ID ';'  */
#line 63 "limbaj.y"
                        {
			strcpy(var,(yyvsp[-1].strval));
			if (cauta(var,n_global,declGlobal) == -1) {
					strcpy(declGlobal[n],var);
					n_global++;
					addIntoTable(var,"int","global",-1);
			}
			else   
				yyerror("Variabila deja declarata!");	   
		}
#line 1464 "y.tab.c"
    break;

  case 7: /* declaratie: BOOL ID ';'  */
#line 73 "limbaj.y"
                         {
			strcpy(var,(yyvsp[-1].strval));
			if (cauta(var,n_global,declGlobal)==-1) {
				strcpy(declGlobal[n],var);
				n_global++;
				addIntoTable(var,"bool","global",-1);
			}
			else   
				yyerror("Variabila deja declarata!");	   
		}
#line 1479 "y.tab.c"
    break;

  case 8: /* declaratie: FLOAT ID ';'  */
#line 83 "limbaj.y"
                          {
			strcpy(var,(yyvsp[-1].strval));
			if (cauta(var,n_global,declGlobal)==-1) {
				strcpy(declGlobal[n],var);
				n_global++;
				addIntoTable(var,"float","global",-1);
			}
			else   
				yyerror("Variabila deja declarata!");	   
		}
#line 1494 "y.tab.c"
    break;

  case 9: /* declaratie: CHAR ID ';'  */
#line 93 "limbaj.y"
                         {
			strcpy(var,(yyvsp[-1].strval));
			if (cauta(var,n_global,declGlobal)==-1) {
				strcpy(declGlobal[n],var);
				n_global++;
				addIntoTable(var,"string","global",-1);
				}
			else   
				yyerror("Variabila deja declarata!");	   
		}
#line 1509 "y.tab.c"
    break;

  case 13: /* decl_functie: INT ID '(' lista_param ')' ';'  */
#line 107 "limbaj.y"
                                              {
					strcpy(var,(yyvsp[-4].strval)); 
					addFunction(var,"int");
				}
#line 1518 "y.tab.c"
    break;

  case 14: /* decl_functie: INT ID '(' lista_param ')' blocFunctie  */
#line 112 "limbaj.y"
{
					strcpy(var,(yyvsp[-4].strval));
					addFunction(var,"int");
				}
#line 1527 "y.tab.c"
    break;

  case 15: /* decl_functie: INT ID '(' ')' ';'  */
#line 117 "limbaj.y"
{
					strcpy(var,(yyvsp[-3].strval));
					addFunction(var,"int");
				}
#line 1536 "y.tab.c"
    break;

  case 16: /* decl_functie: VOID ID '(' ')' ';'  */
#line 122 "limbaj.y"
                {
					strcpy(var,(yyvsp[-3].strval));
					addFunction(var,"void");
				}
#line 1545 "y.tab.c"
    break;

  case 17: /* decl_functie: VOID ID '(' lista_param ')' ';'  */
#line 126 "limbaj.y"
                                             {
					strcpy(var,(yyvsp[-4].strval));
					addFunction(var,"void");
				}
#line 1554 "y.tab.c"
    break;

  case 18: /* decl_functie: VOID ID '(' ')' blocFunctieVoid  */
#line 131 "limbaj.y"
{
					strcpy(var,(yyvsp[-3].strval));
					addFunction(var,"void");
				}
#line 1563 "y.tab.c"
    break;

  case 19: /* decl_functie: BOOL ID '(' lista_param ')' ';'  */
#line 135 "limbaj.y"
                                             {
					strcpy(var,(yyvsp[-4].strval)); 
					addFunction(var,"bool");
				}
#line 1572 "y.tab.c"
    break;

  case 28: /* statement_functie: INT ID ';'  */
#line 153 "limbaj.y"
                     {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n_functie,declFunctie)==-1) {
			strcpy(declFunctie[n],var);
			n_functie++;
			addIntoTable(var,"int","inside function",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1587 "y.tab.c"
    break;

  case 29: /* statement_functie: BOOL ID ';'  */
#line 163 "limbaj.y"
                      {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n_functie,declFunctie)==-1) {
			strcpy(declFunctie[n],var);
			n_functie++;
			addIntoTable(var,"bool","inside function",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1602 "y.tab.c"
    break;

  case 30: /* statement_functie: FLOAT ID ';'  */
#line 173 "limbaj.y"
                       {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n_functie,declFunctie)==-1) {
			strcpy(declFunctie[n],var);
			n_functie++;
			addIntoTable(var,"float","inside function",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1617 "y.tab.c"
    break;

  case 31: /* statement_functie: CHAR ID ';'  */
#line 183 "limbaj.y"
                      {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n_functie,declFunctie)==-1) {
			strcpy(declFunctie[n],var);
			n_functie++;
			addIntoTable(var,"string","inside function",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1632 "y.tab.c"
    break;

  case 37: /* statementClass: INT ID ';'  */
#line 203 "limbaj.y"
                             {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n_class,declClass)==-1) {
			strcpy(declClass[n],var);
			n_class++;
			addIntoTable(var,"int","inside class",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1647 "y.tab.c"
    break;

  case 38: /* statementClass: BOOL ID ';'  */
#line 213 "limbaj.y"
                      {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n_class,declClass)==-1) {
			strcpy(declClass[n],var);
			n_class++;
			addIntoTable(var,"bool","inside class",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1662 "y.tab.c"
    break;

  case 39: /* statementClass: FLOAT ID ';'  */
#line 223 "limbaj.y"
                       {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n_class,declClass)==-1) {
			strcpy(declClass[n],var);
			n_class++;
			addIntoTable(var,"float","inside class",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1677 "y.tab.c"
    break;

  case 40: /* statementClass: CHAR ID ';'  */
#line 233 "limbaj.y"
                      {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n_class,declClass)==-1) {ifx
			strcpy(declClass[n],var);
			n_class++;
			addIntoTable(var,"string","inside class",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1692 "y.tab.c"
    break;

  case 44: /* param: INT ID  */
#line 249 "limbaj.y"
               {
		strcpy(var,(yyvsp[0].strval)); 
		addParam(var,"int");
	}
#line 1701 "y.tab.c"
    break;

  case 45: /* param: BOOL ID  */
#line 253 "limbaj.y"
                  {
		strcpy(var,(yyvsp[0].strval)); 
		addParam(var,"bool");
	}
#line 1710 "y.tab.c"
    break;

  case 46: /* param: CHAR ID  */
#line 257 "limbaj.y"
                  {
		strcpy(var,(yyvsp[0].strval)); 
		addParam(var,"string");
	}
#line 1719 "y.tab.c"
    break;

  case 53: /* statement: EVAL '(' aexp ')' ';'  */
#line 275 "limbaj.y"
                                {
			printf("Eval= %d\n",(yyvsp[-2].intval));
	}
#line 1727 "y.tab.c"
    break;

  case 54: /* statement: INT ID ';'  */
#line 278 "limbaj.y"
                     {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n,decl)==-1) {
			strcpy(decl[n],var);
			n++;
			addIntoTable(var,"int","local",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1742 "y.tab.c"
    break;

  case 55: /* statement: BOOL ID ';'  */
#line 288 "limbaj.y"
                      {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n,decl)==-1) {
			strcpy(decl[n],var);
			n++;
			addIntoTable(var,"bool","local",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1757 "y.tab.c"
    break;

  case 56: /* statement: FLOAT ID ';'  */
#line 298 "limbaj.y"
                       {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n,decl)==-1) {
			strcpy(decl[n],var);
			n++;
			addIntoTable(var,"float","local",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1772 "y.tab.c"
    break;

  case 57: /* statement: CHAR ID ';'  */
#line 308 "limbaj.y"
                      {
		strcpy(var,(yyvsp[-1].strval));
		if (cauta(var,n,decl)==-1) {
			strcpy(decl[n],var);
			n++;
			addIntoTable(var,"string","local",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
#line 1787 "y.tab.c"
    break;

  case 69: /* assignment: ID ASSIGN_STR NR  */
#line 333 "limbaj.y"
                           {
			yyerror("Nu poti atribui unei variabile de tip string un int!");
	}
#line 1795 "y.tab.c"
    break;

  case 70: /* assignment: ID ASSIGN STRING  */
#line 336 "limbaj.y"
                           {
			yyerror("Nu poti atribui unei variabile de tip int un string!");
	}
#line 1803 "y.tab.c"
    break;

  case 71: /* assign_str: ID ASSIGN_STR STRING  */
#line 341 "limbaj.y"
                                  {
				strcpy(var,(yyvsp[-2].strval));
				if (cauta(var,n,decl)==-1 && cauta(var,n_global,declGlobal)==-1) 
					yyerror("Nu poti atribui valoare unei variabile nedeclarate!");	
				else {
					strcpy(valStr,(yyvsp[0].strval));
					k_str = cauta(var,n,decl) + 1;
					strcpy(valoriStr[k_str],valStr);
					addValueToStrings(var,valStr);
				}
				
			}
#line 1820 "y.tab.c"
    break;

  case 72: /* assign_str: ID ASSIGN_STR ID  */
#line 353 "limbaj.y"
                           { 
			strcpy(var,(yyvsp[-2].strval));
			strcpy(aux,(yyvsp[0].strval));
			int poz1 = cauta(aux,n,decl);
			int poz2 = cauta(var,n,decl);
			if (valoriStr[poz1]!=NULL)
				strcpy(valoriStr[poz2],valoriStr[poz1]);
			addValueToStrings(var,valoriStr[poz2]);
		}
#line 1834 "y.tab.c"
    break;

  case 77: /* assign_exp: ID ASSIGN aexp  */
#line 370 "limbaj.y"
                            {
			strcpy(var,(yyvsp[-2].strval)); 
			value = (yyvsp[0].intval); 
			int poz = cauta(var,n,decl);
			if (poz == -1 && cauta(var,n_global,declGlobal)==-1)
				yyerror("Nu poti atribui valoare unei variabile nedeclarate!");
			else {
				valori[poz]=value;
				addValueToVar(var,value);
			}
		}
#line 1850 "y.tab.c"
    break;

  case 78: /* assign_exp: ID ASSIGN STRLEN '(' oper_str ')'  */
#line 381 "limbaj.y"
                                               {
					strcpy(var,(yyvsp[-5].strval));
					value = strlen((yyvsp[-1].strval)) - 2;
					addValueToVar(var,value);
		}
#line 1860 "y.tab.c"
    break;

  case 80: /* aexp: ID  */
#line 389 "limbaj.y"
             {
		strcpy(var,(yyvsp[0].strval));
		int poz=cauta(var,n,decl);
		(yyval.intval)=valori[poz];
	}
#line 1870 "y.tab.c"
    break;

  case 81: /* aexp: aexp PLUS aexp  */
#line 394 "limbaj.y"
                         {(yyval.intval)=(yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 1876 "y.tab.c"
    break;

  case 82: /* aexp: aexp MINUS aexp  */
#line 395 "limbaj.y"
                          {(yyval.intval)=(yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 1882 "y.tab.c"
    break;

  case 83: /* aexp: aexp DIV aexp  */
#line 396 "limbaj.y"
                        {(yyval.intval)=(yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 1888 "y.tab.c"
    break;

  case 84: /* aexp: aexp MOD aexp  */
#line 397 "limbaj.y"
                        {(yyval.intval)=(yyvsp[-2].intval) % (yyvsp[0].intval);}
#line 1894 "y.tab.c"
    break;

  case 85: /* aexp: aexp MUL aexp  */
#line 398 "limbaj.y"
                        {(yyval.intval)=(yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 1900 "y.tab.c"
    break;

  case 86: /* bexp: bexp AND bexp  */
#line 401 "limbaj.y"
                     { if ((yyvsp[-2].intval) && (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 1906 "y.tab.c"
    break;

  case 87: /* bexp: bexp OR bexp  */
#line 402 "limbaj.y"
                       { if ((yyvsp[-2].intval) || (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 1912 "y.tab.c"
    break;

  case 88: /* bexp: aexp GT aexp  */
#line 403 "limbaj.y"
                       { if ((yyvsp[-2].intval) > (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 1918 "y.tab.c"
    break;

  case 89: /* bexp: aexp LT aexp  */
#line 404 "limbaj.y"
                       { if ((yyvsp[-2].intval) < (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 1924 "y.tab.c"
    break;

  case 90: /* bexp: aexp GEQ aexp  */
#line 405 "limbaj.y"
                        { if ((yyvsp[-2].intval) >= (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 1930 "y.tab.c"
    break;

  case 91: /* bexp: aexp LEQ aexp  */
#line 406 "limbaj.y"
                        { if ((yyvsp[-2].intval) <= (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 1936 "y.tab.c"
    break;

  case 92: /* bexp: aexp EQ aexp  */
#line 407 "limbaj.y"
                       { if ((yyvsp[-2].intval) == (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 1942 "y.tab.c"
    break;

  case 93: /* bexp: aexp NEQ aexp  */
#line 408 "limbaj.y"
                        { if ((yyvsp[-2].intval) != (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 1948 "y.tab.c"
    break;


#line 1952 "y.tab.c"

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

#line 411 "limbaj.y"

void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}
void addParam(char* nume, char *tip) {
	FILE *fptr;
	fptr = fopen("symbol_table_function.txt", "a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.type, tip);
	fprintf(fptr,"- PARAMETRUL CU NUMELE %s DE TIPUL %s\n",obiect.nume,obiect.type);
	}
void addIntoTable(char* nume, char *tip, int val) {
	FILE *fptr;
	fptr = fopen("symbol_table.txt", "a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.type, tip);
	obiect.valoareVar = val;
        fprintf(fptr,"\nNUME %s - TIP %s \n", obiect.nume, obiect.type); 
	close(fptr);
}
void addValueToStrings(char *nume, char* valoare) {
	FILE *fptr;
	fptr = fopen("symbol_table.txt", "a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.valoareString,valoare);
	fprintf(fptr,"\nVARIABILA %s = VALOAREA %s\n",obiect.nume,obiect.valoareString);
	close(fptr);
}
void addValueToVar(char *nume, int valoare) {
	FILE *fptr;
	fptr = fopen("symbol_table.txt", "a+");
	strcpy(obiect.nume,nume);
	obiect.valoareVar = valoare;
	fprintf(fptr,"\nVARIABILA %s = VALOAREA %d\n",obiect.nume, obiect.valoareVar);
	close(fptr);
}
void addFunction(char *nume, char *tip) {
	FILE *fptr;
	fptr = fopen("symbol_table_function.txt", "a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.type,tip);
	fprintf(fptr,"\nFUNCTIA %s - TIP %s\n",obiect.nume,obiect.type);
	close(fptr);}
	
int cauta(char *nume, int n, char vector[][100]) {
	int i;
	int found = 0;
	for (i=0;i<=n;i++)
		if (strcmp(vector[i],nume)==0)
			found=1;
	 if (found ==0) return -1;
		else return i;
}

int main(int argc, char** argv){
	yyin=fopen(argv[1],"r");
	yyparse();
} 










