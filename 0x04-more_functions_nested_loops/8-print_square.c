#include "holberton.h"
/**
* print_square - print the thing
* @size: The size
*/
void print_square(int size)
{
	int x, y;

	if (size < 1)
	{
		_putchar(10);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
