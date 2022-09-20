#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(s);

	while (s[i - 1])
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
