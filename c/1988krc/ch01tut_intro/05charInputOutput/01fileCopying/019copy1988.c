#include <stdio.h>
#include <stdlib.h>

/* copy input to output; 2nd version
c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/01fileCopying

cc -ansi 019copy1988.c && ./a.out; echo "Exit Code = $?"

gcc     019copy2023.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
*/
int main()
{
    int c;

    while ( (c = getchar()) != EOF) {
        putchar(c);
    }
    return EXIT_SUCCESS;
}
