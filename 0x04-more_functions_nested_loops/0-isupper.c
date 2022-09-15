/**
 * _isupper - Checks for uppercase character
 * @c: The character to get checked
 *
 * Return: 1 if c is uppercase
 * Otherwise, 0
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
