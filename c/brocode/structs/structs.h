#pragma once
#include <stdlib.h>

#define MAX_LEN 80
struct Player {
    int    number;
    char   name[MAX_LEN];
    int    score;
};

typedef struct {
    int  num;
    char nam[MAX_LEN];
    int  sco;
} Player_t;

void print_player(struct Player player);

void show_player(Player_t p);
