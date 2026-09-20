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


int main(void) {
    puts("");
    printf("\'/a/prog/c/brocode/structs2025/main.c\'\n");
    printf("\"Structs in C are easy!\"\n");
    puts("");


    #define AD 2026
    // 1
    struct Student elin = {
        .name       = "Elin Oppegaard",
        .age        = (AD - 1970),
        .gpa        = 4.01f,
        .isFullTime = true
    };

    display_student(elin);


    // 2
    #define ja true
    #define nei false
    Elev_t morty = {
        .navn     = "Morty H",
        .alder    = AD - 1971,
        .snitt    = 3.14f,
        .fulltid  = nei
    };

    vis_elev(morty);

    // 3
    struct Student student1 = {
        .name       = "Spongebob",
        .age        = AD - 1996,
        .gpa        = 2.5,
        .isFullTime = true
    };

    struct Student student2 = {"Patrick", 36, 1.0, false};
    display_student(student1);
    display_student(student2);

    printf("in main:\n");
    printf("%s   \n", student1.name       );
    printf("%d   \n", student1.age        );
    printf("%0.2f\n", student1.gpa        );
    printf("%s   \n", (student1.isFullTime) ? "Full time" : "Part time" );

    struct Student student3 = {"Squidward", 48, 3.14, false};
    display_student(student3);

    #define EMPTY 0
    struct Student student4 = { EMPTY };
    display_student(student4);

    strcpy(student4.name, "Sandy");
    display_student(student4);
    student4.age = 27;
    display_student(student4);
    student4.gpa = 4.0f;
    display_student(student4);
    student4.isFullTime = true;
    display_student(student4);

    puts("");
    return EXIT_SUCCESS;
}
