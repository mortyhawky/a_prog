/*
c /a/prog/c/2016giraffAcademy/03madLibs

gcc       double.c -o a.out                         \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fanalyzer -fsanitize=address,undefined   \
          && ./a.out ; printf "Exit code = $?\n"

clang     double.c -o a.out                         \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fsanitize=address,undefined
*/

//#include <stdint.h>     // int16_t
//#include <inttypes.h>   // PRId16
#include <stdio.h>      // printf
#include <stdlib.h>     // EXIT_SUCCESS

int main()
{
    double num1 = 0.0;
    double num2 = 0.0;
    printf("Enter first number..: ");
    scanf("%lf", &num1);                // double %lf, float %f
    printf("Enter second number.: ");
    scanf("%lf", &num2);

    double sum = num1 + num2;
    printf("Answer: %.2f\n", sum);      // double & float %f

    return EXIT_SUCCESS;
}
