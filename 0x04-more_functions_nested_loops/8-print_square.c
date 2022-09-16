#include "main.h"

/**
 * print_square - Prints a square
 * @n: The size of the square
 *
 */

void print_square(int n)
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
			for (j = 1; j <= n; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
		_putchar(10);
	}
}
