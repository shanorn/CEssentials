#include<stdio.h>

//Aquí no habría que poner "calculadora.h" ??

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

float mostrarReal(int *memoria_numerador, int *memoria_denominador, int posicion) {
    float resultado = (float) memoria_numerador[posicion]/memoria_denominador[posicion];
    return resultado;
}

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


void simplificarFraccion(int *a, int *b) {
    int mcd = maximo_comun_divisor(*a, *b);
    *a /= mcd;
    *b /= mcd;
}

void sumaFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res) {
    (*denom_res) = minimo_comun_multiplo(denom_a, denom_b);
    (*num_res) = (*denom_res) / denom_a * num_a + (*denom_res) / denom_b * num_b;
    simplificarFraccion(num_res, denom_res);
}

void restaFracciones(int num_a, int denom_a, int num_b, int denom_b, int *num_res, int *denom_res) {
    (*denom_res) = minimo_comun_multiplo(denom_a, denom_b);
    (*num_res) = (*denom_res) / denom_a * num_a - (*denom_res) / denom_b * num_b;
    simplificarFraccion(num_res, denom_res);
}


/*
void anadeFraccion(int *memoria_numerador, int *memoria_denominador, int *posicion, int num_nuevo, int denom_nuevo) {
    memoria_numerador[*posicion] = num_nuevo;
    memoria_denominador[*posicion] = denom_nuevo;
    *posicion++;
}
*/

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

