#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Add positive numbers
* @argc: Number of arguments
* @argv: String of arguments
* Return: 0 if successful, 1 if not
*/
int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum = 0;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (y = 1; y < argc; y++)
	{
		for (x = 0; argv[y][x] != '\0'; x++)
		{
			sum = argv[y][x];
			if (isdigit(sum) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[y]);
	}
	printf("%d\n", result);
	return (0);
}
