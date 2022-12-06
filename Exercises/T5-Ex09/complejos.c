#include<stdlib.h>

void suma_complejos_proc(float num1[2], float num2[2], float resultado[3]) {
    resultado[0] = num1[0] + num2[0];
    resultado[1] = num1[1] + num2[1];
}

float *suma_complejos_func(float num1[2], float num2[2]) {
    // resultado es una variable local, no se puede devolver sin darle memoria
    // float resultado[2] = {num1[0] + num2[0], num1[1] + num2[1]};
    float *resultado = malloc(2 * sizeof(float));
    
    resultado[0] = num1[0] + num2[0];
    resultado[1] = num1[1] + num2[1];
    
    return resultado;
}

void resta_complejos(float num1[2], float num2[2], float resultado[3]) {
    resultado[0] = num1[0] - num2[0];
    resultado[1] = num1[1] - num2[1];
}