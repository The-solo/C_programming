#include <stdlib.h>

// the type SnekObject is reffering to itself inside.
// which cause the problem because SnekObject hasn't been defined yet.
// Solution ?? forward declaration.

typedef struct SnekObject snekobject_t;  // letting the compiler know that the object of type e.g exists.

typedef struct SnekObject {
    char *name;
    snekobject_t *child;
} snekobject_t;

snekobject_t new_node(char *name) {
    snekobject_t node = {
        .name = name,
        .child = NULL,
    };
    return node;
}


int main() {
    return 0;
}
