#ifndef _FRACCIONES_H
#define _FRACCIONES_H

#include <stdio.h>
#include <stdlib.h>

/*
* FRACCIONES: Modulo encagardo de mantener una lista de fracciones y hacer operaciones con ellas
*/


// Guarda una fraccion en memoria 
// Esta funcion no devuelve ningún valor
// Guarda en memoria una fracion (num/denom)
// num - numerador de la fraccion - numero entero
// denom - denominador de la fraccion - numero entero
extern void guardarFraccion(int num, int denom);

// Nos indica el tamano de nuestra memoria
// Devuelve un entero que es el tamño
extern int tamano_actual();

// Elimina la fraccion de una posicion de memoria 
// poscion_eliminar - Posicion de memoria a eliminar
extern void eliminarFraccion(int posicion_eliminar);

extern void imprimeFraccion(int posicion);

// Imprime en pantalla todas las fracciones de la memoria
extern void mostrarMemoria();
extern void mostrarReal(int posicion);
extern void simplificarFraccion(int posicion);

// Suma las fracciones de dos posiciones de memoria dadas y almacena el resultado simplificado en memoria.
// posicion_a - numero entero de la posicion a sumar
// posicion_b - numero entero de la otra posicion a sumar
extern void sumaFracciones(int posicion_a, int posicion_b);
extern void restaFracciones(int posicion_a, int posicion_b);
extern void multiplicacionFracciones(int posicion_a, int posicion_b);
extern void divisionFracciones(int posicion_a, int posicion_b);

#endif
