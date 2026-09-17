/*
Define a new struct called Coordinate in coord.h. Remember, 
.h files are for declarations of types and function prototypes. 
The Coordinate struct should have three fields:
    x: an integer
    y: an integer
    z: an integer

c /a/prog/c/boot.dev-c_mem/ch02structs/L1structs/

make
./structs && echo "Exit code = $?"

gdb structs


make clean
*/

//                     values:  0                1
#include <stdlib.h> // for EXIT_SUCCESS and EXIT_FAILURE
#include <stdio.h>
#include "coord.h"

int main(void) {

    println("Chapter 02 / L1 Structs \n");

    struct Coordinate c1;
    c1.x = 1;
    c1.y = 2;
    c1.z = 3; 
    printf("c1.x = %d\n", c1.x);
    printf("c1.y = %d\n", c1.y);
    printf("c1.z = %d\n", c1.z);
    puts("");

    struct Coordinate c2;
    c2.x = 4;
    c2.y = 2;
    c2.z = 0;
    printf("c2.x = %d\n", c2.x);
    printf("c2.y = %d\n", c2.y);
    printf("c2.z = %d\n", c2.z);
    puts("");

    struct Coordinate c3;
    c3.x = 10;
    c3.y = 20;
    c3.z = 30;
    printf("c3.x = %d\n", c3.x);
    printf("c3.y = %d\n", c3.y);
    printf("c3.z = %d\n", c3.z);
    puts("");

    struct Coordinate c4;
    c4.x = 0;
    c4.y = 6;
    c4.z = 9;
    printf("c4.x = %d\n", c4.x);
    printf("c4.y = %d\n", c4.y);
    printf("c4.z = %d\n", c4.z);
    puts("");

    struct Coordinate c5 = set_coord(c3);
    printf("c5.x = %d\n", c5.x);
    printf("c5.y = %d\n", c5.y);
    printf("c5.z = %d\n", c5.z);
    puts("");

    return EXIT_SUCCESS;
}
