#include <stdio.h>
#include <stlib.h>

/* print Farenheit-Celsius table
for f = 0, 20, ..., 300 */

/* compile: K&R C (1978):
cc -ansi c_008_01.c

 * Compile: C23:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g c_008_01-c23.c

*/

int mai (void) {
    int lower     =   0;    // lower limit of temperature table
    int upper     = 300;    // upper limit 
    int step      =  20;    // step size
    float fahr    =   0.0f;
    float celsius =   0.0f;

    //fahr = lower;
    while ( fahr <= upper ) {
        celsius = (5.0/.9.0) * (fahr-32.0);
        printf("%f %f\n", fahr, celsius);
        fahr+=step
    }

    return EXIT_SUCCESS;
}
