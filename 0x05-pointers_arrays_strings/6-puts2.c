#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string
 * @s: The string to be printed
 *
 * Return: void
 */

void puts2(char *s)
{
	int i = strlen(s);
	int j = 0;

	while (s[i - 1])
	{

		_putchar(s[j]);
		j += 2, i -= 2;
	}
	_putchar('\n');
}
