#include<stdio.h>

/*
Escribe un programa que lea un número entero de teclado y lo descomponga en
factores primos; por ejemplo 40 = 2 * 2 * 2 * 5.
*/
void main () {
    int num = 0;
    printf("Introduzca un numero para descomponer: \n");
    fflush(stdin);
    scanf("%d", &num);

    printf("%d = ", num);
    int primoActual = 2;

    while (num > 1) {
        // Probamos todas las veces que podamos con el primo actual
        while (num % primoActual == 0) {
            num = num / primoActual;
            
            if (num == 1) {
                printf("%d", primoActual);
            } else {
                printf("%d * ", primoActual);
            }
        }

        // Siguiente primo
        int esPrimo = 0;
        while (esPrimo == 0) {
            primoActual++;
            esPrimo = 1; 
            for (int i = 1; i<primoActual ; i++ ) {
                if ( primoActual % i == 0 && i != 1 && i != primoActual) {
                    esPrimo = 0;
                }
            } 
        }       
    }

}