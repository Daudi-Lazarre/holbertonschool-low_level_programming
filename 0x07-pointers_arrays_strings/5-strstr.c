#include "holberton.h"

/**
* _strstr - String inception
* @haystack: the string
* @needle: the string within a string
* Return: point to the null, if not the needle
*/

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;
	int c;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[a] != '\0')
	{
		if (haystack[a] == needle[0])
		{
			b = a, c = 0;
			while (needle[c] != '\0')
			{
				if (haystack[b] == needle[c])
					b++, c++;
				else
					break;
			}
			if (needle[c] == '\0')
			{
				return (haystack + a);
			}
		}
		a++;
	}
	return (0);
}
