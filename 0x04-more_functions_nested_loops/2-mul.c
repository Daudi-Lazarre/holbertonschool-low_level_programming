#include "holberton.h"

/**
* mul - checks for a digit 0 to 9
* @a: placeholder
* @b: placeholder
* Return: Returns 0 for all multiplication
*/

int mul(int a, int b)
{
/*
 * This stands for product
 */
	int p;

	if (a * b)
	{
		p = a * b;

		return (p);
	}
	else
		return (0);
}
