#include<stdio.h>

int main () {

    int variable = 5;

    int *ptr_variable = &variable;

    printf("%p: [%d]\n", ptr_variable, *ptr_variable);

    void *ptr_ptr = &ptr_variable;
    printf("%p: [%p]\n", ptr_ptr, * (int *) ptr_ptr);

    void *ptr_ptr_ptr = &ptr_ptr;

    printf("%p: [%p]\n", ptr_ptr_ptr, * (int **) ptr_ptr_ptr);

    printf("Imprimir solo con ultimo puntero:\n");
    printf("%p: %p -> %p: %p -> %p: %p -> %p: %d\n", &ptr_ptr_ptr, ptr_ptr_ptr, ptr_ptr_ptr,  * (int **) ptr_ptr_ptr, * (int **) ptr_ptr_ptr, ** (int ***) ptr_ptr_ptr, ** (int ***) ptr_ptr_ptr, *** (int ***) ptr_ptr_ptr );

    //Solo contenido
    printf("%p -> %p -> %p -> %p -> %d\n", &ptr_ptr_ptr, ptr_ptr_ptr, * (int **) ptr_ptr_ptr, ** (int ***) ptr_ptr_ptr, *** (int ***) ptr_ptr_ptr );
}