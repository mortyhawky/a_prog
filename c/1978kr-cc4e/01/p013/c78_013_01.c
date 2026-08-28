/*
* /a/prog/c/1978kr-cc4e/01/c78_013_01.c

gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    c78_013_01.c -o a.out && ./a.out ; echo "echo \$? = "$?

clang -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    c78_013_01.c -o a.out && ./a.out ; echo "echo \$? = "$?
*/

#include <stdio.h>  // for printf
#include <stdlib.h> // for EXIT_SUCCESS
#include <stdint.h> // for fixed width integers
#include <inttypes.h> // for fixed width integers

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
