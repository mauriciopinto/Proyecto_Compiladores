# Proyecto_Compiladores

Programe en C++ la gram ́atica de n ́umeros cardinales en alem ́an en forma nor-
mal de Chomsky:

R1 : Z2 → Z3+ zehn
R2 : Z7 → Z4+ zig
R3 : Z7 →drei + ssig
R4 : Z8 → U + Z7
R5 : Z9 → Z1 + Z5
R6 : Z10 → Z2 + Z5
R7 : Z11 → Z5,9 + Z1,2,7,8
R8 : Z12 → Z10 + Z1,2,7,8
R9 : Z13 → Z1,2,7,8,9,11 + Z6
R10 : Z14 → Z6,13 + Z1,2,7,8,9,11
R11 : U → Z1+und

1

Donde:
Z1 = {ein, zwei, drei, vier, f ̈unf, sechs, sieben, acht, neun}
Z2 = {zehn, elf, zw ̈olf }
Z3 = {drei, vier, f ̈unf, sech, sieb, acht, neun }
Z4 = {zwan, vier, f ̈unf, sech, sieb, acht, neun }
Z5 = {hundert}
Z6 = {tausend}
drei = {drei}
zehn = {zehn}
zig = {zig}
ssig = {ssig}
und = {und}
El proyecto, consistir ́a de las siguientes partes:
1. Dado un n ́umero entero, programar el scanner correspondiente (i.e. que
determina expresiones v’alidas pero no ciertas o falsas)

2. Programar el parser correspondiente con un estado de aceptaci ́on y rec-
hazo

3. Implementar adem ́as una regla de identificaci ́on de errores con un mensaje
de error
4. Implementar las salidas del an ́alisis (aceptado o rechazado)
Probar el compilador con los siguientes n ́umeros:
• f ̈unftausendzweihundertneunundf ̈unfzig
• zweitausendneunhundertsechsundsiebzig
• zweihundertzweiundzwanzigtausendvierhundertsiebzehn
