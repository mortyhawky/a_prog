/* 
Compile & Link:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g 03-hello-c23.c

Execute:
./a.out
*/
#include <stdio.h>      // declares printf
#include <stdlib.h>     // defines EXIT_SUCCESS

int main(void) {   // entry point of our program
    printf("Hello, world!\n");  // write formatted output to stdout

    return EXIT_SUCCESS;        // return success status code to the OS
}                               
