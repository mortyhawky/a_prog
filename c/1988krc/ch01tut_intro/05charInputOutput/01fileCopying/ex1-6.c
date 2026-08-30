/* Exercise 1-6. 
 * Verify that the expression getchar() !=EOF is 0 or 1.

c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/01fileCopying

gcc     ex1-6.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   ex1-6.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic -Wno-parentheses   \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int c = getchar() != EOF;
    printf("c = %d %c\n", c, c);
    // nothing for %c because 1 is not a printable char.
    // Is it SOH Start of heading? in ASCII?

    return EXIT_SUCCESS;
}
