/* Exercise 1-8
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.

c /a/prog/c/1988krc/ch01tut_intro/05charInputOutput/Exercise_1-9/

gcc       ver01.c -o a.out            \
          -std=c23                            \
          -Wall -Wextra -Werror -Wpedantic    \
          -fsanitize=address,undefined        \
          -g3 -O0                             \
          && ./a.out; printf "\n-->  Exit code=$?  <-- \n"

 */
#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Declare and Initialize variables.
    size_t blank   = 0;
    size_t tab     = 0;
    size_t newline = 0;
    int    ch      = 0;
    // Confirm variables initial values.
    puts("Init:");
    printf("blank    = %zu \n", blank  );
    printf("newline  = %zu \n", newline);
    printf("tab      = %zu \n", tab    );
    printf("int ch   = %d  \n", ch      );
    
    // Read in data:
    while( (ch = getchar() ) != EOF ) {
        // count occurrences, from most frequent to least frequent:
        if( ' ' == ch ) {
            ++blank;
            while( (ch = getchar() ) == ' ' ) {
                ;   // Consume spaces, that appears more than once.
            }
        }
        else if( '\n' == ch ) {
            ++newline;
        }
        else if( '\t' == ch ) {
            ++tab;
        }
    putchar(ch);
    }

    // Show results:
    puts("");
    printf("blank    = %zu \n", blank  );
    printf("tab      = %zu \n", tab    );
    printf("newline  = %zu \n", newline);
    printf("int ch   = %d  \n", ch     );



    return EXIT_SUCCESS;
}
