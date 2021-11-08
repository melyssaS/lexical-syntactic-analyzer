%{
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern FILE * yyin;
extern FILE * result;
extern char *yytext;
int errores = 0;
void yyerror(const char *s);
int yylex();
void disp();
void add(int dato, int pos);
int error_pos[100];
int indice = 0;
%}
%locations
%start linea
%token STRING ID INT REAL BOOLEAN
%token IFELSE FOR WHILE DOUBLE INTW STRINGW CHARNEW PUBLIC CLASS STATIC VOID CHAR IF ELSE
%token COMMENT
%token SUMSUM MENMEN SUMIGUAL MENIGUAL MULTIGUAL DIVIGUAL IGUALIGUAL MENORIGUAL MAYORIGUAL
%token DIFF NOIGUAL YY OO NOT MAYOR MENOR
%token MULT SUM MEN DIV IGUAL MOD
%token PAper PCier CAper CCier LAper LCier
%token PComa 
%right SALTOLINEA
%%

linea: 
	|  linea SALTOLINEA
	|  linea PUBLIC CLASS ID LAper linea LCier
	|  linea PUBLIC STATIC VOID ID PAper STRINGW CAper CCier ID PCier LAper linea LCier	{fprintf(result,"Public Static Found");}
	|  linea asignacion
	;
asignacion: 
%%
int main()
{	yyin=fopen("prueba.java","r");
	result=fopen("Salida.txt","w");
	do {
		yyparse();
	} while(!feof(yyin));
	if(errores==0){
		fprintf(result, "\n No hubo ningun error sintactico.");
		fprintf(stderr, "No hubo ningun error sintactico.\n");
	}
	disp();
	fprintf(result,"\n*****LISTA DE ERRORES SINTÁCTICOS***** \n");
	fprintf(result, "El número total de errores es de: %i.\n",errores);
	for (int i=0; i<indice; i++){
		fprintf(result, "La línea %i tiene un error de tipo: syntax error\n",error_pos[i]);
	}

}
void yyerror(const char *s) 
{
	errores++;
	if(strcmp(yytext,"\n")==0){
		fprintf(stderr, "\n La línea %d tiene un error de tipo: %s\n",(yylineno-1),s);
	}
	fprintf(stderr, "La línea %d tiene un error de tipo: %s\n",yylineno,s);
	add(yylineno,indice);
	indice++;
}
void add(int dato, int pos){
		error_pos[pos] = dato;
}

