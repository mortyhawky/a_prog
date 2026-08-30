/*#include <stdio.h>*/                                  /* c_014_01 */
/*
c /a/prog/c/1978kr-cc4e/01/p014/

gcc p014-c78.c -o a.out -ansi && ./a.out; echo "$?"

copy input to output; 1st version 
exit with: Ctrl-d
prints     (^C)      (255)
*/

/*
main()
{
    int c;
    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
*/

// C23 version:
//
/*
  c /a/prog/c/

gcc     p014-c23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   p014-c23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
  */

// int getchar(void)
// int putchar( int ch );
// Writes a character ch to stdout. Internally, the character is
// converted to unsigned char just before being written.
// Equivalent to putc(ch, stdout).
// Parameters
// ch 	- 	character to be written
// Return value:
// On success, returns the written character.
// On failure, returns EOF and sets the error indicator
// (see ferror()) on stdout. 
//
// Ctrl-D causes the terminal to provide an end-of-file condition;
// Ctrl-D itself is not EOF
#include <stdio.h>      // getchar(), putchar(), printf(), EOF
#include <stdlib.h>     // EXIT_SUCCESS

#define CURSOR_UP "\033[1A\r"
#define NL        '\n'

int main(void) {
    printf(
        "Use Ctrl-D to provide an EOF condition and exit.\n"
        "Because Ctrl-C won't print the Exit code.\n"
        "On my system, EOF = %d\n", EOF
    );

    int ch = getchar();
    while ( ch != EOF ) {
        // fclose(stdout);
        int ret = putchar(ch);
        //ret = EOF;
        if (ret == EOF) {
            return EXIT_FAILURE;
        }
        if( ret == NL ) {
            printf(
                "%s", 
                CURSOR_UP
            );
            printf(
                "\\n ret = \\n%3d  0x%02X", 
                ret, ret
            );
        }
        else {
            printf( 
                "%2s %c %3d  0x%02X", 
                "  ret =", ret, ret, ret
            );
        }
        puts("");
        ch = getchar();
    }

    return EXIT_SUCCESS;
}
