#include<stdio.h>

/*
Implementa el algoritmo de Euclides, que sirve para encontrar el máximo común
divisor de 2 números enteros positivos; el algoritmo ha sido presentado en la
introducción de este tema.


*/

void main () {
    int a = 0;
    int b = 0; 

    printf("Introduzca el valor A: \n");
    fflush(stdin);
    scanf("%d", &a);
    printf("Introduzca el valor B: \n");
    fflush(stdin);
    scanf("%d", &b);

    // Paso 1: Tomar el número mayor como dividendo y el menor como divisor.
    int dividendo; 
    int divisor;

    if (a > b) {
        dividendo = a;
        divisor = b;
    } else {
        dividendo = b;
        divisor = a;
    }

    // Paso 2: Calcular el resto de la división entera
    int resto = dividendo % divisor;

    // Paso 3: Si el resto es igual a cero entonces ir al Paso 4. En caso contrario, tomar el divisor como nuevo dividendo y el resto como divisor y volver al Paso 2
    while (resto != 0) {
        dividendo = divisor;
        divisor = resto;
        resto = dividendo % divisor;
    }

    // Paso 4: El m.c.d. es el divisor de la última división.
    printf("El m.c.d. es: %d", divisor);
}