/* cd into working directory
c /a/prog/c/boot.dev-c_mem/ch02structs/L4typedef/

 * Project; Compile & Run:
clear && make && ./typedef

 * Project; Compile & Debug:
clear && make clean && make && gdb --command gdb.file typedef

 * Project; Clean:
make clean && ll
*/

#include <stdlib.h>
#include <stdio.h>
#include "typedef.h"

int main(void) {
    printf("*->in main:\n");

    //coordinate_t c = new_coord(1, 2, 3);
    coordinate_t c = new_coord(1, 2, 3 );
    show_coord(c);

    coordinate_t scaled = scale_coordinate(c, 2);
    show_coord(scaled);


    return EXIT_SUCCESS;
}
