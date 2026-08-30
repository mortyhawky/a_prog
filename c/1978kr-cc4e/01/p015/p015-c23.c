/*
gcc     p015-c23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   p015-c23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
  */

/* c = getchar() can be used in an expression; its value is simply the value
 * being assigned to the left hand side.  
 * The program gets a character, assigns it to c, then tests whether the
 * character was the end of file signal (EOF).
 * If it was not EOF, the body of the while is executed.
 * The input to c from getchar() gets buffered and the buffer is flushed
 * When we type Enter or Ctrl-D (EOF).  But not if we type Ctrl-C (SIGINT).
 */
/*
 * c = getchar() can be used in an expression; the value of the assignment
 * expression is the value assigned to c.
 *
 * The program gets a character, assigns it to c, then tests whether the
 * value returned by getchar() was EOF.
 *
 * If it was not EOF, the body of the while loop is executed.
 *
 * In a terminal using canonical input mode, input is normally made available
 * to the program a line at a time when Enter is pressed.
 * Ctrl-D is a terminal control operation that can cause an EOF condition
 * to be delivered when appropriate.
 * Ctrl-C normally generates SIGINT instead.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int c;
    while ( (c = getchar()) != EOF ) {
        putchar(c);
    }

    return EXIT_SUCCESS;
}
