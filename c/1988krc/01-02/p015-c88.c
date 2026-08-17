/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version
 Compile & Run:
cc -ansi p015-c88.c -o a.out && ./a.out && echo $?
*/

#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
