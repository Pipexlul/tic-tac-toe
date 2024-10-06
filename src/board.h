#ifndef BOARD_H
#define BOARD_H

#define BOARD_SIZE 3

typedef struct board_s {
    int tiles[BOARD_SIZE][BOARD_SIZE];
} board_t;

board_t *board_create();
void board_init(board_t *board);

#endif //BOARD_H
