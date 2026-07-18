#include "limits.h"
#include <stdio.h>

// union stores all the values in the same memory no matter the type of the field being used.
// Because no two values can be used at the same time.

typedef union {
    int value;
    unsigned int err;
} val_or_err_t;

int main() {
    val_or_err_t my_score = {.value = -420};  // setting the signed int value.
    printf("value (set): %d\n", my_score.value);
    printf("err (unset): %u\n", my_score.err);

    val_or_err_t your_score = {
        .err = UINT_MAX // maximum unsigned int value possible.
    };
    printf("value (unset): %d\n", your_score.value); // prints -1 because reading bytes from same memory as signed int.
    printf("err (set): %u\n", your_score.err);
}
