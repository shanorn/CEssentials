#include<stdio.h>
/*
Escribe un programa que lea un mes en número (1 para enero, 2 para febrero, etc.)
y un año e indique el número de días de ese mes. Recuerda, el año es bisiesto si
divisible por cuatro, excepto cuando es divisible por 100, a no ser que sea divisible
por 400.
*/

void main () {
    int mes = 0; 
    int anno = 0;
    int num_dias = 0;

    printf("Introduzca el numero del mes: \n");
    fflush(stdin);
    scanf("%d", &mes);

    printf("Introduzca el año: \n");
    fflush(stdin);
    scanf("%d", &anno);

    switch (mes)
    {
    case 1:
        num_dias = 31;
        break;
    case 2:
        if (((anno % 4 == 0) && !(anno % 100 == 0)) || anno % 400 == 0 ) {
            num_dias = 29;
        } else {
            num_dias = 28;
        }
        break;
    case 3:
        num_dias = 31;
        break;
    case 4:
        num_dias = 30;
        break;
    case 5:
        num_dias = 31;
        break;
    case 6:
        num_dias = 30;
        break;
    case 7:
        num_dias = 31;
        break;
    case 8:
        num_dias = 31;
        break;
    case 9:
        num_dias = 30;
        break;
    case 10:
        num_dias = 31;
        break;
    case 11:
        num_dias = 30;
        break;
    case 12:
        num_dias = 31;
        break;
    default:
        break;
    }
    printf("Número de días: %d", num_dias);
}