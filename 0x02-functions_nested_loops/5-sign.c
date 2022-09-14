#include "main.h"

/**
 * print_sign - Prints + OR -
 * @n: the number to be checked
 *
 * Return: 1 if successful
 * 0 if failed
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
