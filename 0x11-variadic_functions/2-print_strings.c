#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed in-between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va_string;
	unsigned int x;
	char *string;

	va_start(va_string, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(va_string, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (x != n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(va_string);
}
