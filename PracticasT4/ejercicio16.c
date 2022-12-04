#include<stdio.h>

void main () {
    int opcion = 0;
    printf("PROGRAMA CALCULADORA\n\n");
    printf("1. Realizar una suma.\n");
    printf("2. Realizar una resta.\n");
    printf("3. Realizar una multiplicacion.\n");
    printf("4. Realizar una division.\n");
    printf("5. Salir.\n");
    printf("Introduzca su opcion:\n");
    fflush(stdin);
    scanf("%d", &opcion); 

    float a, b;
    if (opcion >= 1 && opcion <= 4){
        printf("Introduzca el valor A:\n");
        fflush(stdin);
        scanf("%f", &a); 
        printf("Introduzca el valor B:\n");
        fflush(stdin);
        scanf("%f", &b); 
    }
    float resultado;

    switch (opcion)
    {
    case 1:
        resultado = a + b;
        printf("Suma: %.2f + %.2f = %.2f\n", a, b, resultado);
        break;
    case 2:
        resultado = a - b;
        printf("Resta: %.2f - %.2f = %.2f\n", a, b, resultado);
        break;
    case 3:
        resultado = a * b;
        printf("Multiplicacion: %.2f * %.2f = %.2f\n", a, b, resultado);
        break;
    case 4:
        resultado = a / b;
        printf("Division: %.2f / %.2f = %.2f\n", a, b, resultado);
        break;
    default:
        break;
    }
}