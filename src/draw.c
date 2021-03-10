#include <stdio.h>

void draw_board(char board[], int rows, int cols)
{
	printf("\e[1;1H\e[2J");
	// drawing row labels
	printf("  ");
	for (int i = 0; i < rows; i++)
	{
		printf("%i ", i + 1);
	}
	printf("\n");

	for (int i = 0; i < cols; i++)
	{
		// draw col labels
		printf("%c ", i + 'a');

		for (int j = 0; j < rows; j++)
		{
			switch (board[3 * i + j])
			{
			case '-':
				printf(" ");
				break;
			case 'x':
				printf("X");
				break;
			case 'o':
				printf("O");
				break;
			}

			if (j < rows - 1)
			{
				printf("|");
			}
		}

		if (i < cols - 1)
		{
			printf("\n  ");
			printf("-----\n");
		}
	}
	printf("\n");
}
