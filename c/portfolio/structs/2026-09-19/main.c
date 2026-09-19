/*
c /a/prog/c/portfolio/structs/2026-09-19/

// Compile project and run:
clear && make clean && make && ./coord

// Compile and debug project
clear && make clean && make && gdb coord

// Clean project:
make clean
*/

#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

int main(void) {
    puts("");
    printf("*1 --> in main: \n");

    struct Coordinate s_newCoo;
    s_newCoo.x_coo = 1;
    s_newCoo.y_coo = 2;
    s_newCoo.z_coo = 3;

    printf("*1 --> in main: s_newCoo.x_coo = %d \n", s_newCoo.x_coo );


    return EXIT_SUCCESS;
}
