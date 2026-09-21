#include <stdio.h>
#include "coord.h"

struct Coordinate new_coord(int new_x, int new_y, int new_z) {
    // create a local (temporary) struct on the stack frame of
    // new_coord function.
    struct Coordinate coord = { 
        .x_coo = new_x, // assigning values ending with comma (,)
        .y_coo = new_y,
        .z_coo = new_z,
    };

    // return the newly created local structure, labeled; coord
    return coord;
}


struct Coordinate scale_coordinate(struct Coordinate coord, int factor) {
    struct Coordinate scaled_coord = {
        .x_coo = coord.x_coo * factor,
        .y_coo = coord.y_coo * factor,  // assigning values ending with comma (,)
        .z_coo = coord.z_coo * factor,
    };

    return scaled_coord;
}


void display_coordinate(struct Coordinate c) {
    printf("    in display_coordinate: \n");
    printf("        struct Coordinate c. \n" );
    printf("                            x_coo = %d \n", c.x_coo );
    printf("                            y_coo = %d \n", c.y_coo );
    printf("                            z_coo = %d \n", c.z_coo );
    puts("");
}
