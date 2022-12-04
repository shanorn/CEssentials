#include<stdio.h>

/*
Escribe un programa que visualice por pantalla la tabla de multiplicar de los 10
primeros números naturales.
*/
void main () {
    for (int i = 1; i<=10; i++) {
        printf("\nTabla de multiplicar del %d\n", i);
        for (int j = 1; j<=10; j++){
            printf("%d x %d: %d\n", i,j, i*j);
        }
    }
}