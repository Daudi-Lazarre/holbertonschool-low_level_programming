#include "holberton.h"

/**
* _isupper - checks uppercase
* @c: placeholder; ASCII character
* Return: Returns one if the c is uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
