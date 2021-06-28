#include "holberton.h"
/**
* _isalpha - Vibe checks the alphabet
* @c: the variable has entered the arena
* Return: 1 if the output is a letter, 0 if not
*/
int _isalpha(int c)
{
/*
 * int a equals zero so that
 * return can print 0
 * if (int c) is within the alphabet,
 * (a through z)
 * AND same thing for uppercase
 * then print 1
 * if not, print 0.
 */
	int a = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		a = 1;

	return (a);
}
