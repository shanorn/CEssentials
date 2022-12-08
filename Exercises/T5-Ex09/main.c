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
void calculadora() {
    int opcion = 0; 
    int datosLeidos = 0;
    while (opcion != 6) {
        printf("-----------\n");
        printf("CALCULADORA\n");
        printf("-----------\n\n");
        printf("Introduzca la funcion que desea realizar:\n");
        printf("1. Introduzca numeros complejos.\n"); 
        printf("2. Suma.\n");
        printf("3. Resta.\n");
        printf("4. Multiplicacion.\n");
        printf("5. Division.\n");
        printf("6. Salir.\n");
        fflush(stdin);
        scanf("%d", &opcion);

        if (opcion == 6) break;

        if (datosLeidos == 0 && opcion != 1) {
            printf("\nDebe introducir numeros complejos primero, usando la opcion 1.\n");
            opcion = 0;
        }

        float a = 0;
        float b = 0;
        float resultado[2] = {0, 0}; 
        switch (opcion)
        {
        case 1:      
            printf("Introduzca un numero complejo con formato: a + bi\n");
            fflush(stdin);
            scanf("%f + %fi", &a, &b);
            printf("x: %.2f + %.2fi\n", a, b);
            float x[2] = {a, b};
            printf("Introduzca otro numero complejo con formato: a + bi\n");
            fflush(stdin);
            scanf("%f + %fi", &a, &b);
            printf("y: %.2f + %.2fi\n", a, b);
            float y[2] = {a, b};
            datosLeidos = 1; 
            break;
        case 2:
            suma_complejos_proc(x, y, resultado);
            
            printf("La suma es %.2f + %.2fi\n", resultado[0], resultado[1]);
            break;
        case 3:
            resta_complejos(x, y, resultado);
            
            printf("La resta es %.2f + %.2fi\n", resultado[0], resultado[1]);
            break;
        case 4:
            multiplica_complejos(x, y, resultado);
            
            printf("La multiplicacion es %.2f + %.2fi\n", resultado[0], resultado[1]);
            break;
        case 5:
            divide_complejos(x, y, resultado);
            
            printf("La division es %.2f + %.2fi\n", resultado[0], resultado[1]);
            break;      
        
        default:
            break;
        }
    }
 

}

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

    // Calculadora 
    calculadora();
}