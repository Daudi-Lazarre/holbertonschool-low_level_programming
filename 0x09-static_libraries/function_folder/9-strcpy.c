#include "holberton.h"

/**
 * _strcpy - Copies the string that dest points to
 * @dest: Destination
 * @src: Copies string that dest points to
 * Return: Destination
 */

char *_strcpy(char *dest, char *src)
{
	int src_len;
	int x;

	for (src_len = 0; src[src_len] != 0; src_len++)
	{
		continue;
	}

	for (x = 0; x <= src_len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
