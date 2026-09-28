/* cd into working directory
c /a/prog/c/2004cprimer5/02IntroducingC/programming_exercises/04/

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

#include "ex04.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("\nmain:\n");

    jolly_good();
    jolly_good();
    jolly_good();
    final();

    puts("");
    return EXIT_SUCCESS;
}
