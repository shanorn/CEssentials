#include<stdio.h>

void imprimeFraccion(int *memoria_numerador, int *memoria_denominador, int posicion) {
    printf("[%d]: %d/%d\n", posicion, memoria_numerador[posicion], memoria_denominador[posicion]);
}

void eliminarFraccion(int *memoria_numerador, int *memoria_denominador, int *tamano, int posicion_eliminar) {
    for (int i = posicion_eliminar; i < (*tamano - 1); i++) {
        memoria_numerador[i] = memoria_numerador[i + 1];
        memoria_denominador[i] = memoria_denominador[i + 1];
    }

    *tamano--;

}