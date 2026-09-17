/*
c /a/prog/c/boot.dev-c_mem/ch03pointers/L15C_string_library

make && tree
./exercise && echo "Exit code = $?"

gdb exercise


make clean && tree

*/

//                              0                1
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include "println.h"

int main(void) {

    println("Hello, world!");

    return EXIT_SUCCESS;
}

/*
.
├── println.c
├── println.h
├── main.c
└── Makefile

1 directory, 4 files
*/
