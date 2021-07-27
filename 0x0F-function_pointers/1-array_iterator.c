#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Iterate array
 * @array: array
 * @size: size of the array
 * @action: The pointer that does
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;
	
	if (action && array)
		for (x = 0; x < size; x++)
			action(array[x]);
}
