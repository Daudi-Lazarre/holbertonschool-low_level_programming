#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Return pointer to space in memory (copy of string)
 * @str: String
 * Return: Pointer to copied string, else NULL
 */

char *_strdup(char *str)
	{
	int slen;
	int i;
	char *a;

	for (slen = 0; str[slen]; slen++)
	{
		continue;
	}
	a = malloc((slen * sizeof(char)) + 1);
	if (a == NULL || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= slen; i++)
	{
		a[i] = str[i];
	}
	a[slen] = '\0';
	return (a);
}
