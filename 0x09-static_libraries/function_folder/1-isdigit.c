/**
 * _isdigit - Check for a digit
 * @digit: The digit
 * Return: Integer
 */

int _isdigit(char digit)
{
	if (digit >= '0' && digit <= '9')
	{
		return (1);
	}
	return (0);
}
