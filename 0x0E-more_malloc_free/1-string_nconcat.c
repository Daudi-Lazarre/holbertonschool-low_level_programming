#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings
 * @s1: 1st one
 * @s2: 2nd one
 * @n: s2 bytes I think
 * Return: An empty string if NULL passes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int s1len;
	unsigned int s2len;
	char *tired;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1len = 0; s1[s1len]; s1len++)
		continue;
	for (s2len = 0; s2[s2len]; s2len++)
		continue;
	if (n < s2len)
		s2len = n;
	tired = malloc((s1len + s2len + 1) * sizeof(char));
	if (tired == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		tired[i] = s1[i];
	}
	for (; i < s2len + s1len; i++)
	{
		tired[i] = s2[i - s1len];
	}
	tired[i] = '\0';
	return (tired);
}
