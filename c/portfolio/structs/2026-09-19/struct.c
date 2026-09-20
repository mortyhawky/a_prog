#include <stdio.h>
#include "struct.h"

void  print_student(student_t stud) {
    printf("stud.name        = %s\n", stud.name         );
    printf("stud.id          = %s\n", stud.id           );
    printf("stud.grade_count = %zu\n", stud.grade_count );
    printf("stud.grades[0]   = %d\n", stud.grades[0]    );
    printf("stud.grades[1]   = %d\n", stud.grades[1]    );
    printf("stud.age         = %d\n", stud.age          );
}
