/* 1.5.1 File Copying
 * The C Programming Language 
 * SECOND EDITION
 * ANSI C
 * Brian W. Kernighan
 * Dennis M. Ritchie
 * Converted to C23 by Morty

c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/01fileCopying/
cc -ansi 018getchar_putchar1988.c

gcc     018getchar_putchar2023.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   018getchar_putchar2023.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c = getchar();
    
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return EXIT_SUCCESS;
}
