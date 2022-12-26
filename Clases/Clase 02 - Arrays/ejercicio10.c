#include<stdio.h>

#define MAX 50

int main () {
    int vector_1[MAX];
    int vector_2[MAX];
    int n = 0;

    // Leemos el tamaño N
    printf("Introduzca el tamano de los polinomios: \n");
    fflush(stdin);
    scanf("%d", &n);

    // Leemos vector 1 
    for (int i = 0; i < n; i++) {
        printf("Introduzca el elemento %d del vector 1: \n", i+1);
        fflush(stdin);
        scanf("%d", &vector_1[i]);
    }

    // Leemos vector 2 
    for (int i = 0; i < n; i++) {
        printf("Introduzca el elemento %d del vector 2: \n", i+1);
        fflush(stdin);
        scanf("%d", &vector_2[i]);
    }

    int resultado = 0;
    // Producto Escalar de los vectores
    for (int i = 0; i < n; i++) {
        resultado += (vector_1[i] * vector_2[i]);
    }

    printf("Producto Escalar: %d\n", resultado);

}