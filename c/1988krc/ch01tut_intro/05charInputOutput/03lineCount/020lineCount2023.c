/* 1.5.3 Line Counting page 20

c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/03lineCount

gcc     019charCounting2023ver2.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && cat 019charCounting2023ver2.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   019charCounting2023ver2.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic -Wno-parentheses   \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && cat 019charCounting2023ver2.c | ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

 * 3 ways to test this program:
 *
 * ./a.out
 *     Enter characters from stdin/keyboard; press Ctrl-D on an empty
 *     input line to signal EOF.
 *
 * cat 019charCounting2023.c | ./a.out
 *     cat writes the file contents to the program's stdin.
 *
 * ./a.out < 019charCounting2023ver2.c
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

int main(void) {

    double nc = 0;
    for ( nc = 0; getchar() != EOF; ++nc ) {
        ;
    }
    printf("%.0f\n", nc);

    return EXIT_SUCCESS;
}
