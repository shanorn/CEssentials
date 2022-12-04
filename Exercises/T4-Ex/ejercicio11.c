#include<stdio.h>

/*
Escribe un programa que muestre por pantalla la lista de los 100 primeros números
primos.
*/
void main () {
    
    for (int i = 1; i<=100; i++) {
        int esPrimo = 1; 
        for (int j = 1; j<i ; j++ ) {
            if ( i % j == 0 && j != 1 && j != i) {
                esPrimo = 0;
            }
        }

        if (esPrimo == 1) {
            printf("%d\n", i);
        } 
    }
    
}