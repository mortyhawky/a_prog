/*
The C Programming Language 1978 by Kernighan & Ritchie

Exercise 1-5. Modify the temperature conversion program to print
the table in reverse order, that is, from 300 degrees to 0.

Rewritten for C23
Added degree symbol and 
created a function for the convert function.

The formula for converting Fahrenheit to Celsius is:
Celsius = (5.0 / 9.0) * (Fahrenheit - 32)
The formula for converting Celsius to Fahrenheit is:
Fahrenheit = Celsius * 9.0 / 5.0 + 32

Compile: C23:
gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    ex_1.5.c -o a.out && ./a.out ; echo "echo \$? = "$?
    
clang -std=c23 -Wall -Wextra -Werror -Wpedantic \
      -fsanitize=address,undefined -g3 \
      ex_1.5.c -o a.out && ./a.out ; echo "echo \$? = "$?
*/

#include <stdio.h>  // printf
#include <stdlib.h> // EXIT_SUCCESS

#define DEGREE_SIGN "\u00B0"

// Celsius-to-Fahrenheit conversion function declaration.
// Aka. prototype.
double fahr_to_cels(double fahr);

int main(void) {
    double fahr  = 300.0f;    // Starting Fahrenheit temp.
    double lower =   0.0f;    // Ending   Fahrenheit temp.
    double step  =  20.0f;    // Increments.
    
    // Print table header.
    printf("%10s (%sC) %10s (%sF)\n",
           "Fahrenheit", DEGREE_SIGN,
           "Celsius",    DEGREE_SIGN);

    while ( fahr > lower ) {
        double fahr = fahr_to_cels(fahr);
        printf( "%10.1f %15.1f\n", fahr, celsius );
        fahr -= step;
    }

    return EXIT_SUCCESS;
}

// Function to convert Fahrenheit to Celsius
// Aka. function definition
double fahr_to_cels(double f) {
    printf("In fahr_to_cels f=%f\n", f);
    return (5.0 / 9.0) * (f - 32)
}
