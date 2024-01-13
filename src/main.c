#include <boards.h>
#include <game.h>
#include <stdio.h>

int main() {
	ultimate_board board  = make_ultimate_board();
	char           player = 'O';

	while (1) {
		selection us;
		selection ss;

		player = player == 'X' ? 'O' : 'X';

		print_board(board);

		printf("%c to move\n", player);
		get_play(&us, &ss);

		board = make_play(board, us, ss, player);
	}

	return 0;
}
