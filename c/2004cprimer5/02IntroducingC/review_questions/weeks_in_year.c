/*
c /a/prog/c/2004cprimer5/02IntroducingC/review_questions/
gcc -std=c23 weeks_in_year.c -o weeks_in_year
 */

#include <stdio.h>
int main(void) { // this prints the number of weeks in a year
    int weeks_in_year = 52;
    printf("There are %d weeks in a year.\n", weeks_in_year);

    return 0;
}
