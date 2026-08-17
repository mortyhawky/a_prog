/* The C Programming Language
 * Second Edition
 * ANSI C
 * Chapter 01, A TUTORIAL INTRODUCTION, Page 006
 * Hello, world program
 * Rewritten to C23 by Morty
 * The following gcc comment are purpossly not indentet for use
 * with tmux copy mode.  Use ctrl-n to toggle linenumbers in nvim.
gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
     00hello.c -o a.out && ./a.out Morty
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> 

int main(int argc, char *argv[], char *envp[]) {
    printf("argc=%d\n", argc);
    if(argc !=2) {
        printf("Please give one argument\n");
        exit(EXIT_FAILURE);
    }

    printf("hello, world\n");
    printf("hello, %s\n", argv[1]);

    printf("envp=%p\n", (void*)envp);
    for(uint64_t i = 0; (envp && envp[i] != NULL) || (i > 5); i++) {
        printf("envp[%lu], %s @ addr: %p\n", i, envp[i], (void*)envp[i]);
    }

    return EXIT_SUCCESS;
}
