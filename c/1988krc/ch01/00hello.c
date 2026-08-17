/* The C Programming Language
 * Second Edition
 * ANSI C
 * Rewritten to C23
 * The following gcc comment are purpossly not indentet for use
 * with tmux copy mode.  Use ctrl-n to toggle linenumbers in nvim.
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g 00hello.c
*/
#include <stdio.h>  //Declares printf
#include <stdlib.h> //Defines EXIT_SUCCESS

int main(void) {          //Entry point of the program
    printf("hello, world\n");   //Write formatted output to stdout

    return EXIT_SUCCESS;        //Return success (0) status to OS
}
