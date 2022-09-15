#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers until 98
 * @n: the number to start printing from
 *
 * Return: null
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%i\n", n);
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%i, ", n--);
			else
			{
				printf("%i", n);
				putchar('\n');
				n--;
			}
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%i, ", n++);
			else
			{
				printf("%i", n);
				putchar('\n');
				n++;
			}
		}
	}
}
