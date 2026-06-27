#include<stdio.h>
#include<math.h>
//gcc test.c -o ../../out/chapter2/test -lm -> Include the Linker.
int main () {

    int  x = 3;

    printf("%d\n", ++x);
    printf("%d\n", x++);
    printf("%d\n", x);
//Here we are incrementing the value first which becomes 4. and prints 4.
//on the 2nd print statement the value becoems 5 but because of the postfix it used first as 4 and then returns the 5. 
    
    return 0;
}


