#include <stdio.h>

/**
 * _memset - fill memory wiith a constant bite
 * @s: location
 * @n: number of bytes to replace
 * @b: value being replaced
 * Return: revised pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	// This is very similar to the last one.
	// The only difference being the function.

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest)
}
