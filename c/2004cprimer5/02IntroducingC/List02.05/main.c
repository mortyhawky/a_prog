/* cd into working directory
c /a/prog/c/2004cprimer5/02IntroducingC/List02.05/
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
//#include "stillbad.h"

/*  stillbad -- a program with semantic error. */
#include <stdio.h>
#include <stdlib.h>
#include "stillbad.h"

int main(void) {
    printf("->main: \n");

    int n1 = 7;
    print_int("n1", n1);

    return EXIT_SUCCESS;
}
