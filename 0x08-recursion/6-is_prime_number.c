/**
 * calc_prime - Calculates the prime
 * @n: The number to calc its prime
 * @c: The number to guess primary
 *
 * Return: n
 */

int calc_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (calc_prime(n, c + 1));
}

/**
 * is_prime_number - Decides if the input integer is a prime number
 * @n: The number to see if it's a prime one
 *
 * Return: 1 if the the number is prime
 * Otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (calc_prime(n, 2));
}
