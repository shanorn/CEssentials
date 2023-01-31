#ifndef _TRESENRAYA_H
#define _TRESENRAYA_H

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

extern void generarTablero(char tablero[3][3]);
extern void imprimirTablero(char tablero[3][3]);
extern void insertaPayer(char tablero[3][3]);
extern void insertaIA(char tablero[3][3]);
extern int comprobarResultado(char tablero[3][3]);
 
#endif
