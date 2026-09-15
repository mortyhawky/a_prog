/*
c /a/prog/c/2016giraffAcademy/calculator

gcc       main.c -o a.out                           \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fanalyzer -fsanitize=address,undefined

clang     main.c -o a.out                           \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fsanitize=address,undefined
*/

#include <stdio.h>      // printf
#include <stdlib.h>     // EXIT_SUCCESS
#include <stdint.h>     // int16_t
#include <inttypes.h>   // PRId16

int main()
{
    int16_t num1 = 1;
    int16_t num2 = 2;
    printf("Enter first number..: ");
    scanf("%" PRId16, &num1);
    printf("Enter second number.: ");
    scanf("%" PRId16, &num2);

    printf("Answer: %" PRId16 "\n", num1 + num2);

    return EXIT_SUCCESS;
}
