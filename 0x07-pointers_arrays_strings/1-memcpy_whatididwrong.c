OA#include <stdio.h>

/**
 * _memset - fill memory wiith a constant bite
 * @s: location
 * @n: number of bytes to replace
 * @b: value being replaced
 * Return: revised pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	// FOR the following circumstance,
	// When x equals zero and it is less than
	// the unsigned int n, increment by one.

	for (x = 0; x < n; x++)
	{
		// This is where I went wrong.
		// Tbh, I'm not sure why.
		// I switched it to this:
		// s[x] = b
		// and it worked.
		// I'm guessing the + 1 was overkill somewhere
		// along the line.
		s[x + 1] = b;
	}
	return (s);
}
