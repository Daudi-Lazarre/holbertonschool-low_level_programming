#include <stdio.h>
/**
 * main - betty >:)
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar(10);

	return (0);
}
