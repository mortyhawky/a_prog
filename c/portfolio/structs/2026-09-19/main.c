/*
c /a/prog/c/portfolio/structs/2026-09-19/

// Compile project and run:
clear && make clean && make && ./struct ; printf "Exit code = $?\n"

// Compile and debug project
clear && make clean && make && gdb struct

// Clean project:
make clean
*/

#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    puts("");
    printf("*1 --> in main: \n");

    // ------------------------ name[] ------------------------
    #define MAX_LEN_NAME 50
    #define MAX_LEN_ID 10
    #define MAX_LEN_GRADES 7
    struct Student {
        char name[MAX_LEN_NAME];
        char id[MAX_LEN_ID];
        int  age;
        int  grades[MAX_LEN_GRADES];
    };

    struct Student kevin;

    printf(" Testing struct kevin:\n");
    //kevin.name = "Kevin";   // assignment → arrays cannot be assigned

    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id,   "006B");
    kevin.age         = 40;
    //kevin.grades = { 1, 2, 3, 4, 5 }; // INVALID
    kevin.grades[0] = 1;
    kevin.grades[1] = 2;
    kevin.grades[2] = 3;
    kevin.grades[3] = 4;
    kevin.grades[4] = 5;
    printf(" Name........: %s\n", kevin.name);
    printf(" Id..........: %s\n", kevin.id);
    printf(" Age.........: %d\n", kevin.age);
    printf(" Grades[0]...: %d\n", kevin.grades[0]);
    printf(" Grades[1]...: %d\n", kevin.grades[1]);
    printf(" Grades[2]...: %d\n", kevin.grades[2]);
    printf(" Grades[3]...: %d\n", kevin.grades[3]);
    printf(" Grades[4]...: %d\n", kevin.grades[4]);
    // OUT OF BOUNDS — undefined behavior
    //printf(" Grades[5]...: %d\n", kevin.grades[5]);
    puts("");

    strcpy(kevin.name, "Kevin A");
    kevin.age       = 41;
    strcpy(kevin.id, "006A");

    int kevin_new_grades[] = { 7, 8, 9, 10, 11, 13, 17, 3, 4 };
    size_t kevin_new_grade_cnt = sizeof kevin_new_grades / sizeof kevin_new_grades[0];

    // Limit the copy to the capacity of kevin.grades.
    size_t count = kevin_new_grade_cnt < MAX_LEN_GRADES
             ? kevin_new_grade_cnt
             : MAX_LEN_GRADES;

    printf("kevin_new_grade_cnt = %zu\n", kevin_new_grade_cnt);
    printf("count = %zu\n", count);
    //size_t grade_cnt = sizeof kevin_new_grades / sizeof kevin_new_grades[0];
    //kevin.grades = kevin_new_grades;      // ILLEGAL
    for (size_t i = 0; i < count; i++) {
        kevin.grades[i] = kevin_new_grades[i];
    }
    
    printf(" Name........: %s\n", kevin.name);
    printf(" Id..........: %s\n", kevin.id);
    printf(" Age.........: %d\n", kevin.age);

    printf(" %s's Grades: \n", kevin.name);
    for (size_t idx = 0; idx < count; idx++ ) {
        printf("  Grade[%zu] = %d\n", idx, kevin.grades[idx] );
    }
    puts("");

    //return EXIT_SUCCESS;

    // ------------------------ *name  -----------------------
    #define GRADE_SENTINEL -999
    struct Stud2 {
        char *name;
        int  age;
        char *id;
        int  *grades;
        size_t grade_count;
    };

    struct Stud2 morty;
    printf(" Testing struct morty:\n");

    morty.name  = "Morty H";
    morty.age   = 55;
    morty.id    = "007A";
    int morty_grades[]       = { 7, 8, 9, -999, 1, 2 };
    size_t sizeof_int        = sizeof(int);
    printf("sizeof_int       = %zu\n", sizeof_int);
    size_t sizeof_grades     = sizeof(morty_grades);
    printf("sizeof_grades    = %zu\n", sizeof_grades);
    size_t number_of_grades  = sizeof_grades / sizeof_int;
    printf("number_of_grades = %zu\n", number_of_grades);
    morty.grade_count = number_of_grades;
    printf("morty.grade_count = %zu\n", morty.grade_count);
    
    // copy the address of the first element into the pointer member.
    morty.grades = morty_grades;
 
    printf(" Name........: %s\n", morty.name);
    printf(" Id..........: %s\n", morty.id);
    printf(" Age.........: %d\n", morty.age);
    printf(" %s's Grades: \n", morty.name);
    for (size_t idx = 0; idx < morty.grade_count; idx++) {
        if ( morty.grades[idx] == GRADE_SENTINEL) {
            break;  // using a sentinel as backup.
        }
        printf("  Grade[%zu] = %d\n", idx, morty.grades[idx]);
    }

    return EXIT_SUCCESS;
}

//    printf(" Grades[0]...: %d\n", morty.grades[0]);
//    printf(" Grades[1]...: %d\n", morty.grades[1]);
//    puts("");
//
//    morty.name  = "Morty Hawky";
//    morty.id    = "007B";
//    morty.grades[1] = 0;
//    printf(" Name........: %s\n", morty.name);
//    printf(" Id..........: %s\n", morty.id);
//    printf(" Age.........: %d\n", morty.age);
//    printf(" Grades[0]...: %d\n", morty.grades[0]);
//    printf(" Grades[1]...: %d\n", morty.grades[1]);
//    puts("");
//
//    // 1. const char *ptr;
//    //    ptr is a pointer to const char.
//    //    ptr can be changed, but the object pointed to can't.
//    //
//    // 2. char *const ptr;
//    //    ptr is a const pointer to char.
//    //    ptr cannot be changed, but the object pointed to can.
//    //
//    // 3. const char *const ptr;
//    //    ptr is a const pointer to const char.
//    //    ptr cannot be changed, and the object pointed to can't.
//    // 
//    // a) May the pointer itself change?
//    // b) May the object it points to change through this pointer?
//    //
//    // using 1. ptr can be changed, but the object pointed to can't
//    // 
//    // char * doesn't mean "the object is writable." It means
//    // "this pointer type permits modification through this pointer."
//    // Whether the actual object is writable is a separate question.
//    //
//    printf("Experimantal part:\n");
//
//    const char *ptr_Stud2_name = morty.name = "mh";
//    //ptr_Stud2_name[0] = 'M';    // constraint violation: ptr points to const char
//    printf(" Name..: %s\n", ptr_Stud2_name);
//
//    ptr_Stud2_name = "Morty";
//    printf(" Name..: %s\n", ptr_Stud2_name);
//
//    puts("");
//
//
