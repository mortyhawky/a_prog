/* cd into working directory
c /a/prog/c/codevault/struct_function

 * Project; Compile & Run:
clear && make && ./stru_func

 * Project; Compile & Debug:
clear && make clean && make && gdb --command gdb.file stru_func

 * Project; Clean & Git
(make clean && gitall) || (ll)
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "stru_func.h"

struct Point {
    double x;
    double y;
};
typedef struct Point Point_t;

int main(void) {
    printf("-> main:\n");
    puts("-");


    return EXIT_SUCCESS;
}
