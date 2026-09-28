/* cd into working directory
c /a/prog/c/2004cprimer5/02IntroducingC/programming_exercises/03/

m                       build
m cl                    clean
m c                     clean, rebuild, Cppcheck
m r                     clean, rebuild, run the program
m d                     build and start GDB

*/

//#include <inttypes.h>
//#include <stdint.h>
//#include <stdio.h>
//#include <stdlib.h>

//#include "ex03.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("\nmain:\n");

    /*
    C Primer Plus 5th Edition by Stephen Prata 2004
    Chapter 2 Programming Exercise 3:
    Write a program that converts your age in years to days and displays
    both values. At this point, don't worry about fractional years and
    leap years.
    */

    #define DAYS_IN_YEAR 365
    
    int ageYears = 55;
    printf("Hello, my name is Morty,\n");
    printf("My age in years = %d \n", ageYears);
    printf("My age in days  = %d \n", ageYears * DAYS_IN_YEAR);
    int ageDays  = ageYears * DAYS_IN_YEAR;
    printf("Yes %d days.\n", ageDays);

    puts("");
    return EXIT_SUCCESS;
}
