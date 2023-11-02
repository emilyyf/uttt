#pragma once

typedef struct {
	char board[3][3];
	char result;
} single_board;

typedef struct {
	single_board single_boards[3][3];
} ultimate_board;

typedef struct {
	int x;
	int y;
} selection;

single_board make_single_board();
ultimate_board make_ultimate_board();
void print_board(ultimate_board);
