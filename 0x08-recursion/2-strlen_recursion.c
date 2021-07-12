#include "holberton.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int l = 0;
	{
		if (*s)
		{
			l = _strlen_recursion(++s);
			++l;
		}
		return (l);
	}
}
