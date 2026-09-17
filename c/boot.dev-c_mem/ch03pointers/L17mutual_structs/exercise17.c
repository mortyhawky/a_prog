/*
Assignment: Chapter03   Lesson17    Mutual Structs

Complete the definitions of the Employee and Department structs.
Take a look at the implementations in the .c file to understand 
how they should be defined.
 Tip
  A manager is just another employee_t.
*/

#include <stdio.h>
#include "exercise17.h"

////////////////////  IMPLEMENTATIONS  /////////////////////
employee_t create_employee(int id, char *name) {
    employee_t emp = {
        .id = id,
        .name = name,
    };
    return emp;
}

department_t create_department(char *name) {
    department_t dept = {
        .name = name,
    };
    return dept;
}


void assign_employee(employee_t *emp, department_t *department) {
    emp->department = department;
}





void println(const char *str) {
    printf("%s\n", str);
}
