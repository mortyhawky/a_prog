/*
gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
      -fsanitize=address,undefined -g3 \
      p015-c23.c -o a.out && ./a.out && echo $?
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Hello world!\n");

    return EXIT_SUCCESS;
}
