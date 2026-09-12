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
    size_t eaten     = 0;
    while ( ( ch = getchar() ) != EOF ) {  // main loop, read char

        if ( ch != ' ' ) {         // We have a non-space char.
            putchar(ch);           // print all non-space chars
            continue;
        }

        // ch must be a space here.
        // Consume the rest of this run of spaces.
        do {
            ch = getchar();    // Eat all spaces, until
            if ( ch == ' ' ) {
                eaten++;
            }
        } while (ch == ' ');   // we hit a non-space char.

        // getchar() returns EOF when it reaches the end of the current input stream.
        if ( ch == EOF ) {     // if we hit EOF,
            break;             // break out of outer while loop.
        }                      // This will end the program.

        // We have eaten all spaces so we print one (1) space.
        putchar ( ' ' );       // print only one space.
        putchar ( ch );        // Print ch gotten from do-while above.

    } // outer while loop.

    printf ( "Totally spaces eaten: %zu\n", eaten );

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


set logging file ex_1-7-gdb.log
set logging enabled on

break main
break 40        ch = getchar;
break putchar
display $edi
display (char)$edi
display (char)ch
display ch

run < 1.txt

display $edi
display (char)$edi

c
c
c
c
c
c

set logging enabled off


*/
           
