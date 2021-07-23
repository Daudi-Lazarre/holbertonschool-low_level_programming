#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for array
 * @nmemb: Member number
 * @size: Bytes
 * Return: Pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tired;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tired = malloc(nmemb * size);

	if (tired == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		tired[x] = 0;

	return (tired);
}
