#include <stdio.h>

#define MAX_LENGTH 500
#define OUT_COMMENT 0
#define IN_COMMENT 1

int main (){
    int c, column_counter = 0;
    char buffer[MAX_LENGTH];
    int state = OUT_COMMENT;

   while ((c = getchar()) != EOF) {
        if (c != '\n' && column_counter < MAX_LENGTH-1) {
            buffer[column_counter] = c;
            column_counter++;
        } 
        else {
            int i = 0;
            while (i < column_counter) {
            // Check for /* ... */
            if (state == OUT_COMMENT && buffer[i] == '/' && buffer[i+1] == '*') {
                state = IN_COMMENT;
                i += 2;  // Skip the /*
            }
            else if (state == IN_COMMENT && buffer[i] == '*' && buffer[i+1] == '/') {
                state = OUT_COMMENT;
                i += 2;  // Skip the */
            }
            // Check for //
            else if (state == OUT_COMMENT && buffer[i] == '/' && buffer[i+1] == '/') {
                break;  // Skip rest of line
            }
            // Print non-comment chars
            else if (state == OUT_COMMENT) {
                putchar(buffer[i]);
                i++;
            }
            else {
                i++;  // Inside comment, skip
            }
        }
        if (state == OUT_COMMENT) putchar('\n');  // Preserve newline
        column_counter = 0;
    }
}    state = OUT_COMMENT;
    return 0;
}
