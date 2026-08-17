/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version
 * Page 15 K&R C ANSI 1988
 * Converted to C23 by Morty
 * Compile & Run:
gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    p015-c23.c -o a.out && ./a.out && echo $?
*/

#include <stdio.h>      // declares the printf function
#include <stdlib.h>     // for EXIT_SUCCESS

int main(void) {
    printf("Some bathing-temperatures:\n");
    _Float64 fahr = 67.0f64;
    _Float64 upper = 73.0f64;
    _Float64 step = 0.5f64;

    while (fahr <= upper) {
        _Float64 celsius = (5.0f64 / 9.0f64) * (fahr - 32.0f64);
        printf("%4.1f %6.1f\n", (double)fahr, (double)celsius);
        fahr += step;
    }

    return EXIT_SUCCESS;
}
