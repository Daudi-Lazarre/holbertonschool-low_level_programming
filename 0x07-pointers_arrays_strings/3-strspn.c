#include "holberton.h"

/**
* _strspn - Locate character in string
* @s: String
* @accept: Accept it
* Return: Length
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int x = 0;
	int match = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			match = 0;
			if (s[a] == accept[x])
			{
				match = 1;
				break;
			}
		}
		if (!match)
		{
			break;
		}
	}
	return (a);
}
