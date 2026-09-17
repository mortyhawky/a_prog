/*
Assignment: Chapter03   Lesson17 Mutual Structs

Complete the definitions of the Employee and Department structs.
Take a look at the implementations in the .c file to understand 
how they should be defined.
 Tip
  A manager is just another employee_t.

c /a/prog/c/boot.dev-c_mem/ch03pointers/L17mutual_structs/

make
./exercise17 && echo "Exit code = $?"

gdb println


make clean

*/

//                              0                1
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include "exercise17.h"

int main(void) {

    println("Hello, world! ");

    employee_t emp = create_employee(2, "CEO Dax");
    printf("emp.id = %d", emp.id);
    
    department_t dept = create_department("C Suite");
    printf("dept.name = %d", dept.name);
    
    


    //assign_employee(&emp, &dept);


    return EXIT_SUCCESS;
}
