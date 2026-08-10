/* 
Compile & Link:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g 01esc-seq.c

Execute:
./a.out
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {  
    // \t horizontal tab
    // \n newline
    // \b backspace

    printf("\\Hello, \t\t\"world!\b*\"\n");
    // prints: \Hello,     "world*"

    printf("Octal 101 ASCII                :  \101\n");
    printf("Hex  x041 ASCII                :  \x041\n");
    printf("Dec    65 ASCII                : 65\n\n");

    printf("Unicode \\u03A9 Omega           : \u03A9\n");
    printf("Unicode \\U0001F600 Smiley      : \U0001F600\n");

    return EXIT_SUCCESS; 
}                               

/*
C source
   |
   |  \u03A9 / \U0001F600
   v
Compiler (GCC)
   |
   v
Program output (UTF-8 bytes)
   |
   v
Alacritty
   |
   v
Font fallback:
   JetBrainsMono Nerd Font Mono
        +
   Noto Color Emoji
   |
   v
Ω 😀
*/
