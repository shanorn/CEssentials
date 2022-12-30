#include<stdio.h>
#include"calculadora.h"

#define TAM_MEMORIA 3000

void imprimeMenu() {
    printf("-------------------------\n");
    printf("CALCULADORA DE FRACCIONES\n");
    printf("-------------------------\n\n");
    printf("1. Introduzcir fraccion en memoria.\n"); 
    printf("2. Eliminar fraccion de la memoria.\n");
    printf("3. Mostrar fraccion.\n");
    printf("4. Mostrar todas las fracciones.\n");
    printf("5. Mostrar valor real de una fraccion.\n");
    printf("6. Simplificacion de fraccion y almacenamiento en memoria.\n");
    printf("7. Suma de fracciones (Resultado simplificado) y almacenamiento en memoria.\n");
    printf("8. Resta de fracciones (Resultado simplificado) y almacenamiento en memoria.\n");
    printf("9. Multiplicacion de fracciones (Resultado simplificado) y almacenamiento en memoria.\n");
    printf("10. Division de fracciones (Resultado simplificado) y almacenamiento en memoria.\n");
    printf("11. Salir.\n");
    printf("-------------------------\n");
    printf("Introduzca la funcion que desea realizar:\n");
    fflush(stdin);
}


int main () {

    int opcion = 0;

    int mem_num[TAM_MEMORIA]; //memoria numerador
    int mem_denom[TAM_MEMORIA]; //memoria denominador
    int posicion=0;

    int num = 0;
    int denom = 0;
    
    int salir = 0;

    int posicion_eliminar = -1;
    int posicion_mostrar = -1;

    while (!salir) {
        imprimeMenu();
        printf("Introduzca una opción: ");
        scanf("%i", &opcion);

        if(opcion==11){
            salir=1;
        }else if (opcion>0 && opcion<11){
            printf("");
        }else{
            printf("\n\n X  OPCIÓN INCORRECTA  X\n\n");
        }

        switch (opcion)
        {
        case 1:
        /*
            printf("Introduce el numerador :\n");
            scanf("%i", &num);
            printf("Introduce el denominador: \n");
            scanf("%i", &denom);
        */
            printf("Introduzca la fraccion con formato a/b\n");
            fflush(stdin);
            scanf("%d/%d", &num, &denom);

            mem_num[posicion]=num;
            mem_denom[posicion]=denom;
            printf("Ingresaste la fracción :%i/%i en la posición de memoria :%i\n", num,denom,posicion);
            posicion++;
            break;
        case 2:
            printf("Introduzca la posicion del elemento a eliminar: \n");
            fflush(stdin);
            scanf("%d", &posicion_eliminar);
            eliminarFraccion(mem_num, mem_denom, &posicion, posicion_eliminar);
            break;
        case 3:

            // Comprobar que la posicion introducidad sea correcta > 0 y < tamaño
            printf("Introduzca la posicion para mostrar fracción: \n");
            fflush(stdin);
            scanf("%d", &posicion_mostrar);
            
            if (posicion_mostrar < 0 || posicion_mostrar >= posicion) {
                printf("Elemento fuera de rango. \n");
            } else {
                imprimeFraccion(mem_num, mem_denom, posicion_mostrar);
            }
            
        default:
            break;
        }
    }
    
}