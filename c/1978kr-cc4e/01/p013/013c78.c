/*
* /a/prog/c/1978kr-cc4e/01/c78_013_01.c
* The C Programming Language 1978 1st Edition.
* Program on page13 converted to C23

gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    c78_013_01.c -o a.out && ./a.out; echo "Exit Code = $?"

clang -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    c78_013_01.c -o a.out && ./a.out; echo "Exit Code = $?"
*/

#include <inttypes.h>   // PRId16
#include <stdint.h>     // int16_t
#include <stdio.h>      // printf
#include <stdlib.h>     // EXIT_SUCCESS

#define LOWER   0   // lower limit of table
#define UPPER 300   // upper limit
#define STEP   20   // step size

int main(void) {    // Fahrenheit-Celsius table
    for ( int16_t fahr = LOWER; fahr <= UPPER; fahr += STEP ) {
        printf( "%4" PRId16 " %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32) );
    }

    return EXIT_SUCCESS;
}
