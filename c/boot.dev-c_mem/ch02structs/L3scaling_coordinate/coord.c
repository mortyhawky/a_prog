#include <stdio.h>
#include "coord.h"

struct Coordinate coor_new  (int new_x, int new_y, int new_z) {
    printf(
    "    in coor_new:                                       \n"
    "        int new_x = %d, int new_y = %d, int new_z = %d \n",
                       new_x,          new_y,          new_z
          );
    puts("");
    // nc is a temporary struct object in this function, 
    // that we returns to the caller.
    struct Coordinate nc = {
        .x_coo = new_x,
        .y_coo = new_y,
        .z_coo = new_z
    };

    return nc;          // nc = New Coordinates
}


void              coor_show (struct Coordinate c) {
    printf(
    "    in coor_show:                  \n"
    "        struct Coordinate c.       \n"
    "                       x_coo = %d  \n" 
    "                       y_coo = %d  \n" 
    "                       z_coo = %d  \n",
                                    c.x_coo,
                                    c.y_coo,
                                    c.z_coo
    );
    puts("");
}



struct Coordinate coor_scale(struct Coordinate c, int scale_factor) {
    printf("    in coor_scale:                  \n");
    printf("        scaling by: %d \n", scale_factor);
    printf("            c.x_coo = %d \n", c.x_coo);
    printf("            c.y_coo = %d \n", c.y_coo);
    printf("            c.z_coo = %d \n", c.z_coo);
    puts("");

    c.x_coo *= scale_factor;    // scale x by factor
    c.y_coo *= scale_factor;    
    c.z_coo *= scale_factor;    

    return c;
}
