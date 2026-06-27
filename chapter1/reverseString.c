#include <stdio.h>

#define MAXLINE 1000

void reverseString(char s[]);
int getLine(char line[], int maxline);

int main(){

  char line[MAXLINE];

  while(getLine(line, MAXLINE)>0){
    reverseString(line);
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

void reverseString(char s[]){
//figure out the length of character array first.
  int len = 0;
  while(s[len] != '\0'){
    len++;
  }

  int start = 0;
  int end = len -1;
  while(start < end){
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    start ++, end --;
  }
}
