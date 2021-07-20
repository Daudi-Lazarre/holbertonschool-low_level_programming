#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the two concatendated strings, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{

	char *cat_string; /* Concatenated string */
	int size1 = 0; /* First string size */
	int size2 = 0; /* Second string size */
	int x; /* This is for the incrememnt */

	while (s1 == NULL)
		s1 = "";
	while (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	cat_string = malloc((size1 + size2 + 1) * sizeof(char));
	if (cat_string == NULL)
		return (cat_string);

	for (x = 0; x < size1; x++)
	{
		cat_string[x] = s1[x];
	}

	for (; x < (size1 + size2); x++)
	{
		cat_string[x] = s2[x - size1];
	}
	cat_string[x] = '\0';
	return (cat_string);
}
