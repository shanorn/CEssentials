#include<stdio.h>
#include <math.h>

/*
Escribe un programa que calcule el número pi con una precisión de cuatro dígitos;
el número pi puede calcularse a partir de la siguiente fórmula:
*/
void main () {
    float resultado = 0.0;

    for(int n = 0; n < 12000; n++) {
        //printf("%f", pow(-1,n)/(2*n + 1));
        resultado += pow(-1,n)/(2*n + 1);
    }

    resultado *= 4;

    printf("%.4f", resultado);
}