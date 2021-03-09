# TicTacToe

## How to build
Requirements:
- GCC
- Make

Just run `make`, and then `build/main`

## The idea
This is just a basic tic-tac-toe game, it's also my first C program so I believe the code quality is really poor.
I don't really know how to use Makefiles, my [Makefile](Makefile) probably has a lot of problems, one of them is that I don't know how to take `.h` files in consideration when rebuilding (and I also don't know if it is necessary), if anyone could help me, that would be great.

I don't know if my way of handling [inputs](src/inputs.c) is really nice but I think it is pretty elegant taking a buffer and sending the data directly to an 2-sized array (for x and y).