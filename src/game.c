#include <game.h>

ultimate_board make_play(ultimate_board board, selection uselect, selection sselect, char player) {
	board.single_boards[uselect.y][uselect.x].board[sselect.y][sselect.x] = player;
	return board;
}
