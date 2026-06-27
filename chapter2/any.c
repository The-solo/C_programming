#include <stdio.h>

int any(char s1[], char s2[]);

int main() {

    char s1[] = "Naruto";
    char s2[] = "Sasuke";
    any(s1, s2);

    return 0;
}

int any(char s1[], char s2[]){
    for(int i=0; s1[i] != '\0'; ++i){
        for(int j=0; s2[j] != '\0'; ++j){
            if(s1[i] == s2[j]){
                printf("%d\n", i);
            }
        }
    }
    return -1;
}
