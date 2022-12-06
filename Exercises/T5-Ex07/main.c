#include"vector.h"
/*
Modificar el programa del ejercicio anterior empleando archivos de cabecera.
*/

void main () {
    float vector_1[3] = {1, 2, 3};
    float vector_2[3] = {0, 1, -1};

    producto_escalar(vector_1, vector_2);
    producto_vectorial(vector_1, vector_2);

    float vector_3[3] = {5, 7, 3};
    float vector_4[3] = {-2, 4, -7};

    producto_escalar(vector_3, vector_4);
    producto_vectorial(vector_3, vector_4);


}