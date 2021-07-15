/**
 * _strlen - Find the length of the string
 * @s: String
 * Return: Length of string (counter)
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter))
	{
		counter++;
	}
	return (counter);
}
