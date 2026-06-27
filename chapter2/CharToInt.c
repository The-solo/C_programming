#include<stdio.h>

int atoi(char s[]);

int main (){

    char name[10] = "1234567";
    printf("The integer value of the input string is : %d\n", atoi(name));
    return 0;
}

int atoi(char s[]) {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i){
        n = 10 * n + (s[i] - '0'); //mul by 10 is to add the base 10 after each iteration.
        printf("The value of n for this iteration is %d\n", n);
    }
    return n;
}
