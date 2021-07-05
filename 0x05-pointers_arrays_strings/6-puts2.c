#include "holberton.h"

/**
 * puts2 - skips one after printing one
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int length;

	while (str[i++])
		length++;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
