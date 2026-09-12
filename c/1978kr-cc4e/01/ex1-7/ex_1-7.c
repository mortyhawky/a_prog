/*
K&R C 1st. edition from 1978
Exercise 1-7. Write a program to copy its input to its output, 
              replacing each string of one or more blanks
              by a single blank
Solution adapted to C23 by Morty. Sept. 2026
c /a/prog/c/1978kr-cc4e/01/ex1-7

gcc     ex_1-7.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fanalyzer -fsanitize=address,undefined        \
        && cat ex_1-7.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   ex_1-7.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && cat ex_1-7.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

	??? How to make clang-tidy work ???
clang-tidy ex_1-7.c -- -std=c23
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int ch           = 0;
    int prevSpace    = 0;
    while ( ( ch = getchar() ) != EOF ) {
        if ( ch != ' ') {
            printf ( "%c", ch );
        }
        if ( prevSpace ) {
            getchar();
            prevSpace = 0;
        }
        if ( ch == ' ' ) {
            prevSpace = 1;
        }
    }

    printf ( "%zu blanks in output\n", outBlanks );

    return EXIT_SUCCESS;
}
