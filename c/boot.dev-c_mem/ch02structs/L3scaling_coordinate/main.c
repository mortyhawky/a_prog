/* cd into working directory
c /a/prog/c/boot.dev-c_mem/ch02structs/L3scaling_coordinate/

 * Project; Compile & Run:
clear && make && ./coord

 * Project; Compile & Debug:
clear && make clean && make && gdb coord

 * Project; Clean:
make clean && ll
*/

#include <stdlib.h>
#include <stdio.h>
#include "coord.h"

int main(void) {
    puts("www.boot.dev: Learn Memory Management in C by TJ DeVries (\"teej\")");
    puts("Chapter02 Structs Lesson03 Scaling Coordinates");
    puts("");
    puts("in main:");
    puts("");

    struct Coordinate c1 = coor_new(1, 2, 3);
    coor_show(c1);

    c1 = coor_scale(c1, 3);
    coor_show(c1);

    c1 = coor_scale(c1, 7);
    coor_show(c1);

    return EXIT_SUCCESS;
}
