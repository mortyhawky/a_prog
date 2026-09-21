/*
c /a/prog/c/boot.dev-c_mem/ch02structs/L3scaling_coordinate/

// Project: Compile & Run:
clear && make && ./coord

// Project: Compile & Debug:
clear && make clean && make && gdb coord

// Project: Clean
make clean && ll
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
