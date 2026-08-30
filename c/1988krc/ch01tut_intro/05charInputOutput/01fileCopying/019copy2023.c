/* copy input to output; 2nd version
c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/01fileCopying

gcc     019copy2023.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   019copy2023.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

 * Test the program:
cat hello2023.c | ./a.out
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c = 0;
    while ( ( c = getchar() ) != EOF ) {
    /*    ^ ^            ^  ^        ^
     *    | |            |  |        |
     *    | |            |  |        +--- while condition close
     *    | |            |  +---------- assignment/grouping close
     *    | |            +----------- getchar() open/close
     *    | +-------------------------- assignment/grouping open
     *    +------------------------------ while condition open
     */
        putchar(c);
    } 

    return EXIT_SUCCESS;
}
