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

// char* fgets( char* str, int count, FILE* stream );
//#include <stdint.h>     // int16_t
//#include <inttypes.h>   // PRId16
#include <stdio.h>      // printf
#include <stdlib.h>     // EXIT_SUCCESS
#include <string.h>     // strlen()

#define MAX_LEN 50

int main()
{
    char color       [MAX_LEN] = "";
    char pluralNoun  [MAX_LEN] = "";
    char celebrity   [MAX_LEN] = "";
    size_t len                 =  0;

    // color 
    printf("Enter a color.....: ");
    fgets(color     , MAX_LEN, stdin);
    len = strlen(color);
    color     [ len - 1 ] = '\0';
    
    // pluralNoun
    printf("Enter plural noun.: ");
    fgets(pluralNoun, MAX_LEN, stdin);
    len = strlen(pluralNoun);
    pluralNoun[ len - 1 ] = '\0';

    // celebrity
    printf("Enter celebrity...: ");
    fgets(celebrity , MAX_LEN, stdin);
    len = strlen(celebrity);
    celebrity [ len - 1 ] = '\0';

    printf("Roses are %s \n", color      );
    printf("%s are %s    \n", pluralNoun, color );
    printf("I love %s    \n", celebrity  );

    return EXIT_SUCCESS;
}
