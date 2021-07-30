#include "variadic_functions.h"
#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

@@ -9,45 +9,43 @@

void print_all(const char * const format, ...)
{
	va_list VAL;
	unsigned int i = 0;
	unsigned int spc = 0;
	char *ptr;
	int i = 0;
	char *str, *sep = "";

	va_start(VAL, format);
	va_list list;

	while (format && format[i])
	va_start(list, format);

	if (format)
	{
		if (spc)
			printf(", ");
		switch (format[i])
		while (format[i])
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
			switch (format[i])
			{
				printf("%s", ptr);
				break;
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			printf("(nil)");
			break;
		default:
			spc = 0;
			sep = ", ";
			i++;
			continue;
		}
		spc = 1;
		i++;
	}

	printf("\n");
	va_end(VAL);
	va_end(list);
