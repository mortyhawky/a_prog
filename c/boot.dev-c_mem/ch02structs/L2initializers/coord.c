#pragma once
#include "coord.h"
#include <stdio.h>

struct Coordinate new_coord(int x, int y, int z) {
    printf ( "\nIn function new_coord()");
    printf ( "\nint x = %d", x);
    printf ( "\nint y = %d", y);
    printf ( "\nint z = %d\n", z);

    // Zero Initializer
    // All fields to 0
    struct Coordinate Ans0 = {
        0
    };
        
    // Positional Initializer
    struct Coordinate Ans1 = {
        x,
        y,
        z,
     };
    
    // Designated Initializer *** BEST ***
    struct Coordinate Ans2 = {
        .z = z,
        .y = y,
        .x = x,
    };
    
    return Ans2; 
}
