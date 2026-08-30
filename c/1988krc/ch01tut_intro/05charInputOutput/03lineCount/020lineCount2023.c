/* 1.5.3 Line Counting page 20

c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/03lineCount

gcc     020LineCount2023.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && cat 020LineCount2023.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   020LineCount2023.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic -Wno-parentheses   \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && cat 020LineCount2023.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

 * 3 ways to test this program:
 *
 * ./a.out
 *     Enter characters from stdin/keyboard; press Ctrl-D on an empty
 *     input line to signal EOF.
 *
 * cat 020LineCount2023.c | ./a.out
 *     cat writes the file contents to the program's stdin.
 *
 * ./a.out < 020LineCount2023.c
 *     The shell redirects the file directly to the program's stdin.

 * ./a.out
 *       ↑
 *    terminal → stdin
 *
 * cat file | ./a.out
 *             ↑
 *    pipe → stdin
 *
 * ./a.out < file
 *           ↑
 *          file → stdin
*/
#include <stdio.h>
#include <stdlib.h>

// Count lines in input
int main(void) {

    int ch = 0;
    int nl = 0;
    while ( ( ch = getchar() ) != EOF ) {
        if ( '\n' == ch ) {
            ++nl;
        }
    }
    printf("%d\n", nl);

    return EXIT_SUCCESS;
}
