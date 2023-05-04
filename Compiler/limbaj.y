%{
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
%}

%union {
int intval;
char *strval;
}

%token <strval>ID INT BOOL FLOAT BGIN END ASSIGN CLASS ACCESS PLUS MINUS DIV MUL MOD GT LT GEQ LEQ EQ NEQ AND OR ARRAY STRLEN ASSIGN_STR CHAR 
%token IF ELSE WHILE FOR ASSIGN_BOOL VAL_FLOAT EVAL RETURN VOID
%token <intval>NR
%token <strval>STRING
%type <strval>oper_str
%type <intval> aexp 
%type <intval> bexp
%type <strval> bloc
%left PLUS MINUS
%left DIV MUL MOD
%left GT LT GEQ LEQ EQ NEQ AND OR 
%start progr
%%
progr: declaratii bloc {printf("program corect sintactic\n");}
     | declaratii {printf("program corect sintactic\n");}
     ;
	
declaratii :
	    declaratie
	   | declaratii declaratie
	   ;
	   
declaratie : INT ID ';' {
			strcpy(var,$2);
			if (cauta(var,n_global,declGlobal) == -1) {
					strcpy(declGlobal[n],var);
					n_global++;
					addIntoTable(var,"int","global",-1);
			}
			else   
				yyerror("Variabila deja declarata!");	   
		}
           | BOOL ID ';' {
			strcpy(var,$2);
			if (cauta(var,n_global,declGlobal)==-1) {
				strcpy(declGlobal[n],var);
				n_global++;
				addIntoTable(var,"bool","global",-1);
			}
			else   
				yyerror("Variabila deja declarata!");	   
		}
	   | FLOAT ID ';' {
			strcpy(var,$2);
			if (cauta(var,n_global,declGlobal)==-1) {
				strcpy(declGlobal[n],var);
				n_global++;
				addIntoTable(var,"float","global",-1);
			}
			else   
				yyerror("Variabila deja declarata!");	   
		}
	   | CHAR ID ';' {
			strcpy(var,$2);
			if (cauta(var,n_global,declGlobal)==-1) {
				strcpy(declGlobal[n],var);
				n_global++;
				addIntoTable(var,"string","global",-1);
				}
			else   
				yyerror("Variabila deja declarata!");	   
		}
	   | CLASS ID blocClass
           | INT ARRAY ';' 
           | decl_functie 
           ;
decl_functie : INT ID '(' lista_param ')' ';' {
					strcpy(var,$2); 
					addFunction(var,"int");
				}
	   | INT ID '(' lista_param ')' blocFunctie  
{
					strcpy(var,$2);
					addFunction(var,"int");
				}
           | INT ID '(' ')' ';'
{
					strcpy(var,$2);
					addFunction(var,"int");
				}
           | VOID ID '(' ')' ';'
                {
					strcpy(var,$2);
					addFunction(var,"void");
				}
           | VOID ID '(' lista_param ')' ';' {
					strcpy(var,$2);
					addFunction(var,"void");
				}
           | VOID ID '(' ')' blocFunctieVoid 
{
					strcpy(var,$2);
					addFunction(var,"void");
				}
           | BOOL ID '(' lista_param ')' ';' {
					strcpy(var,$2); 
					addFunction(var,"bool");
				}
           ;


blocFunctie : BGIN list_functie RETURN ID ';' END 
          ;
blocFunctieVoid : BGIN list_functie END 
	   ;	
list_functie :	statement_functie 
	| list_functie statement_functie
	;
