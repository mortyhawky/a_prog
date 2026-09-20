/*
c /a/prog/c/brocode/structs/

// Project: Compile and Run:
clear && make clean && make && ./structs ; printf "Exit code = $?\n"

// Project: Compile and Debug:
clear && make clean && make && gdb structs

// Project: CLean and Git:
make clean && gitall
*/

#include "structs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("/a/prog/c/brocode/structs/main.c\n");

    struct Player p1      = { .name = "Bro",   .score = 4 };
    print_player(p1);

    struct Player player2 = { .name = "Morty", .score = 3 };
    print_player(player2);

    return EXIT_SUCCESS;
}
