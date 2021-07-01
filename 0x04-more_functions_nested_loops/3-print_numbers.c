#include "holberton.h"

/**
* print_numbers - prints those numbers
* Return: not relevant
*/

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
