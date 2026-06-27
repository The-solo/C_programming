#include <stdio.h>

#define MAXLINE 1000

void removeExtraSpace(char s[]);
int getLine(char line[], int maxline);

int main(){

  char line[MAXLINE];

  while(getLine(line, MAXLINE)>0){
    removeExtraSpace(line);
    printf("%s\n", line);
  }
  return 0;
}

// function to keep the track of the characters.
int getLine(char s[], int maxline){
  int c, i;
  
  for(i=0 ; i<maxline-1 && (c=getchar()) != EOF && c !='\n'; i++) {
    s[i] = c;
  }

  if(c == '\n') {
    s[i] = c;
    i++;
  }

  s[i] = '\0';
  return i;
}

void removeExtraSpace(char line[]){

  int i = 0; // reading the input character 
  int j = 0; // writing the input character.
  int space_seen = 0;

  while(line[i] != '\0'){

    if(line[i] == ' ' || line[i] == '\t'){
      if(space_seen == 0){
        line[j] = ' ';
        j++;
        space_seen = 1;
      }
    } else {
      line[j] = line[i];
      j++;
      space_seen = 0;
    }
    i++;
  }
  line[j] = '\0';  
}
