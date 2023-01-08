#include <stdio.h>
#include "fracciones.h"

//#define MEMORIA 3000 

//Primero haré una función que muestre el menú del programa.

void imprimeMenu(){
    printf("\n");
    printf("<\t--CALCULADORA DE FRACCIONES--\t >\n\n");

    printf("MENÚ: \n\n");
    printf("\t1.- Introducir una fracción en la memoria. \n");
    printf("\t2.- Eliminar una de las fracciones almacenadas en la memoria. \n");
    printf("\t3.- Mostrar UNA de las fracciones almacenadas en la memoria. \n");
    printf("\t4.- Mostrar TODAS las fracciones que están almacenadas en la memoria. \n");
    printf("\t5.- Mostrar el valor real de una fracción introducida por el usuario. \n");
    printf("\t6.- Simplificación de una fracción. \n");
    printf("\t7.- Suma de dos fracciones. \n");
    printf("\t8.- Resta de dos fracciones.\n");
    printf("\t9.- Multiplicación de dos fracciones.\n");
    printf("\t10.- División de dos fracciones. \n");
    printf("\t11.-SALIR\n\n");
    fflush(stdin);

}

int main(){

    //variables:
    int opcion = 0;

    int num = 0; //Numerador 
    int denom = 0; //Denominador

    int salir = 0;

    int posicion_eliminar = -1;
    int posicion_mostrar = -1;

    int posicion_calculo_a = -1;
    int posicion_calculo_b = -1;

    

    while (!salir){
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

        switch(opcion){
            //1.-Introducir una fracción.
            case 1:
            printf("Introduzca la fraccion con formato a/b\n");
            fflush(stdin);
            scanf("%i/%i", &num, &denom);

            guardarFraccion(num, denom);
            break;


            //2.-Eliminar una fracción.
            case 2:
            //Lectura del elemento a eliminar.
            printf("Introducza la posición de la fracción que desea eliminar:\n" );
            fflush(stdin);
            scanf("%i", &posicion_eliminar);

            //Comprobar que esa posición se encuentra dentro del rango.
            if(posicion_eliminar <0 || posicion_eliminar>=tamano_actual()){
                printf("Fuera de rango\n");
            }else{
                eliminarFraccion(posicion_eliminar);
            }

            break;

            //3.-Mostrar una fracción.
            case 3:
            //Lectura posicion a mostrar.
            printf("Introduzca la posición de la fracción que quiere mostrar: ");
            fflush (stdin);
            scanf("%i", &posicion_mostrar);

            //Comprobar que esa posición se encuentra dentro del rango.
            if (posicion_mostrar < 0 || posicion_mostrar >= tamano_actual()) {
                printf("Elemento fuera de rango. \n");
            } else {
                imprimeFraccion(posicion_mostrar);
            }

            break;

            //4.-Mostrar todas.
            case 4:

            mostrarMemoria();

            break;

            //5.-Valor Real.

            case 5:
            //Lectura posicion a mostrar.
            printf("Introduzca la posición de la fracción que quiere mostrar: ");
            fflush (stdin);
            scanf("%i", &posicion_mostrar);

            //Comprobar que esa posición se encuentra dentro del rango.
            if (posicion_mostrar < 0 || posicion_mostrar >= tamano_actual()) {
                printf("Elemento fuera de rango. \n");
            } else {
                mostrarReal(posicion_mostrar);
            }
            break;

            //6.-Simplifcación.
            case 6:
            // Lectura de posicion a simplificar
            printf("Introduzca la posicion para simplificar la fracción: \n");
            fflush(stdin);
            scanf("%i", &posicion_mostrar);

            //Comprobar que esa posición se encuentra dentro del rango.
            if (posicion_mostrar < 0 || posicion_mostrar >= tamano_actual()) {
                printf("Elemento fuera de rango. \n");
            } else {
                simplificarFraccion(posicion_mostrar);
                printf("Fraccion simplificada: \n");
                imprimeFraccion(posicion_mostrar);
            }
            break;

            //7.-Suma.

            case 7:
            // Lectura de las dos posiciones a sumar
            printf("Introduzca la posicion A para realizar la suma: \n");
            fflush(stdin);
            scanf("%i", &posicion_calculo_a);
            printf("Introduzca la posicion B para realizar la suma: \n");
            fflush(stdin);
            scanf("%i", &posicion_calculo_b);

            if (posicion_calculo_a < 0 || posicion_calculo_a >= tamano_actual() || posicion_calculo_b < 0 || posicion_calculo_b >= tamano_actual()) {
                printf("Una de las dos posiciones está fuera de rango. \n");
            } else {
                sumaFracciones(posicion_calculo_a, posicion_calculo_b);  
            }

            break;

            //8.- Resta.
            case 8:
            // Lectura de las dos posiciones a sumar
            printf("Introduzca la posicion A para realizar la suma: \n");
            fflush(stdin);
            scanf("%i", &posicion_calculo_a);
            printf("Introduzca la posicion B para realizar la suma: \n");
            fflush(stdin);
            scanf("%i", &posicion_calculo_b);

            if (posicion_calculo_a < 0 || posicion_calculo_a >= tamano_actual() || posicion_calculo_b < 0 || posicion_calculo_b >= tamano_actual()) {
                printf("Una de las dos posiciones está fuera de rango. \n");
            } else {
                restaFracciones(posicion_calculo_a, posicion_calculo_b);  
            }

            break;

            //9.-Multiplicación.
            case 9:
            printf("Introduzca la posicion A para realizar la suma: \n");
            fflush(stdin);
            scanf("%i", &posicion_calculo_a);
            printf("Introduzca la posicion B para realizar la suma: \n");
            fflush(stdin);
            scanf("%i", &posicion_calculo_b);

            if (posicion_calculo_a < 0 || posicion_calculo_a >= tamano_actual() || posicion_calculo_b < 0 || posicion_calculo_b >= tamano_actual()) {
                printf("Una de las dos posiciones está fuera de rango. \n");
            } else {
                multiplicacionFracciones(posicion_calculo_a, posicion_calculo_b);  
            }


            break;

            //10.-División.
            case 10:
            printf("Introduzca la posicion A para realizar la suma: \n");
            fflush(stdin);
            scanf("%i", &posicion_calculo_a);
            printf("Introduzca la posicion B para realizar la suma: \n");
            fflush(stdin);
            scanf("%i", &posicion_calculo_b);

            if (posicion_calculo_a < 0 || posicion_calculo_a >= tamano_actual() || posicion_calculo_b < 0 || posicion_calculo_b >= tamano_actual()) {
                printf("Una de las dos posiciones está fuera de rango. \n");
            } else {
                divisionFracciones(posicion_calculo_a, posicion_calculo_b);  
            }


            break;
            

            default:
            break;

        }
        

    }

}    