/* Exercise 1-3.
 * Modify the temperature conversion program to print a 
 * heading above the table.
 */
#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 

gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
        -g 03-hello-c23.c
*/

int main(void) {
    int lower, upper, step;
    float fahr, celsius;
    lower =   0;    /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step  =  20;    /* step size */
    fahr  = lower;

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
