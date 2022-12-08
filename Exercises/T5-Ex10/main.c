#include<stdio.h>
#include"racionales.h"

void main () {
    //  {a, b} = a/b
    int numeroX[2] = { 2, 3 }; // 2/3  
    int numeroY[2] = { 4, 6 }; // 4/5

    int resultado[2] = { 0, 0 };

    sumaRacional(numeroX, numeroY, resultado);

    printf("La suma de ");
    imprimeRacional(numeroX);
    printf(" + ");
    imprimeRacional(numeroY);
    printf(" = ");
    imprimeRacional(resultado);
    printf("\n");
}