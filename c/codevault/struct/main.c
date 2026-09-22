/* cd into working directory
c /a/prog/c/codevault/struct/

 * Project; Compile & Run:
clear && make && ./struct

 * Project; Compile & Debug:
clear && make clean && make && gdb --command gdb.file struct

 * Project; Clean & Git
(make clean && gitall) || (ll)
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

struct Point {
    double x;
    double y;
};
typedef struct Point Point_t;

int main(void) {
    printf("-> main:\n");
    puts("-");

    Point_t p1;
    p1.x = 0.65;
    p1.y = 0.78;
    printf("p1 -> %0.6lf, %0.6lf \n", p1.x, p1.y);
    puts("-");

    Point_t p2 = {
        p2.x = 0.666,
        p2.y = 3.14159,
    };
    printf("p2 -> %0.6lf, %0.6lf \n", p2.x, p2.y);
    puts("-");

    Point_t p3 = {
        .x = 3.33333,
        .y = 3.99999,
    };
    printf("p3 -> %0.6lf, %0.6lf \n", 
            p3.x, 
            p3.y
    );
    puts("-");

    return EXIT_SUCCESS;
}
