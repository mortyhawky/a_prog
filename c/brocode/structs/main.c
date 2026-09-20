/*
c /a/prog/c/brocode/structs/

// Compile project and run:
clear && make clean && make && ./structs ; printf "Exit code = $?\n"

// Compile and debug project
clear && make clean && make && gdb structs

// Clean project:
make clean
*/

#include "structs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("/a/prog/c/brocode/structs/main.c\n");

    struct Player p1 = { .name = "Bro",.score = 4};
    print_player(p1);

    return EXIT_SUCCESS;
}
