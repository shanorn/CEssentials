#include<stdio.h>
#include<string.h>

int main () {
    char *cadena = "casa perro palabra palabra en en en casa";
    char *subcadena = "a";
    
    char *siguienteParte = cadena;
    int repeticiones = 0;

    while (strlen(siguienteParte) >= strlen(subcadena) && strstr(siguienteParte, subcadena) != NULL){
        printf("%p[%d]: %s\n", &siguienteParte, strlen(siguienteParte), siguienteParte);
        if (strstr(siguienteParte, subcadena) != NULL) {
            siguienteParte = strstr(siguienteParte, subcadena) + strlen(subcadena);
            repeticiones++;
        }
        
    }

    printf("La subcadena aparece %d veces\n", repeticiones);
}