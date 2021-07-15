/**
 * _memset - Fill n bytes of memory area
 * @s: String
 * @b: Input
 * @n: Bytes being replaced
 * Return: Pointer to memory area S
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
