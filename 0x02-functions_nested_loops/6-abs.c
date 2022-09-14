/**
 * _abs - Computes the absolute value
 * @n: the number to be computed
 *
 * Return: The absolute value
 * Or 0 if n = 0
 */

int _abs(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (n * -1);
	else
		return (n);
}
