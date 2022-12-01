#include <stdio.h>

int main() {
    int var = 5;
    // To show value allocate in var
    printf("var value: %d\n", var);

    // To show adress use of & var 
    printf("var adress: %p\n\n", &var);

    geeks();

    return 0;
}

// Pointers Syntax

void examplesSyntax(){
    // int* p;
    // int *p;
    // int * p;
    // int * p1,p2;
    // Assigning addresses to Pointers
    int* pc, c;
    c = 5;
    pc = &c;
    printf("%d", *pc);   // Output: 5
}

// Changing Value Pointed by Pointers
void exampleChanging(){
    int* pc, c;
    c = 5;
    pc = &c;
    *pc = 1;
    printf("%d", *pc);  // Ouptut: 1
    printf("%d", c);    // Output: 1
}

void geeks()
{
    int var = 20;
  
    // declare pointer variable
    int* ptr;
  
    // note that data type of ptr and var must be same
    ptr = &var;
  
    // assign the address of a variable to a pointer
    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
}


