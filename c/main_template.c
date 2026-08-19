/*
* /a/prog/c/main_template.c

gcc -std=c23 -Wall -Wextra -Werror -Wpedantic \
    -fsanitize=address,undefined -g3 \
    main_template.c -o a.out && ./a.out && echo "echo \$? = "$?
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("main_template.c\n");
    printf("Using C23\n");

    return EXIT_SUCCESS;
}
