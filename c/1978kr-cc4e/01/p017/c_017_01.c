/*
c /a/prog/c/1978kr-cc4e/01/p017

gcc     c_017_01.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        \
        && ./a.out; printf "\n*-> Exit code = $? <-*\n\n"

clang   c_017_01.c -o a.out                 \
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

K&R C first edition 1978 page 17 Line Counting

This program counts lines in its input. Input lines are assumed to be
terminated by the newline character '\n' that has been religiously
appended to every line written out.

Converted to C23 by Morty Sept. 2026.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int c  = 0;
    int nl = 0;

    while ( ( c = getchar() ) != EOF ) {
        if ( '\n' == c ) {  // Deliberately Yoda test.
            ++nl;
        }//end-if
    }//end-while

    printf ( "Input contains #%d newline characters,\n"
             "thus we assume input consists of #%d lines of text.\n",
             nl, nl
           );

    return EXIT_SUCCESS;
}
