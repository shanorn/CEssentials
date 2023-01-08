#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void loop(char tablero[3][3]);
void generaTablero(char tablero[3][3]);
void imprimeTablero(char tablero[3][3]);
int posicionOcupada(char tablero[3][3], char posicion);
void insertaPlayer (char tablero[3][3]);
void insertaIA (char tablero[3][3]);
int checkGanador(char tablero[3][3]);

int main() {
    char tablero[3][3];

    loop(tablero);
        
}

void loop(char tablero[3][3]) {
    int turno = 0;
    int resultado = 2; 
    generaTablero(tablero);
    imprimeTablero(tablero);
    
    while (turno <= 9 && resultado == 2) {
        
        if (turno % 2 == 0) {
            insertaPlayer(tablero);
        } else {
            insertaIA(tablero);
        }
        turno++;
        system("cls");
        imprimeTablero(tablero);

        resultado = checkGanador(tablero);
    }

    if (resultado == 1){
        printf("Has ganado!! \n");
    } else if (resultado == 0) {
        printf("Has perdido!! \n");
    } else {
        printf("Empate!! \n");
    }
    
}


void generaTablero(char tablero[3][3]){
    char aux = '1'; 
    for(int i = 0; i < 3; i++) {
        for ( int j = 0; j < 3; j++) {
            tablero[i][j] = aux;
            aux++;
        }
    }
} 

void imprimeTablero(char tablero[3][3]) {
    printf("\n");
    for(int i = 0; i < 3; i++) {
        for ( int j = 0; j < 3; j++) {
            if (j < 2) {
                printf(" %c |", tablero[i][j]);
            } else {
                printf(" %c", tablero[i][j]);
            }
        }
        if (i < 2) {
            printf("\n-----------\n");
        }
    }
    printf("\n");
}

int posicionOcupada(char tablero[3][3], char posicion) {
    int ocupada = 1;

    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 3 ; j++) {
            if (tablero[i][j] == posicion) {
                ocupada = 0;
            }
        }
    }
    if (ocupada) printf("La casilla está ocupada, inserta otro numero.\n");
    return ocupada;
}

void insertaPlayer (char tablero[3][3]) {
    int posicionLeida;
    do {
        printf("Introduce una posicion para colocar tu ficha: \n");
        fflush(stdin);
        scanf("%d", &posicionLeida);
    } while (posicionLeida < 1 || posicionLeida > 9 || posicionOcupada(tablero, (posicionLeida + '0')));

    for (int i = 0; i < 3 ; i++) {
        for (int j = 0; j < 3 ; j++) {
            if (tablero[i][j] == (posicionLeida + '0')) {
                tablero[i][j] = 'X';
            }
        }
    }
}

void insertaIA(char tablero[3][3]) {
    srand(time(NULL));
    
    int insertado = 0; 
    int i, j;

    do {
        i = rand() % 3;
        j = rand() % 3; 
    } while (tablero[i][j] == 'X' || tablero[i][j] == 'O');

    
    tablero[i][j] = 'O';
    
}

int checkGanador(char tablero[3][3]) {
    
    if (tablero[0][0] == 'X' || tablero[0][0] == 'O') {
        // Fila 0
        if (tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2]) {
            if (tablero[0][0] == 'X') {
                return 1;
            } else {
                return 0;
            }
        }
        // Columna 0 
        if (tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0]) {
            if (tablero[0][0] == 'X') {
                return 1;
            } else {
                return 0;
            }
        }
    }
    // Diagonal 0 
    if (tablero[1][1] == 'X' || tablero[1][1] == 'O') {
        if (tablero[1][1] == tablero[0][0] && tablero[1][1] == tablero[2][2] ) {
            if (tablero[1][1] == 'X') {
                return 1;
            } else {
                return 0;
            }
        }
        // Linea 1
        if (tablero[1][1] == tablero[1][0] && tablero[1][1] == tablero[1][2]){
            if (tablero[1][1] == 'X') {
                return 1;
            } else {
                return 0;
            }
        }
        // Diagonal 1
        if (tablero[1][1] == tablero[2][0] && tablero[1][1] == tablero[0][2]){
            if (tablero[1][1] == 'X') {
                return 1;
            } else {
                return 0;
            }
        }
        // Columna 1
        if (tablero[1][1] == tablero[0][1] && tablero[1][1] == tablero[2][1]){
            if (tablero[1][1] == 'X') {
                return 1;
            } else {
                return 0;
            }
        }
    }

    if (tablero[2][2] == 'X' || tablero[2][2] == 'O') {
        // Fila 2
        if (tablero[2][2] == tablero[0][2] && tablero[2][2] == tablero[1][2]) {
            if (tablero[2][2] == 'X') {
                return 1;
            } else {
                return 0;
            }
        }
        // Columna 2 
        if (tablero[2][2] == tablero[2][0] && tablero[2][2] == tablero[2][1]) {
            if (tablero[2][2] == 'X') {
                return 1;
            } else {
                return 0;
            }
        }
    }

    return 2;
}