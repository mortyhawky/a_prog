/*

c /a/prog/c/boot.dev-c_mem/ch03pointers/L17mutual_structs/

make
./println && echo "Exit code = $?"

gdb println


make clean

*/

//                              0                1
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include "println.h"

int main(void) {

    println("Hello, world! ");

    return EXIT_SUCCESS;
}

/*
:r !tree
.
├── main.c
├── main.o
├── Makefile
├── println
├── println.c
├── println.h
└── println.o

1 directory, 7 files
*/
