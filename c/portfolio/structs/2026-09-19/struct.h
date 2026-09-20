#pragma once
#include <stdlib.h>

typedef struct {
    char   *name;
    char   *id;
    int    *grades;
    size_t grade_count;
    int    age;
} student_t;

void  print_student(student_t student);
