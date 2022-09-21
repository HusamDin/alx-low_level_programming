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
		printf("%i, ", a[i]);
		i++;
	}
	puts("");
}
