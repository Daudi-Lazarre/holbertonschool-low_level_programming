#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Create int array
 * @min: Smol number
 * @max: Thicc number
 * Return: Pointer to new int array
 */

int *array_range(int min, int max)
{
	int *tired;
	int i;
	int size = (max - min + 1);

	if (min > max)
		return (NULL);

	tired = malloc(sizeof(int) * size);

	if (tired == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		tired[i] = min++;
	}
	return (tired);
}
