/* Listing 2.1 the first.c Program
 * C Primer Plus 5th Edition    2004
 * Adapted for C23 by Morty Sep.2026

gcc   0201first.c -o first            \
      -g3 -O0 -std=c23                    \
      -Wall -Wextra -Werror -Wpedantic    \
      -fsanitize=address,undefined

clang 0201first.c -o first            \
      -g3 -O0 -std=c23                    \
      -Wall -Wextra -Werror -Wpedantic    \
      -fsanitize=address,undefined

Run:
./first

Debug:
gdb first
b main
r
n

*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {            // a simple program

    int num;                // define a variable called num
    num = 1;                // assign a value to num

    printf("I am a simple ");
    printf("computer.\ni");
    printf("My favorite number is %d because it is first.\n", num);

    return EXIT_SUCCESS;
}
