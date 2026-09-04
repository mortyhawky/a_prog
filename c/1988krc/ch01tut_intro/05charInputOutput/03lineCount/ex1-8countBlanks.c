/* Exercise 1-8:
 * Write a program to count blanks, tabs and newlines

c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/03lineCount

gcc     ex1-8countBlanks.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && cat ex1-8countBlanks.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

*/

#include <stdio.h>
#include <stdlib.h>

// Count the number of blanks, tabs and newlines
int main(void) {

    int chars  = 0;
    int blanks = 0;
    int tabs   = 0;
    while ( ( chars = getchar() ) != EOF ) {
        if ( chars == ' ' ) {
            ++blanks;
        }
        if ( tabs == ' ' ) {
            ++tabs;
        }
    }
    printf("Number of blanks = %d\n", blanks);
    printf("Number of tabs   = %d\n", tabs);

    return EXIT_SUCCESS;
}
