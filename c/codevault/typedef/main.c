/* cd into working directory
c /a/prog/c/codevault/typedef/

 * Project; Compile & Run:
clear && make && ./typedef

 * Project; Compile & Debug:
clear && make clean && make && gdb --command gdb.file typedef

 * Project; Clean & Git
(make clean && gitall) || (ll)
*/

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "typedef.h"

typedef int8_t si8_t;   // signed integer 8bits type

int main(void) {
    printf("%ld\n", __STDC_VERSION_STDINT_H__);
    si8_t    si8_var = INT8_MIN;
    int8_t   var8    = INT8_MIN;
    uint8_t  u8      = UINT8_MAX;
    int16_t  s16     = INT16_MIN;
    uint16_t u16     = UINT16_MAX;
    int32_t  s32     = INT32_MIN;
    uint32_t u32     = UINT32_MAX;
    int64_t  s64     = INT64_MIN;
    uint64_t u64     = UINT64_MAX;
    printf("-> main:\n");
    printf("si8_t    si8_var = %+" PRId8  "\n", si8_var );
    printf("int8_t   s8  min = %+" PRId8  "\n", var8    );
    printf("uint8_t  u8  max = +%" PRIu8  "\n", u8      );
    printf("int16_t  s16 min = %+" PRIi16 "\n", s16     );
    printf("uint16_t u16 max = +%" PRIu16 "\n", u16     );
    printf("int32_t  s32 min = %+" PRIi32 "\n", s32     );
    printf("uint32_t u32 max = +%" PRIu32 "\n", u32     );
    printf("int64_t  s64 min = %+" PRIi64 "\n", s64     );
    printf("uint64_t u64 max = +%" PRIu64 "\n", u64     );
    puts("");

    printf("%lu \n", u64);
    puts("");

    Point_t mypoint;
    mypoint.x = 0.24;
    mypoint.y = 0.78;

    printf("-> main\n");
    printf("%lf, %lf\n", mypoint.x, mypoint.y);
    puts("");

    point_display(mypoint);
    puts("");

    return EXIT_SUCCESS;
}
