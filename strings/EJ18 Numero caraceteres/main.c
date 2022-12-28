#include<stdio.h>
#include<string.h>

int main() {
    char cadena[100];
    char caracter = ' ';
    printf("Introduzca la cadena de caracteres: \n");
    fflush(stdin);
    gets(cadena);

    printf("Introduzca el caracter para contar los caracteres entre primera y ultima aparicion: \n");
    fflush(stdin);
    scanf("%c", &caracter);

    int longitud = strlen(cadena);
    
    char *primeraAparicion = strchr(cadena, caracter);
    char *ultimaAparicion = strrchr(cadena, caracter);

    char *iterador = primeraAparicion;
    int distancia = 0;
    //iterador = iterador + 1;
    /*
    printf("%p:%c\n", iterador, *iterador);
    printf("%p:%c\n", primeraAparicion, *primeraAparicion);
    printf("%p:%c\n", ultimaAparicion, *ultimaAparicion);
    */
   
    if (primeraAparicion != NULL && ultimaAparicion != NULL && primeraAparicion != ultimaAparicion){
        while (iterador != ultimaAparicion){
            distancia++;
            iterador++;
        }
    } else {
        distancia = 0;
    }

    printf("La distancia entre ambos caracteres es: %d\n", distancia);

}