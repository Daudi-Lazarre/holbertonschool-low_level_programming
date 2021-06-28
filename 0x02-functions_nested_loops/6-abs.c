#include "holberton.h"
/**
* _abs - absolute value
* @x: the number
* Return: absval
*/
int _abs(int x)
/*
* if x is less than zero,
* return the negative negative number
* ... which is positive
*/
{
	if (x < 0)
	{
		return (-x);
	}
	return (x);
}
