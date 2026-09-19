/* ------------------------------------------------------------------
yt: 0-7min: https://www.youtube.com/watch?v=dqa0KMSMx2w&t=449s
Ctrl + n    Toggle line numbers in nvim
c /a/prog/c/portfolio/
File: struct01.c

Tools:
pm -S gcc gdb --needed

Compile & Link:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g struct01.c -o struct01

Run:
./struct01 arg1 arg2 arg3

Debug:
gdb struct01
b main
r
n
-------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h> // for strcpy

enum { 
    MAX_NAME_LEN = 50,
    MAX_ID_LEN   = 20,
    NUM_GRADES   = 5,
    MAX_STUDENTS = 100,
    PASS_GRADE   = 4
};

struct Student
{
    char name[MAX_NAME_LEN];
    char id[MAX_ID_LEN];
    int  age;
    int  grades[NUM_GRADES];
};

int main(int argc, char *argv[]) {
    // Show argc and all string arguments
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    struct Student kevin;

    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "000123123");
    kevin.age = 40;
    kevin.grades[0] = 1;
    kevin.grades[1] = 2;
    kevin.grades[2] = 3;
    kevin.grades[3] = 4;
    kevin.grades[4] = 5;
    //kevin.grades[5] = 6; // ERROR max 5 grades
    
    printf("kevin.name      = %s\n", kevin.name);
    printf("kevin.id        = %s\n", kevin.id);
    printf("kevin.age       = %d\n", kevin.age);
    printf("Grades: \n");
    for (int i = 0; i < NUM_GRADES; i++)
        printf("kevin.grades[%d] = %d\n", i, kevin.grades[i]);
    printf("\n");

    struct Student morty = {
        .name = "Morty",
        .id   = "007",
        .age  = 55,
        .grades = { 2, 3, 4, 5, 6 }
    };

    printf("morty.name      = %s\n", morty.name);
    printf("morty.id        = %s\n", morty.id);
    printf("morty.age       = %d\n", morty.age);
    printf("Grades: \n");
    for (int i = 0; i < NUM_GRADES; i++)
        printf("morty.grades[%d] = %d\n", i, morty.grades[i]);
    printf("\n");

    return 0;
}
