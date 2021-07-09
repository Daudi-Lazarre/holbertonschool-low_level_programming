#include "holberton.h"

/**
 * print_chessboard - Print checkers board
 * @a: Cesare Borgia
 * Return: zero
 */

void print_chessboard(char (*a)[8])
{
	int row; /* SO to that guy on Youtube */
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
