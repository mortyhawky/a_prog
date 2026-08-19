/*
* /a/prog/c/main_template.c

gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    main_template.c -o a.out && ./a.out && echo "echo \$? = "$?
*/

#include <stdio.h>  // for printf
#include <stdlib.h> // for EXIT_SUCCESS
#include <stdint.h> // for fixed width integers

int main(void) {
    printf("main_template.c\n");
    char lang[] = "C";
    uint8_t version = 23;
    printf("Using %s%u\n", lang, version);

    return EXIT_SUCCESS;
}
