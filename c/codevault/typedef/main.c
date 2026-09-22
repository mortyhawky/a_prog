/* cd into working directory
c /a/prog/c/codevault/typedef/

 * Project; Compile & Run:
clear && make && ./typedef

 * Project; Compile & Debug:
clear && make clean && make && gdb --command gdb.file typedef

 * Project; Clean & Git
make clean && gitall || ll
*/

#include <stdlib.h>
#include <stdio.h>
#include "typedef.h"

typedef struct Point {
    double x, y;
} Point;

int main(void) {
    printf("*->in main:\n");

    return EXIT_SUCCESS;
}
