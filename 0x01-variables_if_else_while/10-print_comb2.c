/**
 * main - BETTY
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if (x == '9' && y == '9')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
