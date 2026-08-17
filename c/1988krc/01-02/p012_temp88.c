/* The C programming Language
 * Second Edition
 * ANSI C
 * Chapter 01   Section 01.02   
 * Compile:
 * Ctrl+n to toggle linenumbers in nvim.

cc -ansi p012_temp88.c && ./a.out && echo $?

*/

#include <stdio.h>  /* include information about standard library */

/* Print Fahrenheit-Celsius table:
 * for fahr = 0, 20, ..., 300
 * Formula to convert Fahrenheit to Celsius:
 * C=(5/9)(F-32)
*/

/* The reason for multiplying by 5 and dividing by 9 instead of just
 * multiplying with 5/9 is that in C, as in many other languages,
 * integer division truncates: any fractional part is discarded.
 * Since 5 and 9 are integers. 5/9 would be truncated to zero and
 * so all the Celsius temperatures would report as zero.
*/

void main()         /* define a function called main that
                     * receive no arguments
                     */
{                   /* statments of main are enclosed in braces */
 
    printf("Compiled with: cc -ansi p012_temp88.c -o a.out && ./a.out\n");
    int fahr, celsius;      
    int lower, upper, step;

    lower =   0;    /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step  =  20;    /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        /* main calls library function printf to print
         * formated text to stdout
        * \n is an escape code for newline */
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    /*return 0;*/
}
