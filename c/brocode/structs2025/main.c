/*
c /a/prog/c/brocode/structs2025/

// Project: Compile and Run:
clear && make clean && make && ./structs ; printf "Exit code = $?\n"

// Project: Compile and Debug:
clear && make clean && make && gdb structs

// Project: Clean and Git:
make clean && gitall || ll
*/

#include "structs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdbool.h>

// "struct Student" is the type name.
struct Student {
    char  name[50];
    int   age;
    float gpa;
    bool  isFullTime;
};

int main(void) {
    puts("");
    printf("\'/a/prog/c/brocode/structs2025/main.c\'\n");
    printf("\"Structs in C are easy!\"\n");
    puts("");

    Elev_t morty = {
        .navn     = { "Morty" },
        .alder    = 55,
        .snitt    = 3.14,
        .fulltid  = 1
    };

    printf("Type     Variable-name     value\n");
    printf("Elev_t   morty.navn:       %s    \n",    morty.navn     );
    printf("Elev_t   morty.alder:      %d    \n",    morty.alder    );
    printf("Elev_t   morty.snitt:      %0.2f \n",    morty.snitt    );
    printf("Elev_t   morty.fulltid:    %b    \n",    morty.fulltid  );

    return EXIT_SUCCESS;
}
