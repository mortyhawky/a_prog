/*
Exercise 1-6. Write a program to count blanks, tabs, and newlines
c /a/prog/c/1978kr-cc4e/01/ex_1-6

gcc     ex_1-6.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   ex_1-6.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int blanks   = 0;
    int tabs     = 0;
    int newlines = 0;

    return EXIT_SUCCESS;
}
