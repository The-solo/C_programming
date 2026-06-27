#include<stdio.h>

#define LIM 1000

int  main() {
    char s[LIM];

    for(int i=0; i<LIM-1; i++){
        int c = getchar();
// Adding the break statements to ensure the correct termination.
        if(c == EOF){
            break; 
        }
        if(c== '\n'){
            break;
        }

        s[i] = c;
    }
    s[i] = "\0"; // null termination to ensure end of strig data.
    printf("you have entered this %s\n", s);
    return 0;
}
