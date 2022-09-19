/**
 * swap_int - Swaps two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
