#include <stdio.h>

int  main() {
  #define IN 1
  #define OUT 0
  #define MAX_WORD_LENGTH 20

  int word_length_list[MAX_WORD_LENGTH+1] = {0};
  int state = OUT;
  int count = 0;
  int c;

  while((c = getchar()) != EOF) {

    if(c == '\n' || c == '\t' || c == ' ') {
      if(state == IN && count <= MAX_WORD_LENGTH){
          word_length_list[count]++;
      }
        state = OUT;
        count = 0; 
    } else {
      if (state == OUT){
        state = IN;
      }
      count++;
    } 
  }

  for(int i=1; i<=MAX_WORD_LENGTH; i++) {
    if(MAX_WORD_LENGTH > 0) {
      printf("%d | %d   ", i, word_length_list[i]);
    }
    printf("\n");
  }
  return 0;
}

