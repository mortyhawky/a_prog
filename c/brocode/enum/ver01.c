/* Bro Code
 * Enums
gcc -std=c23 -Werror -Wall -Wextra -Wpedantic \
    -fsanitize=address,undefined \
    -g ver01.c && ./a.out
*/
//#include <inttypes.h>
//#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("");

    /* enum = A  user-defined data type that consists of a
     *        set of named integer constants.
     *        Benefit: Replaces numbers with readable names.
     *
     * C guarantees that int can represent at least:
     *
     *     INT_MIN <= -32767
     *     INT_MAX >=  32767
     *
     * Therefore int is guaranteed to be at least 16 bits.
     *
     * The underlying integer type used for an enum is
     * implementation-defined.
     *
     * On my Arch Linux x86-64 system, sizeof(int) = 4 bytes,
     * and this enum occupies 4 bytes.
     * 
     * In the example below:
     * Day                  -> enum type
     * TUESDAY and FRIDAY   -> int constants
     * today and weekend    -> objects of type Day
     */

    typedef enum {
        MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
    }Day;

    Day today = TUESDAY;
    printf("today = %d \n", today );

    Day weekend = FRIDAY;
    printf("Weekends start on day %d of the week \n", weekend );
    
    printf("sizeof(SUNDAY) = %zu Bytes \n", sizeof(SUNDAY) );
    printf("sizeof(Day)    = %zu Bytes \n", sizeof(Day)    );
    printf("sizeof(today)  = %zu Bytes \n", sizeof(today)  );

    if(today == FRIDAY || today == SATURDAY || today == SUNDAY) {
        printf("It's the weekend \n");
    }
    else {
        printf("It's a weekday \n");
    }

    return EXIT_SUCCESS;
}
