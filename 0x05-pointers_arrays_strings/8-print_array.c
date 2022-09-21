#include <stdio.h>

/**
 * print_array - Prints elements of an array of integers
 * @a: a pointer pointing to an array
 * @n: size of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%i", a[i]);
		else
			printf("%i, ", a[i]);
		i++;
	}
	puts("");
}
