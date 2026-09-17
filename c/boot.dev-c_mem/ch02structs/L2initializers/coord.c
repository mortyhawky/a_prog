#include <stdio.h>
#include "coord.h"

struct Coordinate new_coord(int x_new, int y_new, int z_new) {
    //printf("    in new_coord: int x = %d\n", x);
    //printf("    in new_coord: int y = %d\n", y);
    //printf("    in new_coord: int z = %d\n", z);
    //puts("");

    //// Zero Initializer All fields to 0
    //struct Coordinate Ans = {
    //    0
    //};
    //printf("    in new_coord: Ans.x = %d\n", Ans.x);
    //printf("    in new_coord: Ans.y = %d\n", Ans.y);
    //printf("    in new_coord: Ans.z = %d\n", Ans.z);
    //puts("");

//--//    // Positional Initializer
//--//    struct Coordinate Ans = {
//--//        x,
//--//        y,
//--//        z,
//--//    };
//--//    printf("    in new_coord: Ans.x = %d\n", Ans.x);
//--//    printf("    in new_coord: Ans.y = %d\n", Ans.y);
//--//    printf("    in new_coord: Ans.z = %d\n", Ans.z);
//--//    puts("");

    // Designated Initializer *** BEST ***
    struct Coordinate Ans = {
        .x_coord = x_new,
        .y_coord = y_new,
        .z_coord = z_new,
    };
    printf("    in new_coord: Ans.x_coord = %d\n", Ans.x_coord);
    printf("    in new_coord: Ans.y_coord = %d\n", Ans.y_coord);
    printf("    in new_coord: Ans.z_coord = %d\n", Ans.z_coord);
    puts("");
    
    return Ans; 
}
