/* Bro Code
 * Enums
gcc -std=c23 -Werror -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g main.c && ./a.out hello world 123 3.14
*/
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    puts("");
    printf("%6s %6s %02i \n", "argc", "=", argc);

    for(uint8_t i = 0; i < argc; i++) {
        printf("%7s%03" PRIu8 "] %s %5s \n", "argv[", i, "=", argv[i]);
    }

    uint16_t var = 12345;
    printf ("%5s%8s %" PRIu16 "\n\n", "var", "=", var);
    printf ("sizeof(uint16_t) = %zu \n", sizeof(uint16_t) );

    /* enum = A  user-defined data type that consists of a
     *        set of named integer constants.
     *        Benefit: Replaces numbers with readable names.
     */
    typedef enum {
        MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
    }Day;

    printf("sizeof(SUNDAY) = %zu \n", sizeof(SUNDAY) );
    printf("SUNDAY = %d \n", SUNDAY );

    Day today = TUESDAY;
    printf("today = %d \n", today );

    return EXIT_SUCCESS;
}
