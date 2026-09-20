#include <stdio.h>
#include "structs.h"

void display_student(struct Student student) {
    printf("    in display_student -> struct Student student \n");
    printf("        .name       = %s    \n", student.name       );
    printf("        .age        = %d    \n", student.age        );
    printf("        .gpa        = %0.2f \n", student.gpa        );
    printf("        .isFullTime = %s    \n", (student.isFullTime) ? "Yes Full time" : "No Part Time");
    puts("");
}

void vis_elev(Elev_t elev) {
    printf("    in vis_elev -> Elev_t elev \n");
    printf("        .navn       = %s    \n", elev.navn );
    printf("        .alder      = %d    \n", elev.alder);
    printf("        .snitt      = %0.2f \n", elev.snitt);
    printf("        .fulltid    = %s    \n", (elev.fulltid) ? "ja fulltid" : "nei deltid");
    puts("");
}
