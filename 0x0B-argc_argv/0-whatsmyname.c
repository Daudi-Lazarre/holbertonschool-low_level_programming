#include <stdio.h>

/**
 * main - Print filename & new line
 * @argc: size of the array, number of arguments
 * @argv: Array with arguments, an array of size argc
 * Return: 0 if successful
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
