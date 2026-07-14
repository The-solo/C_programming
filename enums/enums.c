#include<stdio.h>

int main(){

    // this is how you define the enums in C.
    // Unlike struct the enum is just a list of integers where each one has a name.

    typedef enum Color{
        RED = 55, //default value :0 
        GREEN = 176, // default value :1
        BLUE = 38, //default value :2
    }color_t;

    return 0;
}
