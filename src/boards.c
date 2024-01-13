#include <boards.h>
#include <stdio.h>

ultimate_board make_ultimate_board() {
	ultimate_board board;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			board.single_boards[i][j] = make_single_board();
		}
	}

	return board;
}

void print_board(ultimate_board board) {
	for (int big_line = 0; big_line < 3; ++big_line) {
		for (int j = 0; j < 3; ++j) {
			for (int big_column = 0; big_column < 3; ++big_column) {
				printf(" |");
				for (int i = 0; i < 3; ++i) {
					printf("%c", board.single_boards[big_line][big_column].board[j][i]);
				}
				printf("|");
			}
			printf("\n");
		}
		printf("\n");
	}
}

single_board make_single_board() {
	single_board board;

	board.result = ' ';

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) { board.board[i][j] = '-'; }
	}

	return board;
}
