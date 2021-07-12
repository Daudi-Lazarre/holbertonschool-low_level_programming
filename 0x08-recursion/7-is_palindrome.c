/**
 * palindrome_dtct - checks for palindrome recursively
 * @s: String
 * @x: Pointer one
 * @y: Pointer two
 * Return: zero or one
 */
int palindrome_dtct(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x >= y)
		{
			return (1);
		}
		return (palindrome_dtct(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * length_string - Length of string
 * @s: string
 * Return: integer
 */
int length_string(char *s)
{
	if (*s++)
	{
		return (1 + length_string(s));
	}
	return (0);
}

/**
 * is_palindrome - check for palindrome
 * @s: some string
 * Return: some integer
 */
int is_palindrome(char *s)
{
	return (palindrome_dtct(s, 0, length_string(s) - 1));
}
