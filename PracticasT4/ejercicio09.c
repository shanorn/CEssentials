#include<stdio.h>

/*
Escribe un programa que calcule el mínimo y el máximo de una lista de números
enteros positivos introducidos por el usuario. La lista finalizará cuando se
introduzca un número negativo.
*/
void main () {
    int num = 0;
    int menor = 99999999;
    int mayor = 0; 
    do {
        printf("Introduzca un numero entero positivo: \n");
        fflush(stdin);
        scanf("%d", &num);

        if (num >= 0) {
            if (num < menor) {
                menor = num;
            }

            if (num > mayor) {
                mayor = num;
            }
        }
    } while (num >= 0);

    printf("El numero mayor es: %d y el numero menor es: %d", mayor,menor3);
}