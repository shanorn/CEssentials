/*
Empleando un array, escribir un programa que pida al usuario números enteros
hasta que se introduzca el número 0. A continuación, calcular la media, el mínimo
y el máximo de los datos introducidos.
*/
#include<stdio.h>
#include<limits.h>

#define MAX_NUM 50

int main () {
    int numeros[MAX_NUM];
    int pos_siguiente_numero = 0;
    int ultimo_numero = 0;
    

    do { 
        printf("Introduzca un numero: \n");
        fflush(stdin);
        scanf("%d", &ultimo_numero);
        if (ultimo_numero != 0) {
            numeros[pos_siguiente_numero] = ultimo_numero;
            pos_siguiente_numero++;
        }
    } while (ultimo_numero != 0);

    int mayor = INT_MIN;
    int menor = INT_MAX;
    int media = 0;

    for (int i = 0; i < pos_siguiente_numero ; i++) {
        if (numeros[i] > mayor) mayor = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
        media += numeros[i];
    }    
    media /= pos_siguiente_numero;

    printf("\nMedia: %d\nMayor: %d\nMenor: %d", media, mayor, menor);
}