/*
c /a/prog/c/boot.dev-c_mem/ch02structs/L3scaling_coordinate/

make
./coord && echo "Exit code = $?"
clear && make && ./coord
gdb coord
b main
b new_coord


make clean
*/

//                     values:  0                1
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include <stdio.h>
#include "coord.h"

int main(void) {
    printf("in main: Chapter 02 / L2 Initializers\n");

    struct Coordinate myCoor = new_coord(7,9,13);
    printf("myCoor = %p \n", (void*)&myCoor);
    struct Coordinate *myCoorPtr = &myCoor;
    printf("myCoorPtr->x_coord = %d \n", myCoorPtr->x_coord);
    printf("myCoor.x_coord     = %d \n", myCoor.x_coord);



    struct Coordinate c1 = new_coord(1, 2, 3);
    printf("in main: c1.x_coord = %d\n", c1.x_coord);
    printf("in main: c1.y_coord = %d\n", c1.y_coord);
    printf("in main: c1.z_coord = %d\n", c1.z_coord);
    puts("");



    struct Coordinate co2 = new_coord(44, 55, 66);
    printf("in main: co2.x_coord = %d\n", co2.x_coord);
    printf("in main: co2.y_coord = %d\n", co2.y_coord);
    printf("in main: co2.z_coord = %d\n", co2.z_coord);
    puts("");
    
    return EXIT_SUCCESS;
}
