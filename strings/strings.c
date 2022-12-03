#include<stdio.h>
#include<string.h>


int length(char string[]) {
    int largo=0;
    while (string[largo] != '\0') largo++;
    return largo;
}

int concat(char *string1, char *string2, int largo){
    int largo_string1 = length(string1);
    int largo_string2 = length(string2);

    if (largo_string1+largo_string2+1 > largo) return 0;

    for (int i=0; i<largo_string2; i++){
        string1[largo_string1+i] = string2[i];
    }
    string1[largo_string1+largo_string2] = '\0';

    return 1;
}

void intercambiar(char vector[], int pos1, int pos2); // Cabecera intercambiar
void invierte_cadena(char cadena[])
{
	int largo = strlen(cadena);
	for (int i=0; i < (largo/2); i++) {
		intercambiar(cadena, i, (largo-1)-i);
	}
}
// Para que desde la función invierte_cadena se pueda utilizar intercambiar podemos ponerla arriba o incluir la cabecera
void intercambiar(char vector[], int pos1, int pos2)
{
	char aux=vector[pos1];
	vector[pos1]=vector[pos2];
	vector[pos2]=aux;
}


int main () {
    // Define Strings 
    char cadena_hola[]="Hola";
	char otro_hola[]={'H','o','l','a','\0'}; // Igual al anterior
	char vector[]={'H','o','l','a'}; // Un vector de 4 elementos, con los elementos 'H','o','l' y 'a' 
	char espacio_cadena[1024]="Una cadena en C";
	char cadena_vacia[]="";

    // Show strings 
    printf("%s\n", cadena_hola);
    printf( "Tamaño de la cadena: %i bytes\n", sizeof cadena_hola );
    printf("%s\n", otro_hola);
    printf("%s\n", vector);
    printf("%s\n", espacio_cadena);

    int largo = length(espacio_cadena);
    printf("Largo de %s: %i\n",espacio_cadena,largo);

    concat(espacio_cadena, cadena_hola, 1024);
    largo = length(espacio_cadena);
    printf("Largo de %s: %i\n",espacio_cadena,largo);

    char cadena[]="Hola";
    char cadena1[]="cadena1";
    char cadena2[]="cadena2";

    // Standard library
    largo = strlen(cadena); // Para obtener el largo de una cadena
    strcpy(cadena, cadena1); // Copia el contenido de origen en destino
    printf("\n%s %s\n", cadena, cadena1);

    strcat(cadena1, cadena2); // Agrega el contenido de origen al final de destino
    printf("\n%s %s\n", cadena1, cadena2);                    

    strcpy(cadena1, "cadena2"); // Copia el contenido de origen en destino
    strcpy(cadena2, "Prueba para intercambiar"); // Copia el contenido de origen en destino

    int resultado = strcmp(cadena1, cadena2); // Compara dos cadenas
    // devuelve un valor menor, igual o mayor que 0 según si cadena1 es menor,
    // igual o mayor que cadena2, respectivamente. 
    printf("%i\n", resultado);
    if (resultado == 0) {
        printf("Las cadenas son iguales: %s - %s\n", cadena1, cadena2);
    } else {
        printf("Las cadenas son distintas: %s - %s\n", cadena1, cadena2);
    }
    
    char ch = 'e';
    char *posicion = strchr(cadena, ch);
    // Devuelve la posición en memoria de la primer
    // aparición de caracter dentro de cadena
    printf("\nString after %c is - %s\n", ch, posicion);

    char substr[] = "ad";
    posicion = strstr(cadena, substr); 
    // Devuelve la posición en memoria de la primer 
    // aparición de subcadena dentro de cadena
    printf("\nString after %c is - %s\n", ch, posicion);


    intercambiar(cadena2, 1, 8);
    printf("Intercambio 1, 8: %s\n\n", cadena2);

    intercambiar(cadena2, 8, 1);
    invierte_cadena(cadena2);

    printf("Invertida: %s\n\n", cadena2);
    
    char buffer[1024];
    sprintf(buffer, "Invertida: %s\n\n", cadena2);

    //printf(buffer);
    //printf(buffer);
    //system("pause");
    
}

