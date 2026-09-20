#pragma once
#include <stdlib.h>

#define MAX_LEN 12
struct Player {
    char   name[MAX_LEN];
    int    score;
};

void  print_player(struct Player p);
