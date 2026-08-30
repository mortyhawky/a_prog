/* Exercise 1-7.
 * Write a program to print the value of EOF.

c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/01fileCopying

gcc     ex1-7.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   ex1-7.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic -Wno-parentheses   \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("Value of EOF = %d", EOF);
    return EXIT_SUCCESS;
}
