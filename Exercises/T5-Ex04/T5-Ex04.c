#include<stdio.h>

/*
Modificar el programa anterior de tal modo que la función modifique el carácter
que se le pasa como argumento y lo convierta en mayúscula. La función no debe
devolver nada; el carácter debe quedar modificado desde donde se llame a la
función.
*/
void toUpperCase (char *minuscula) {
    if (*minuscula >= 97 && *minuscula <= 122){
        *minuscula = *minuscula - 32; 
    } else {
        *minuscula = 0;
    }
}

void main () {

    char letra = 'a';
    printf("%c: ", letra);
    toUpperCase(&letra);
    printf("%c\n", letra);

    letra = 'p';
    printf("%c: ", letra);
    toUpperCase(&letra);
    printf("%c\n", letra);

    letra = 'z';
    printf("%c: ", letra);
    toUpperCase(&letra);
    printf("%c\n", letra);

    letra = '.';
    printf("%c: ", letra);
    toUpperCase(&letra);
    printf("%c\n", letra);
}