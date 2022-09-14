#include "main.h"

/**
 * print_alphabet - Prints alphabets
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a++);
	}
	_putchar('\n');
}
