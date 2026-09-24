/* Listing 2.1 the first.c Program
 * C Primer Plus 5th Edition    2004
 * Adapted for C23 by Morty Sep.2026

gcc   0201first.c -o a.out            \
      -g3 -O0 -std=c23                    \
      -Wall -Wextra -Werror -Wpedantic    \
      -fsanitize=address,undefined

clang 0201first.c -o a.out            \
      -g3 -O0 -std=c23                    \
      -Wall -Wextra -Werror -Wpedantic    \
      -fsanitize=address,undefined

Run:
./a.out

Debug:
gdb a.out
l
b main
r
display num
display/16xb &num
        x       examine memory
        /16     examine 16 units
        x       display in hexadecimal
        b       unit size is one byte
        &num    start at the address of num   
n
delete display 1

// Endianness:
// The egg's big end is always the    MSB.
// The egg's little end is always the LSB.
// In endianness, big endian prioritizes high-value bytes first, 
// while little endian favors low-value bytes first.

// If we imagine data coming towards us as a stream
// And we are eating/consuming bytes:
// little endian LSB is consumed first .... lastly MSB
// Big endian    MSB is consumed first .... lastly LSB
//
// For a little endian sender and receiver
// for a 4 bytes int, we must receive at least
// 4 bytes before we can arrange the bytes correctly:
// to calculate it's meaning?
//
// For a big endian sender and receiver, The same applys?

*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {            // a simple program

    long int num = 0;            // define a variable called num
    printf ( "num = %ld, &num = %p sizeof(num)=%zu \n", 
            num, (void*)&num, sizeof(num) //value, address, size
    );

    num = 0x1122334455667788;
    printf ( "num = %ld, &num = %p sizeof(num)=%zu \n", 
            num, (void*)&num, sizeof(num) 
    );

    printf("I am a simple ");
    printf("computer.\n");
    printf("My favorite number is %ld because it is first.\n", num);

    return EXIT_SUCCESS;
}
