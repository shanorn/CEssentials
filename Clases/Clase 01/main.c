/*Escribe un programa que reserve dinámicamente memoria para 512 caracteres 
y que a continuación muestre por pantalla el contenido de las direcciones memoria reservadas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *ptr;
    ptr = (char*) malloc (512*sizeof(char));
    //printf("Direcciones de memoria reservadas: %p\n", &ptr);
    // \0
    //printf("%s", ptr);

    for(int i = 0; i<512; i++) {
        //printf("%c", *(ptr + i));
        printf("%p: %d\n", (ptr + i), *(ptr + i));
    }

}
