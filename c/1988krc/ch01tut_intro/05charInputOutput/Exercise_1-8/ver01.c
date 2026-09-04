/* Exercise 1-8
 * Write a program to count blanks, tabs and newline.
c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput

gcc       ver01.c -o a.out            \
          -std=c23                            \
          -Wall -Wextra -Werror -Wpedantic    \
          -fsanitize=address,undefined        \
          -g3 -O0                             \
          && cat ver01.c | ./a.out; printf "\n*-> Exit code = $? <

 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    return EXIT_SUCCESS;
}
