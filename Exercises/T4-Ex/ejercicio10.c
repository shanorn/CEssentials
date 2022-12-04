#include<stdio.h>

/*
Escribe un programa que lea un número entero del teclado y diga si ese número es
o no primo
*/
void main () {
    int num = 0;
    printf("Introduzca un numero para comprobar si es primo: \n");
    fflush(stdin);
    scanf("%d", &num);

    int esPrimo = 1; 
    for (int i = 2; i<num ; i++ ) {
        if ( num % i == 0) {
            esPrimo = 0;
        }
    }

    if (esPrimo == 1) {
        printf("El número es PRIMO");
    } else {
        printf("El número NO es PRIMO");
    }
}