/*

c /a/prog/c/1978kr-cc4e/01/p016

gcc     c_016_02.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   c_016_02.c -o a.out                 \
        -std=c23                            \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        -g3 -O0                             \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"
  */

#include <inttypes.h>
#include <stdint.h>

#include <stdio.h>
#include <stdlib.h>

// count characters in input

int main(void) {
    
    for ( double nc = 0; getchar() != EOF; ++nc ) {
        ;
    }
    printf ("There was #%.0f characters in the input\n", 
            nc
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

