%{ 
#include <stdio.h>
#include<stdlib.h>
#include "y.tab.h"

%}

%option noyywrap
%% 
vier    {printf("%s\n", yytext); yylval.i = 4; return VIER;}
funf    {printf("%s\n", yytext); yylval.i = 5; return FUNF;}
acht    {printf("%s\n", yytext); yylval.i = 8; return ACHT;}
neun    {printf("%s\n", yytext); yylval.i = 9; return NEUN;} 
ein     {printf("%s\n", yytext); yylval.i = 1; return EIN ;}
zwei    {printf("%s\n", yytext); yylval.i = 2; return ZWEI ;}
sechs   {printf("%s\n", yytext); yylval.i = 6; return SECHS;}
sieben  {printf("%s\n", yytext); yylval.i = 7; return SIEBEN;}
elf     {printf("%s\n", yytext); yylval.i = 11; return ELF;}
zolf    {printf("%s\n", yytext); yylval.i = 12; return ZOLF;}
sech    {printf("%s\n", yytext); yylval.i = 6; return SECH;}
sieb    {printf("%s\n", yytext); yylval.i = 7; return SIEB;}
zwan    {printf("%s\n", yytext); yylval.i = 2; return ZWAN;}
zehn    {printf("%s\n", yytext); yylval.i = 10; return ZEHN;}
zig     {printf("%s\n", yytext); yylval.i = 10; return ZIG;}
drei    {printf("%s\n", yytext); yylval.i = 3; return DREI;}
ssing   {printf("%s\n", yytext); yylval.i = 10; return SSING;}
hundert {printf("%s\n", yytext); yylval.i = 100; return HUNDERT;}
tausend {printf("%s\n", yytext); yylval.i = 1000; return TAUSEND;}
und     {return UND;}
. 	{printf("Error: %s\n", yytext);}
\n 	{return 0;} 
%%  
