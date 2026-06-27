#include <stdio.h>
//Works for char to ascii value conversion.
int main (){

    return 0;
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z'){
        return c + 'a' - 'A';
    //lower and upper characters are equal distance aprt from each other
    } 
    return c;
}
