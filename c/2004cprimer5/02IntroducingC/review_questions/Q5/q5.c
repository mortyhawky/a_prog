#include <stdio.h>
#include "stillbad.h"

void print_int  (const char* str, int val) {

    printf ( "    in print_int: \n");
    printf ( "        str = %p \n", (void*)str  );
    printf ( "        &val = %p \n", (void*)&val );

    printf ( "        %s val = %d \n", str, val  );

    return;
}


int  square     (int val) {

    printf ( "    in square: \n");
    int squared = val * val;

    return squared;     // power of 2
}

int  cube       (int val) {
    
    printf ( "    in cube: \n");
    int cubed = val * val * val;

    return cubed;       // power of 3
}

int  time_space (int val) {
    
    printf ( "    in time_space: \n");
    int time_spaced = val * val * val * val;

    return time_spaced; // power of 4
}
