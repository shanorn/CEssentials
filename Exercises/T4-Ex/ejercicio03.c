#include<stdio.h>

/*
Sumar los números pares menores que N por un lado y los impares menores que N
por otro lado. N es un valor introducido por el usuario.
*/
void main () {
    int n = 0;
    printf("Introduzca el valor de N: \n");
    fflush(stdin);
    scanf("%d", &n);

    int suma_pares = 0;
    int suma_impares = 0;
    
    for ( int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            suma_pares += i;
        } else {
            suma_impares += i;
        }
    }

    printf("La suma de los pares es: %d - La suma de los impares es: %d", suma_pares, suma_impares);
}