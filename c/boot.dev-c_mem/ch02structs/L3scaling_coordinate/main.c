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
    puts("in main:");
    puts("www.boot.dev: Learn Memory Management in C by TJ DeVries (\"teej\")");
    puts("Chapter02 Structs Lesson03 Scaling Coordinates");
    puts("");

    return EXIT_SUCCESS;
}
