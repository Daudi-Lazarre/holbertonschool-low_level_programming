#include "function_pointers.h"

/**
 * int_index - Search index for integer
 * @array: Array to search for integer
 * @size: Array size
 * @cmp: Compare pointer values to function
 * Return: Index of the first matched element; if not that, -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
