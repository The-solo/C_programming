#include <stdio.h>

typedef enum snek_object_kind {
    INTEGER,
    STRING,
} snek_object_kind_t;

typedef union SnekObjectData { // combination of both enum & struct.
    int v_int;
    char *v_string;
} snek_object_data_t;

typedef struct SnekObject {
    snek_object_kind_t kind;
    snek_object_data_t data;
} snek_object_t;



void format_object(snek_object_t obj, char *buffer) {
    switch (obj.kind) {
        case INTEGER :
            sprintf(buffer, "int:%d\n", obj.data.v_int);
            break;
        case STRING : 
            sprintf(buffer, "string:%s\n", obj.data.v_string);
            break;
    }
}


snek_object_t new_integer(int i) {
    return (snek_object_t){
        .kind = INTEGER,
            .data = {.v_int = i},
    };
}

snek_object_t new_string(char *str) {
    // NOTE: We will learn how to copy this data later.
    return (snek_object_t){
        .kind = STRING,
            .data = {.v_string = str},
    };
}

int main() {
    return 0;
}
