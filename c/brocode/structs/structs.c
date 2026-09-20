#include <stdio.h>
#include "structs.h"

void  print_player(struct Player player) {
    printf("player.name          = %s\n", player.name );
    printf("player.score         = %d\n", player.score  );
    puts("");
}
