/* 1.5.2 Character Counting

c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/02charCounting/

gcc     019charCounting2023ver2.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && cat 019charCounting2023ver2.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   019charCounting2023ver2.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic -Wno-parentheses   \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && cat 019charCounting2023ver2.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

 * Test program:
cat 019charCounting2023.c | ./a.out
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    long nc = 0;
    while ( getchar() !=EOF ) {
        ++nc;
    }
    printf("%ld\n", nc);

    return EXIT_SUCCESS;
}
