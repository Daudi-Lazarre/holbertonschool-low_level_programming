#include "function_pointers.h"

/**
 * print_name - Print the name of a function
 * @name: The name
 * @f: Function Pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		return;
	f(name);
}
