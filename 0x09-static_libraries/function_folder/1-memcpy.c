/**
 * _memcpy - Copy memory area
 * @dest: Destination
 * @src: Source
 * @n: Number
 * Return: Destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
