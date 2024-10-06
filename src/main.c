#include <stdio.h>

#include "game.h"

int main(void)
{
    game_t *game = game_create();
    game_init(game);

    return 0;
}
