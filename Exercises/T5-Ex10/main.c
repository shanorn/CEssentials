#include<stdio.h>
#include"racionales.h"

void tests() {
    //  {a, b} = a/b
    int numeroX[2] = { 2, 3 }; // 2/3  
    int numeroY[2] = { 4, 5 }; // 4/5

    int resultado[2] = { 0, 0 };

    sumaRacional(numeroX, numeroY, resultado);

    printf("La suma de ");
    imprimeRacional(numeroX);
    printf(" + ");
    imprimeRacional(numeroY);
    printf(" = ");
    imprimeRacional(resultado);
    printf("\n");

    restaRacional(numeroX, numeroY, resultado);
    printf("La resta de ");
    imprimeRacional(numeroX);
    printf(" - ");
    imprimeRacional(numeroY);
    printf(" = ");
    imprimeRacional(resultado);
    printf("\n");

    multiplicaRacional(numeroX, numeroY, resultado);
    printf("La multiplicacion de ");
    imprimeRacional(numeroX);
    printf(" * ");
    imprimeRacional(numeroY);
    printf(" = ");
    imprimeRacional(resultado);
    printf("\n");

    divideRacional(numeroX, numeroY, resultado);
    printf("La multiplicacion de ");
    imprimeRacional(numeroX);
    printf(" / ");
    imprimeRacional(numeroY);
    printf(" = ");
    imprimeRacional(resultado);
    printf("\n");
}

void imprimeMenu() {
    printf("-------------------------\n");
    printf("CALCULADORA DE FRACCIONES\n");
    printf("-------------------------\n\n");
    printf("1. Introduzca dos fracciones.\n"); 
    printf("2. Suma.\n");
    printf("3. Resta.\n");
    printf("4. Multiplicacion.\n");
    printf("5. Division.\n");
    printf("6. Simplificacion\n");
    printf("7. Salir.\n");
    printf("Introduzca la funcion que desea realizar:\n");
    fflush(stdin);
}

void calculadora () {
    int opcion = 0;
    int fraccion1[2] = {0,0};
    int fraccion2[2] = {0,0};
    int resultado[2] = {0,0};
    int datosLeidos = 0;

    while (opcion != 7) {
        imprimeMenu();
    
        scanf("%d", &opcion);

        if (datosLeidos == 0 && (opcion != 1 || opcion == 0)) {
            printf("Para hacer calculos debe introducir fracciones primero, use la opcion 1.\n");
            opcion = 0;
        }

        if (opcion >= 1 && opcion <= 7) {
            switch (opcion)
            {
            case 1:
                printf("Por favor introduzca un fraccion con el formato a/b: \n");
                fflush(stdin);
                scanf("%d/%d", &fraccion1[0], &fraccion1[1]);
                printf("Por favor introduzca otra fraccion con el formato a/b: \n");
                fflush(stdin);
                scanf("%d/%d", &fraccion2[0], &fraccion2[1]);
                datosLeidos = 1;
                break;
            case 2:
                sumaRacional(fraccion1, fraccion2, resultado);
                imprimeRacional(fraccion1);
                printf(" + ");
                imprimeRacional(fraccion2);
                printf(" = ");
                imprimeRacional(resultado);
                printf("\n");
                break;
            case 3:
                restaRacional(fraccion1, fraccion2, resultado);
                imprimeRacional(fraccion1);
                printf(" - ");
                imprimeRacional(fraccion2);
                printf(" = ");
                imprimeRacional(resultado);
                printf("\n");
                break;
            case 4:
                multiplicaRacional(fraccion1, fraccion2, resultado);
                imprimeRacional(fraccion1);
                printf(" * ");
                imprimeRacional(fraccion2);
                printf(" = ");
                imprimeRacional(resultado);
                printf("\n");
                break;
            case 5:
                divideRacional(fraccion1, fraccion2, resultado);
                imprimeRacional(fraccion1);
                printf(" / ");
                imprimeRacional(fraccion2);
                printf(" = ");
                imprimeRacional(resultado);
                printf("\n");
                break;
            case 6:
                imprimeRacional(fraccion1);
                printf(" -> ");
                simplificaRacional(fraccion1);
                imprimeRacional(fraccion1);
                printf("\n");
                imprimeRacional(fraccion2);
                printf(" -> ");
                simplificaRacional(fraccion2);
                imprimeRacional(fraccion2);
                printf("\n");
                break;
            default:
                break;
            }
        } else {
            printf("Debe introducir un valor válido: 1 - 7.\n");
        }
    }
}

void main () {

    tests();

    calculadora();
    
}