#include<stdlib.h>
#include<math.h>

// a + bi 
// a = num1[0]
// b = num1[1]

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

void resta_complejos(float num1[2], float num2[2], float resultado[2]) {
    resultado[0] = num1[0] - num2[0];
    resultado[1] = num1[1] - num2[1];
}

void multiplica_complejos(float num1[2], float num2[2], float resultado[2]) {
    // (a + bi)*(c + di) = (ac - bd) + (ad + bc)i
    
    float a = num1[0];
    float b = num1[1];

    float c = num2[0];
    float d = num2[1];

    resultado[0] = a*c - b*d;
    resultado[1] = a*d + b*c;
}


void divide_complejos(float num1[2], float num2[2], float resultado[2]) {
    // (a + bi)/(c + di) = (ac + bd)/(c^2 + d^2) + (bc - ad)/(c^2 + d^2)
    
    float a = num1[0];
    float b = num1[1];

    float c = num2[0];
    float d = num2[1];

    resultado[0] = (a*c + b*d)/(pow(c, 2) + pow(d, 2));
    resultado[1] = (b*c - a*d)/(pow(c, 2) + pow(d, 2));
}