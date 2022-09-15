/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The number to get checked
 *
 * Return: 1 if successful
 * Otherwise, 0
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
