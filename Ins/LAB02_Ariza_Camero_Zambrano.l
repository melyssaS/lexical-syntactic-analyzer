%{
#include <string.h>
#include "y.tab.h"

char* id[1000];
int id_cont = 0;
int sw = 0;
void append(char* str);
int error = 0;

char* er[1000];
void error_search(char* str);
int pointer = 0;
void disp();
%}

%option yylineno
DIGITO [0-9]
vble [a-zA-Z][_a-zA-A0-9]*
ESPECIAL ("+"|"-"|"*"|"**"|"/"|"//"|"%"|"?"|"%"|"<"|"<<"|">"|">>"|"."|";"|":"|"&")
digitos {DIGITO}+
partent {digitos}
partedec ("."{digitos})?
parteexp (e("+"|"-")?{digitos})?
real {partent}{partedec}{parteexp}
vblechar \'[_a-zA-A0-9]*\'
cadena \".*\"

letra [a-zA-Z]
vblee    {DIGITO}({letra}|{DIGITO})*
partedece (","{digitos})?
reale {partent}{partedec}{parteexp}

mistake (.|{vblee}|{reale})
%%
"-"?{DIGITO}+			{fprintf(yyout,"Cte-ent= %s, ",yytext);
	                     return NUMENTERO;}
{real}					{fprintf(yyout,"Cte-real= %s, ",yytext);
	                     return NUMREAL;}
{vblechar} 				{fprintf(yyout,"Cte-Char= %s, ",yytext);
	                     return VBLECHAR;}
{cadena}    			{fprintf(yyout,"Cte-cadena= %s, ",yytext);
	                     return VBLECADENA;}
("true"|"false")        {fprintf(yyout,"Cte-booleana= %s, ",yytext);
	                     return VBLEBOOL;}
"//".*					{fprintf(yyout,"Comentario= %s ",yytext);
	                     return COMMENT;}
"static"    			{fprintf(yyout,"STATIC ");
	                     return STATIC;}
"public" 				{fprintf(yyout,"PUBLIC ");
	                     return PUBLIC;}
"class"     			{fprintf(yyout,"CLASS ");
						 return CLASS;}
"void"      			{fprintf(yyout,"VOID ");
	                     return VOID;}
"if"					{fprintf(yyout,"IF ");
	                     return IF;}
"else"					{fprintf(yyout,"ELSE ");
	                     return ELSE;}
"else if"				{fprintf(yyout,"ELSE-IF");
						 return IFELSE;}
"for"                   {fprintf(yyout,"FOR ");
	                     return FOR;}
"while"					{fprintf(yyout,"WHILE ");
	                     return WHILE;}
"do"					{fprintf(yyout,"DO ");
	                     return DO;}
"new"					{fprintf(yyout,"NEW ");
	                     return NEW;}

"++"					{fprintf(yyout,"Op-MasMas= %s ",yytext);
	                     return MASMAS;}
"--" 					{fprintf(yyout,"Op-SustSust= %s ",yytext);
	                     return SUSTSUST;}
"+="					{fprintf(yyout,"Op-MasAsig= %s ",yytext);
	                     return MASASIG;}
"-="					{fprintf(yyout,"Op-SustAsig= %s ",yytext);
	                     return SUSTASIG;}
"*="					{fprintf(yyout,"Op-PorAsig= %s ",yytext);
	                     return PORASIG;}
"/="					{fprintf(yyout,"Op-DivAsig= %s ",yytext);
	                     return DIVASIG;}

"{"         			{fprintf(yyout,"Llave-a= %s ",yytext);
	                     return LLAVEA;}
"}"         			{fprintf(yyout,"Llave-c= %s ",yytext);
	                     return LLAVEC;}
"(" 					{fprintf(yyout,"Parent-a= %s ",yytext);
	                     return PARANTA;}
")" 					{fprintf(yyout,"Parent-c= %s ",yytext);
	                     return PARANTC;}
"[" 					{fprintf(yyout,"Corchete-a= %s ",yytext);
	                     return CORCHETEA;}
"]" 					{fprintf(yyout,"Corchete-c= %s ",yytext);
	                     return CORCHETEC;}
