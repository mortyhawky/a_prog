/* cd into working directory
c /a/prog/c/2004cprimer5/02IntroducingC/List02.04/
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
#include "nogood.h"

/*  nogood -- a program with errors */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    printf("->main: \n");

    int n, n2, n3;

    n = 7;
    print_val(n);

    return EXIT_SUCCESS;
}
