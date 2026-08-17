/*
/a/prog/c/2016giraffAcademy/Giraffe/main.c
gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    main.c -o a.out && ./a.out && echo $?
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Hello world!\n");

    return EXIT_SUCCESS;
}
