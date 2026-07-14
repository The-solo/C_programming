#include <stdio.h>

typedef enum {
    // since the 1st value of very large the other two got increamented by +1 by compiler.
    
    BIG = 123412341234, // unsigned int represents a very large number.
    BIGGER, // 123412341235
    BIGGEST, //123412341236

} BigNumbers;

typedef enum {
    HTTP_BAD_REQUEST = 400,
    HTTP_UNAUTHORIZED = 401,
    HTTP_NOT_FOUND = 404,
    HTTP_I_AM_A_TEAPOT = 418,
    HTTP_INTERNAL_SERVER_ERROR = 500
} HttpErrorCode;

int main() {
    // enums are basically 'set of interger rules' & stores single int value at a time.
    // that is why the size of operator gives back the size 8 & 4 bytes depending upon the range. 
    printf("The size of BigNumbers is %zu bytes.\n", sizeof(BigNumbers));
    printf("The size of HttpErrorCode is %zu bytes.\n", sizeof(HttpErrorCode));
    return 0;
}
