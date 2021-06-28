#include "holberton.h"
/**
* _islower - determines whether or not the function is lowercase
* @c: is this the reason why check five is incorrect?
* Return: 1 if it is, 0 if it is not
*/

int _islower(int c)
{
/*
* If the int c from the function above is
* greater than the character 'a' or 'z',
* return the number one.
* Else, if it is not greater than the characters above,
* return 0.
*/

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
