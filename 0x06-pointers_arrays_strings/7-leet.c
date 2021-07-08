#include "holberton.h"

/**
 * leet - replace and make leet
 * @a: ALL CAPS WHEN YOU SPELL THE MAN NAME
 * Return: String
 */

char *leet(char *a)
{
	int i;
	int x;
	char check[] = "aAeEoOtTlL";
	char change[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; check[x]; x++)
			if (check[x] == a[i])
			{
				a[i] = change[x];
				break;
			}
	}
	return (a);
}
