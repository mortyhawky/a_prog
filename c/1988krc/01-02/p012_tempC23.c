/* The C programming Language
 * Second Edition 1988
 * Converted to C23 by Morty
 * Chapter 01   Section 01.02   
 * Compile & Run:
gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    p012_tempC23.c -o a.out && ./a.out && echo $?
 */

#include <stdio.h>      // declares the printf function
#include <stdlib.h>     // for EXIT_SUCCESS
#include <stdint.h>     // for fixed-width integers
#include <inttypes.h>   // for the PRId16 macro

/* Print Fahrenheit-Celsius table
 * Starting at START, ending at END, step STEP
 * Formula: C = (5/9)(F-32)
 *
 * The reason for multiplying by 5 and dividing by 9 instead of just
 * multiplying with 5/9 is that in C, as in many other languages,
 * integer division truncates: any fractional part is discarded.
 * Since 5 and 9 are integers. 5/9 would be truncated to zero and
 * so all the Celsius temperatures would report as zero.
 *
 * PRId16 is a macro defined in <inttypes.h> (C99 and later).
 * PRI → print (for the printf / fprintf family of functions)
 * d → decimal (signed integer conversion, like the normal %d)
 * 16 → 16-bit (for the type int16_t)
 * “the correct printf format specifier string for a signed
 * 16-bit integer (int16_t)”.
 */

#define START  50
#define END   150
#define STEP   15

int main(void) {
    printf("Compiled with:\n"
           "gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \\ \n" 
           "    -fsanitize=address,undefined -g3 \\ \n"
           "    p012_tempC23.c -o a.out && ./a.out && echo $? \n");
    int16_t fahr  =  START;    // Starting temperature Fahrenheit
    int16_t upper =  END;      // Ending   temperature Fahrenheit
    int16_t step  =  STEP;     // step size

    while (fahr <= upper) {
        int16_t celsius = 5 * (fahr - 32) / 9;
        printf("%" PRId16 "\t%" PRId16 "\n", fahr, celsius);
        fahr += step;
    }

    return EXIT_SUCCESS;
}
