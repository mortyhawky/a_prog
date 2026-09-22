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

Point_t get_middle_point(Point_t a. Point_t b.;

int main(void) {
    printf("-> main:\n");
    puts("-");

    Point_t p1= {
        .x = 1, .y = 1, 
    };

    Point_t p2= {
        .x = 3, .y = 2, 
    };

    return EXIT_SUCCESS;
}

Point_t get_middle_point(Point_t a, Point_t b) {
    // Calculate middle point of a.and b.
    // (a.x + b.x)/2.0
    // (a.y + b.y)/2.0
    Point_t middle_point = {
        a.x + b.y / 2.0,
        b.x + b.y / 2.0,
    };

    return middle_point;
}
