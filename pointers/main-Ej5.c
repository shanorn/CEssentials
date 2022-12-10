#include<stdio.h>
#include<stdlib.h>

void main () {
    char *caracteres;

    if ((caracteres = (char *) malloc(512*sizeof(char))) == NULL){
        printf("No se ha podido reservar memoria\n");
        exit(-1);
    } 

    // Recorremos toda la memoria reservada
    for (int i = 0; i<512; i++) {
        printf("%c", *(caracteres + i));
    }

    // Solo printf no lo muestra entero ya que no hemos incluido ningún \0

    printf("\n%s", caracteres);

}