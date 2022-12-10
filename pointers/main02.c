#include<stdio.h>
#include<stdlib.h>

// Arrays y reserva de memoria dinámica
void main() {
    int estatico[10] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10}; // Reserva de memoria fija al principio del programa

    int *x; 

    int numeroElementos = 10;
    // Paso 1
    // x = (int *) malloc(10*sizeof(int)); // stdlib

    // Paso 2 - Comprobar si se ha podido reservar memoria
    if ((x = (int *) malloc(numeroElementos*sizeof(int))) == NULL){
        printf("Error, no hay memoria.\n");
        exit(-1);
    }

    // Recorrer array usando aritmetica de punteros
    for (int i = 0; i<numeroElementos; i++) {
        *(x + i) = 2*i; // estatico[i] = 2*i
    }

    // Mostrar datos del array 
    for (int i = 0; i < numeroElementos; i++ ){
        printf("%d\n", *(x + i));
    }

    free(x); // Al terminar de usar el array debemos limpiar la memoria
}


