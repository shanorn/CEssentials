#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *quitaEspacios(char *cadena) {
    char *nuevaCadena = (char *) malloc(sizeof(char)*(strlen(cadena)+1));

    int i = 0;
    int j = 0; 
    while (cadena[i] != '\0') {
        if (cadena[i] != ' ') {
             nuevaCadena[j] = cadena[i];
             j++;
        }
        i++;
    }
    nuevaCadena[j] = '\0';
    return nuevaCadena;
}

int main () {
    char cadena[100] = "dabale arroz a la zorra el abad";
    char *cadena_limpia = quitaEspacios(cadena);

    printf("[%s]: [%s]\n", cadena, cadena_limpia);

    int esPalindromo = 1; 
    for (int i = 0; i < strlen(cadena_limpia); i++) {
        //printf("%c %c\n", cadena_limpia[i], cadena_limpia[strlen(cadena_limpia) - 1 - i]);
        if (cadena_limpia[i] != cadena_limpia[strlen(cadena_limpia) - 1 - i]) {
            esPalindromo = 0;
        }
    }

    if (esPalindromo) {
        printf("Es palindromo\n");
    } else {
        printf("No es palindromo\n");
    }

}