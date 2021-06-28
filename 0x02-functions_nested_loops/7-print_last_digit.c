#include "holberton.h"
/**
* print_last_digit - Prints the last digit? What else lol
* @n: whatever the number is
* Return: the number
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;
/*
* if n is less than zero, put the negative digit
* of the negative mod thing
*
*/
	if (n < 0)
	{
		_putchar(-last_digit + '0');
		return (-last_digit);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
