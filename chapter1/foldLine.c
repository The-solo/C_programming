#include <stdio.h>

#define MAX_LENGTH 300
int main (){

    int c;
    char buffer[MAX_LENGTH];
    int column_counter = 0;
    int last_blank = -1; // Array start at 0 and hence -1 will never be valid. and using 0 might imply the blank or end of the word


    while((c = getchar())!=EOF){
        buffer[column_counter] = c;

        if(c==' ' || c=='\t'){
            last_blank = column_counter; 
        }
        column_counter++;

        if(column_counter == MAX_LENGTH){    

            if(last_blank >= 0){ 
                for(int i=0; i<last_blank; i++){
                    putchar(buffer[i]);
                }
                putchar('\n');

                int j = 0; //keep track of the char that being moved to new line.
                for(int i=last_blank+1; i<column_counter; i++){
                    buffer[j] = buffer[i]; //getting the leftover charactes to the start of the buffer.(zero loop optimization)
                    j++;
                }
                column_counter = j; //update the counter to the current AKA j position on new line.
                last_blank = -1;
            }
        }

        if(c == '\n'){ //if we found the new line early. we print the buffer and start again.
            for (int i=0; i<column_counter; i++){
                putchar(buffer[i]);
            }
            column_counter = 0;
            last_blank = -1;
        }
    }
    //print any leftover characters.
    for (int i=0; i<column_counter; i++){
        putchar(buffer[i]);
    }

    return 0;

}
