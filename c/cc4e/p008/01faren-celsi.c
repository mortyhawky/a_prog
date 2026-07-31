#include <stdio.h>

/* print Farenheit-Celsius table
for f = 0, 20, ..., 300 */

/*
 * cc -ansi c_008_01.c

main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower =   0;    /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step =  20;     /* step size */
    fahr = lower;

    while ( fahr <= upper ) {
        celsius = (5.0/.9.0) * (fahr-32.0);
        fahr = fahr + step;
    }
}
