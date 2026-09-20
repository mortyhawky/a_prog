/*
c /a/prog/c/boot.dev-c_mem/ch02structs/L3scaling_coordinate/

// Compile project and run:
clear && make clean && make && ./coord

// Compile and debug project
clear && make clean && make && gdb coord

// Clean project:
make clean
*/

//                     values:  0                1
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include <stdio.h>
#include "coord.h"

int main(void) {
    puts("");
    printf("*1 --> in main: \n");

    struct Coordinate s_newCoo;
    s_newCoo.x_coo = 1;
    s_newCoo.y_coo = 2;
    s_newCoo.z_coo = 3;

    printf("*1 --> in main: s_newCoo.\n");
    printf("                         x_coo \n", s_newCoo.x_coo);


    return EXIT_SUCCESS;
}
