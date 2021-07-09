#include "holberton.h"

/**
 * _strchr - fill memory wiith a constant bite
 * @s: String theory bebeh
 * @c: Characters
 * Return: Revised pointer or null
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0' && s[a] != c)
	{
		a++;
	}
	if (s[a] == c)
		return (&s[a]);
	else
		return (0);
}
