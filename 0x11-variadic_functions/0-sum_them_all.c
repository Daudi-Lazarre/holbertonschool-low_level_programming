#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all parameters
 * @n: # of options
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int x;
	int sum;

	va_start(pa, n);
	sum = 0;
	for (x = 0; x < n; x++)
	{
		sum += va_arg(pa, int);
	}
	va_end(pa);
	return (sum);
}
