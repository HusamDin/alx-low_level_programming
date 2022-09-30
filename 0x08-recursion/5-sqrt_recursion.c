/**
 * calc_sqrt - Calculates the sqrt of a number
 * @n: The number to calculate its square root
 * @c: The number to guess the square root of n
 *
 * Return: n
 */

int calc_sqrt(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (calc_sqrt(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number to get its square root
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (calc_sqrt(n, 2));
}
