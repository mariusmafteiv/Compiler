%{
#include <stdio.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"void" {return VOID;}
("const ")?"int" {return INT;}
"bool" {return BOOL;}
("const ")?"char" {return CHAR;}
("const ")?"float" {return FLOAT;}
"class" {return CLASS;}
"Eval" {return EVAL;}
"private"|"protected"|"public" {return ACCESS;}
"{" {return BGIN;}
"}" {return END;}
"+" {return PLUS;}
"-" {return MINUS;}
"/" {return DIV;}
"*" {return MUL;}
"%" {return MOD;}
"while" {return WHILE;}
"for" {return FOR;}
"if" {return IF;}
"else" {return ELSE;}
"return" {return RETURN;}
"strlen" {return STRLEN;}
[0-9]+"."[0-9]+ {return VAL_FLOAT;}
[_a-zA-Z][_a-zA-Z0-9]* {yylval.strval=strdup(yytext);return ID;}
["][.a-zA-Z0-9 ]+["] {yylval.strval=strdup(yytext);return STRING;}
[0-9]+ {yylval.intval=atoi(yytext);return NR;}
[_a-zA-Z][_a-zA-Z0-9]*("["[0-9]+"]") {return ARRAY;}
":=" {return ASSIGN;}
"::=" {return ASSIGN_STR;}
"&&" {return AND;}
"||" {return OR;}
">" {return GT;}
"<" {return LT;}
"<=" {return LEQ;}
">=" {return GEQ;}
"==" {return EQ;}
"!=" {return NEQ;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}


