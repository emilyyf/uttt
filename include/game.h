#pragma once

#include <boards.h>

#define X 1
#define O 2

typedef struct {
	int x;
	int y;
} selection;

ultimate_board make_play(ultimate_board, selection, selection, char);
void           get_play(selection *big_board, selection *small_board);
