#include<stdio.h>

/*
Escribe un programa que solicite continuamente números enteros al usuario; el
programa se detendrá cuando la suma de los números enteros introducidos por el
usuario supere 1000.
*/
void main () { 
    int total = 0;
    int numero = 0;

    while (total <= 1000) {
        printf("El total es %d, introduzca otro numero:\n", total);
        fflush(stdin);
        scanf("%d", &numero);

        total += numero; 
    }
}