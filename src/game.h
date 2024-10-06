#ifndef GAME_H
#define GAME_H

#include "board.h"

typedef struct game_s {
    board_t *board;
} game_t;

game_t *game_create();
void game_init(game_t *game);
void game_destroy(game_t *game);

#endif //GAME_H
