/* Exercise RS-2
gcc rs-2.c
./a.out
*/
#include <stdio.h>

int main(void) {
    int usf = 0;
    int euf = 0;
    printf("Enter US Floor\n");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU Floor %d\n", euf);

    return 0;
}
