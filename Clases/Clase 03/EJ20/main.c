#include<stdio.h>
#include<string.h>

int main () {
    char *cadena = "casa perro palabra palabra en en en perro";
    //char *cadena = "en en en perro";
    char *subcadena = "palabra";
    //char cadena2[100] = "casa perro palabra palabra en en en perro";

    char *iterador = cadena;
    int repeticiones = 0;

    //printf("Cadena: [%s] - SiguienteParte[%s] \n", cadena, siguienParte);
    
    while (strstr(iterador, subcadena) != NULL) {
        printf("%p[%d]: %s\n", &iterador, strlen(iterador), iterador);
        
        iterador = strstr(iterador, subcadena) + strlen(subcadena);
        repeticiones++;
    }

    
    //char *prueba = strstr(cadena, subcadena) + strlen(subcadena);
    //printf("Prueba: [%s]\n", prueba); 

    printf ("La subcadena %s aparece %d veces.\n", subcadena, repeticiones);


}