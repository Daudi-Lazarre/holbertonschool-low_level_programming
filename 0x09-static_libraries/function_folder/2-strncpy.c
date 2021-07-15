#include "holberton.h"

/**
 * _strncpy - Copy string
 * @dest: Destination
 * @src: Other strings
 * @n: Number of bytes
 * Return: Character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;
	int srclen;

	for (srclen = 0; src[srclen] != 0; srclen++)
	{
		continue;
	}

	if (n <= srclen)
	{
		for (x = 0; x < n; x++)
		{
			dest[x] = src[x];
		}
		return (dest);
	}
	for (x = 0; x < srclen; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
