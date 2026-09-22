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

int main(void) {
    printf("-> main:\n");

    return EXIT_SUCCESS;
}
