#include<stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);

int main() {
  int len; // current line length
  int max = 0;
  char line[MAXLINE]; // current longest line.
  char longest[MAXLINE]; // Longest line saved.

  while((len = getLine(line, MAXLINE))>0){
    if (len > 80){
      printf("%s", line);
    }
  }
  return 0;
}

int getLine(char s[], int maxline){
  int c, i;
  
  for( i =0 ; i<maxline && (c=getchar()) != EOF && c !='\n'; i++) {
    s[i] = c;
  }

  if(c == '\n') {
    s[i] = c;
    i++;
  }

  s[i] = '\0';
  return i;
}

