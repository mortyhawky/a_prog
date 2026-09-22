/*
YT: CodeVault "Difference between memmove and memcpy"
gcc -std=c23 -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined      \
    -g mem-move-cpy.c -o mem-move-cpy
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    printf("YT: CodeVault: \"Difference between memmove and memcpy\"\n");

    char str[] = "Start stop";
    printf("%s\n", str);

    /* The source and destination are part of the same array and
     * overlap is not allowed for memcpy()
     * The C standard requires that memcpy() behaves as if the source and
     * destination do not overlap.
     */
    // copy 'stop' to beginning of str, overwrites Star
    //      dst  src    len
    //memcpy( str, str+6, 4*sizeof(char) );
    //printf("%s\n", str);
    ////                   nub of byts to mov
    //memmove( str, str+6, 4*sizeof(char) );
    //printf("%s\n", str);

    // try to move art to beginning of str
    //    str[] = "Start stop";
    memcpy( str, str+2, 3*sizeof(char) );
    printf("%s\n", str);

    // memcpy does not use a buffer
    // memmove does use a buffer

    memmove( str, str+2, 3*sizeof(char) );
    printf("%s\n", str);

    return 0;
}
