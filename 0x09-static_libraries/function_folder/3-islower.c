/**
 * _islower - Check whether or not the character is lower
 * @c: Character
 * Return: Zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
