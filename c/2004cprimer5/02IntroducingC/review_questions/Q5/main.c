/* cd into working directory
c /a/prog/c/2004cprimer5/02IntroducingC/review_questions/q5/
gitall ; ll

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
//#include "q5.h"

/*  q5 -- a program with semantic error. */
#include <stdio.h>
#include <stdlib.h>
#include "q5.h"

int main(void) {
    printf("->main: \n");

    int n1, n2, n3, n4;
    n1 = n2 = n3 = n4= 5;
    print_int("n1", n1);
    print_int("n2", n2);
    print_int("n3", n3);
    print_int("n4", n4);

    int sq = square(n2);
    print_int("square", sq);

    int cu = cube(n3);
    print_int("cube", cu);

    int ts = time_space(n4);
    print_int("time_spaced", ts);

    return EXIT_SUCCESS;
}
