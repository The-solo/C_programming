#include <stdio.h>

typedef struct Graphics {
  int fps;
  int height;
  int width;
} graphics_t;

void dump_graphics(graphics_t gsettings[10]) {
    int *ptr = (int *)gsettings; // casting the array of int to array of structs. 
    for (int i = 0; i < 10; i++) {
        printf("settings[%d] = %d\n", i, ptr[i]);
    }
}

int main() {
    return 0;
}
