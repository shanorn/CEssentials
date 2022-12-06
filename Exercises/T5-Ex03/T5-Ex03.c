#include<stdio.h>
/*
Escribe una función que acepte como parámetro una letra minúscula y devuelva la
correspondiente letra mayúscula. No podrá usarse ninguna función de las librerías
estándar de C. El programa debe funcionar para todas las letras comprendidas entre
la a y la z a excepción de la ñ. Ayuda: emplear la tabla de caracteres ASCII
*/

char toUpperCase (char minuscula) {
    char mayuscula; 
    if (minuscula >= 97 && minuscula <= 122){
        mayuscula = minuscula - 32; 
    } else {
        mayuscula = 0;
        printf("El caracter introducido no es una letra minusucla: a-z\n");
    }

    return mayuscula;
}

void main () {

    char resultado = toUpperCase('a');
    printf("%c\n", resultado);
    resultado = toUpperCase('p');
    printf("%c\n", resultado);
    resultado = toUpperCase('z');
    printf("%c\n", resultado);
    resultado = toUpperCase('A');
    printf("%c\n", resultado);
    resultado = toUpperCase('.');
    printf("%c\n", resultado);
}