#include <game.h>
#include <stdio.h>

int get_resp(char question[]) {
	int buffer;
	printf("%s", question);
	scanf(" %d", &buffer);
	return buffer;
}

void get_play(selection *big_board, selection *small_board) {
	big_board->x   = get_resp("Big board x: ");
	big_board->y   = get_resp("Big board y: ");
	small_board->x = get_resp("Small board x: ");
	small_board->y = get_resp("Small board y: ");
}

ultimate_board make_play(ultimate_board board, selection uselect,
                         selection sselect, char player) {
	board.single_boards[uselect.y][uselect.x].board[sselect.y][sselect.x] =
	  player;
	return board;
}
