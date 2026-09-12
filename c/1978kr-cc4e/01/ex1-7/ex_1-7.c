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
    while ( ( ch = getchar() ) != EOF ) {  //main loop read char

        if ( ch != ' ' ) {
            putchar(ch);           // Print all non-space chars.
            continue;
        }//fi

        if ( ch == ' ') {          // detect if space.
            do {
                ch = getchar();    // Eat all spaces, until
            } while (ch == ' ');   // we hit a non-space char.

            if ( ch == EOF ) {
                break;             // Break out of outer while loop
            }

            putchar ( ' ' );       // print only one space.
            putchar ( ch );        // Print non-space char.
        }//fi

    }//main/outer while loop

    return EXIT_SUCCESS;
}

/********************  DEBUGGING *************************
clang ex_1-7.c -o a.out                 \
      -g3 -O0 -std=c23                    \
      -Wall -Wextra -Werror -Wpedantic    \
      -fsanitize=address,undefined

gdb a.out

b main
r < 1.txt
display (char)ch
n
n
*/
           
