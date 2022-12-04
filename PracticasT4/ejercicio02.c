#include<stdio.h>

/*
Calcular la suma de los 100 primeros números naturales
*/
void main () {
    int suma = 0;

    for (int i = 1; i <= 100; i++) {
        suma += i;
    }

    printf("La suma de los primeros 100 naturales es: %d", suma);
}