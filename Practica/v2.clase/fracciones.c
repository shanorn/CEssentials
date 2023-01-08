
#include"fracciones.h"

// #define MEMORIA 3000

//Voy a manejar la memoria desde fracciones.c
int posicion=0; //Tamaño del array en el que metemos fracciones.

int *mem_num = NULL; //memoria numerador
int *mem_denom = NULL; //memoria denominador


void reservaMemoria(int tamano) {
    if (mem_num == NULL && mem_denom == NULL) {
        mem_num = (int *) malloc(tamano * sizeof(int));
        mem_denom = (int *) malloc(tamano * sizeof(int));
    } else {
        mem_num = (int *) realloc(mem_num, tamano * sizeof(int));
        mem_denom = (int *) realloc(mem_denom, tamano * sizeof(int));
    }
    if (mem_num == NULL || mem_denom == NULL) {
        printf("Error: No hay memoria disponible\n");
        exit(-1);
    }
}

//1.-Introducir fracción en la memoria de la calculadora.
void guardarFraccion(int num, int denom){
    reservaMemoria(posicion + 1);
    mem_num[posicion]=num;
    mem_denom[posicion]=denom;
    posicion++;
    printf("Has introducido %i/%i en [%i]\n", num, denom, posicion-1);
}

//Necesitaremos saber el tamaño actual para eliminar la fraccion y sustituir esa posicion por la siguiente.
int tamano_actual(){
    return posicion;
}

//2.-Eliminar una de las fracciones almacenadas.
void eliminarFraccion(int posicion_eliminar){
    // defino punteros auxiliares
    int *aux_num = (int *) malloc((posicion - 1) * sizeof(int));
    int *aux_denom = (int *) malloc((posicion - 1) * sizeof(int));

    // Escribo en el auxiliar toda la informacion antes de la posicion a eliminar
    for(int i=0; i < posicion_eliminar; i++) {
        aux_num[i] = mem_num[i];
        aux_denom[i] = mem_denom[i];
    }

    // Escribo en el auxiliar la informacion desde la posicion a eliminar hasta el final
    for(int i=posicion_eliminar; i < (posicion-1);i++){
        aux_num[i] = mem_num[i+1];
        aux_denom[i] = mem_denom[i+1];
    }

    // Limpio la memoria de los array originales
    free(mem_num);
    free(mem_denom);

    // Asigno la direccion de nuevo a mem_num y mem_denom
    mem_num = aux_num;
    mem_denom = aux_denom;

    posicion--;

    
}

//3.-Mostrar una fracción.
void imprimeFraccion(int posicion) {
    printf("[%d]: %d/%d\n", posicion, mem_num[posicion], mem_denom[posicion]);
}


//4.- Mostrar todas las funciones.
void mostrarMemoria (){
    printf("MEMORIA:\n");
    for(int i=0; i < posicion ;i++){
        imprimeFraccion(i);
    }
}

//5.-Mostrar el valor real.

void mostrarReal(int posicion){
    float resultado =(float) mem_num[posicion]/mem_denom[posicion];
    printf("Valor real : %f\n", resultado);
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


static int maximo_comun_divisor(int a, int b) {
    int auxiliar;
    while (b != 0) {
        auxiliar = b;
        b = a % b;
        a = auxiliar;
    }
    return a;
}


static int minimo_comun_multiplo(int a, int b) {
    int resultado = (a * b) / maximo_comun_divisor(a, b);
    return resultado;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//6.- Simplicicación.

void simplificarFraccion(int posicion) {
    int mcd = maximo_comun_divisor(mem_num[posicion], mem_denom[posicion]);

    mem_num[posicion] /= mcd;
    mem_denom[posicion] /= mcd;
}


//7.-Suma fracciones.

void sumaFracciones(int posicion_a, int posicion_b) {
    
    int denom = minimo_comun_multiplo(mem_denom[posicion_a], mem_denom[posicion_b]);
    int num = denom / mem_denom[posicion_a] * mem_num[posicion_a] + denom / mem_denom[posicion_b] * mem_num[posicion_b];

    guardarFraccion(num, denom); 
    simplificarFraccion(posicion- 1);
    printf("Suma Fracciones: \n");
    imprimeFraccion(posicion- 1);
}

//8.- Resta Fracciones.

void restaFracciones(int posicion_a, int posicion_b) {
    int denom = minimo_comun_multiplo(mem_denom[posicion_a], mem_denom[posicion_b]);
    int num = denom / mem_denom[posicion_a] * mem_num[posicion_a] - denom / mem_denom[posicion_b] * mem_num[posicion_b];

    guardarFraccion(num, denom); 
    simplificarFraccion(posicion- 1);
    printf("Resta Fracciones: \n");
    imprimeFraccion(posicion- 1);
}

//9.- Multiplicación.
void multiplicacionFracciones(int posicion_a, int posicion_b) {
    int num = mem_num[posicion_a]*mem_num[posicion_b];
    int denom = mem_denom[posicion_a] * mem_denom[posicion_b];

    guardarFraccion(num, denom); 
    simplificarFraccion(posicion- 1);
    printf("Multiplicacion Fracciones: \n");
    imprimeFraccion(posicion- 1);
}



//10.-División.

void divisionFracciones(int posicion_a, int posicion_b) {
    int num = mem_num[posicion_a]*mem_denom[posicion_b];
    int denom = mem_denom[posicion_a] * mem_num[posicion_b];

    guardarFraccion(num, denom); 
    simplificarFraccion(posicion- 1);
    printf("División Fracciones: \n");
    imprimeFraccion(posicion- 1);
}