#include <stdio.h>

int main() {

  int numbers[5] = {1, 2, 3, 4, 5};

  printf("numbers[2] = %d\n", numbers[2]);  

  printf("*(numbers + 2) = %d\n", *(numbers + 2)); //same as numbers[2];
                                                   
  // int value = numbers[2] get the address of 3rd element nd * dereference it.


  // pointer arithmatic.
  int *ptr = numbers;
  printf("Pointer ptr points to numbers[0]: %d\n", *ptr);  // Output: 1
  ptr += 2;
  printf("Pointer ptr points to numbers[2]: %d\n", *ptr);  // Output: 3   

  return 0;

  // The memory laymout is "sizeOf(T) + value" for every element starting from 0
