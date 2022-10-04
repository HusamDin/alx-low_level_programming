#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: The array to print sum of its diagonals
 * @size: The size of a
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sumDiag1 = 0, sumDiag2 = 0;

	for (i = 0; i < size; i++)
	{
               	sumDiag1 += a[i][i];
       	}


	for (i = 1; i < size; i++)
	{
	       	sumDiag2 += a[i - 1][size - i];
	}
		_putchar('0' + sumDiag1);
		_putchar(',');
		_putchar('0' + sumDiag2);
}
