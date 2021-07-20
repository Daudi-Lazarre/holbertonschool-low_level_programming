#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - Concatenate two strings
 * @s1: First string
 * @s2: Second string
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	int s1len;
	int s2len;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len]; s1len++)
		continue;
	for (s2len = 0; s2[s2len]; s2len++)
		continue;
	res = malloc((s1len + s2len) * sizeof(char) + 1);
	if (res != NULL)
		while (x <= s1len + s2len)
		{
			if (x < s1len)
				res[x] = s1[x];
			else if (x >= s1len)
			{
				res[x] = s2[y];
				y++;
			}
			x++;
		}
		return (res);
	return (NULL);
}
