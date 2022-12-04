#include<stdio.h>

/*
Calcular el factorial de un número introducido por teclado. Antes de realizar el
cálculo deberá comprobarse que el número es positivo y en caso contrario se
imprimirá un mensaje de error.
*/

void main() {
    
    int numero = 0;
    printf("Introduzca un numero para calcular el factorial: \n");
    fflush(stdin);
    scanf("%d", &numero);
    
    int factorial = 1; 
    if (numero <= 0) {
        printf("El numero debe ser positivo: ");
    } else {
        if (numero != 0 || numero != 1) {
            for (int i = numero; i > 1; i--) {
                factorial *= i;
            }
        }
    }
    printf("El factorial de %d es: %d\n", numero, factorial);
    //system("pause");
}