#include<stdio.h>
#include<math.h>

/*
Escribe una función que acepte como argumento un número real y devuelva la raíz
cuadrada del logaritmo en base 10 del menor número entero mayor que el
argumento de la función.
*/
float calculo(float numero) {
    return sqrt(log10(ceil(numero)));
}


void main () {
    printf("%f\n", calculo(11.2));
    printf("%f\n", calculo(2.3));
}