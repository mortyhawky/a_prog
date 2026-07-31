/* 
Compile & Link:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g esc-seq.c

Execute:
./a.out
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {  
    // \t = tab     \n = newline
    printf("Hello, \tworld!\n"); 

    return EXIT_SUCCESS; 
}                               
