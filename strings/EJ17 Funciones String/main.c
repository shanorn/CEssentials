#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100];
    char cadena2[100];

    printf("Introduzca una cadena de caracteres: \n");
    fflush(stdin);
    gets(cadena1);

    printf("Introduzca otra cadena de caracteres: \n");
    fflush(stdin);
    gets(cadena2);

    if (strcmp(strupr(cadena1),strupr(cadena2)) == 0) {
        printf("Las cadenas [%s] y [%s] son iguales.\n", cadena1,cadena2);
    } else {
        printf("Las cadenas [%s] y [%s] son distintas.\n", cadena1,cadena2);
    }
    
    char cadenaFinal[200];

    strcat(cadena1, cadena2);

    printf("Cadena: %s\n", cadena1);
    printf("Cadena: %.15s\n", cadena1);

}
