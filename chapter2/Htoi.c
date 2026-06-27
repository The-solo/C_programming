#include <stdio.h>
#include<string.h>

int htoi(char c);

int main (){    
    char hexa[] = "0x5D8727";

    int LenHexa = strlen(hexa);
    printf("The length of array is -> %d\n", LenHexa);
    //manual way to find the length of string.
    int len, i = 0;
    while(hexa[i] != '\0'){
       ++i;
        ++len;
    }

    for(int i=0; i<len; ++i){
        int c = htoi(hexa[i]);
        if(c!='\0'){
            printf("%d", c);
        }
    }
    return 0;
}

int htoi(char c) {

    if( c>='0' && c<='9'){
        return c - '0';
    }
    if (c>='a'&& c<='f' | c == 'x') {
        return c-'a'+10; //To correct the value of the hex code.
    }
    if(c>='A'&& c<='F' | c == 'X'){
       return c-'A'+ 10; 
    }
    return -1;
}
