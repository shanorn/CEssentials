#include<stdio.h>

float media_palabras(char *cadena_entrada) {
    int pos = 0;
    float letras = 0; 
    float palabras = 0;

    while (cadena_entrada[pos] != '\0') {
        if (pos == 0 && cadena_entrada[pos] != ' ') {
            palabras++;
        }
        if (cadena_entrada[pos] != ' ') {
            letras++;
        } 
        if (cadena_entrada[pos+1] != '\0') {
            if (cadena_entrada[pos] == ' ' && cadena_entrada[pos+1]  != ' ') {
                palabras++;
            }
        } 
        pos++;       
    }

    float resultado = letras/palabras;
    return resultado;
}

int main () {
    char texto[] = "    Pie Casa Vaca Elefante  Cocodrilo     Rotulador ";

    float resultado = media_palabras(texto);
    printf("Resultado: %f\n", resultado);

    return 0;
}