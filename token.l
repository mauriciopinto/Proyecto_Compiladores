%{ 
#include<stdlib.h>
%}
%% 
vier    {yylval.i = 4; return VIER;}
funf    {yylval.i = 5; return FUNF;}
acht    {yylval.i = 8; return ACHT;}
neun    {yyval.i = 9; return NEUN;} 
ein     {yyval.i = 1; return EIN ;}
zwei    {yyval.i = 2; return ZWEI ;}
sechs   {yyval.i = 6; return SECHS;}
sieben  {yyval.i = 7; return SIEBEN;}
elf     {yyval.i = 11; return ELF;}
zolf    {yyval.i = 12; return ZOLF;}
sech    {yyval.i = 6; return SECH;}
sieb    {yyval.i = 7; return SIEB;}
zwan    {yyval.i = 2; return ZWAN;}
zehn    {yyval.i = 10; return ZEHN;}
zig     {yyval.i = 10; return ZIG;}
drei    {yyval.i = 3; return DREI;}
ssing   {yyval.i = 10; return SSING;}
hundert {yyval.i = 100; return HUNDERT;}
tausend {yyval.i = 1000; return TAUSEND;}


. 	{printf("Error: %s\n", yytext);}
\n 	{return 0;} 
%% 
int yywrap(){} 
return 1; 
} 
