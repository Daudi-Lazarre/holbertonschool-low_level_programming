#include "3-calc.h"
#include <stdlib.h>

/**
* main - Calculate two numbs with arg
* @argc: Counter
* @argv: 1D array
* Return: If successful, void
*/

int main(int argc, char *argv[])
{
	int first_number;
	int second_number;

	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_number = atoi(argv[1]);
	second_number = atoi(argv[3]);
	f = get_op_func(argv[2]);


	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(first_number, second_number));

	return (0);
}
