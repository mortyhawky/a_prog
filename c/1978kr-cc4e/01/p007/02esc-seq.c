/* 
Compile & Link:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g 02esc-seq.c

Execute:
./a.out

Inspect:
./a.out | xxd
objdump -s -j .rodata a.out
string a.out |g Omega
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {  
    printf("Omega       : \u03A9\n");
    printf("Smiley      : \U0001F600\n");

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

objdump -s -j .rodata a.out
string a.out |g Omega
*/
