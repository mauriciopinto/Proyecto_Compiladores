%{
#include <stdio.h>   
%}
%token A1 A2 A3 A4 A5 A6 A7 A8 A10 A11
%%

Z1: 
  A1 | A0 | A7  						
Z2: 
  A2 | A5 							
  | A3 A5 | A7 A5 | A0 A5 				
Z3: 
  A4 A6 | A0 A6 | A7 A8 | A3 A6					
Z4: 
  Z5 Z3								
Z5: 
  A1 A9 | A0 A9 | A7 A9						
Z6: 
  A7 A10 | A1 A10 | A0 A10					
Z7: 
  Z6 A1 | Z6 A0 | Z6 A7 | Z6 Z2 | Z6 Z3 | Z6 Z4;
Z8: 
  Z2 A10;
Z9: 
  Z8 A1 | Z8 A7 | Z8 Z2 | Z8 Z3 | Z8 Z4;
Z10: 
   A1 A11 | A0 A11 | A7 A11 | Z2 A11 | Z3 A11 | Z4 A11 | Z6 A11 | Z7 A11;
Z11: 
   Z10 A0 | Z10 A1 | Z10 A7 | Z10 Z2 | Z10 Z3 | Z10 Z6 | Z10 Z7;

%%
#include "lex.yy.c"
main() {
    return yyparse();
}
int yyerror (char  *s){ fprintf(stderr, "%s\n", s); }
