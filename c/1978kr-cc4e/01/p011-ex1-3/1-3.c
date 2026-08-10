/* Exercise 1-3.
 * Modify the temperature conversion program to print a 
 * heading above the table.
 */
#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 

gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
        -g 1-3.c
*/

#define DEGREE_SIGN "\u00B0"

int main(void) {
    int lower, upper, step;
    float fahr, celsius;
    lower = -20;    /* lower limit of temperature table */
    upper = 180;    /* upper limit */
    step  =  25;    /* step size */
    fahr  = lower;

    // %[flags][width][.precision]specifier
    // % -      19     .1         lf
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("         1         2         3         4         5\n");
    printf("%s   %s\n",
        "Fahrenheit (" DEGREE_SIGN "F)",
        "Celsius (" DEGREE_SIGN "C)");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.1f%15.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
