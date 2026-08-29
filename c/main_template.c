/*
c /a/prog/c/1978kr-cc4e/


gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    main_template.c -o a.out && ./a.out; echo "Exit code = $?"

clang -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    main_template.c -o a.out && ./a.out; echo "Exit code = $?" 
*/

#include <inttypes.h>   // for fixed width integers (uint8_t)
#include <stdint.h>     // for fixed width integers (PRIu8)
#include <stdio.h>      // for printf()
#include <stdlib.h>     // for EXIT_SUCCESS/EXIT_FAILURE

int main(void) {
    printf("main_template.c\n");
    char lang[] = "C";
    uint8_t version = 23;
    printf("Decimal     : %s%" PRIu8 "\n", lang, version);
    printf("Hex         : %s0x%02X\n", lang, version);

    int8_t winter_temp = -11;
    printf("Winter temp : %" PRId8 "\n", winter_temp);

    return EXIT_SUCCESS;
}
