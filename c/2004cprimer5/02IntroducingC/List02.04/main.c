/* cd into working directory
c /a/prog/c/codevault/260922struct_function_ptr/ && gitall

m                       build
m cl                    clean
m c                     clean, rebuild, run Cppcheck
m r                     clean, rebuild, run the program
m d                     build and start GDB

*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "noogood.h"

int main(void) {
    printf("->main: \n");

    return EXIT_SUCCESS;
}
