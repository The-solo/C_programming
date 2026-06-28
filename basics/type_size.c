#include<stdio.h>

int main (void) {

    // size of char = 1 byte.
    // size of int = 4 byte.
    // size of float = 4 bytes.
    // size of double = 8 bytes
    // Depends on the system, we cannot say it for sure.
    // the only way to be sure it using sizeof(type).

    int x = 69;
    int y = sizeof(x);
    printf("%d\n", y);

}
