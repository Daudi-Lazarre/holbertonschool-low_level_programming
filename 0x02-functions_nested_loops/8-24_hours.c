#include "holberton.h"
/**
* jack_bauer - Interrogate the code... make it give the answer
* Return: void
*/
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			if (hours > 9)
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
			}
			else
			{
				_putchar('0');
				_putchar(hours + '0');
			}
			_putchar(':');
			if (minutes > 9)
			{
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
			}
			else
			{
				_putchar('0');
				_putchar(minutes + '0');
			}
			_putchar('\n');
		}
	}
	}
