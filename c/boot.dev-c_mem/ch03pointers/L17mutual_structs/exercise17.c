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
void println(const char *str) {
    printf("%s\n", str);
}

/////// Function.: create_employee
/////// Param1...: integer value; id
/////// Param2...: pointer to an array of characters; name
/////// Returns..: employee_t (structure of type employee_t)
employee_t create_employee(int id, char *name) {
    // Create an employee instance;        named   'emp'
    // Or; a data object of type employee; labeled 'emp'
    employee_t emp = {
        .id = id,     // assign 1st field; with Param1; id
        .name = name, // assign 2nd field; with Param2; name
        //.department = NULL, // pointer to a department_t struct = NULL
    };
    return emp;
}

department_t create_department(char *name) {
    department_t dept = {
        .name = name,
        //.manager = NULL,
    };
    return dept;
}

/////
/////void assign_employee(employee_t *emp, department_t *department) {
/////  emp->department = department;
/////}
/////
/////void assign_manager(department_t *dept, employee_t *manager) {
/////  dept->manager = manager;
/////}
