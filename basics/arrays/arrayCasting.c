#include <stdio.h>

typedef struct Graphics {
  int fps;
  int height;
  int width;
} graphics_t;


void dump_graphics(graphics_t gsettings[10]) {
    int *ptr = (int *)gsettings; // casting the array struct to an array of int.(Not recommended)
    for (int i = 0; i < 10 * 3; i++) { // each struct has 3 elements.
        printf("settings[%d] = %d\n", i, ptr[i]);
    }
}

// By casting structs to int C knows how to access them in memory. one after another.

int main() {
    return 0;
}
