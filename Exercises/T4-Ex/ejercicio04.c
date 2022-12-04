#include<stdio.h>

/*
Calcular la suma de todos los múltiplos de 5 comprendidos entre 1 y 100. Calcular
además cuantos hay y visualizar cada uno de ellos
*/  
void main () {
    
    int suma_multiplos = 0;
    int contar_multiplos = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            suma_multiplos += i;
            contar_multiplos++;
            printf("%d: %d - SumaActual: %d\n", contar_multiplos, i, suma_multiplos);
        }
    }
}