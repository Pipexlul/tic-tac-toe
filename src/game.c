#include <stdlib.h>

#include "game.h"

//TODO: Handle malloc errors
game_t *game_create() {
    game_t* game = malloc(sizeof(game_t));
    return game;
}

void game_init(game_t *game) {
    game->board = board_create();

    board_init(game->board);
}

void game_destroy(game_t *game) {
    if (!game) {
        return;
    }

    if (game->board != NULL) {
        board_destroy(game->board);
        game->board = NULL;
    }

    free(game);
}

