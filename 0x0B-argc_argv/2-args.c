#include <stdio.h>

/**
 * main - Print the value of argv
 * @argc: Array size
 * @argv: Array argument values
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
