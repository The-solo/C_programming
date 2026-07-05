#pragma once

struct Coordinate {
  int x;
  int y;
  int z;
};

int main () {

    struct Coordinate new_coord(int x, int y, int z) {
        struct Coordinate coord = {.x = x, .y = y, .z = z};
        return coord;
    }

    struct Coordinate scale_coordinate(struct Coordinate coord, int factor) {
        struct Coordinate Scaled  = {
            .x = coord.x * factor,
            .y = coord.y * factor,
            .z = coord.z * factor
        };
        return Scaled;
    }

    // we can return the struct as multiple values and we can also scale the Coordinates.
}
