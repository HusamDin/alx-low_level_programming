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
	int len;

	if (i % 2 != 0)
		len = (i + 1) / 2;
	else
		len = i / 2;

	while (len < i)
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
}
