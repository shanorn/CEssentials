#include<stdio.h>
#include<math.h>

/*
Escribir una función que calcule las raíces reales de una ecuación de segundo
grado. Los parámetros que se pasarán a la función serán los tres coeficientes a, b y
c de la ecuación. La función imprimirá en la consola los valores de las raíces.
*/

void ecuacion_segundo_grado (float a, float b, float c) {
    float x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    float x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    printf("\nx1 = %.2f  -  x2 = %.2f", x1, x2);
}

void main () {
    ecuacion_segundo_grado(1, -5, 6);
    ecuacion_segundo_grado(3, -24, 0);   
    ecuacion_segundo_grado(1, 0, -16); 
}