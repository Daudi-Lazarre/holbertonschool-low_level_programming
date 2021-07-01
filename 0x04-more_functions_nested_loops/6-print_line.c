#include "holberton.h"

/**
* print_line - print the line
* @n: The variable for how long it is
* Return: void
*/

void print_line(int n)
{
	int x;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
