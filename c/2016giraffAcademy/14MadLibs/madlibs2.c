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


gdb       a.out
b main
r
display/8db &color
display/8db &pluralNoun 
display/8db &celebrity
display len
display status
n

*/

// char* fgets( char* str, int count, FILE* stream );
//#include <stdint.h>     // int16_t
//#include <inttypes.h>   // PRId16
#include <stdio.h>      // printf
#include <stdlib.h>     // EXIT_SUCCESS
#include <string.h>     // strlen()

#define MAX_LEN 8
// This give us effectivly MAX_LEN - 2 chars input
// because \n gets converted to \0 and

int trim_newline(char *str) {
    printf("trim_newline: -> remove '\n' \n");
    printf("and make sure string is '\0' terminated \n");

    return EXIT_SUCCESS;

int main()
{
    char color       [MAX_LEN] = "";
    char pluralNoun  [MAX_LEN] = "";
    char celebrity   [MAX_LEN] = "";
    size_t len                 = 0;
    char* status               = nullptr;


    printf("Enter a color.....: ");
    
    status = fgets(color, MAX_LEN, stdin);
    printf("status = %p\n", status);
    int t = trim_newline(color);

    return EXIT_FAILURE;

    if (  !(fgets(color, MAX_LEN, stdin) )  ) {
        return EXIT_FAILURE;
    }
    len = strlen(color);
    len -= 1;
    color [ len ] = '\0';         // replace the newline
    //color [ MAX_LEN - 1 ] = '\0'; // always '\0' at MAX_LEN
    
//    printf("Enter plural noun.: ");
//    if ( !fgets(pluralNoun, MAX_LEN, stdin) ) {
//        return EXIT_FAILURE;
//    }
//    len = strlen(pluralNoun);
//    len -= 1;
//    pluralNoun[ len ] = '\0';
//
//    // celebrity
//    printf("Enter celebrity...: ");
//    fgets(celebrity , MAX_LEN, stdin);
//    len = strlen(celebrity);
//    celebrity [ len - 1 ] = '\0';

    printf("Roses are %s \n", color      );
    printf("%s are %s    \n", pluralNoun, color );
    printf("I love %s    \n", celebrity  );

    return EXIT_SUCCESS;
}
