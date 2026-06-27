#include <stdio.h>

int main() {
  struct man {
    char name[10];
    int age;
    float height;
    char profession[10];
  };

  struct man utkarsh = {"utkarsh", 24, 5.11, "programmer"};
  printf("%s\n", utkarsh.name);
  return 0;
}
    
