#include "holberton.h"

/**
 * _strchr - fill memory wiith a constant bite
 * @s: location
 * @n: number of bytes to replace
 * @b: value being replaced
 * Return: revised pointer
 */

char *_strchr(char *s, char c)
{
	int a;

	//Honestly, I think I was making this too complex.
	for (a = 0; a < c)
	{
		while (s[a] != '\0' && s[a] != c)
			a++;
	}
	if (s[a] == c)
		return (&s[a]);
	else
		return(0);
}
