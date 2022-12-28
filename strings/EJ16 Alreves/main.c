#include <stdio.h>
#include <string.h>

void main() {
    char cadena[100];
    char alreves[100];

    printf("Introduzca una cadena de caracteres: \n");
    gets(cadena); 
    int longitud = strlen(cadena);

    for (int i = 0; i < longitud; i++){
        alreves[longitud - 1 - i] = cadena[i];
    }
    alreves[longitud] = '\0';

    puts(cadena);
    puts(alreves);
}
