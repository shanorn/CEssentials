#include <stdio.h>
#include <stdlib.h>

int **reserva_memoria(int filas, int columnas){
    int **matriz;
    matriz = (int **) malloc(filas * sizeof(int *));
    for (int j = 0; j < filas; j++){
        matriz[j] = (int *) malloc (columnas * sizeof(int));
    }
    return matriz;
}

void leer_matriz(int **matriz, int filas, int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("Introduzca elemento[%d][%d]\n", i, j);
            fflush(stdin);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrar_matriz(int **matriz, int filas, int columnas){
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int **multiplica_matriz(int **matriz_1, int filas_1, int columnas_1, int **matriz_2, int filas_2, int columnas_2, int *filas_res, int *columnas_res) {
    *filas_res = filas_1;
    *columnas_res = columnas_2;
    int ** resultado = reserva_memoria(*filas_res, *columnas_res);

    for (int i = 0; i < *filas_res; i++) {
        for (int j = 0; j < *columnas_res; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas_1; k++){
                resultado[i][j] += matriz_1[i][k] * matriz_2[k][j];
            }
        }
    }

    return resultado;
}

void main() {
    int **matriz_1;
    int **matriz_2;
    int **resultado;

    int filas_1 = 0;
    int columnas_1 = 0;

    int filas_2 = 0;
    int columnas_2 = 0;

    int filas_res = 0;
    int columnas_res = 0;

    printf("Introduzca el numero de filas de la matriz 1: \n");
    fflush(stdin);
    scanf("%d", &filas_1);  
    printf("Introduzca el numero de columnas de la matriz 1: \n");
    fflush(stdin);
    scanf("%d", &columnas_1);

    matriz_1 = reserva_memoria(filas_1, columnas_1); 
    leer_matriz(matriz_1, filas_1, columnas_1);
    mostrar_matriz(matriz_1, filas_1, columnas_1);

    printf("Introduzca el numero de filas de la matriz 2: \n");
    fflush(stdin);
    scanf("%d", &filas_2);  
    printf("Introduzca el numero de columnas de la matriz 2: \n");
    fflush(stdin);
    scanf("%d", &columnas_2);

    matriz_2 = reserva_memoria(filas_2, columnas_2); 
    leer_matriz(matriz_2, filas_2, columnas_2);
    mostrar_matriz(matriz_2, filas_2, columnas_2);

    resultado = multiplica_matriz(matriz_1, filas_1, columnas_1, matriz_2, filas_2, columnas_2, &filas_res, &columnas_res); 
    printf("\nResultado: \n");
    mostrar_matriz(resultado, filas_res, columnas_res);

}
