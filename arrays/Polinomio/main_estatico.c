/*
Escribir un programa que pida el grado de un polinomio, sus coeficientes y un
valor para "x" y que calcule el valor del polinomio en x. Emplear un array para
almacenar los coeficientes del polinomio
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX_POLINOMIO 50

// Version array estático
int main () {
    float coeficientes[MAX_POLINOMIO]; 
    int grado = 0;
    int x = 0;

    // Lectura del grado
    printf("Introduzca el grado del polinomio (MAX: %d): \n", MAX_POLINOMIO);
    fflush(stdin);
    scanf("%d", &grado);

    // Comprobamos que el grado esté en el rango permitido (0, 50]
    if (grado <= 0 || grado > 50) {
        printf("El grado introducido está fuera de rango (0, 50]\n");
        exit(-1);
    }

    printf("Va a introducir coeficientas para un coeficientes de grado: %d\n", grado);

    // Vamos leyendo todos los datos 
    // OJO al <= o + 1 
    for (int i = 0; i < (grado + 1); i++){
        printf("Introduzca el coeficiente %d\n", i);
        fflush(stdin);
        scanf("%f", &coeficientes[i]);
    }

    // Mostramos el polinomio
    printf("Su polinomio es ");
    for (int i = 0; i < (grado + 1); i++){
        printf("%.2fx^%d", coeficientes[i], i);
        if (i != grado) printf(" + ");
    }
    printf("\n");

    printf("Introduzca el valor para x: \n");   
    fflush(stdin);
    scanf("%d", &x);

    // Evaluamos el polinomio con el valor de x
    float valor = 0;
    for (int i = 0; i < (grado + 1); i++){
        valor += coeficientes[i] * pow(x, i);
    }

    printf("Valor: %.2f\n", valor);



}