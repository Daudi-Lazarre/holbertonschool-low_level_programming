/**
 * main - BETTY
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x < '9')
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar(10);
	return (0);
}
