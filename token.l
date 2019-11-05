%{ 
#include<stdlib.h>
%}
%% 
vier    {yylval.i = ; return VIER;}
funf    {yylval.i = ; return FUNF;}
acht    {yylval.i = ; return ACHT;}
neun    {yyval.i = ; return NEUN;} 
ein     {yyval.i = ; return EIN ;}
zwei    {yyval.i = ; return ZWEI ;}
sechs   {yyval.i = ; return SECHS;}
sieben  {yyval.i = ; return SIEBEN;}
elf     {yyval.i = ; return ELF;}
zolf    {yyval.i = ; return ZOLF;}
sech    {yyval.i = ; return SECH;}
sieb    {yyval.i = ; return SIEB;}
zwan    {yyval.i = ; return ZWAN;}
zehn    {yyval.i = ; return ZEHN;}
zig     {yyval.i = ; return ZIG;}
drei    {yyval.i = ; return DREI;}
und     {return UND;}
ssing   {yyval.i = ; return SSING;}
hundert {yyval.i = ; return HUNDERT;}
tausend {yyval.i = ; return TAUSEND;}


. 	{printf("Error: %s\n", yytext);}
\n 	{return 0;} 
%% 
int yywrap(){} 
return 1; 
} 
