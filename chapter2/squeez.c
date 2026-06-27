#include <stdio.h>

void squeeze(char s1[], char s2[]);


int main() {
    char str1[] = "sasuke";
    char str2[] = "naruto";

    squeeze(str1, str2);
    printf("%s\n", str1);
    return 0;
}

void squeeze(char s1[], char s2[]){

    int i, j;
    int k = 0;

    for(i=0; s1[i]!='\0'; ++i){
        int found = 0;
        for(j=0; s2[j]!='\0'; ++j){
            if(s1[i] == s2[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            s1[k++] = s1[i];
        //using the current value of K & also incrementing it in the same operation.
        }
    } 
    s1[k] = '\0';
    //it is important to mark the end of the string in C.
}
