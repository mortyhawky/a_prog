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

#define MAX_LEN 16
// This give us effectivly MAX_LEN - 2 chars input
// because \n gets converted to \0 in trim_new_line
//  and we always need a '\0' at the end.

size_t trim_newline(char *str) {
    printf("trim_newline: remove \'\\n\' and make sure \n");
    printf("              string end with \'\\0\'    \n");
    printf("              Input string (str) : %s \n", str);
    size_t l = strlen(str);
    printf("              l before = %zu \n", l);
    str[l-1] = '\0';      // remove '\n'

    l = strlen(str);
    printf("              l after  = %zu \n", l);

    return l;
}

void dump_mem(char *mem, size_t bytes) {
    printf("dump_mem: *****************  DUMP MEMORY  ******************\n");
    printf("dump_mem: %zu bytes @ %p", bytes, mem);
    size_t i = 0;
    for (i = 0; i < bytes; i++) {
        if ( mem[i] == 0 ) {
            printf("   00");
            continue;
        }
        printf("   %02" PRIu8 , mem[i] );
    }
    puts("");
    printf("dump_mem: ------------------------------------------------\n\n");
}

int main()
{
    char    color       [MAX_LEN] = "";  // color
    size_t  len                   = 0;       // length after trim
    char    *s_fgets              = nullptr; // addr of str

    dump_mem( color , 8 );

    //dump_mem(teller, 7);

    //printf("teller = %" PRIu8 "\n", teller[0] );
    printf("main: Enter a color.....: ");
    s_fgets = fgets(color, MAX_LEN, stdin);
    if ( !s_fgets ) {
        return EXIT_FAILURE;
    }
    
    dump_mem( color , 8 );
 
    printf("main: s_fgets = %p\n", s_fgets);  // addr of string
    len = trim_newline(color);          // len of string
    printf("main: len after trim: %zu \n", len );
    printf("main: color = %s \n ", color); 

    dump_mem( color , 8 );

    return EXIT_SUCCESS;
}
