#include <stdio.h>
#define TABSTOP 4

int current_col = 0;

int detab(void);

int main(){
    int c;
    while((c = getchar())!= EOF){
        if(c == '\t'){
            detab();
        }
        else{
            putchar(c);
            current_col++;
            if(c == '\n'){
                current_col = 0;
            }
        }
    }
    return 0;
} 

int detab(void){
    int column_needed = TABSTOP - ((current_col-1) % TABSTOP);
    for(int i=0; i<column_needed; i++){
        putchar(' ');
        current_col++;
    }

}
