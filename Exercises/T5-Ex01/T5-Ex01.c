#include<stdio.h>
/*
Escribe una función que devuelva el doble del valor (que debe ser un número real)
que se le pasa como argumento y prueba su funcionamiento en un programa.
Puedes pasarle cualquier valedor inventado a la función
*/
float doble (float);

void main () {
    float ejemplo = 35.6;
    float resultado = doble(ejemplo);

    printf("Doble de %.2f: %.2f\n", ejemplo, resultado);
}

float doble (float valor) {
    return valor * 2;
}