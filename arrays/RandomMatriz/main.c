/*
Escribir un programa que rellene una matriz cuadrada de hasta 10 x 10 (las
dimensiones de la matriz serán un parámetro que se pida al usuario) con números
aleatorios de tal modo que la matriz sea simétrica. Imprimir la matriz por pantalla.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_FIL 10
#define MAX_COL 10


int main () {
    int matriz[MAX_FIL][MAX_COL];
    int max_fil_col = 0;

    // Leemos las dimensiones
    printf ("Introduzca las dimensiones de la matriz cuadrada (MAX: %d): \n", MAX_COL);
    fflush(stdin);
    scanf("%d", &max_fil_col);

    // Rellenamos la matriz con numeros aleatorios para que sea simetrica
    srand(time(NULL));
    for (int i = 0; i < max_fil_col; i++) {
        for (int j = 0; j < max_fil_col; j++) {
            matriz[i][j] = rand() % 100; 
            matriz[j][i] = matriz[i][j];
        }
    }

    // Imprimimos la matriz por pantalla
    printf("Matriz simetrica:\n");
    for (int fila = 0; fila < max_fil_col; fila++) {
        for (int columna = 0; columna < max_fil_col; columna++) {
            printf("%4d", matriz[fila][columna]);    
        }
        printf("\n");
    }
}