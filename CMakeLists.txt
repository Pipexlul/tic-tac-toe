cmake_minimum_required(VERSION 3.29)
project(tic_tac_toe C)

set(CMAKE_C_STANDARD 17)

add_executable(tic_tac_toe src/main.c
        src/game.c
        src/game.h
        src/board.c
        src/board.h)
