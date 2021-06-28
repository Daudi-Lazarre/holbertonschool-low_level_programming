#include "holberton.h"
/**
* times_table - the table of numbers n' stuff
* Return: void
*/
void times_table(void)
{
	int n, o, p;

	for (n = 0; n <= 9; n++)
	{
/*
* when o equals zero and is less than nine
* Increment by one
*/
		for (o = 0; o <= 9; o++)
		{
			p = n * o;

			if (o > 0)
			{
				if (p < 10)
				{
					_putchar(' ');
					_putchar('0' + p);
				}
				else
				{
					_putchar('0' + p / 10);
					_putchar('0' + p % 10);
				}
			}
			else
				_putchar('0');
			if (o == 9)
				continue;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
