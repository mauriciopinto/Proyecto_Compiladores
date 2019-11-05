%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex();
void yyerror (char *s);
%}

%union {
    int i;
}


%token <i> VIER FUNF ACHT NEUN EIN ZWEI SECHS SIEBEN ELF ZOLF SECH SIEB ZWAN ZEHN ZIG DREI SSING HUNDERT TAUSEND UND
%type <i> S Z1 Z2 Z3 Z4 Z5 Z6 Z7 Z8 Z9 Z10 Z11 A0 A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11


%%
S:   Z1         {printf("%d\n",$1);}
    | Z2        {printf("%d\n",$1);}
    | Z3        {printf("%d\n",$1);}
    | Z4        {printf("%d\n",$1);}
    | Z5        {printf("%d\n",$1);}
    | Z6        {printf("%d\n",$1);}
    | Z7        {printf("%d\n",$1);}
    | Z8        {printf("%d\n",$1);}
    | Z9        {printf("%d\n",$1);}
    | Z10       {printf("%d\n",$1);}
    | Z11       {printf("%d\n",$1);}
    ;
Z1: A1          {$$ = $1;}
    | A0        {$$ = $1;}
    | A7        {$$ = $1;}
    ;
Z2: A2          {$$ = $1;}
    | A5        {$$ = $1;}
    | A3 A5     {$$ = $1 + $2;}
    | A7 A5     {$$ = $1 + $2;}
    | A0 A5     {$$ = $1 + $2;}
    ;
Z3: A4 A6       {$$ = $1 * $2;}
    | A0 A6     {$$ = $1 * $2;}
    | A7 A8     {$$ = $1 * $2;}
    | A3 A6     {$$ = $1 * $2;}
    ;
Z4: Z5 Z3       {$$ = $1 + $2;}
    ;
Z5: A1 A9       {$$ = $1;}
    | A0 A9     {$$ = $1;}
    | A7 A9     {$$ = $1;}
    ;
Z6: A7 A10      {$$ = $1 * $2;}
    | A1 A10    {$$ = $1 * $2;}
    | A0 A10    {$$ = $1 * $2;}
    ;
Z7: Z6 A1       {$$ = $1 + $2;}
    | Z6 A0     {$$ = $1 + $2;}
    | Z6 A7     {$$ = $1 + $2;}
    | Z6 Z2     {$$ = $1 + $2;}
    | Z6 Z3     {$$ = $1 + $2;}
    | Z6 Z4     {$$ = $1 + $2;}
    ;
Z8: Z2 A10      {$$ = $1 * $2;}
    ;
Z9: Z8 A1       {$$ = $1 + $2;}
    | Z8 A7     {$$ = $1 + $2;}
    | Z8 Z2     {$$ = $1 + $2;}
    | Z8 Z3     {$$ = $1 + $2;}
    | Z8 Z4     {$$ = $1 + $2;}
    ;
Z10: A1 A11     {$$ = $1 * $2;}
    | A0 A11    {$$ = $1 * $2;}
    | A7 A11    {$$ = $1 * $2;}
    | Z2 A11    {$$ = $1 * $2;}
    | Z3 A11    {$$ = $1 * $2;}
    | Z4 A11    {$$ = $1 * $2;}
    | Z6 A11    {$$ = $1 * $2;}
    | Z7 A11    {$$ = $1 * $2;}
    ;
Z11: A11 A1     {$$ = $1 + $2;}
    | A11 A0    {$$ = $1 + $2;}
    | A11 A7    {$$ = $1 + $2;}
    | A11 Z2    {$$ = $1 + $2;}
    | A11 Z3    {$$ = $1 + $2;}
    | A11 Z4    {$$ = $1 + $2;}
    | A11 Z6    {$$ = $1 + $2;}
    | A11 Z7    {$$ = $1 + $2;}
    | Z10 A0    {$$ = $1 + $2;}
    | Z10 A1    {$$ = $1 + $2;}
    | Z10 A7    {$$ = $1 + $2;}
    | Z10 Z2    {$$ = $1 + $2;}
    | Z10 Z3    {$$ = $1 + $2;}
    | Z10 Z4    {$$ = $1 + $2;}
    | Z10 Z6    {$$ = $1 + $2;}
    | Z10 Z7    {$$ = $1 + $2;}
    ;
A0: VIER        {$$ = $1;}
    | FUNF      {$$ = $1;}
    | ACHT      {$$ = $1;}
    | NEUN      {$$ = $1;}
    ;
A1: EIN         {$$ = $1;}
    | ZWEI      {$$ = $1;}
    | SECHS     {$$ = $1;}
    | SIEBEN    {$$ = $1;}
    ;
A2: ELF         {$$ = $1;}
    | ZOLF      {$$ = $1;}
    ;
A3: SECH        {$$ = $1;}
    | SIEB      {$$ = $1;}
    ;
A4: ZWAN        {$$ = $1;}
    ;
A5: ZEHN        {$$ = $1;}
    ;
A6: ZIG         {$$ = $1;}
    ;
A7: DREI        {$$ = $1;}
    ;
A8: SSING       {$$ = $1;}
    ;
A9: UND
    ;
A10: HUNDERT    {$$ = $1;}
    ;
A11: TAUSEND    {$$ = $1;}
    ;
%%
void yyerror (char  *s){ 
    fprintf(stderr, "%s\n", s);
    exit(1);
}
int main() {
    yyparse();

}

