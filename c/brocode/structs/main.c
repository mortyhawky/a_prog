/*
c /a/prog/c/brocode/structs/

// Project: Compile and Run:
clear && make clean && make && ./structs ; printf "Exit code = $?\n"

// Project: Compile and Debug:
clear && make clean && make && gdb structs

// Project: CLean and Git:
make clean && gitall || ll
*/

#include "structs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("/a/prog/c/brocode/structs/main.c\n");

    //1
    struct Player player1 = { .number = 1, .name = "Bro",   .score = 11 };
    print_player(player1);

    //2
    struct Player player2 = { .number = 2, .name = "Morty", .score = 22 };
    print_player(player2);

    //3
    struct Player player3;
    player3.number = 3;
    strcpy(player3.name, "Monica");
    player3.score = 33;;
    print_player(player3);

    //4
    struct Player player4;
    player4.number = 4;
    strcpy(player4.name, "Caroline");
    player4.score = 44;
    print_player(player4);

    //5 reusing player4
    //player4.name = "Eva";    // NO!
    player4.number = 4;
    char new_name[] = "Eva";
    strcpy(player4.name, new_name);
    size_t i = 0; 
    for (i = 0; i < strlen(n); i++) {
        player4.name[i] = new_name[i];
    }
    player4.name[i] = '\0'; // set the null terminator.
    player4.score = 56;
    print_player(player4);

    // Designated initializers:
    struct Player player6 = {
        .number = 6,
        .name   = { "Felicia" },
        .score  = 66
    };
    print_player(player6);

    return EXIT_SUCCESS;
}
