#include<stdio.h>
#define TABSTOP 4

int main () {
    int c;
    int space_counter = 0;
    int column_counter = 0;

    while((c = getchar()) != EOF){
        if(c == ' '){
            space_counter++;
            column_counter++;

            if(column_counter % TABSTOP == 0){
                putchar('\t');
                space_counter = 0;
            }
        } 
        else{
            for(int i=0; i<space_counter; i++){
                putchar(' '); 
            } 

            space_counter = 0;
            putchar(c);

            if (c == '\n'){
                column_counter = 0;
            }
            else{
                column_counter++;
            }
        }
    } 
    return 0;
}

