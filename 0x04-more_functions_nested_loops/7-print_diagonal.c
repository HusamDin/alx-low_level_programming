#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: How long the diagonal is
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
	       	_putchar(98);
		_putchar(10);

		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
	}
	_putchar(10);
}
