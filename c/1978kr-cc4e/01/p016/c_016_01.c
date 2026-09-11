/*
gcc     p016-c23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   p016-c23.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
  */

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf(
        "sizeof(int) =%zu\n", 
        sizeof(int)  
    );
    printf(
        "sizeof(long)=%zu\n", 
        sizeof(long) 
    );

    uint64_t nc = 0;
    while (getchar() !=EOF) {
        ++nc;
    }
    printf(
        "%" PRIu64 " characters including new-line(s) '\\n'\n", 
        nc
    );

    return EXIT_SUCCESS;
}
