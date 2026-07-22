#include <stdio.h>

typedef struct {
    int x;
    int y;
} coord_t;

__attribute__((noinline))

    // Don't touch above this line

    coord_t new_coord(int x, int y) {
        coord_t c;
        c.x = x;
        c.y = y;
        return c;
    }

int main() { 
    coord_t c1 = new_coord(10, 20); // coppied to the stack frame of the main memory. & are safe to use.
    coord_t c2 = new_coord(30, 40);
    coord_t c3 = new_coord(50, 60);

    printf("c1: %d, %d\n", c1.x, c1.y);
    printf("c2: %d, %d\n", c2.x, c2.y);
    printf("c3: %d, %d\n", c3.x, c3.y);
}

/*
 * Using pointer and returning an address to struct causes segfault.
 
     coord_t *new_coord(int x, int y) {
         coord_t c;
         c.x = x;
         c.y = y;
         return &c;
     }

   int main() {

   // we are accessing the stack memory outside the function that created it.
   // after function return the memory is deallocated and is no longer safe to use.
   // resulting in segfault.
   
   coord_t *c1 = new_coord(10, 20);  
   coord_t *c2 = new_coord(30, 40);
   coord_t *c3 = new_coord(50, 60);

   printf("c1: %d, %d\n", c1->x, c1->y);
   printf("c2: %d, %d\n", c2->x, c2->y);
   printf("c3: %d, %d\n", c3->x, c3->y);

   }
*/
