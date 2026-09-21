/* cd into working directory
c /a/prog/c/boot.dev-c_mem/ch02structs/L3scaling_coordinate/

 * Project; Compile & Run:
clear && make && ./coord

 * Project; Compile & Debug:
clear && make clean && make && gdb --command gdb.file coord

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
    puts("in main:");
    coor_show(c1);

    puts("in main:");
    c1 = coor_scale(c1, 3);
    puts("in main:");
    coor_show(c1);

    puts("in main:");
    c1 = coor_scale(c1, 7);
    puts("in main:");
    coor_show(c1);

    //puts("in main:");
    //struct Coordinate c;
    //c.x_coo = 1;
    //c.y_coo = 2;
    //c.z_coo = 3;
    //puts("in main:");
    //coor_show(c);
    //puts("in main:");


    //puts("in main:");
    //struct Coordinate c_ = coor_new(1, 2, 3);
    //puts("in main:");
    //coor_show(c_);

    //puts("in main:");
    //struct Coordinate scaled = coor_scale(c_, 2);
    //puts("in main:");
    //coor_show(scaled);


    puts("in main:");
    struct Coordinate c = coor_new(4, 2, 0);
    puts("in main:");
    coor_show(c);
    puts("in main:");


    puts("in main:");
    struct Coordinate scaled = coor_scale(c, 2);
    puts("in main:");
    coor_show(scaled);
    puts("in main:");


    return EXIT_SUCCESS;
}
