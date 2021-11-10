%{
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern FILE * yyin;
extern FILE * yyout;
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
%start line
%token STATIC PUBLIC CLASS VOID NEW
%token VBLE
%token PARANTA PARANTC CORCHETEA CORCHETEC LLAVEA LLAVEC
%token OPASIGN
%token STRING INT FLOAT DOUBLE BOOLEAN CHAR
%token PCOMA DOSPUNTOS COMA
%token NUMENTERO NUMREAL VBLECHAR VBLECADENA VBLEBOOL
%token COMMENT
%token OPSUM OPRES OPMUL OPDIV OPMOD
%token MASMAS SUSTSUST MASASIG SUSTASIG PORASIG DIVASIG
%token IGUALIGUAL MENIGUAL MAYIGUAL DIFERENTE MAYOR MENOR
%token OPERY OPERO OPERN
%token IF ELSE IFELSE
%token FOR WHILE DO
%right NEWLINE
%token ERRORLEX
%%

line:
	| line NEWLINE	{fprintf(yyout,"AIUDAAAAAAA");}
	| line begin
    | line secondline  
    | line assignment
	| line error NEWLINE 
	| line COMMENT
	| line if
	| line bucles
	;

begin: PUBLIC CLASS VBLE LLAVEA line LLAVEC;

secondline: PUBLIC STATIC VOID VBLE PARANTA STRING CORCHETEA CORCHETEC VBLE PARANTC LLAVEA line LLAVEC;

assignment: assi_sindatatype 
		  |	intType
		  | floatType
		  | charType
		  | boolType
		  | stringType
		  | doubleType 
		  | vector PCOMA
		  | matrix PCOMA
		  | asig_compuesta
		  ; 

intType: INT VBLE PCOMA 
	   | INT VBLE OPASIGN VBLE PCOMA 
	   | INT VBLE OPASIGN NUMENTERO PCOMA
	   | INT VBLE OPASIGN exp PCOMA
	   ;

floatType: FLOAT VBLE PCOMA 
		 | FLOAT VBLE OPASIGN VBLE PCOMA 
		 | FLOAT VBLE OPASIGN NUMREAL PCOMA
		 | FLOAT VBLE OPASIGN exp PCOMA
		 ;

charType: CHAR VBLE PCOMA 
		| CHAR VBLE OPASIGN VBLE PCOMA 
		| CHAR VBLE OPASIGN VBLECHAR PCOMA
		;

stringType: STRING VBLE PCOMA 
		  | STRING VBLE OPASIGN VBLE PCOMA 
		  | STRING VBLE OPASIGN VBLECADENA PCOMA
		  | STRING VBLE OPASIGN concate PCOMA
		  ;

boolType: BOOLEAN VBLE OPASIGN VBLE PCOMA
		| BOOLEAN VBLE OPASIGN VBLEBOOL PCOMA
		| BOOLEAN VBLE PCOMA
		;

assi_sindatatype:VBLE OPASIGN exp PCOMA
			   | VBLE OPASIGN VBLECHAR PCOMA
			   | VBLE OPASIGN VBLEBOOL PCOMA
			   | VBLE OPASIGN VBLECADENA PCOMA
			   | VBLE OPASIGN concate PCOMA
			   | VBLE opAritmetDobles PCOMA
			   | VBLE opAritmetespecial op PCOMA
			   ;

concate: concate OPSUM concate 
       | VBLECADENA
	   | VBLE
	   ;

doubleType: DOUBLE VBLE PCOMA 
	      | DOUBLE VBLE OPASIGN VBLE PCOMA 
		  | DOUBLE VBLE OPASIGN NUMREAL PCOMA
		  | DOUBLE VBLE OPASIGN exp PCOMA
		  ;

opAritmet: OPSUM 
		  |OPRES 
	      |OPMUL
		  |OPDIV
		  |OPMOD
		  ;

opAritmetDobles: MASMAS
		       |SUSTSUST
			   ;

opAritmetespecial: MASASIG 
				 | SUSTASIG 
				 | PORASIG 
				 | DIVASIG; 

exp: exp opAritmet exp 
   | PARANTA exp PARANTC 
   | op
   ;
op: NUMENTERO 
  | NUMREAL
  | VBLE
  |	vbleArray
  ;
op_der: NUMENTERO 
  | NUMREAL
  | VBLE
  | VBLEBOOL
  | vbleArray
  ;

opAll: NUMENTERO 
  | NUMREAL
  | VBLE
  | VBLEBOOL
  | vbleArray
  | VBLECADENA
  | VBLECHAR
  ; 
exp_com: exp opAritmet exp 
   | PARANTA exp PARANTC 
   | opAll
   ;
repet: VBLE OPASIGN exp_com
	 | VBLE
	 | repet COMA repet
	 ;

asig_compuesta: INT repet PCOMA
			  | FLOAT repet PCOMA
			  ;

op_condicion_simple: IGUALIGUAL
				   |MENIGUAL 
				   |MAYIGUAL 
				   |DIFERENTE 
				   |MAYOR 
				   |MENOR
				   ;
op_condicion_compuesta: OPERY 
					  |OPERO 
					  ;

condicion_simple: op op_condicion_simple op_der
				| PARANTA op op_condicion_simple op_der PARANTC
				;

con_compuesta: con_compuesta op_condicion_compuesta con_compuesta
		     | PARANTA con_compuesta PARANTC 
			 | OPERN PARANTA con_compuesta PARANTC 
			 | condicion_simple
			 ;

if:  IF PARANTA con_compuesta PARANTC LLAVEA line LLAVEC
  |  if ELSE LLAVEA line LLAVEC
  |  elseif ELSE LLAVEA line LLAVEC
  ;
elseif: IFELSE PARANTA con_compuesta PARANTC LLAVEA line LLAVEC
  |  IFELSE ELSE LLAVEA line LLAVEC
  ;	
bucles: while 
      | dowhile
	  | for
	  ;

while: WHILE PARANTA con_compuesta PARANTC LLAVEA line LLAVEC 
     ;

dowhile: DO LLAVEA line LLAVEC WHILE PARANTA con_compuesta PARANTC PCOMA
       ;
dataType: INT 
	    | BOOLEAN 
		| FLOAT 
		| DOUBLE 
		| STRING 
		| CHAR
        ;

statement1: dataType VBLE OPASIGN op
		  | VBLE OPASIGN op
		  ;
statement3: VBLE opAritmetDobles
		  | VBLE opAritmetespecial op
		  | VBLE OPASIGN exp
		  ;


for: FOR PARANTA statement1 PCOMA con_compuesta PCOMA statement3 PARANTC LLAVEA line LLAVEC 
   | FOR PARANTA dataType VBLE DOSPUNTOS VBLE PARANTC LLAVEA line LLAVEC 
   ;

vbleAll: NUMENTERO | NUMREAL | VBLE | VBLEBOOL | VBLECADENA | VBLECHAR
       | vbleAll COMA vbleAll
	   ;


vector: dataType CORCHETEA CORCHETEC VBLE
	  | vector OPASIGN NEW dataType CORCHETEA opvbleArray CORCHETEC
	  | vector OPASIGN LLAVEA vbleAll LLAVEC
	  ;

llaves: LLAVEA vbleAll LLAVEC
	  | llaves COMA llaves
	  ;

matrix: dataType CORCHETEA CORCHETEC CORCHETEA CORCHETEC VBLE
      | matrix OPASIGN NEW dataType CORCHETEA opvbleArray CORCHETEC CORCHETEA opvbleArray CORCHETEC
	  | matrix OPASIGN LLAVEA llaves LLAVEC
	  ;

opvbleArray: NUMENTERO| VBLE ;

vbleArray: VBLE CORCHETEA opvbleArray CORCHETEC
	     | vbleArray CORCHETEA opvbleArray CORCHETEC
		 ;
%%
int main()
{	

	yyin=fopen("prueba.java","r");
	yyout=fopen("Salida.txt","w");
	do {
	
		yyparse();

	} while(!feof(yyin));

	if(errores==0){
		fprintf(yyout, "\n No hubo ningun error sintactico.");
		fprintf(stderr, "No hubo ningun error sintactico.\n");
	}

	disp();

	fprintf(yyout,"\n*****LISTA DE ERRORES SINTÁCTICOS***** \n");
	fprintf(yyout, "El número total de errores es de: %i.\n",errores);
	for (int i=0; i<indice; i++){
		fprintf(yyout, "La línea %i tiene un error de tipo: syntax error\n",error_pos[i]);
	}

	
}
void yyerror(const char *s) 
{
	errores++;
	if(strcmp(yytext,"\n")==0){
		//fprintf(yyout, "\n La línea %d tiene un error de tipo: %s\n",(yylineno-1),s);
		fprintf(stderr, "\n La línea %d tiene un error de tipo: %s\n",(yylineno-1),s);
	}
		//fprintf(yyout, "\n La línea %d tiene un error de tipo: %s\n",yylineno,s);
	fprintf(stderr, "La línea %d tiene un error de tipo: %s\n",yylineno,s);
	add(yylineno,indice);
	indice++;
}
void add(int dato, int pos){
		error_pos[pos] = dato;
}

