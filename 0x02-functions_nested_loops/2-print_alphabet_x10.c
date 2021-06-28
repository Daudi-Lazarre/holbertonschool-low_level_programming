#include "holberton.h"

/**
* print_alphabet_x10 - Betty needs to be vibe checked this instant
* Return: void
*/
void print_alphabet_x10(void)
{
	int x;
	int a;

	for (a = 0; a < 10; a++)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar(10);
	}
}
