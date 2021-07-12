#include "holberton.h"

/**
 * _puts_recursion - Prints string
 * @s : String being printed
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar(10);
}
