#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

void main() {
    int row = 0;
    int col = 0;
    
    int matriz[MAX_ROW][MAX_COL];

    // Leer límites de la matriz 
    while (row <= 0 || row > 10){
        printf("Por favor introduzca el numero de filas (<= 10): \n");
        fflush(stdin);
        scanf("%d", &row);
    }
      
    while (col <= 0 || col > 10){
        printf("Por favor introduzca el numero de columnas (<= 10): \n");
        fflush(stdin);
        scanf("%d", &col);
    }

    // Rellenar Matriz
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("Introduzca el elemento [%d][%d]: \n", i, j);
            fflush(stdin);
            scanf("%d", &matriz[i][j]);
        }
    }

    int sumaSuperior = 0;
    int sumaInferior = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j >= i){
                sumaSuperior += matriz[i][j];
            }
            if (j <= i){
                sumaInferior += matriz[i][j];
            } 
        }
    }


    // Imprimir matriz
    printf("Matriz:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d", matriz[i][j]);    
        }
        printf("\n");
    }

    printf("Suma inferior: %d - Suma superior: %d\n", sumaInferior, sumaSuperior);
}