#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
			_putchar(32);
		for (k = 0; k <= i; k++)
			_putchar(35);
		_putchar(10);
	}
	_putchar(10);
}
