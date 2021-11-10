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
%token STRING ID INT REAL BOOLEAN CHARID 
%token IFELSE FOR WHILE DOUBLE FLOAT INTW STRINGW BOOLEANW CHARNEW PUBLIC CLASS STATIC VOID CHAR IF ELSE NEW DO
%token COMMENT
%token SUMSUM MENMEN SUMIGUAL MENIGUAL MULTIGUAL DIVIGUAL IGUALIGUAL MENORIGUAL MAYORIGUAL
%token DIFF NOIGUAL YY OO NOT MAYOR MENOR
%token MULT SUM MEN DIV IGUAL MOD
%token PAper PCier CAper CCier LAper LCier
%token PComa COMA PUNTOS
%right SALTOLINEA
%%

linea: 
	|  linea SALTOLINEA
	|  linea PUBLIC CLASS ID LAper linea LCier 	
	|  linea PUBLIC STATIC VOID ID PAper STRINGW CAper CCier ID PCier LAper linea LCier	
	|  linea asignacion
	|  linea COMMENT
	|  linea error SALTOLINEA
	;
asignacion: 
	generico
	|asigEntera
	|asigReal
	|asigFloat
	|asigChar
	|asigCadena
	|asigBool
	|asigVector PComa
	|asigMatrix PComa
	|asigCompuesta
	;

interOp: interOp aritOper interOp
	| PAper interOp PCier
	| types
	;
types: INT|REAL|STRING|CHARID| BOOLEAN|ID;
asigEntera: INTW ID PComa
	| INTW ID IGUAL ID PComa
	| INTW ID IGUAL INT PComa
	| INTW ID IGUAL interOp PComa
	;
asigReal: DOUBLE ID PComa
	| DOUBLE ID IGUAL ID PComa
	| DOUBLE ID IGUAL REAL PComa
	| DOUBLE ID IGUAL interOp PComa
	;
asigFloat: FLOAT ID PComa
	| FLOAT ID IGUAL ID PComa
	| FLOAT ID IGUAL REAL PComa
	| FLOAT ID IGUAL interOp PComa
	;
	;
asigChar: CHAR ID PComa
	| CHAR ID IGUAL ID PComa
	| CHAR ID IGUAL CHARID PComa
	;
asigCadena: STRINGW ID PComa
	| STRINGW ID IGUAL ID PComa
	| STRINGW ID IGUAL STRING PComa
	| STRINGW ID IGUAL concatenacion PComa
	;

asigVector: operador CAper CCier ID
	  | asigVector IGUAL NEW operador CAper variableArreglo CCier
	  | asigVector IGUAL LAper variablesPosibles LCier
	  ;

asigMatrix: operador CAper CCier CAper CCier ID
      | asigMatrix IGUAL NEW operador CAper variableArreglo CCier CAper variableArreglo CCier
	  | asigMatrix IGUAL LAper llaves LCier
	  ;

llaves: LAper variablesPosibles LCier
	  | llaves COMA llaves
	  ;

variablesPosibles: INT 
		| DOUBLE 
		| FLOAT	
		| ID 
		| BOOLEAN 
		| STRING 
		| CHAR
        | variablesPosibles COMA variablesPosibles
	   ;

variableArreglo: INT| ID ;

concatenacion: concatenacion SUM concatenacion
	| STRING
	| ID
	;	
asigBool: BOOLEANW ID PComa
	| BOOLEANW ID IGUAL ID PComa
	| BOOLEANW ID IGUAL BOOLEAN PComa
	;
operador: INTW
	|BOOLEANW	
	|DOUBLE
	|FLOAT
	|STRINGW
	|CHAR
	;
aritOper: SUM
	|MEN
	|MULT
	|DIV
	|MOD
	;
generico: ID IGUAL interOp PComa
	| ID IGUAL CHAR PComa
	| ID IGUAL BOOLEAN PComa
	| ID IGUAL STRING PComa
	| ID IGUAL REAL PComa
	| ID IGUAL concatenacion PComa
	| ID dobleOper PComa
	| ID especialOper opLog PComa
	;
dobleOper:SUMSUM
	|MENMEN
	;

especialOper: SUMIGUAL
	|MENIGUAL
	| MULTIGUAL
	| DIVIGUAL
	;

opLogicoComparacion:IGUALIGUAL
				   |MENORIGUAL 
				   |MAYORIGUAL
				   |DIFF
				   |MAYOR 
				   |MENOR
				   |NOIGUAL
				   ;
operadorLogico: YY 
				| OO
					  ;



condicion_simple: opLog opLogicoComparacion opLog
				| PAper op opLogicoComparacion opLog PCier
				;	
opLog: ID
	|STRING
	|INT
	|REAL
	|BOOLEAN
	|CHARID	
	;
condicion: condicion operadorLogico condicion
		     | PAper condicion PCier
			 | NOT PAper condicion PCier
			 | condicion_simple
			 ;	

	

if:  IF PAper condicion PCier LAper linea LCier
  |  if ELSE LAper linea LCier
  |  elseif ELSE LAper linea  LCier
  ;
elseif: IFELSE PAper condicion PCier LAper linea LCier
  |  IFELSE ELSE LAper linea LCier
  ;	


statement1: INTW ID IGUAL INT
		  | ID IGUAL INT
		  | ID
		  ;
statement3: ID dobleOper
		  | ID especialOper opLog
		  | ID IGUAL interOp
		  ;

for: FOR PAper statement1 PComa condicion PComa statement3 PCier LAper linea LCier
   | FOR PAper operador ID PUNTOS ID PCier LAper linea LCier
   ;
bucles: while 
      | dowhile
	  | for
	  ;

while: WHILE PAper condicion PCier LAper linea LCier
     ;

dowhile: DO LAper linea LCier WHILE PAper condicion PCier PComa;

op: INT
    |ID
    |REAL
    |arregloDeclar
    ;
op_der: INT
    |REAL
    |ID
    |BOOLEAN
    |arregloDeclar
    ;
op_all:
    REAL
    |INT
    |ID
    |BOOLEAN
    |arregloDeclar
    |STRING
    |CHARID
    ;


arregloDeclar: ID CAper variableArreglo CCier
    | variableArreglo CAper variableArreglo CCier
    ;
exp_com: interOp aritOper interOp
    | PAper interOp PCier
    | op_all
    ;
repet: ID IGUAL exp_com
    | ID
    | repet COMA repet
    ;
asigCompuesta: INTW repet PComa
    |DOUBLE repet PComa
	|FLOAT repet PComa
    ;
%%
int main()
{	yyin=fopen("prueba.java","r");
	result=fopen("saliday.txt","w");
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
	fprintf(stderr, "La línea %d tiene un error de tipo: %s\n",yylineno,s);
	add(yylineno,indice);
	indice++;
}
void add(int dato, int pos){
		error_pos[pos] = dato;
}

