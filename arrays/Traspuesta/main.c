#include<stdio.h>

#define MAX 10 

int main() {
    int filas = 0;
    int columnas = 0;

    int matriz[MAX][MAX];
    
    // Lectura de datos
    printf("Introduzca el número de filas: \n");
    fflush(stdin);
    scanf("%d", &filas);
    
    printf("Introduzca el número de columnas: \n");
    fflush(stdin);
    scanf("%d", &columnas);

    // Leer Matriz Completa
    for (int fila = 0; fila < filas ; fila++) {
        for (int columna = 0; columna < columnas ; columna++) {
            printf("Introduzca el elemento de la posición [%d][%d]:\n", fila, columna);
            fflush(stdin);
            scanf("%d", &matriz[fila][columna]);
        }
    }

    // Calcular transpuesta
    int transpuesta[MAX][MAX];
    for (int fila = 0; fila < filas ; fila++) {
        for (int columna = 0; columna < columnas ; columna++) {
            transpuesta[columna][fila] = matriz[fila][columna];       
        }
    }

    printf("\nMatriz\n");
    for (int fila = 0; fila < filas ; fila++) {
        for (int columna = 0; columna < columnas ; columna++) {
            printf("%4d", matriz[fila][columna]);       
        }
        printf("\n");
    }
    
    // Cuidado que cambia el maximo de filas por el maximo de columnas para la transpuesta
    printf("\nTranspuesta\n");
    for (int fila = 0; fila < columnas ; fila++) {
        for (int columna = 0; columna < filas ; columna++) {
            printf("%4d", transpuesta[fila][columna]);       
        }
        printf("\n");
    }


}
