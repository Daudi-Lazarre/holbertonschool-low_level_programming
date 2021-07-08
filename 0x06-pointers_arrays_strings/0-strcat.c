#include "holberton.h"

/**
* _strcat - Stir a cat. Jk, concatenate string
* @src: String cheese... source
* @dest: destination
* Return: count...ing the hours I invest into progress
*/

char *_strcat(char *dest, char *src)
{

	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
