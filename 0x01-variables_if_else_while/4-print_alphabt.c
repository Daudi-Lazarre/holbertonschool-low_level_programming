/**
 * main - betty >:()
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q')
		{
			continue;
		}
		else if (x == 'e')
		{
			continue;
		}
		putchar(x);
	}
	putchar(10);
	return (0);
}
