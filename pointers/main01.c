#include<stdio.h>

// Este intercambia no funcionara, por que las variables se pasan por copia y todo el codigo que se ejecuta debajo es local.

// * Tiene dos usos distintos, en la declaración
void intercambia (int *x, int *y) {
    int z;
    z=*x; 
    *x=*y;
    *y=z;
}

void main () {
    int a = 1;
    int b = 5;

    printf("a=%d b=%d\n", a, b);
    intercambia(&a, &b);
    printf("a=%d b=%d\n", a, b);
}