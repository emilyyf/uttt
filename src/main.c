#include <stdio.h>
#include <stdlib.h>
#include <boards.h>
#include <game.h>

int main() {
	ultimate_board board = make_ultimate_board();
	char player;
	int buffer;

	while (1) {
		print_board(board);

		printf("Player: ");
		scanf(" %c", &player);
		selection us;
		selection ss;
		printf("Big board x: ");
		scanf(" %d", &buffer);
		us.x = buffer;
		printf("Big board y: ");
		scanf(" %d", &buffer);
		us.y = buffer;
		printf("Small board x: ");
		scanf(" %d", &buffer);
		ss.x = buffer;
		printf("Small board y: ");
		scanf(" %d", &buffer);
		ss.y = buffer;

		board = make_play(board, us, ss, player);
	}

	return 0;
}