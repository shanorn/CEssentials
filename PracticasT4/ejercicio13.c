#include<stdio.h>

/*
Escribe un programa que dada una cantidad de dinero indique cuál es la cantidad
mínima de monedas (indicando el número de cada tipo de moneda) que se puede
emplear para representar esa cantidad de dinero.
*/
void main () {
    float dinero;
    printf("Introduzca la cantidad de dinero (Euros) a cambiar:\n");
    fflush(stdin);
    scanf("%f", &dinero);

    dinero *= 100;
    // Si se hace la operación directamente sobre la asignación puede fallar 3.85 => 384
    int dinero_entero = dinero;

    printf("%d\n\n", dinero_entero);

    int monedas[] = {200, 100, 50, 20, 10, 5, 2, 1};
    int cantidad_monedas[] = {0, 0, 0, 0, 0, 0, 0, 0};

    // Calcula cantidad de tipos de monedas
    int longitud_monedas = sizeof(monedas)/sizeof(monedas[0]);
    
    // printf("%d", longitud_monedas);
    // Se va comprobando si es divisible de mayor a menor (orden en lista)
    for (int i = 0; i < longitud_monedas; i++){
        while (dinero_entero >= monedas[i]) {
            dinero_entero -= monedas[i];
            cantidad_monedas[i]++;
        }
    }

    // Mostramos los resultados
    for (int i = 0; i < longitud_monedas; i++) {
        float valor = ((float) monedas[i])/100;
        printf("%d monedas de %.2f Euros.\n", cantidad_monedas[i], valor);
    }





}