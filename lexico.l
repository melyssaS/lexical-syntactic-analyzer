%option noyywrap
%option nodefault
%{
FILE *result;
#include <ctype.h>
#include<stdio.h>
#include <string.h>
#include "y.tab.h"
int chars = 0;
int words = 0;
int lines = 0;
int idCount=0;
int errorCount=0;
char idChar[100][100];
char errors[100][100];

void toUpperCase(char word[]){
  for(int i=0;word[i]!='\0';i++){
    if(word[i]>='a' && word[i]<= 'z'){
        fprintf(result,"%c", word[i]-32);
    }else{
        fprintf(result,"%c",word[i]);
    }
  }
  fprintf(result," ");
}

void setIdentifier(char word[]){
  int i=0; 
  int sw=0;
  while(i<idCount && sw==0){
    if(strcmp(word,idChar[i])==0){    
      sw=1;
    }
    i++;
  }
  if(sw==0){
    strcpy(idChar[idCount],word);
    idCount++;
  }
  fprintf(result,"Id= %s, ", word); 
}

void printIdentifier(){
  for(int i=0; i<idCount;i++){
    if(i==0){
      fprintf(result,"Id=%s;",idChar[i]);
    }else if(i==idCount-1){
      fprintf(result,"Id=%s",idChar[i]);
    }else{
      fprintf(result," Id=%s;",idChar[i]);
    }
}}

void setError(char word[]){
  strcpy(errors[errorCount],word);
  errorCount++;
  fprintf(result,"Error= %s, ", word); 
}

void printError(){
    for(int i=0; i<errorCount;i++){
      if(i==0){
        fprintf(result,"Error=%s;",errors[i]);
      }else if(i==errorCount-1){
        fprintf(result,"Error=%s",errors[i]);
      }else{
        fprintf(result," Error=%s;",errors[i]);
      }
  }
}
void disp();
%}
letra [a-zA-Z]
digito [0-9]
validChar ($|_)
ifElse (I|i)(F|f)-(E|e)(L|l)(S|s)(E|e) 
if(I|i)(F|f)
else(E|e)(L|l)(s|S)(E|e)
for (F|f)(O|o)(R|r)
while (W|w)(H|h)(I|i)(L|l)(E|e)
double (D|d)(O|o)(U|u)(B|b)(L|l)(E|e)
int (I|i)(N|n)(T|t)
String (S|s)(T|t)(R|r)(I|i)(N|n)(G|g)
charnew (C|c)(H|h)(A|a)(R|r)(N|n)(E|e)(W|w)
char (C|c)(H|h)(A|a)(R|r)
public (P|p)(U|u)(B|b)(L|l)(I|i)(C|c)
class (C|c)(L|l)(A|a)(S|s)(S|s)
static (S|s)(T|t)(A|a)(T|t)(I|i)(C|c)
void (V|v)(O|o)(I|i)(D|d)
reservedWords (ifElse|if|for|while|double|int|String|charnew|public|class|static|void|char)
entero {digito}+
booleana true|false
real {entero}+(.{entero}+(e(\+|-){entero}+)?)?
cadena \"(.*?)\"
charVar \'[_a-zA-Z0-9]*\'
identifier ({letra}|{validChar})({letra}|{digito}|{validChar})*
comentario \/\/.*
error {digito}+({letra}|{validChar})+
error2 [^{ifElse}{for}{while}{double}{int}{String}{charnew}{char}{public}{class}{static}{void}{reservedWords}{entero}{real}{cadena}{identifier}{comentario}]
%%
{reservedWords} {toUpperCase(yytext);
                  if (strcmp(yytext,"public") == 0){return PUBLIC;}
                  else if (strcmp(yytext,"if-else") == 0){return IFELSE;}
                  else if (strcmp(yytext,"if") == 0){return IF;}
                  else if (strcmp(yytext,"else") == 0){return ELSE;}
                  else if (strcmp(yytext,"void") == 0){return VOID;}
                  else if (strcmp(yytext,"int") == 0){return INTW;}
                  else if (strcmp(yytext,"String") == 0){return STRINGW;}
                  else if (strcmp(yytext,"class") == 0){return CLASS;}
                  else if (strcmp(yytext,"static") == 0){return STATIC;}
                  else if (strcmp(yytext,"char") == 0){return CHAR;}
                  else if (strcmp(yytext,"charnew") == 0){return CHARNEW;}
                  else if (strcmp(yytext,"while") == 0){return WHILE;}
                  else if (strcmp(yytext,"for") == 0){return FOR;}
                  }
{booleana}    {fprintf(result,"Cte-booleana=%s, ", yytext);return BOOLEAN;}
{cadena} {fprintf(result,"Cte-cadena=%s, ", yytext);return STRING;}
{charVar} {fprintf(result,"Cte-character=%s, ", yytext);return CHARID;}
{identifier}  {setIdentifier(yytext);return ID;}
{entero}    {fprintf(result,"Cte-ent=%s, ", yytext);return INT;}
{real}    {fprintf(result,"Cte-real=%s, ", yytext);return REAL;}
"boolean"    {fprintf(result,"%s","BOOLEAN");return BOOLEANW;}
"do"    {fprintf(result,"%s","DO");return DO;}
{comentario} {fprintf(result, "Comentario=%s ", yytext);return COMMENT;}
"++"  {fprintf(result,"Op-MasMas=%s ", yytext);return SUMSUM;}
"--" {fprintf(result,"Op-SustSust=%s ", yytext);return MENMEN;}
"+="  {fprintf(result,"Op-SumAsign=%s ", yytext);return SUMIGUAL;}
"-="  {fprintf(result,"Op-SustAsign=%s ", yytext);return MENIGUAL;}
"*="  {fprintf(result,"Op-PorAsign=%s ", yytext);return MULTIGUAL;}
"/="  {fprintf(result,"Op-DivAsign=%s ", yytext);return DIVIGUAL;}
"=="  {fprintf(result,"Igual-igual=%s ", yytext);return IGUALIGUAL;}
"<="  {fprintf(result,"Menor-igual=%s ", yytext);return MENORIGUAL;}
">="  {fprintf(result,"Mayor-igual=%s ", yytext);return MAYORIGUAL;}
"!="  {fprintf(result,"Diferente=%s ", yytext);return NOIGUAL;}
"<>"  {fprintf(result,"Diferente=%s ", yytext);return DIFF;}
"&&"  {fprintf(result,"Op-y=%s ", yytext);return YY;}
"||"  {fprintf(result,"Op-o=%s ", yytext);return OO;}
"!"  {fprintf(result,"Op-no=%s ", yytext);return NOT;}
">"   {fprintf(result,"Mayor=%s ", yytext);return MAYOR;}
"<"   {fprintf(result,"Menor=%s ", yytext);return MENOR;}
"*"   {fprintf(result,"Op-mult=%s ", yytext);return MULT;}
"+"   {fprintf(result,"Op-sum=%s ", yytext);return SUM;}
"-"   {fprintf(result,"Op-sust=%s ", yytext);return MEN;}
"/"   {fprintf(result,"Op-div=%s ", yytext);return DIV;}
"="   {fprintf(result,"Op-asign=%s ", yytext);return IGUAL;}
"%"   {fprintf(result,"Op-mod=%s ", yytext);return MOD;}
"("   {fprintf(result,"Parent-a=%s ", yytext);return PAper;}
")"   {fprintf(result,"Parent-c=%s ", yytext);return PCier;}
"["   {fprintf(result,"Corchete-a=%s ", yytext);return CAper;}
"]"   {fprintf(result,"Corchete-c=%s ", yytext);return CCier;}
"{"   {fprintf(result,"Llave-a=%s ", yytext);return LAper;}
"}"   {fprintf(result,"Llave-c=%s ", yytext);return LCier;}
;   {fprintf(result,"Punto-coma=%s ", yytext);return PComa;}
","   {return COMA;}
":"   {return PUNTOS;}
\n {fprintf(result,"\n");return SALTOLINEA;}
" " ;
{error}  {setError(yytext);}
{error2}  {setError(yytext);}
%%
void disp()
{
  fprintf(result,"\n\n%s\n","TABLA DE IDENTIFICADORES");
  fprintf(result,"Hay %d identificadores\n",idCount);
  printIdentifier();
  fprintf(result,"\n\n%s\n","TABLA DE ERRORES");
  fprintf(result,"Hay %d errores\n",errorCount);
  printError();
}

