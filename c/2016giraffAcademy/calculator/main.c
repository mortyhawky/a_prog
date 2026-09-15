/*
c /a/prog/c/2016giraffAcademy/calculator

gcc       main.c -o a.out                           \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fanalyzer -fsanitize=address,undefined

clang     main.c -o a.out                          \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fsanitize=address,undefined
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 1;
    int num2 = 2;
    printf("Enter first number: ");
    scanf("%d", num1);


    return 0;
}
