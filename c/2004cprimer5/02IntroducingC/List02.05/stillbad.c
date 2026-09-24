#include <stdio.h>
#include "stillbad.h"

void print_int(const char* str, int val) {

    printf ( "&str = %p \n", (void*)&str  );
    printf ( "&val = %p \n", (void*)&val );

    printf ( "%s val = %d \n", str, val  );

    return;
}

