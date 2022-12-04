#include<stdio.h>
#include<string.h>

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

void jugarAhorcado(char *adivinar){
    char adivinado[20];
    // Copiamos para tener el mismo tamaño reservado
    strcpy(adivinado, adivinar);
    // Rellenamos de '-' adivinado
    int pos = 0;
    while (adivinado[pos] != '\0') {
        adivinado[pos] = '-';
        pos++;
    }
     
    int fallos = 0;
    //Juego
    char letra = ' ';

    while (strcmp(adivinar, adivinado) != 0 && fallos < 6) {
        //printf("ADIVINAR: %s - ADIVINADO: %s\n", adivinar, adivinado);
         
        printf("Introduzca una letra: \n");
        //fflush(stdout);
        fflush(stdin);
        letra = getchar();
        //while(getchar() != '\n');

        if (strchr(adivinar, letra) != NULL) {
            int pos = 0;
            while(adivinar[pos] != '\0') {
                if (adivinar[pos] == letra) {
                    adivinado[pos] = letra;
                }
                pos++;
            }
            
        } else {
            fallos++;
        }
        

        printf("Palabra: %s Errores: %i \n", adivinado, fallos);
    }
    
    if (strcmp(adivinar, adivinado) == 0) {
        printf("\n\nHAS GANADO!! La palabra era: %s", adivinar);
    }
    //printf("\n\n%s\n\n", adivinar);
}

int main () { 

    char palabra[20] = "";
    int opcion = 0;
    while (opcion != 3)
    {
        menu();
        scanf("%i", &opcion);
        // Habría que validar.
        switch (opcion)
        {
        case 1:
            printf("Por favor, introduzca una palabra: \n");
            scanf("%s", palabra);
            //printf("\n%s\n", palabra);
            // 
            break;
        case 2:
            if (strcmp(palabra, "") == 0) {
                printf("Primero debe introducir la palabra con la opcion 1. \n");
            } else {
                jugarAhorcado(palabra);
                opcion = 3;
            }
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
    //printf("Fuera");
    //system("pause");    
    return 0;
}
