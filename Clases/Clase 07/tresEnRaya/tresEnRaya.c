#include"tresEnRaya.h"


void generarTablero(char tablero[3][3]) {
    char aux = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tablero[i][j] = aux;
            aux++;
        }
    }
}

void imprimirTablero(char tablero[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf(" %c |", tablero[i][j]);
            } else {
                printf(" %c ", tablero[i][j]);
            }
            
        }
        if (i < 2) {
            printf("\n-----------\n");
        }
    }
    printf("\n");
}

int posicionOcupada(char tablero[3][3], int posicion) {
    int ocupada = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++ ) {
            if (tablero[i][j] == (posicion + '0')){
                ocupada = 0; 
            }
        }
    }
    printf("La posicion esta ocupada. \n");
    return ocupada; 
}

void insertaPayer(char tablero[3][3]) {
    int posicionLeida;

    do{
        printf("Introduzca la posicion: \n");
        fflush(stdin);
        scanf("%d", &posicionLeida);
    } while (posicionLeida < 1 || posicionLeida > 9 || posicionOcupada(tablero, posicionLeida));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++ ) {
            if (tablero[i][j] == (posicionLeida + '0')){
                tablero[i][j] = 'X'; 
            }
        }
    } 

}

void insertaIA(char tablero[3][3]) {
    srand(time(NULL));

    int i, j;

    do {
        i = rand() % 3;
        j = rand() % 3;
    } while (tablero[i][j] == 'X' || tablero[i][j] == 'O');

    tablero[i][j] = 'O';

}

int comprobarResultado(char tablero[3][3]) {
    if (tablero[0][0] == 'X' || tablero[0][0] == 'O') {
        // Fila 0
        if (tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2]) {
            if (tablero[0][0] == 'X'){
                return 1; // Gana el jugador
            } else {
                return 0; // Gana la maquina
            }
        }
        // Columna 0
        if (tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0]) {
            if (tablero[0][0] == 'X'){
                return 1; // Gana el jugador
            } else {
                return 0; // Gana la maquina
            }
        }
        // Diagonal 0
        if (tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2]) {
            if (tablero[0][0] == 'X'){
                return 1; // Gana el jugador
            } else {
                return 0; // Gana la maquina
            }
        }
    }

    if (tablero[1][1] == 'X' || tablero[1][1] == 'O') {
        // Fila 1
        if (tablero[1][1] == tablero[1][0] && tablero[1][1] == tablero[1][2]) {
            if (tablero[1][1] == 'X'){
                return 1; // Gana el jugador
            } else {
                return 0; // Gana la maquina
            }
        }
        // Columna 1
        if (tablero[1][1] == tablero[0][1] && tablero[1][1] == tablero[2][1]) {
            if (tablero[1][1] == 'X'){
                return 1; // Gana el jugador
            } else {
                return 0; // Gana la maquina
            }
        }
        // Diagonal 1
        if (tablero[1][1] == tablero[0][2] && tablero[1][1] == tablero[2][0]) {
            if (tablero[1][1] == 'X'){
                return 1; // Gana el jugador
            } else {
                return 0; // Gana la maquina
            }
        }
    }
    // Fila 2
    if (tablero[2][2] == 'X' || tablero[2][2] == 'O') {
        if (tablero[2][2] == tablero[2][0] && tablero[2][2] == tablero[2][1]) {
            if (tablero[2][2] == 'X'){
                return 1; // Gana el jugador
            } else {
                return 0; // Gana la maquina
            }
        }
    }
    // Columna 2
    if (tablero[2][2] == 'X' || tablero[2][2] == 'O') {
        if (tablero[2][2] == tablero[0][2] && tablero[2][2] == tablero[1][2]) {
            if (tablero[2][2] == 'X'){
                return 1; // Gana el jugador
            } else {
                return 0; // Gana la maquina
            }
        }
    }

    return 2;
}

