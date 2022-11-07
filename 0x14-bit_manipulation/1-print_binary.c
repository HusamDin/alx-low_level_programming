#include "main.h"

/**
 * _pow - calculates power to the base
 * @base: The base
 * @power: The power
 *
 * Return: The value of the base to the power
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 0; i < power; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: The decimal number to convert into binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	unsigned int flag;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		check = divisor & n;
		if (check == divisor)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || divisor == 1)
			_putchar('0');
		divisor >>= 1;
	}
}
