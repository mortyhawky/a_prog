/* The C programming Language
 * Second Edition
 * ANSI C
 * Chapter 01   Section 01.02   
 * Compile:
cc -ansi temp88.c

 * Run:
./a.out
*/

#include <stdio.h>

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower =   0;    /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step  =  20;    /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
    }
}
