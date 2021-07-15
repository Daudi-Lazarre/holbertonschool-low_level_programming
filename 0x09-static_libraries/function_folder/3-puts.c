#include "holberton.h"

/**
 * _puts - Print a string with a new line
 * @str: String
 * Return: 0
 */

void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter))
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar(10);
}
