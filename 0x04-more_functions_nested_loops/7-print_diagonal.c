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

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(92);
			_putchar(10);

			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
		}
	}
}
