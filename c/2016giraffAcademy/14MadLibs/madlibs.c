/*
c /a/prog/c/2016giraffAcademy/14madLibs

gcc       madlibs.c -o a.out             \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fanalyzer -fsanitize=address,undefined   \
          && ./a.out ; printf "Exit code = $?\n"

clang     madlibs.c -o a.out             \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fsanitize=address,undefined              \
          && ./a.out ; printf "Exit code = $?\n"
*/

//#include <stdint.h>     // int16_t
//#include <inttypes.h>   // PRId16
#include <stdio.h>      // printf
#include <stdlib.h>     // EXIT_SUCCESS

int main()
{
    printf("Roses are red\n");
    printf("Violets are blue\n");
    printf("I love you\n");

    return EXIT_SUCCESS;
}
