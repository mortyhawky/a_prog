/*
c /a/prog/c/

gcc     main_template.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   main_template.c -o a.out            \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
*/

#include <stdint.h>     // for fixed-width integer types      (uint8_t, int8_t)
#include <inttypes.h>   // for portable printf format macros  (PRIu8,   PRId8)
#include <stdio.h>      // for printf()
#include <stdlib.h>     // for EXIT_SUCCESS/EXIT_FAILURE

#define DEGREE_SIGN "\u00B0"
#define MIN_WINTER_TEMP -11
#define WINTER_TEMP     -9

int main(void) {
    printf("main_template.c\n");
    char lang[] = "C";
    uint8_t version = 23;
    printf("Decimal     : %s%" PRIu8 "\n", lang, version);
    printf("Hex         : %s0x%02X\n", lang, version);

    int8_t winter_temp = WINTER_TEMP;
    if ( winter_temp < MIN_WINTER_TEMP ) {
        // Exit code = 1 if winter_temp is less than MIN_TEMP
        return EXIT_FAILURE;
    }
    printf("Winter temp : %" PRId8 "%sC\n", winter_temp, DEGREE_SIGN);

    return EXIT_SUCCESS;
}
