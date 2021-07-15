#include <unistd.h>

/**
 * _putchar - Write character to std.out
 * @c: Print this character
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
