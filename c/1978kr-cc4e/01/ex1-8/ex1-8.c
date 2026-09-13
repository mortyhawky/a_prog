/*
K&R C 1st. edition from 1978
Page 17 in the book page 23 in the pdf by: Chuck Serverance
Exercise 1-8:
Write a program to replace each tab by the three-charter
sequence >, backspace, -, which prints a >, and each backspace
by the similar sequence <.  This makes tabs and backspaces visible.

Solution adapted to C23 by Morty. Sept. 2026

c /a/prog/c/1978kr-cc4e/01/ex1-8

gcc     ex1-8.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fanalyzer -fsanitize=address,undefined  

clang   ex1-8.c -o a.out                 \
        -g3 -O0 -std=c23                    \
        -Wall -Wextra -Werror -Wpedantic    \
        -fsanitize=address,undefined        
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int c = 0;
    while ( (c = getchar() ) != EOF ) {
        if ( c == '\t' ) {
            //printf ( "%s", ">\b-" );
            //printf ( "<TAB>" );
            printf ( " \'\\t\' " );
            continue;
        }
        
        if ( c == '\b' ) {
            //printf ( "%s", "<\b-" );
            //printf ( "<BS>" );
            printf ( " \'\\b\' " );
            continue;
        }

        putchar(c);
    }
    
    return EXIT_SUCCESS;
}

/********************  DEBUGGING *************************
clang ex1-8.c -o a.out                 \
      -g3 -O0 -std=c23                    \
      -Wall -Wextra -Werror -Wpedantic    \
      -fsanitize=address,undefined

gdb a.out

b main
r < 1.txt
display (char)ch
n
n


set logging file ex1-8-gdb.log
set logging enabled on

break main
break 40        ch = getchar;
break putchar
display $edi
display (char)$edi
display (char)ch
display ch

run < 1.txt

display $edi
display (char)$edi

c
c
c
c
c
c

set logging enabled off


*/
           
