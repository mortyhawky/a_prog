#include <stdio.h>                                  /* c_014_01 */
/*
c /a/prog/c/1978kr-cc4e/01/p014/

gcc p014-c78.c -o a.out -ansi && ./a.out; echo "$?"

copy input to output; 1st version 
exit with: Ctrl-c or Ctrl-d
prints     (^C)      (255)
*/

main()
{
    int c;
    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
