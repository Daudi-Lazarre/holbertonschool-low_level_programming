#include "holberton.h"

/**
 * _strpbrk - Searches string for a set of bytes
 * @s: Search for string
 * @accept: Value
 * Return: Match.com
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
		}
	}
	return (0);
}
