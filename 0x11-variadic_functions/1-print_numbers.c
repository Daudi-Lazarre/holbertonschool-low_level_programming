#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Print #
 * @separator: - Part the coding sea
 * @n: Some numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int x;

	va_start(num_list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(num_list, int));
		if (x != n - 1 && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");
	va_end(num_list);
}
