#include<stdio.h>
#include<stdlib.h>

int main () {
    int *vector_1;
    int *vector_2;
    int n = 0; 

    // Pedimos el valor de N
    printf("Por favor, introduzca el valor de N: \n");
    fflush(stdin);
    scanf("%d", &n);

    // Reservamos memoria
    vector_1 = (int *) malloc(n*sizeof(int)); // Reserva malloc (sin inicializar)
    vector_2 = (int *) calloc(n, sizeof(int)); // Reserva calloc (inicializa a 0) En este caso no hay diferencia porque vamos a inicializar los vectores 

    // Lectura de array
    for (int i = 0; i < n; i++) {
        printf("Introduzca el elemento %d del array 1:\n", i+1);
        fflush(stdin);
        scanf("%d", &vector_1[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Introduzca el elemento %d del array 2:\n", i+1);
        fflush(stdin);
        scanf("%d", (vector_2 + i));
    }

    // Producto Escalar
    int producto_escalar = 0;
    for (int i = 0; i < n; i++) {
        producto_escalar += (vector_1[i] * vector_2[i]);
    }

    printf("El producto escalar es: %d\n", producto_escalar);
}