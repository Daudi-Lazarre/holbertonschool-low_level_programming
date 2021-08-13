#include "holberton.h"

/**
* binary_to_uint - Convert binary into unsigned integer
* @b: Convert this to binary number
* Return: Unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int len = 0;
	unsigned int num = 0;
	int z = 0;
	int a = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
	{
		for (num = len - 1; i >= 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0;)
			}
			if (b[i] == '1')
			{
				z += a;
			}
			a = a * 2;
		}
		return (z);
	}
