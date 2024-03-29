# Proyecto Compiladores: Cifras en alemán

## Authors:
- Mauricio Pinto Larrea (40%)
- Roosevelt Ubaldo Chavez (40%)
- Fernado De los Heros Zuñiga (20%)

Programe en C++ la gramática de números cardinales en alemán en forma normal de Chomsky:
```
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
```

Donde:

```
Z1 = {ein, zwei, drei, vier, fünf, sechs, sieben, acht, neun}
Z2 = {zehn, elf, zwölf}
Z3 = {drei, vier, fünf, sech, sieb, acht, neun}
Z4 = {zwan, vier, fünf, sech, sieb, acht, neun}
Z5 = {hundert}
Z6 = {tausend}
drei = {drei}
zehn = {zehn}
zig = {zig}
ssig = {ssig}
und = {und}
```

El proyecto, consistirá de las siguientes partes:

- [x] Dado un número entero, programar el scanner correspondiente (i.e. que determina expresiones válidas pero no ciertas o falsas)
- [x] Programar el parser correspondiente con un estado de aceptación y rechazo
- [x] Implementar además una regla de identificación de errores con un mensaje de error
- [x] Implementar las salidas del análisis (aceptado o rechazado) 

Probar el compilador con los siguientes números:

- [x] fünftausendzweihundertneunundfünfzig
- [x] zweitausendneunhundertsechsundsiebzig
- [x] zweihundertzweiundzwanzigtausendvierhundertsiebzehn

Implementaciones:
- [C++](/C++)
- [Yacc/Lex](/Yacc-Lex)

Para probar la versión en Yacc/Lex ejecutar los siguientes comandos:
```
yacc -d token.y
lex token.l
gcc lex.yy.c y.tab.c -o aleman
```
