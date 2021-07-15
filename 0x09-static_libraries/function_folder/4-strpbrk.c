#define NULL 0
/**
 * _strpbrk - Find strings
 * @s: String
 * @accept: Search this string
 * Return: Character
 */

char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				return (&s[x]);
			}
		}
	}
	return (NULL);
}
