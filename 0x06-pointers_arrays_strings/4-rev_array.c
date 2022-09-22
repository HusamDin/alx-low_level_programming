#include <stdio.h>
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		int j, k;

		j = a[i];
		k = a[n - 1];
		a[i] = k;
		a[n - 1] = j;
		i++, n--;
	}
}
