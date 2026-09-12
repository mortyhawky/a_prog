/*
K&R C 1st. edition from 1978
Exercise 1-6. Write a program to count blanks, tabs, and newlines
Create a solution that fits C23
c /a/prog/c/1978kr-cc4e/01/ex1-6

gcc     ex_1-6.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fanalyzer -fsanitize=address,undefined        \
        && cat ex_1-6.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   ex_1-6.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && cat ex_1-6.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

	??? How to make clang-tidy work ???
clang-tidy ex_1-6.c -- -std=c23
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int ch          = 0;
    size_t blanks   = 0;
    size_t tabs     = 0;
    size_t newlines = 0;

    while ( ( ch = getchar() ) != EOF ) {
        if ( ch == ' ' ) {
            blanks++;
        }
        else if ( ch == '\t' ) {
			tabs++;
        }
        else if ( ch == '\n' ) {
            newlines++;
        }
    }

    printf ( "The input contains:\n"
             "%zu blanks\n"
             "%zu tabs\n"
             "%zu newlines\n",
             blanks,
             tabs,
             newlines
           );

    return EXIT_SUCCESS;
}
