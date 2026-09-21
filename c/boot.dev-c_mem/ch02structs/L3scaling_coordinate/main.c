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

    return EXIT_SUCCESS;
}
