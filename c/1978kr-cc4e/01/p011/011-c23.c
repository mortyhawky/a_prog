#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * KRC 1978 page 011
 * Converted to c23
 * Fahrenheit-Celsius table
 * Using the for statment

 * The unindentet gcc command is intentional
 * To use copy-mode (Alt+c/v,  y,  Alt+p) in tmux.

gcc -std=c23 -Werror -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g 011-c23.c && ./a.out
*/


#define DEGREE_SIGN "\u00B0"

int main(void) {
    printf("sizeof(char)    = %zu byte(s)\n", sizeof(char)    );
    printf("sizeof(int8_t)  = %zu byte(s)\n", sizeof(int8_t)  );
    printf("sizeof(int16_t) = %zu byte(s)\n", sizeof(int16_t) );
    printf("sizeof(int32_t) = %zu byte(s)\n", sizeof(int32_t) );
    printf("sizeof(int64_t) = %zu byte(s)\n", sizeof(int64_t) );
    printf("sizeof(float)   = %zu byte(s)\n", sizeof(float)   );
    printf("sizeof(double)  = %zu byte(s)\n", sizeof(double)  );

    for (int16_t fahr = 60; fahr <= 270; fahr += 25) {
        printf(" %05.1f %sF    %05.1f %sC\n", 
               (float)fahr,    // cast required: %f needs a
                 DEGREE_SIGN,  // float/double, fahr is int16_t
                   (5.0 / 9.0) * (fahr - 32), 
                     DEGREE_SIGN );
    }

    return EXIT_SUCCESS;
}
