#include<stdio.h>
#include<string.h>


void concat_strings(char *str1, const char *str2) {
    char *end = str1;
    while (*end != '\0') {
        end++;
    }

    while (*str2 != '\0') {
        *end = *str2;
        end++;
        str2++;
    }

    *end = '\0';
}

// void concat_strings(char *str1, const char *str2) {
//
//     while(*str1 != '\0'){
//         *str1++;
//     }
//
//     while ( *str2 != '\0') {
//         *str1 = *str2
//             *str1++;
//             *str2++;
//     }
//     *str1 = '\0';
// }
//
// 
//
// my implementation.

int main() {

    char name[100] = "sasuke";
    char *new = "uchiha!";
    concat_strings(name, new);
    printf("%s\n", name);
    return 0;
}

