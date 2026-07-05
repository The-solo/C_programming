#pragma once
#include <stdio.h>

struct Coordinate {
  int x;
  int y;
  int z;
};

// struct  Coordinate  is the return type of the function in case it is confusing.
struct Coordinate new_coord(int x, int y, int z) {
    // using the '.' notation to access the fields.
  struct Coordinate cord = {
    .x = x,
    .y = y, 
    .z = z
  };
  return cord;
}

int main () {
    return 0;
}
