/* ------------------------------------------------------------------
yt: 07:00-24:43  https://www.youtube.com/watch?v=dqa0KMSMx2w&t=449s
typedef struct, and funciton
Ctrl + n    Toggle line numbers in nvim
c /a/prog/c/portfolio/
File: struct02.c

Tools:
pm -S gcc gdb --needed

Compile & Link:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g struct02.c -o struct02

Run:
./struct02 arg1 arg2 arg3

Debug:
gdb struct02
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

typedef struct {
    char name[MAX_NAME_LEN];
    char id[MAX_ID_LEN];
    int  age;
    int  grades[NUM_GRADES];
}Student;

// declaration / prototype
void print_student(Student student);

int main(int argc, char *argv[]) {
    // Show argc and all string arguments
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    Student kevin = {
        .name   = "Kevin",
        .id     = "000123123",
        .age    = 40,
        .grades = { 1, 2, 3, 4, 5 }
    };

    Student morty = {
        .name   = "Morty",
        .id     = "007",
        .age    = 55,
        .grades = { 2, 3, 4, 5, 6 }
    };

    print_student(kevin);
    print_student(morty);

    return 0;
}

// function definition
void print_student(Student student) {
    printf("student.name      = %s\n", student.name);
    printf("student.id        = %s\n", student.id);
    printf("student.age       = %d\n", student.age);
    printf("Grades: \n");
    for (int i = 0; i < NUM_GRADES; i++)
        printf("student.grades[%d] = %d\n", i, student.grades[i]);
    printf("\n");
}
