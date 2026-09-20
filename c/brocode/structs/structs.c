#include <stdio.h>
#include "structs.h"

void  print_player(struct Player p) {
    printf("p.name          = %s\n", p.name );
    printf("p.score         = %d\n", p.score  );
}
