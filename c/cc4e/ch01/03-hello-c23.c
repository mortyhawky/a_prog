/* 
Compile & Link:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g 03-hello-c23.c

Execute:
./a.out
*/
#include <stdio.h>      // for printf function
#include <stdlib.h>     // for EXIT_SUCCESS

int main(void) {
    printf("Hello, world!\n");

    return EXIT_SUCCESS;
}
