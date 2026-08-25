/* Bro Code
 * Enums
gcc -std=c23 -Werror -Wall -Wextra -Wpedantic \
    -fsanitize=address, undefined \
    -g main.c && ./a.out
*/
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, **char) {

    uint16_t var = 12345;
    printf("var = %" PRIu16 "\n", var);

    return EXIT_SUCCESS;
}