statement_functie : ID '(' lista_apel ')' ';'
	| assignment ';'
	| stmt
	| EVAL '(' aexp ')' ';'
	| INT ID ';' {
		strcpy(var,$2);
		if (cauta(var,n_functie,declFunctie)==-1) {
			strcpy(declFunctie[n],var);
			n_functie++;
			addIntoTable(var,"int","inside function",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
        | BOOL ID ';' {
		strcpy(var,$2);
		if (cauta(var,n_functie,declFunctie)==-1) {
			strcpy(declFunctie[n],var);
			n_functie++;
			addIntoTable(var,"bool","inside function",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
	| FLOAT ID ';' {
		strcpy(var,$2);
		if (cauta(var,n_functie,declFunctie)==-1) {
			strcpy(declFunctie[n],var);
			n_functie++;
			addIntoTable(var,"float","inside function",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
	| CHAR ID ';' {
		strcpy(var,$2);
		if (cauta(var,n_functie,declFunctie)==-1) {
			strcpy(declFunctie[n],var);
			n_functie++;
			addIntoTable(var,"string","inside function",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}	
        | INT ARRAY ';'
	;


blocClass : BGIN listClass END
		;
listClass : ACCESS ':' listClass
	   | statementClass 
	   | statementClass listClass	 
	   ;
statementClass :  INT ID ';' {
		strcpy(var,$2);
		if (cauta(var,n_class,declClass)==-1) {
			strcpy(declClass[n],var);
			n_class++;
			addIntoTable(var,"int","inside class",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
        | BOOL ID ';' {
		strcpy(var,$2);
		if (cauta(var,n_class,declClass)==-1) {
			strcpy(declClass[n],var);
			n_class++;
			addIntoTable(var,"bool","inside class",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
	| FLOAT ID ';' {
		strcpy(var,$2);
		if (cauta(var,n_class,declClass)==-1) {
			strcpy(declClass[n],var);
			n_class++;
			addIntoTable(var,"float","inside class",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
	| CHAR ID ';' {
		strcpy(var,$2);
		if (cauta(var,n_class,declClass)==-1) {ifx
			strcpy(declClass[n],var);
			n_class++;
			addIntoTable(var,"string","inside class",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	} 
	| INT ARRAY ';'
	;
	
lista_param : param 
            | lista_param ','  param 
            ;            
param : INT ID {
		strcpy(var,$2); 
		addParam(var,"int");
	}
	| BOOL ID {
		strcpy(var,$2); 
		addParam(var,"bool");
	}
	| CHAR ID {
		strcpy(var,$2); 
		addParam(var,"string");
	}
	;


/* bloc */
bloc : BGIN list END 
     ;
/* lista instructiuni */
list :	statement 
	| list statement
     ;
/* instructiune */
statement:  ID '(' lista_apel ')' ';'
	| assignment ';'
	| stmt
	| EVAL '(' aexp ')' ';' {
			printf("Eval= %d\n",$3);
	}
	| INT ID ';' {
		strcpy(var,$2);
		if (cauta(var,n,decl)==-1) {
			strcpy(decl[n],var);
			n++;
			addIntoTable(var,"int","local",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
        | BOOL ID ';' {
		strcpy(var,$2);
		if (cauta(var,n,decl)==-1) {
			strcpy(decl[n],var);
			n++;
			addIntoTable(var,"bool","local",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
	| FLOAT ID ';' {
		strcpy(var,$2);
		if (cauta(var,n,decl)==-1) {
			strcpy(decl[n],var);
			n++;
			addIntoTable(var,"float","local",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
	| CHAR ID ';' {
		strcpy(var,$2);
		if (cauta(var,n,decl)==-1) {
			strcpy(decl[n],var);
			n++;
			addIntoTable(var,"string","local",-1);
			}
		else   
			yyerror("Variabila deja declarata!");	   
	}
        | INT ARRAY ';' 
	;
stmt:	WHILE '(' bexp ')' bloc 
        | FOR '(' ID ASSIGN aexp ';' bexp ';' ID ASSIGN aexp ')' bloc 
        | IF '(' bexp ')' bloc  
        | IF '(' bexp ')' blocfalse 
        | IF '(' bexp ')' bloc ELSE bloc
        ;

blocfalse : 
	;
assignment : assign_exp 
	| assign_str 
	| ID ASSIGN_BOOL bexp
	| ID ASSIGN VAL_FLOAT
	| ID ASSIGN_STR NR {
			yyerror("Nu poti atribui unei variabile de tip string un int!");
	}
	| ID ASSIGN STRING {
			yyerror("Nu poti atribui unei variabile de tip int un string!");
	}
	; 
	
assign_str : ID ASSIGN_STR STRING {
				strcpy(var,$1);
				if (cauta(var,n,decl)==-1 && cauta(var,n_global,declGlobal)==-1) 
					yyerror("Nu poti atribui valoare unei variabile nedeclarate!");	
				else {
					strcpy(valStr,$3);
					k_str = cauta(var,n,decl) + 1;
					strcpy(valoriStr[k_str],valStr);
					addValueToStrings(var,valStr);
				}
				
			}	
	| ID ASSIGN_STR ID { 
			strcpy(var,$1);
			strcpy(aux,$3);
			int poz1 = cauta(aux,n,decl);
			int poz2 = cauta(var,n,decl);
			if (valoriStr[poz1]!=NULL)
				strcpy(valoriStr[poz2],valoriStr[poz1]);
			addValueToStrings(var,valoriStr[poz2]);
		}	
	 ;
oper_str : STRING
	 | ID
	 ;

lista_apel : NR
           | lista_apel ',' NR
           ;
assign_exp : ID ASSIGN aexp {
			strcpy(var,$1); 
			value = $3; 
			int poz = cauta(var,n,decl);
			if (poz == -1 && cauta(var,n_global,declGlobal)==-1)
				yyerror("Nu poti atribui valoare unei variabile nedeclarate!");
			else {
				valori[poz]=value;
				addValueToVar(var,value);
			}
		}
	   | ID ASSIGN STRLEN '(' oper_str ')' {
					strcpy(var,$1);
					value = strlen($5) - 2;
					addValueToVar(var,value);
		}
	;

aexp :  NR
	| ID {
		strcpy(var,$1);
		int poz=cauta(var,n,decl);
		$$=valori[poz];
	}      
	| aexp PLUS aexp {$$=$1 + $3;}
	| aexp MINUS aexp {$$=$1 - $3;}
	| aexp DIV aexp {$$=$1 / $3;}
	| aexp MOD aexp {$$=$1 % $3;}
	| aexp MUL aexp {$$=$1 * $3;}
	;

bexp : bexp AND bexp { if ($1 && $3) $$=1; else $$=0;}
	| bexp OR bexp { if ($1 || $3) $$=1; else $$=0;}
	| aexp GT aexp { if ($1 > $3) $$=1; else $$=0;}
	| aexp LT aexp { if ($1 < $3) $$=1; else $$=0;}
	| aexp GEQ aexp { if ($1 >= $3) $$=1; else $$=0;}
	| aexp LEQ aexp { if ($1 <= $3) $$=1; else $$=0;}
	| aexp EQ aexp { if ($1 == $3) $$=1; else $$=0;}
	| aexp NEQ aexp { if ($1 != $3) $$=1; else $$=0;}
	;

%%
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










