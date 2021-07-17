#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers
 * @argc: Array size
 * @argv: Array with values
 * Return: The product of two numbers
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