";" 					{fprintf(yyout,"Punto-coma= %s ",yytext);
	                     return PCOMA;}
":"                     {fprintf(yyout,"Dos-puntos= %s ",yytext);
	                     return DOSPUNTOS;}
","						{fprintf(yyout,"Coma= %s ",yytext);
	                     return COMA;}
"=" 					{fprintf(yyout,"Op-asign= %s ",yytext);
	                     return OPASIGN;}
"+"         			{fprintf(yyout,"Op-sum= %s ",yytext);
	                     return OPSUM;}
"-"         			{fprintf(yyout,"Op-sust= %s ",yytext);
	                     return OPRES;}
"*"         			{fprintf(yyout,"Op-mult= %s ",yytext);
	                     return OPMUL;}
"/"         			{fprintf(yyout,"Op-div= %s ",yytext);
	                     return OPDIV;}
"%"                     {fprintf(yyout,"Op-mod= %s ",yytext);
	                     return OPMOD;}

"=="					{fprintf(yyout,"Igual= %s ",yytext);
	                     return IGUALIGUAL;}
"<="					{fprintf(yyout,"Menor-Igual= %s ",yytext);
	                     return MENIGUAL;}
">="					{fprintf(yyout,"Mayor-Igual= %s ",yytext);
	                     return MAYIGUAL;}
"!=" 				    {fprintf(yyout,"Diferente= %s ",yytext);
	                     return DIFERENTE;}
">"						{fprintf(yyout,"Mayor= %s ",yytext);
	                     return MAYOR;}
"<"						{fprintf(yyout,"Menor= %s ",yytext);
	                     return MENOR;}

"&&"					{fprintf(yyout,"Op-y= %s ",yytext);
	                     return OPERY;}
"||"                    {fprintf(yyout,"Op-o= %s ",yytext);
	                     return OPERO;}
"!"   				    {fprintf(yyout,"Op-no= %s ",yytext);
	                     return OPERN;}


"String"    			{fprintf(yyout,"STRING ");
	                     return STRING;}
"int"       			{fprintf(yyout,"INT ");
	                     return INT;}
"float"     			{fprintf(yyout,"FLOAT ");
	                     return FLOAT;}
"double"    			{fprintf(yyout,"DOUBLE ");
	                     return DOUBLE;}
"boolean"   			{fprintf(yyout,"BOOLEAN ");
	                     return BOOLEAN;}
"char"      			{fprintf(yyout,"CHAR ");
	                     return CHAR;}
"="{ESPECIAL}			{return ERRORLEX;}
\n						{fprintf(yyout,"\n");
	                     return NEWLINE;}
[ \t] 					{;}
{vble}+					{append(yytext);
	                     fprintf(yyout,"Id= %s, ",yytext);
						 return VBLE;}
{mistake} 			    {fprintf(yyout,"ERROR= %s ",yytext);
                         error_search(yytext);
                         error++;}

%%

int yywrap(void)
{	
	return 1;
}
void append(char* str)
{
    for (int i=0; i<id_cont; i++){
        if(strcmp(str,id[i]) == 0){
            sw=1;
        }
    }
    if(sw==0){
        //printf("identificador %s, con contador %i \n",str,id_cont);
        id[id_cont]=strdup(str);
        id_cont++;
    }
    sw=0;
}
void error_search(char* str)
{
    er[pointer]=strdup(str);
    pointer++;
    //printf("el error es: %s\n",str);
}
void disp(){
	fprintf(yyout,"********TABLA DE IDENTIFICADORES******** \n");
	fprintf(yyout,"Hay %i identificadores \n",id_cont);

	for (int i=0; i<id_cont; i++){
    fprintf(yyout,"Id= %s| ",id[i]);
	}

	fprintf(yyout,"\n");

	if(pointer>0){
    fprintf(yyout,"********LISTA DE ERRORES LÉXICOS******** \n");
    fprintf(yyout,"El total de errores léxicos es igual a: %i\n",error);
    for (int i=0; i<pointer; i++){
        fprintf(yyout,"ERROR= %s\n",er[i]);
    }
}
}
