%{ 
#include<stdlib.h>
%}
%% 
vier    {yylval.i = ; return VIER;}
funf    {yylval.i = ; return FUNF;}
acht    {yylval.i = ; return ACHT;}


. 	{printf("Error: %s\n", yytext);}
\n 	{return 0;} 
%% 
int yywrap(){} 
return 1; 
} 
