#include<stdio.h>
//Aquí no habría que poner "calculadora.h" ??
#define TAM_MEMORIA 3000

int mem_num[TAM_MEMORIA]; //memoria numerador
int mem_denom[TAM_MEMORIA]; //memoria denominador

int posicion_siguiente = 0; // Tamaño


void anadeFraccion(int num_nuevo, int denom_nuevo) {
    mem_num[posicion_siguiente] = num_nuevo;
    mem_denom[posicion_siguiente] = denom_nuevo;
    posicion_siguiente++;
}

void eliminarFraccion(int posicion_eliminar) {
    for (int i = posicion_eliminar; i < (posicion_siguiente - 1); i++) {
        mem_num[i] = mem_num[i + 1];
        mem_denom[i] = mem_denom[i + 1];
    }
    posicion_siguiente--;
}

void imprimeFraccion(int posicion) {
    printf("[%d]: %d/%d\n", posicion, mem_num[posicion], mem_denom[posicion]);
}

int obtener_tamano_actual() {
    return posicion_siguiente;
}

void imprimeTodasFracciones() {
    printf("Memoria: \n");
    for (int i = 0; i < posicion_siguiente; i++) {
        imprimeFraccion(i);
    }
}

void mostrarReal(int posicion) {
    float resultado = (float) mem_num[posicion]/mem_denom[posicion];
    printf("Valor real: %f\n", resultado);
}

/*
void simplificarCarmen (int *a, int *b){
	int divisor = 2;
	while(divisor <= *a && divisor <= *b) {
		if(*a % divisor == 0 && *b % divisor == 0) {
			*a = *a / divisor;
			*b = *b / divisor;
			divisor--;
		}
		divisor++;
	}
}
*/


// https://parzibyte.me/blog/2019/12/18/maximo-comun-divisor-c-algoritmo-euclides/
static int maximo_comun_divisor(int a, int b) {
    int temporal;
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

// https://es.wikipedia.org/wiki/M%C3%ADnimo_com%C3%BAn_m%C3%BAltiplo
static int minimo_comun_multiplo(int a, int b) {
    int resultado = (a * b) / maximo_comun_divisor(a, b);
    return resultado;
}

/*
void simplificarFraccion(int *a, int *b) {
    int mcd = maximo_comun_divisor(*a, *b);
    *a /= mcd;
    *b /= mcd;
}
*/

void simplificarFraccion(int posicion) {
    int mcd = maximo_comun_divisor(mem_num[posicion], mem_denom[posicion]);

    mem_num[posicion] /= mcd;
    mem_denom[posicion] /= mcd;
}

void sumaFracciones(int posicion_a, int posicion_b) {
    int denom = minimo_comun_multiplo(mem_denom[posicion_a], mem_denom[posicion_b]);
    int num = denom / mem_denom[posicion_a] * mem_num[posicion_a] + denom / mem_denom[posicion_b] * mem_num[posicion_b];

    anadeFraccion(num, denom); 
    simplificarFraccion(posicion_siguiente - 1);
    printf("Suma Fracciones: \n");
    imprimeFraccion(posicion_siguiente - 1);
}

/*
void restaFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res) {
    (*denom_res) = minimo_comun_multiplo(denom_a, denom_b);
    (*num_res) = (*denom_res) / denom_a * num_a - (*denom_res) / denom_b * num_b;
    simplificarFraccion(num_res, denom_res);
}



void multFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res){
    (*num_res) = num_a * num_b;
    (*denom_res) = denom_a * denom_b;
    simplificarFraccion(num_res,denom_res);
}

void divFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res){
    (*num_res) = num_a * denom_b;
    (*denom_res) = denom_a * num_b;
    simplificarFraccion(num_res,denom_res);
}

*/
