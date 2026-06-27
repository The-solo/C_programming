#include<stdio.h>

int main() {

  int c, prev = 0;

  while((c = getchar()) != EOF) {
    if(!(prev == ' ' && c == ' ')) {
      putchar(c);
    }
    prev = c;
  }
}
