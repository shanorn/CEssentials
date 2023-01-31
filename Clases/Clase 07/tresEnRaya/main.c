#include<stdio.h>
#include"tresEnRaya.h"

void loop (char tablero[3][3]) {
    int turno = 0;
    int resultado = 2;

    generarTablero(tablero);
    imprimirTablero(tablero);

    while (turno < 9 && resultado == 2) {
        if (turno % 2 == 0) {
            insertaPayer(tablero);
        } else {
            insertaIA(tablero);
        }
        
        imprimirTablero(tablero);
        turno++;

        resultado = comprobarResultado(tablero);
    }

    if (resultado == 1) { 
        printf("Has ganado!\n");
    } else if (resultado == 0) {
        printf("Has perdido!\n");
    } else {
        printf("Empate!\n");
    }
}

int main () {
    char tablero[3][3];

    loop(tablero);

    return 0; 
}