#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "logic.h"
#include "inputs.h"

const int WINNING_POSITIONS[8] = {
    0b111000000,
    0b000111000,
    0b000000111,
    0b100010001,
    0b001010100,
    0b100100100,
    0b010010010,
    0b001001001};

// 0 = ongoing
// 1 = x wins
// 2 = o wins
// 3 = draw
int verify_board(char *board)
{
  size_t len = sizeof(WINNING_POSITIONS) / sizeof(WINNING_POSITIONS[0]);
  for (int i = 0; i < len; i++)
  {
    if ((get_bit_board(board, 'x') & WINNING_POSITIONS[i]) == WINNING_POSITIONS[i])
    {
      return 1;
    }
    if ((get_bit_board(board, 'o') & WINNING_POSITIONS[i]) == WINNING_POSITIONS[i])
    {
      return 2;
    }
  }

  if (strchr(board, '-') != NULL)
  {
    return 0;
  }

  return 3;
}

// This may be hard to read but it is really elegant
int get_bit_board(char *board, char symbol)
{
  int bit_board = 1; // Initialize the board

  for (int i = 0; i < 9; i++)
  {
    bit_board <<= 1;        // Move to current checking position
    if (board[i] == symbol) // Check symbol
    {
      bit_board += 1;
    }
  }

  return bit_board & 0b0111111111; // Remove the first 1
}