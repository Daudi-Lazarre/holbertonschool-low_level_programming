#include <stdio.h>

/**
 * _memcpy - fill memory wiith a constant bite
 * @dest: Memory location
 * @src: Source being copied
 * @n: number of bytes to replace
 * Return: revised pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
