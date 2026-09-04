/* Exercise 1-9
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
        // Convert any number of blanks following a blank.
        if( ' ' == ch ) {
            putchar(' ');   // always print one space
            ++blank;        // counting the output blanks.
            while( (ch = getchar() ) == ' ' ) {
                ;   // Consume blanks.
            }
        }
        if( EOF == ch ) {   // Catch any trailing spaces.
            break;
        }
        // Can't be else if, because if a newline follows a space it wouldn't be counted.
        if( '\n' == ch ) {
            ++newline;      // keep the counting of newlines.
        }
        // Can't be else if, because if a tab follows a space it wouldn't be counted.
        if( '\t' == ch ) {
            ++tab;          // also keep the counting of tabs.
            ch = ' ';       // if we have only tab between words, there would be no space.
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
