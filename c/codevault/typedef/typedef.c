#include <stdio.h>
#include "typedef.h"

coordinate_t new_coord(int x, int y, int z) {
    coordinate_t coord = { .x = x, .y = y, .z = z };

    return coord;
}

coordinate_t scale_coordinate(coordinate_t coord, int factor) {
    coord.x *= factor;
    coord.y *= factor;
    coord.z *= factor;

    return coord;
}

void show_coord(coordinate_t c) {
    printf("%d \n", c.x);
    printf("%d \n", c.y);
    printf("%d \n", c.z);
    puts("");
}
