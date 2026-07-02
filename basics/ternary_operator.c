#include<stdio.h>

int main (void) {

    int a = 50;
    int b = 10;
    // a > b = condition. if true then first value i.e a else 2nd i.e b
    // use when setting single value or the result of the boolean expression.
    // not a replacement for the if/else.
    int max = a > b ? a : b;
    printf("max: %d\n", max);

    char x = 1 == 0 ? 't' : 'f';
    printf("%c\n", x);
}
