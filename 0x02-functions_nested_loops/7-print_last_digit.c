#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n: The number to print its last digit
 *
 * Return: The last digit of a number
 */

int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return n % 10;
}
