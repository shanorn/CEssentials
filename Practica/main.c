#include<stdio.h>
#include<stdlib.h>
#include"calculadora.h"
#include"racionales.h"


void imprimeMenu() {
    printf("-------------------------\n");
    printf("CALCULADORA DE FRACCIONES\n");
    printf("-------------------------\n\n");
    printf("1. Introduzcir fraccion en memoria.\n"); 
    printf("2. Eliminar fraccion de la memoria.\n");
    printf("3. Mostrar fraccion.\n");
    printf("4. Mostrar todas las fracciones.\n");
    printf("5. Mostrar valor real de una fraccion.\n");
    printf("6. Simplificacion de fraccion y almacenamiento en memoria.\n");
    printf("7. Suma de fracciones (Resultado simplificado) y almacenamiento en memoria.\n");
    printf("8. Resta de fracciones (Resultado simplificado) y almacenamiento en memoria.\n");
    printf("9. Multiplicacion de fracciones (Resultado simplificado) y almacenamiento en memoria.\n");
    printf("10. Division de fracciones (Resultado simplificado) y almacenamiento en memoria.\n");
    printf("11. Salir.\n");
    printf("-------------------------\n");
    printf("Introduzca la funcion que desea realizar:\n");
    fflush(stdin);
}

void calculadora () {
    int opcion = 0;
    int fraccion1[2] = {0,0};
    int fraccion2[2] = {0,0};
    int resultado[2] = {0,0};
    int datosLeidos = 0;


    // Declarar nueva variable memoria 
    int elementos_memoria = 0;
    int **memoria = (int **) malloc(elementos_memoria * sizeof(int *));
    
    // Añadimos un nuevo elemento a una memoria vacia
    int nuevoElemento[2] = {1, 2}; // 1/2
    elementos_memoria++;
    memoria = (int **) realloc(memoria, elementos_memoria * sizeof(int *));
    memoria[elementos_memoria - 1] = nuevoElemento;

    // Añadimos otro nuevo elemento 
    int otroElemento[2] = {5, 6}; // 5/6
    elementos_memoria++;
    memoria = (int **) realloc(memoria, elementos_memoria * sizeof(int *));
    memoria[elementos_memoria - 1] = otroElemento;

    //Mostrar elementos
    for (int i = 0; i < elementos_memoria; i++) {
        imprimeRacional(memoria[i]);
        printf("\n");
    }


    /*
    while (opcion != 7) {
        imprimeMenu();
    
        scanf("%d", &opcion);

        // Revisar condición segun los datos.
        if (datosLeidos == 0 && (opcion != 1 || opcion == 0) && opcion != 11) {
            printf("Para hacer calculos debe introducir fracciones primero, use la opcion 1.\n");
            opcion = 0;
        }

        if (opcion >= 1 && opcion <= 11) {
            switch (opcion)
            {
            case 1:
                printf("Por favor introduzca un fraccion con el formato a/b: \n");
                fflush(stdin);
                scanf("%d/%d", &fraccion1[0], &fraccion1[1]);
                datosLeidos = 1;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            default:
                break;
            }
        } else {
            printf("Debe introducir un valor válido: 1 - 7.\n");
        }
    }
    */
}


void main () {
    
    calculadora();

}