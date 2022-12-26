#include <stdio.h>
#include <string.h>

int es_vocal(char letra){
    if (letra == 'a' || letra == 'A' ||
        letra == 'e' || letra == 'E' ||
        letra == 'i' || letra == 'I' ||
        letra == 'o' || letra == 'O' ||
        letra == 'u' || letra == 'U') {
            return 1;
        } else {
            return 0;
        }
}

void main() {
    char cadena[100];
    printf("Introduzca una cadena de caracteres: \n");
    fflush(stdin);
    scanf("%99[^\n]", cadena);

    int contador = 0;

    for (int i=0; cadena[i]!='\0';i++) {
        if (es_vocal(cadena[i]) == 1) contador++;
    }

    printf ("La cadena '%s' tiene %d vocales\n", cadena, contador);

}
