%{ 
#include<stdlib.h>
int count = 0; 
%}
a0 vier|funf|acht|neun
a1 ein|zwei|sechs|sieben
a2 elf|zolf
a3 sech|sieb
a4 zwan
a5 zehn
a6 zig
a7 drei
a8 ssing
a9 und
a10 hundert
a11 tausend
%% 
{a0}	{printf("A0: %s\n", yytext); return (A0);}
{a1}	{printf("A1: %s\n", yytext); return A1;} 
{a2} 	{printf("A2: %s\n", yytext); return A2;} 
{a3}	{printf("A3: %s\n", yytext); return A3;} 
{a4} 	{printf("A4: %s\n", yytext); return A4;}
{a5}	{printf("A5: %s\n", yytext); return A5;}
{a6} 	{printf("A6: %s\n", yytext); return A6;}
{a7} 	{printf("A7: %s\n", yytext); return A7;}
{a8}	{printf("A8: %s\n", yytext); return A8;}
{a9}	{printf("A9: %s\n", yytext); return A9;}
{a10}	{printf("A10: %s\n", yytext); return A10;}
{a11}	{printf("A11: %s\n", yytext); return A11;}
. 	{printf("Error: %s\n", yytext);}
\n 	{return 0;} 
%% 
int yywrap(){} 
return 1; 
} 
