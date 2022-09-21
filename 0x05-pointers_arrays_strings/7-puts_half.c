#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string
 * @s: The string to be printed
 *
 * Return: void
 */

void puts_half(char *s)
{
	int i = strlen(s);
	int k = (i - 1) / 2;
	int j  = k + 1;

	while (s[k] - 1)
	{
		_putchar(s[j]);
		j++, k--;
	}
	_putchar('\n');
}
