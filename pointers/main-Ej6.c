#include<stdio.h>
#include<stdlib.h>

void main () {
    int numero;

    printf("Introduzca el numero"); 
    fflush(stdin);
    scanf("%d", &numero);

    short *short1 = (short *) &numero;
    short *short2 = short1 + 1;

    printf("%p:[%d] -> %p[%d], %p[%d]",&numero, numero, short1, *short1, short2, *short2);

}