/*19. Escribe un programa que lee una cadena de caracteres de 
teclado e indique si es o no palíndroma (se lee igual de izquierda
a derecha que de derecha a izquierda, sin tener en cuenta los espacios 
en blanco y las mayúsculas). Por ejemplo: "dábale arroz a la zorra el abad".*/

//Tengo que escribir una cadena y luego la misma al revés y comparar si son iguales.

#include <stdio.h>
#include <string.h>

int main(){
    //Pedimos la primera cadena.
    char cad1[100],cad2[100]; //Hay que hacerlo con un puntero en cad2??
    printf("--> Primera Cadena:");
    fflush(stdin);
    gets(cad1);
    printf("Cadena:");
    puts(cad1);

    //Cadena invertida.
    int i=0;

    printf("La cadena al revés: ");

    // Este bucle solo lo muestra por pantalla pero no realiza ningun cambio
    for(i=strlen(cad1);i>=0;i--){
        printf("%c", cad1[i]);
    }
    printf("\n");

    // Incluimos sobre cad2 la cad1 pero cambiada de orden
    printf("\n");
    // "perro"
    // strlen - 5
    //
    for (int i = 0; i < strlen(cad1); i++) {
        cad2[i] = cad1[strlen(cad1) - 1 - i];
    }
    cad2[strlen(cad1)] = '\0';
    printf("Cadena al reves: [%s]\n", cad2);

    //veamos si la cadena es palíndroma.
    /*
    printf("PALÍNDROMA? : \n");
    gets(cad2);
    puts(cad2);
    if(0==strcmp(cad1,cad2)){
            printf("PALÍNDROMA\n");
        }else printf("NO PALÍNDROMA\n");
    */
    printf("Cadena: [%s] - Al revés: [%s]\n", cad1, cad2);

    if(0==strcmp(cad1,cad2)){
        printf("PALÍNDROMA\n");
    }else{
        printf("NO PALÍNDROMA\n");
    } 
}