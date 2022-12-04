#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main () {
    int numero;
    // Inicialización de la rutina de números aletorios
    srand(time(NULL));

    int tam_ADN;
    char cadena_ADN[1024] = ""; 
    printf("Introduzca el largo de la cadena de ADN: \n");
    fflush(stdin);
    scanf("%d", &tam_ADN);
    
    for (int i = 0; i<tam_ADN; i++){
        numero =rand() % 4;
        char letra;
        switch (numero){
            case 0:
                letra = 'A';
                break;
            case 1:
                letra = 'C';
                break;
            case 2:
                letra = 'T';
                break;
            case 3:
                letra = 'G';
                break;
        }
        cadena_ADN[i] = letra;
    }
    cadena_ADN[tam_ADN] = '\0';

    printf("%s", cadena_ADN);
}