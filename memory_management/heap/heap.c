#include <stdio.h>
#include <stdlib.h>

char *get_full_greeting(char *greeting, char *name, int size);


char *get_full_greeting(char *greeting, char *name, int size) {

    char *full_greeting = malloc(size * sizeof(char)); //allocating the memory.
    // here the void pointer is converted to char instead of int because full_greeting is char array.
    // the full_greeting is just a pointer which is stored on stack and actual data on heap.
    // that's why doing char full_greeting[malloc(size * sizeof(char))] is invalid coz it is a static allocation.
    if (full_greeting == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); // Exit if allocation fails
    }

    snprintf(full_greeting, size, "%s %s", greeting, name);
    return full_greeting;
}

int main(){

    char *msg = get_full_greeting("Hello", "sasuke", 20);
    printf("%s\n", msg);
    free(msg);
    return 0;
}
