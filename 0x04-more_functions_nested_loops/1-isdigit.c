#include "holberton.h"

/**
* _isdigit - checks for a digit 0 to 9
* @c: placeholder; ASCII character
* Return: Returns one if the c is a digit
*/

int _isdigit(int c)
{
/*
 * The numbers are ascii numbers
 * 48 stands for zero
 * 57 stands for nine
 */
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
