#include <stdio.h>

/**
 * main - Print the number of arguments with a new line
 * @argc: size of the array, number of arguments
 * @argv: array containing the values, arguments
 * Return: 0 if successful
 */

int main(int argc, __attribute__((unused)) char argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
