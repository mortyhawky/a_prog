/* Temperature table using the Fahrenheit scale,
 * named after Daniel Gabriel Fahrenheit.
 * for fahr = -20, -15, ..., 90
 *
 *Compile: K&R C (1978):
cc -ansi c_008_01.c
 *
 *Compile: C23:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g c_008_01-c23.c
*/
#include <stdio.h>
#include <stdlib.h>

#define DEGREE_SIGN "\u00B0"

int main(void) {
    float fahr    = -20.0f;  // starting Fahrenheit temp.
    int   upper   =  90;     // ending   Fahrenheit temp.
    int   step    =   5;     // increment (Fahr.)
    
    // Print table header.
    printf("%10s (%sF) %10s (%sC)\n",
           "Fahrenheit", DEGREE_SIGN,
           "Celsius", DEGREE_SIGN);

    while (fahr <= upper) {
        float celsius = (5.0f / 9.0f) * (fahr - 32.0f);
        printf("%10.0f %15.1f\n", fahr, celsius);
        fahr += step;
    }

    return EXIT_SUCCESS;
}
