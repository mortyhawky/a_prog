/* cd into working directory
c /a/prog/c/codevault/260922struct_function_ptr/

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

Point_t get_middle_point(const Point_t a, const Point_t b);

int main(void) {
    printf("-> main:\n");
    puts("-");

    const Point_t p1 = {
        .x = 1,  .y = 1, 
    };

    const Point_t p2 = {
        .x = 3,  .y = 2, 
    };

    Point_t middle_point = get_middle_point(p1, p2);
    printf("middle_point = %0.3lf, %0.3lf \n", middle_point.x, middle_point.y );

    const Point_t* ptr_p1 = &p1;
    printf("ptr_p1 = %p \n", ptr_p1);
    puts("-");


    return EXIT_SUCCESS;
}

Point_t get_middle_point(const Point_t a, const Point_t b) {
    // Calculate middle point of a.and b.
    // (a.x + b.x)/2.0
    // (a.y + b.y)/2.0
    //Point_t middle_point = {
    //    (a.x + b.x) / 2.0,
    //    (a.y + b.y) / 2.0,
    //};
    
    const Point_t mp;
    mp.x = (a.x + b.x) / 2.0;
    mp.y = (a.y + b.y) / 2.0;

    return mp;
}
