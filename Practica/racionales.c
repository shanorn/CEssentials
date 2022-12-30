#include<stdio.h>

void imprimeRacional(int numero[2]) {
    // Se mostrará de la forma a/b
    // No se tienen en cuenta los saltos de linea
    printf("%d/%d", numero[0], numero[1]);
}

static int maximo_comun_divisor(int a, int b) {
    int temporal;//Para no perder b
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

static int minimo_comun_multiplo(int a, int b) {
    return (a * b) / maximo_comun_divisor(a, b);
}

void simplificaRacional(int numero[2]) {
    int mcd = maximo_comun_divisor(numero[0], numero[1]);
    numero[0] /= mcd;
    numero[1] /= mcd;
}

void sumaRacional(int numeroX[2], int numeroY[2], int resultado[2]) {
    resultado[1] = minimo_comun_multiplo(numeroX[1], numeroY[1]);
    resultado[0] = resultado[1]/numeroX[1]*numeroX[0] + resultado[1]/numeroY[1]*numeroY[0];
    simplificaRacional(resultado);
}

void restaRacional(int numeroX[2], int numeroY[2], int resultado[2]) {
    resultado[1] = minimo_comun_multiplo(numeroX[1], numeroY[1]);
    resultado[0] = resultado[1]/numeroX[1]*numeroX[0] - resultado[1]/numeroY[1]*numeroY[0];
    simplificaRacional(resultado);
}

void multiplicaRacional(int numeroX[2], int numeroY[2], int resultado[2]) {
    resultado[0] = numeroX[0] * numeroY[0];
    resultado[1] = numeroX[1] * numeroY[1];
    simplificaRacional(resultado);
}

void divideRacional(int numeroX[2], int numeroY[2], int resultado[2]) {
    resultado[0] = numeroX[0] * numeroY[1];
    resultado[1] = numeroX[1] * numeroY[0];
    simplificaRacional(resultado);
}

