#include "holberton.h"
/**
* print_sign - print the sign of a number
* @n: Number
* Return: One and zero
*/
int print_sign(int n)
{
/*
* If n is greater than 0, put + and return 1
* If n IS 0, put and return 0
* You get the idea...
*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
