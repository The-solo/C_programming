#pragma once 
// add on top of the file to ensure no overlapping error from multiple includes of libraries.
// It tells the compiler to include file only once and avoud confilicts.
#include<stdio.h>

void main () {
    struct Coordinate {
        int x;
        int y;
        int z;
    };
}
