#include<stdio.h>
#include<string.h>


// void concat_strings(char *str1, const char *str2) {
//     char *end = str1; // preserving the starting address of the str1 by doing this.
//     while (*end != '\0') {
//         end++;  // we have ending address here.
//     }
//
//     while (*str2 != '\0') {
//         *end = *str2;
//         end++;
//         str2++;
//     }
//     *end = '\0';
// }
//
//

// My implementation
void concat_strings(char *str1, const char *str2) {

    // we have no need of the starting address of the str1 here so this works fine.
    while(*str1 != '\0'){
        str1++; // holds the index of '\0' aka end of str1
    }

    while (*str2 != '\0') {
        *str1 = *str2; //dereferencing and assinging value of one pointer to another.
            str1++;
            str2++; 
    // Because using *str2++ is dereferencing old address and gets the char.
    // so using only str1++ or str2++ makes more sense. 
    // But *str1++ would work the same in our case.
    }
    *str1 = '\0';
}



// my implementation.

int main() {

    char name[100] = "sasuke";
    char *new = " uchiha!";
    concat_strings(name, new);
    printf("%s\n", name);
    return 0;
}

