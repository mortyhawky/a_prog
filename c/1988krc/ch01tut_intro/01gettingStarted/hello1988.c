/*
c /a/prog/c/1988krc/ch01tut_intro/01gettingStarted

gcc     hello23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   hello23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
  */


*/

#include <stdio.h>

int main()
{
    printf("hello, world\n");
    return 0;
}
