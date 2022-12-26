#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//#define MAX_POLINOMIO 50 

int main () {
    int grado = 0;
    int x = 0;
    int *polinomio;
    
    // 4x^3 + 2x^2 + x + 6
    // 6 + 1x + 2x^2 + 4x^3 
    //while (grado <= 0 || grado > 50) {
    printf("Introduzca el grado del polinomio: \n");
    fflush(stdin);
    scanf("%d", &grado);
    //}

    //polinomio = (int *) malloc ((grado + 1) * sizeof(int));
    polinomio = (int *) calloc (grado + 1, sizeof(int));
    
    if (grado < 0 || grado > 50) {
        printf("El grado debe ir en el rango (0, 50) \n");
        exit(-1);
    }

    // 0  - (grado + 1) 
    for (int i = 0; i < (grado + 1); i++) {
        printf("Introduzca el elemento con exponente %d: \n", i);
        fflush(stdin);
        //scanf("%d", &polinomio[i]);
        scanf("%d", (polinomio + i));
    }
    
    printf("Introduzca el valor de x:\n");
    fflush(stdin);
    scanf("%d", &x);

    int resultado = 0;
    // Evaluacion del polinomio
    for (int i = 0; i < (grado + 1); i++) {
        resultado = resultado + polinomio[i] * pow(x, i);
    }


    for (int i = 0; i < (grado + 1); i++) {
        if (grado == i) {
            printf("%d*(%d^%d)", polinomio[i], x, i);
        } else {
            printf("%d*(%d^%d) + ", polinomio[i], x, i);
        }
    }
    
    printf(" = %d", resultado);
}
