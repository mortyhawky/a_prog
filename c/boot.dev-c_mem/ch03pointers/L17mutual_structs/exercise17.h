/*
Assignment: Chapter03   Lesson17 Mutual Structs

Complete the definitions of the Employee and Department structs.
Take a look at the implementations in the .c file to understand 
how they should be defined.
 Tip
  A manager is just another employee_t.
*/

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exercise17.h"

typedef struct Employee employee_t;
typedef struct Department department_t;

struct Employee   {
    int  id;
    char *name;
    department_t *department;
};

struct Department {
    char *name;
};


employee_t create_employee(int id, char *name);
department_t create_department(char *name);

void assign_employee(employee_t *emp, department_t *department);
void assign_manager(department_t *dept, employee_t *manager);




void println(const char *str);
