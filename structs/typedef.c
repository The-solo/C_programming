
typedef struct {
    int x;
    int y;
    int z;
}coordinate_t; // instead of using struct every time use this.

int main() {

    // you can initialize the struct using the name only and skip the struct this way.
    coordinate_t new_coord(int x, int y, int z) {
        coordinate_t coord = {
            .x = x, 
            .y = y, 
            .z = z
        };
        return coord;
    }

    coordinate_t scale_coordinate(coordinate_t coord, int factor) {

        coordinate_t scaled = coord; // initializing first.
                                     //
        scaled.x *= factor;
        scaled.y *= factor;
        scaled.z *= factor;

        return scaled;
    }


}


