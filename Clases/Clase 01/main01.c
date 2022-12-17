#include<stdio.h>
#include<stdlib.h>

#include<limits.h>
    

int main () {
    int totalDatos = 0;

    printf("Introducir el total de datos: \n");
    fflush(stdin);
    scanf("%d", &totalDatos);

    //int listaNumeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *listaNumeros;
    int maximo = INT_MIN;
    int minimo = INT_MAX;
    int total = 0;
    //listaNumeros = (int *) malloc(totalDatos*sizeof(int));

    if((listaNumeros = (int *) malloc(totalDatos*sizeof(int))) == NULL) {
        printf("No se puede reservar memoria. \n");
        exit(-1);
    }

    // Introduccion de datos
    for (int i = 0; i<totalDatos; i++) {
        printf("Introduzca otro numero: \n");
        fflush(stdin);
        scanf("%d", (listaNumeros + i));
        //printf("%p: %d\n", (listaNumeros + i), *(listaNumeros + i));
    }

    //int estatico[5] = {1,1,1,1,1};
    // Calculo minimo, maximo y media
    for (int i = 0; i<totalDatos; i++) {
        if (*(listaNumeros + i) > maximo){
            maximo = *(listaNumeros + i);
        }

        if (*(listaNumeros + i) < minimo){
            minimo = *(listaNumeros + i);
        }

        total = total + *(listaNumeros + i);

        //total += *(listaNumeros + i);
    }
    int media = total/totalDatos;

    printf("\nMaximo: %d - Minimo: %d - Media: %d\n", maximo, minimo, media);

    printf("%d\n", totalDatos);
}