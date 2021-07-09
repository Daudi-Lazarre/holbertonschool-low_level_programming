#include <stdio.h>

/**
 * _memset - fill memory wiith a constant bite
 * @s: location
 * @n: number of bytes to replace
 * @b: value being replaced
 * Return: revised pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
