/* cd into working directory
c /a/prog/c/2004cprimer5/02IntroducingC/review_questions/q5/
gitall ; ll

m                       build
m cl                    clean
m c                     clean, rebuild, Cppcheck
m r                     clean, rebuild, run the program
m d                     build and start GDB

*/

//#include <inttypes.h>
//#include <stdint.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include "q5.h"

#include <stdio.h>
#include <stdlib.h>
//#include "q5.h"

int main(void) {
    puts("");

    printf("Baa Baa Black Sheep.");
     printf("Have you any wool?\n");
    printf("Begone!\nO creature of lard!");
    printf("What?\nNo/nBonzo?\n");

    int num;
    num = 2;

    printf("%d + %d = %d", num, num, num + num);

    puts("\n");
    return EXIT_SUCCESS;
}
