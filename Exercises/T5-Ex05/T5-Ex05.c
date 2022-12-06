#include<stdio.h>
/*
Construye dos funciones que calculen una el producto escalar y otra el producto
vectorial de dos vectores y probar su funcionamiento en un programa. Ambas
funciones imprimirán dentro de su cuerpo el resultado de la operación que han
calculado.
*/
void producto_escalar (float vector_1[3], float vector_2[3]) {
    float resultado = 0;

    for (int i = 0; i < 3; i++){
        resultado += vector_1[i] * vector_2[i];
    }
    printf("Producto Escalar: %f\n", resultado);
}

/*
w0 = u1v2 - u2v1
w1 = - (u0v2 - u2v0)
w2 = u0v1 − u1v0
*/
void producto_vectorial (float vector_1[3], float vector_2[3]) {
    float resultado[3] = {0, 0, 0};
    resultado[0] = vector_1[1]*vector_2[2] - vector_1[2]*vector_2[1];
    resultado[1] = - (vector_1[0]*vector_2[2] - vector_1[2]*vector_2[0]);
    resultado[2] = vector_1[0]*vector_2[1] - vector_1[1]*vector_2[0];
    
    printf("Producto Vectorial: (%f, %f, %f)\n", resultado[0], resultado[1], resultado[2]);
}

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