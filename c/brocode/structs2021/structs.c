#include <stdio.h>
#include "structs.h"

void  print_player(struct Player player) {
    printf("player.number        = %3d\n", player.number  );
    printf("player.name          = %s\n", player.name    );
    printf("player.score         = %3d\n", player.score   );
    puts("");
}

void show_player(Player_t p) {
    printf("p.num   = %4d\n", p.num );
    printf("p.nam   = %s\n", p.nam );
    printf("p.sco   = %4d\n", p.sco );
    puts("");
}
