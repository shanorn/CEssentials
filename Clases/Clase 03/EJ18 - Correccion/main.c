/*18. Escribe un programa que devuelva el número de caracteres que hay
 entre la primera y la última aparición de un carácter dado en una cadena; 
 tanto la cadena de caracteres como el carácter se le pedirán al usuario. */

#include <stdio.h>
#include <string.h>

int main(){
    //pedimos cadena.

    char a,cad[100];
    int i=0,primeraVez=-1,ultimaVez=0;
    printf("Introduce caracteres: ");
    fflush(stdin);
    gets(cad);

    //Pedimos caracter que se repite.
    printf("Caracter: ");
    scanf("%c",&a);

    while(cad[i]!='\0'){
        if(cad[i]==a){
            if(primeraVez==-1){
                primeraVez=i;
            }else{
                ultimaVez=i;
            }
        }
        i++;
    }

    printf("EL número de veces que se repite el caracter es: %i\n", ultimaVez-primeraVez-1);

    
    
}