/*
c /a/prog/c/boot.dev-c_mem/ch02structs/L2initializers/

make
./structs && echo "Exit code = $?"

gdb structs


make clean
*/

//                     values:  0                1
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include <stdio.h>
#include "coord.h"

int main(void) {
    println("Chapter 02 / L2 Initializes");

    struct Coordinate c = new_coord(1, 2, 3);

    return EXIT_SUCCESS;
}
