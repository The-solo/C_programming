#include <stdio.h>
#include <stdlib.h>

int *allocate_scalar_array(int size, int multiplier);


int *allocate_scalar_array(int size, int multiplier) {

    int *memory = malloc(size * sizeof(int));
    if(memory == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); // Exit if allocation fails
    }

    for(int i = 0; i < size ; i++){
        memory[i] = i * multiplier;
        printf("%d\n", memory[i]); // since we are looping here so print here as well.
    }
    //free(memory); // when function doesn't return the pointer, you can use free() inside the function itself.
    return memory;
}

int main(){

    int *integers = allocate_scalar_array(10, 10); // function of type int pointer.
    free(integers); // function returns the pointer so memory is freed inside the main.
    return 0;
}
