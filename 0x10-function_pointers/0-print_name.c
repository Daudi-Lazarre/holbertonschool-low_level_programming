#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Print the name of a function
 * @name: The name
 * @f: Function Pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		return;
	f(name);
}
