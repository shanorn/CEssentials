#include<stdio.h>
#include<stdlib.h>

#include<limits.h>

void main () {
    int cantidadDatos; 
    int *listaNumeros;

    int maximo = INT_MIN; // 0 
    int minimo = INT_MAX; // 9999999999
    int total = 0;
    printf("Introduzca la cantidad de datos que desea introducir: \n");
    fflush(stdin);
    scanf("%d", &cantidadDatos);

    // Memoria de un int
    //printf("1: [%d]\n512: [%d]", sizeof(int), 512*sizeof(int));
    
    // Reservamos memoria
    if((listaNumeros = (int *) malloc(cantidadDatos*sizeof(int))) == NULL){
        printf("No se ha podido reservar memoria. \n"); 
        exit(-1);
    }


    for(int i = 0; i<cantidadDatos; i++) {
        printf("Introduzca otro dato: \n");
        fflush(stdin);
        scanf("%d", &*(listaNumeros + i));

        if (*(listaNumeros + i) > maximo) {
            maximo = *(listaNumeros + i);
        }
        if (*(listaNumeros + i) < minimo) {
            minimo = *(listaNumeros + i);
        }
        total += *(listaNumeros + i);
    }

    printf("Minimo: %d - Maximo: %d - Media: %d", minimo, maximo, total/cantidadDatos);

}