#include "holberton.h"

/**
 * factorial - Calculates factorial of integer
 * @n: Value
 * Return: Integer factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
