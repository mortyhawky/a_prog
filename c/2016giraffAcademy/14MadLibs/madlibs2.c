/*
c /a/prog/c/2016giraffAcademy/14madLibs

gcc       madlibs2.c -o a.out             \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fanalyzer -fsanitize=address,undefined   \
          && ./a.out ; printf "Exit code = $?\n"

clang     madlibs2.c -o a.out             \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fsanitize=address,undefined              \
          && ./a.out ; printf "Exit code = $?\n"


 ******  DEBUG  ******
gcc       madlibs2.c -o a.out             \
          -g3 -O0 -std=c23                          \
          -Wall -Wextra -Werror -Wpedantic          \
          -fanalyzer -fsanitize=address,undefined   \
          && gdb --command gdb.file a.out

b main
b trim_newline
r
display MAX_LEN
display s_trim
display s_fgets
display/8db &color

#display len
#display str
#display/8xb str

*/

// char* fgets( char* str, int count, FILE* stream );
#include <stdint.h>     // int16_t
#include <inttypes.h>   // PRId16
#include <stdio.h>      // printf
#include <stdlib.h>     // EXIT_SUCCESS
#include <string.h>     // strlen()

#define MAX_LEN 7
// This give us effectivly MAX_LEN - 2 chars input
// because \n gets converted to \0 and

size_t trim_newline(char *str) {
    printf("trim_newline: remove \'\\n\' and \n");
    printf("make sure string got \'\\0\' at end. \n");
    printf("Input string (str) : %s \n", str);
    size_t l = strlen(str);
    printf("l before = %zu \n", l);
    str[l-1] = '\0';

    l = strlen(str);
    printf("l after = %zu \n", l);

    return l;
}

int main()
{
    uint8_t    teller[] = { 0, 1, 2, 3, 4 ,5 ,6, 7 };
    char   color       [MAX_LEN] = "";  // color
    //char   pluralNoun  [MAX_LEN] = "";
    //char   celebrity   [MAX_LEN] = "";
    size_t len                   = 0;       // length after trim
    char   *s_fgets              = nullptr; // addr of str

    printf("teller = %" PRIu8 "\n", teller[0] );
    printf("Enter a color.....: ");
    s_fgets = fgets(color, MAX_LEN, stdin);
    if ( !s_fgets ) {
        return EXIT_FAILURE;
    }
    printf("s_fgets = %p\n", s_fgets);  // addr of string
    len = trim_newline(color);          // len of string
    printf("len after trim: %zu \n ", len );
    printf("color = %s \n ", color); 

    return EXIT_SUCCESS;
}



////     if (  !(fgets(color, MAX_LEN, stdin) )  ) {
////         return EXIT_FAILURE;
////     }
////     len = strlen(color);
////     len -= 1;
////     color [ len ] = '\0';         // replace the newline
////     //color [ MAX_LEN - 1 ] = '\0'; // always '\0' at MAX_LEN
////     
//// //    printf("Enter plural noun.: ");
//// //    if ( !fgets(pluralNoun, MAX_LEN, stdin) ) {
//// //        return EXIT_FAILURE;
//// //    }
//// //    len = strlen(pluralNoun);
//// //    len -= 1;
//// //    pluralNoun[ len ] = '\0';
//// //
//// //    // celebrity
//// //    printf("Enter celebrity...: ");
//// //    fgets(celebrity , MAX_LEN, stdin);
//// //    len = strlen(celebrity);
//// //    celebrity [ len - 1 ] = '\0';
//// 
////     printf("Roses are %s \n", color      );
////     printf("%s are %s    \n", pluralNoun, color );
////     printf("I love %s    \n", celebrity  );
//// 
////     return EXIT_SUCCESS;
//// }
