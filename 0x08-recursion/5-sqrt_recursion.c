#include "holberton.h"

/**
 * return_natural_square_root - helps find the square root of n
 * @a: Square root this
 * @root: The natural square root
 * Return: Square root
 */

int return_natural_square_root(int a, int root)
{
	if (root * root == a)
	{
		return (root);
	}

	if (root * root > a)
	{
		return (-1);
	}
	return (return_natural_square_root(a, root + 1));
}

/**
 * _sqrt_recursion - Find the square root of n
 * @n: The value of the function
 * Return: Return -1 if n does not have a square root
 */

int _sqrt_recursion(int n)
{
	return (return_natural_square_root(n, 0));
}
