#include <stdio.h>

#include "draw.h"
#include "inputs.h"
#include "logic.h"

#define ROWS 3
#define COLS 3

void initialize_board();

char board[COLS * ROWS];

int main()
{
	initialize_board();
	draw_board(board, ROWS, COLS);

	return 0;
}

void initialize_board()
{
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			board[3 * i + j] = '-';
		}
	}
}
