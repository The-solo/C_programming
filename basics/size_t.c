#include <stdbool.h>
#include <stdio.h>

int main() {
  // Use %zu for printing `size_of bytes` result
  printf("size_of bytes(char)   = %zu\n", sizeof(char));
  printf("size_of bytes(int)   = %zu\n", sizeof(int));
  printf("size_of bytes(bool)   = %zu\n", sizeof(bool));
  printf("size_of bytes(float)   = %zu\n", sizeof(float));
  printf("size_of bytes(double)   = %zu\n", sizeof(double));
  printf("size_of bytes(size_t)   = %zu\n", sizeof(size_t));
}

//size_t can store the maximum size of a theoretically possible non struct object of any type (including array).
// the size_t is an unsigned integer type. 0 to 4 billion.

