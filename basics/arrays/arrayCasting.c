#include <stdio.h>

typedef struct Graphics {
  int fps;
  int height;
  int width;
} graphics_t;


void dump_graphics(graphics_t gsettings[10]) {
    int *ptr = (int *)gsettings; // casting the array struct to an array of int.(Not recommended) 
                                 
    int total_ints = sizeof(graphics_t) * 10 / sizeof(int); 
    // calculate total elements based on memory size.  
    printf("The size of gsettings struct : %ld\n", sizeof(graphics_t));// each struct has 3 elements.

    for (int i = 0; i < total_ints; i++) { 
        printf("settings[%d] = %d\n", i, ptr[i]);
    }
}

// Because arrays are basically pointers & both arrays and structs are stored in the contigious memory.
// By casting structs to int C knows how to access them in memory. one after another.
// The cast tells C to treat the same starting address as an int *, 
// so each index walks one int at a time through the contiguous struct field


int main() {
    graphics_t graphics_array[10] = {
        {60, 1080, 1920},  
        {30, 720, 1280},  
        {144, 1440, 2560}, 
        {75, 900, 1600},
        {120, 1080, 1920}, 
        {60, 2160, 3840}, 
        {240, 1080, 1920}, 
        {60, 768, 1366},
        {165, 1440, 2560}, 
        {90, 1200, 1920},
    };
    (dump_graphics(graphics_array));
    return 0;
}

