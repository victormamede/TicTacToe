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

	char current_player = 'x';

	int result;
	do
	{
		draw_board(board, ROWS, COLS);

		printf("\nYour play: ");
		play(board, current_player);

		if (current_player == 'x')
		{
			current_player = 'o';
		}
		else
		{
			current_player = 'x';
		}
		result = verify_board(board);
	} while (result == 0);

	draw_board(board, ROWS, COLS);

	switch (result)
	{
	case 1:
		printf("\n\n X Wins!\n");
		break;

	case 2:
		printf("\n\n O Wins!\n");
		break;
	default:
		printf("\n\n Draw!\n");
		break;
	}

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
