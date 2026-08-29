/*
c /a/prog/c/

gcc     -std=c23 -Wall -Wextra -Werror -Wpedantic \
        -fsanitize=address,undefined -g3 \
        main_template.c -o a.out && ./a.out; echo "Exit code = $?"

clang   -std=c23 -Wall -Wextra -Werror -Wpedantic \
        -fsanitize=address,undefined -g3 \
        main_template.c -o a.out && ./a.out; echo "Exit code = $?" 
*/

#include <inttypes.h>   // for fixed width integers (uint8_t)
#include <stdint.h>     // for fixed width integers (PRIu8)
#include <stdio.h>      // for printf()
#include <stdlib.h>     // for EXIT_SUCCESS/EXIT_FAILURE

#define DEGREE_SIGN "\u00B0"
#define MIN_TEMP    -11
#define WINTER_TEMP  -9

int main(void) {
    printf("main_template.c\n");
    char lang[] = "C";
    uint8_t version = 23;
    printf("Decimal     : %s%" PRIu8 "\n", lang, version);
    printf("Hex         : %s0x%02X\n", lang, version);

    int8_t winter_temp = WINTER_TEMP;
    if ( winter_temp < MIN_TEMP ) {
        // Exit code = 1 if winter_temp less than MIN_TEMP
        return EXIT_FAILURE;
    }
    printf("Winter temp : %" PRId8 " %sC\n", winter_temp, DEGEEN_SIGN);

    return EXIT_SUCCESS;
}
