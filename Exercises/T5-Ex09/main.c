#include<stdio.h>
#include"complejos.h"

/*
Escribe un módulo que permita realizar operaciones con números complejos, esto
es, números de la forma ai+b dónde tanto a como b son reales e i es el número
imaginario. El módulo deberá al menos permitir sumar, restar y multiplicar
números complejos. Exporta la interfaz del módulo mediante un archivo de
cabecera y, apoyándote en él, crea una calculadora que permita operar con números
complejos.
*/

// Definimos así un número complejo
// 
// a + bi
// 
// float n_complejo[2] = {a, b}; 
//
// a = n_complejo[0]
// b = n_complejo[1]
//
void main () {
    float num1[2] = {2, 3}; // 2 + 3i   
    float num2[2] = {5, 4}; // 5 + 4i

    float resultado[2] = {0, 0}; // Valor inicial
    suma_complejos_proc(num1, num2, resultado);  
    printf("(%.2f + %.2fi) + (%.2f + %.2fi) = (%.2f + %.2fi)\n", num1[0], num1[1], num2[0], num2[1], resultado[0], resultado[1]); 

    float *nuevoResultado; 

    nuevoResultado = suma_complejos_func(num1, num2);
    printf("(%.2f + %.2fi) + (%.2f + %.2fi) = (%.2f + %.2fi)\n", num1[0], num1[1], num2[0], num2[1], nuevoResultado[0], nuevoResultado[1]); 

    resta_complejos(num1, num2, resultado);  
    printf("(%.2f + %.2fi) - (%.2f + %.2fi) = (%.2f + %.2fi)\n", num1[0], num1[1], num2[0], num2[1], resultado[0], resultado[1]);

    multiplica_complejos(num1, num2, resultado);
    printf("(%.2f + %.2fi) * (%.2f + %.2fi) = (%.2f + %.2fi)\n", num1[0], num1[1], num2[0], num2[1], resultado[0], resultado[1]);

    divide_complejos(num1, num2, resultado);
    printf("(%.2f + %.2fi) / (%.2f + %.2fi) = (%.2f + %.2fi)\n", num1[0], num1[1], num2[0], num2[1], resultado[0], resultado[1]);
}