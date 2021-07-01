# include "holberton.h"

/**
* print_most_numbers - Betty needs to be vibe checked this instant
* Return: void
*/

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
		{
			continue;
		}
		_putchar(a);
	}
	_putchar(10);

}
