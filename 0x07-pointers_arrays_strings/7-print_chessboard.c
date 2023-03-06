#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
i * @a: The chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
	_putchar('\n');
	}
}
