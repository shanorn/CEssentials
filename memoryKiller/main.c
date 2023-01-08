#include<stdio.h>
#include<stdlib.h>

int main() {
    int *reallocKiller; 
    int increment = 2; 

    reallocKiller = (int *) malloc(increment * sizeof(int));

    while(reallocKiller != NULL) {
        
        increment *= 2;
        printf("Killing memory level %d\n", increment);
        reallocKiller = (int *) realloc(reallocKiller, increment * sizeof(int));
        
    }
    
}