/*

c /a/prog/c/1978kr-cc4e/01/p016

gcc     c_016_02.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   c_016_02.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

Test:
./a.out; printf "\n*-> Exit code = $? <-*\n\n"
echo    "1234567"   | ./a.out; printf "$?\n"
echo    ""          | ./a.out; printf "$?\n"
echo    "\t"        | ./a.out; printf "$?\n"
echo -e "\t"        | ./a.out; printf "$?\n"

printf  "1234567"   | ./a.out; printf "$?\n"
printf  ""          | ./a.out; printf "$?\n"
printf  "\t"        | ./a.out; printf "$?\n"

*/

#include <stdio.h>
#include <stdlib.h>

// Count characters in input.
// K&R C first edition 1978. Page 16.
// Adapted for C23 by Morty, Sept.2026

int main(void) {
    
    int    c  = 0;
    size_t nc = 0;
    size_t nl = 0;
    for ( nc = 0; (c = getchar()) != EOF; ++nc ) {
        if ( '\n' == c ) {
           nl++; // count newlines.
           nc--; // "uni-count" charchters if we h have a newline.
        }
    }
    printf ("There was #%zu characters in your input.  Newlines = %zu\n", 
            nc, nl
    );

    return EXIT_SUCCESS;
}

  //    printf(
  //        "sizeof(int) =%zu\n", 
  //        sizeof(int)  
  //    );
  //    printf(
  //        "sizeof(long)=%zu\n", 
  //        sizeof(long) 
  //    );
  //
  //    uint64_t nc = 0;
  //    while (getchar() !=EOF) {
  //        ++nc;
  //    }
  //    printf(
  //        "%" PRIu64 " characters including new-line(s) '\\n'\n", 
  //        nc
  //    );

