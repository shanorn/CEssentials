#ifndef CALCULADORA_H
#define CALCULADORA_H

#include<stdio.h>

extern void anadeFraccion(int num_nuevo, int denom_nuevo);

extern void eliminarFraccion(int posicion_eliminar);

extern void imprimeFraccion(int posicion);

extern int obtener_tamano_actual();

extern void imprimeTodasFracciones();

extern void mostrarReal(int posicion);

extern void simplificarFraccion(int posicion);

extern void sumaFracciones(int posicion_a, int posicion_b);

extern void restaFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res);

extern void multFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res);

extern void divFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res);

#endif