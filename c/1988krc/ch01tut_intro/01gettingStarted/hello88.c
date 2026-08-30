/*
 * The C Programming Language 
 * SECOND EDITION
 * ANSI C
 * Brian W. Kernighan
 * Dennis M. Ritchie
c /a/prog/c/1988krc/ch01tut_intro/01gettingStarted

gcc     hello23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   hello23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf(
        "hello, world\n"
    );

    return EXIT_SUCCESS;
}
