#include <stdio.h>
#include <string.h>

#include "inputs.h"

// this buffer should be int[2]
void get_input(int *buf)
{
	char input[3];
	scanf("%s", input);

	buf[0] = input[0] - 'a';
	buf[1] = string_to_int(&input[1]) - 1;
}

int string_to_int(char *str)
{
	int result = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		result = result * 10 + (str[i] - '0');
	}

	return result;
}

void play(char *board, char symbol)
{
	int input[2];

	get_input(input);

	board[input[0] * 3 + input[1]] = symbol;
}
