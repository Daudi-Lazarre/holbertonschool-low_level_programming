#define NULL 0
/**
 * _strchr - Locate character in a string
 * @s: String
 * @c: Find this character
 * Return: Pointer to the first time a character pops up
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	if (c == '\0')
	{
		return (&s[x]);
	}
	return (NULL);
}
