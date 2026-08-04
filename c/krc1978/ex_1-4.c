/*
Exercise 1-4. Write a program to print the corresponding
Celsius to Fahrenheit table.

The formula for converting Fahrenheit to Celsius is:
Celsius = (5.0 / 9.0) * (Fahrenheit - 32)
The formula for converting Celsius to Fahrenheit is:
Fahrenheit = (Celsius + 32) * (9.0 / 5.0)

Compile: C23:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g ex_1-4.c
*/
#include <stdio.h>
#include <stdlib.h>

#define DEGREE_SIGN "\u00B0"

int main(void) {
    float celsius = 0.0f;   // Starting Celsius temp.
    int   upper   = 100;    // Ending   Celsius temp.
    int   step    =  10;    // Increments.
    
    // Print table header.
    printf("%10s (%sC) %10s (%sF)\n",
           "Celsius", DEGREE_SIGN,
           "Fahrenheit", DEGREE_SIGN);

    while (celsius <= upper) {
        float fahrenheit = (celsius + 32) * (9.0 / 5.0);
        printf("%10.0f %15.1f\n", celsius, fahrenheit);
        celsius += step;
    }

    return EXIT_SUCCESS;
}
