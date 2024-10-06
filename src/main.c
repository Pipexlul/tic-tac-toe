#include <stdio.h>

#include "game.h"

int main(void) {
    game_t *game = game_create();
    game_init(game);
    printf("Started game! Address: %p\n", game);

    game_destroy(game);
    printf("Destroyed game. Bye bye!\n");

    return 0;
}
