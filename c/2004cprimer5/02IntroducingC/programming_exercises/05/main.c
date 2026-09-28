/* cd into working directory
c /a/prog/c/2004cprimer5/02IntroducingC/programming_exercises/05/

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

#include "ex05.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("\nmain:\n");

    unsigned int toes = 10;
    printf("toes = %u \n", toes);

    puts("");
    return EXIT_SUCCESS;
}
