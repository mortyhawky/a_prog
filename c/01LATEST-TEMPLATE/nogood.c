#include <stdio.h>
#include "nogood.h"

void print_val(const char* str, int val) {
    printf("%s val = %d \n", str, val);
    printf ( "&val = %p \n", (void*)&val );
    printf ( "str = %p \n", (void*)str );
    return;
}

