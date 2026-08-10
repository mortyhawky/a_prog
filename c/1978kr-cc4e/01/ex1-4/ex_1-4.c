/*
The C Programming Language 1978 by Kernighan & Ritchie

Exercise 1-4. Write a program to print the corresponding
Celsius to Fahrenheit table.

Rewritten for C23
Added degree symbol and made a function for the 
convert function.

The formula for converting Fahrenheit to Celsius is:
Celsius = (5.0 / 9.0) * (Fahrenheit - 32)
The formula for converting Celsius to Fahrenheit is:
Fahrenheit = Celsius * 9.0 / 5.0 + 32
Fahrenheit = Celsius * 1.8 + 32

Compile: C23:
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g ex_1-4.c
*/
#include <stdio.h>  // printf
#include <stdlib.h> // EXIT_SUCCESS

#define DEGREE_SIGN "\u00B0"

// Celsius-to-Fahrenheit conversion function declaration.
// Aka. prototype.
double cels_to_fahr(double cels);

int main(void) {
    double celsius = 17.0;    // Starting Celsius temp.
    double upper   = 23.5;    // Ending   Celsius temp.
    double step    =  0.5;    // Increments.
    
    // Print table header.
    printf("%10s (%sC) %10s (%sF)\n",
           "Celsius", DEGREE_SIGN,
           "Fahrenheit", DEGREE_SIGN);

    while (celsius <= upper) {
        double fahrenheit = cels_to_fahr(celsius);
        printf("%10.1f %15.1f\n", celsius, fahrenheit);
        celsius += step;
    }

    return EXIT_SUCCESS;
}

// Function to convert Celsius to Fahrenheit
// Aka. definition
double cels_to_fahr(double cels) {
    return cels * (9.0 / 5.0) + 32.0;
}
