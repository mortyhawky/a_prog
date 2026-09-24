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
//#include "nogood.h"

/*  nogood -- a program with errors */
#include <stdio.h>
#include <stdlib.h>
#include "nogood.h"

int main(void) {
    printf("->main: \n");

    int n1, n2, n3;
    n1 = n2 = n3 = 13;
    printf("n1 = %d,   n2 = %d,   n3 = %d,   \n ", n1, n2, n3);
    printf("&n1 = (int*)%p \n", (void*)&n1);

    print_val("n1",   n1  );    // expression produces 13; n1 remains 13
    print_val("++n2", ++n2);    // n2 becomes 14; expression produces 14
    print_val("--n3", --n3);    // n3 becomes 12; expression produces 12
    
    print_val("n1++", n1++);    // expression produces 13; n1 becomes 14
    print_val("n1",   n1  );    // expression produces 14; n1 remains 14


    return EXIT_SUCCESS;
}
