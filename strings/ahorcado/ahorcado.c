#include<stdio.h>

void menu () {
    printf("----------------------\n");
    printf("---      Menu      ---\n");
    printf("----------------------\n");
    printf("Seleccione una opcion: \n");
    printf("1. Introducir palabra.\n");
    printf("2. Adivinar palabra.\n");
    printf("3. Salir.\n");
    printf("----------------------\n");
}
int main () { 

    int opcion = 0;
    while (opcion != 3)
    {
        menu();
        scanf("%i", &opcion);
        // Habría que validar.
        switch (opcion)
        {
        case 1:
            printf("Uno\n");
            break;
        case 2:
            printf("Dos\n");
            break;
        case 3:
            printf("Salir\n");
            break;
        default:
            printf("Debe introducir 1, 2 o 3.\n");
            opcion = 0;
            break;
        }
    }
    printf("Fuera");
    //system("pause");    
    return 0;
}
