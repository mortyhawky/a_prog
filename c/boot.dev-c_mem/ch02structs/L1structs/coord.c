/*
Define a new struct called Coordinate in coord.h. Remember, 
.h files are for declarations of types and function prototypes. 
The Coordinate struct should have three fields:
    x: an integer
    y: an integer
    z: an integer
 */

#include <stdio.h>
#include "coord.h"

struct Coordinate set_coord(struct Coordinate c) {
    printf ("   in set_coord: c.x = %d \n", c.x);
    printf ("   in set_coord: c.y = %d \n", c.y);
    printf ("   in set_coord: c.z = %d \n", c.z);
    puts("");

    c.x =  5;
    c.y = 10;
    c.z = 15;

    printf ("   in set_coord: c.x = %d \n", c.x);
    printf ("   in set_coord: c.y = %d \n", c.y);
    printf ("   in set_coord: c.z = %d \n", c.z);
    puts("");

    return c;
}

void println(const char *str) {
    printf("%s\n", str);
}
