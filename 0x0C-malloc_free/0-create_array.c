#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create an array of characters, init specific character
 * @size: Size of array to allocate
 * @c: Initialize array with this character
 * Return: Array pointer; else null
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);

	if (s == NULL || size == 0)
		return (NULL);

	else /* I always get points off for comments. */
	{
		for (x = 0; x < size; x++)
			s[x] = c;
	}
	return (s);
}
