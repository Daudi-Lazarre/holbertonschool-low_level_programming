#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print all of the arguments
 * @format: Argument
 */

void print_all(const char * const format, ...)
{
	va_list VAL;
	unsigned int i = 0;
	unsigned int spc = 0;
	char *ptr;

	va_start(VAL, format);

	while (format && format[i])
	{
		if (spc)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(VAL, int));
			break;
		case 'i':
			printf("%i", va_arg(VAL, int));
			break;
		case 'f':
			printf("%f", va_arg(VAL, double));
			break;
		case 's':
			ptr = va_arg(VAL, char *);
			if (ptr)
			{
				printf("%s", ptr);
				break;
			}
			printf("(nil)");
			break;
		default:
			spc = 0;
			i++;
			continue;
		}
		spc = 1;
		i++;
	}
	printf("\n");
	va_end(VAL);
}
