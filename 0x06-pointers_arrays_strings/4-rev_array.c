#include "holberton.h"

/**
 * reverse_array - Flip the thing
 * @a: An array of integers
 * @n: the number of elements to swap
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
		n--;
	}
}
