#include <stdlib.h>

#include "board.h"

//TODO: Handle malloc errors
board_t *board_create() {
    board_t *board = malloc(sizeof(board_t));
    return board;
}

void board_init(board_t *board) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board->tiles[i][j] = 0;
        }
    }
}
