#include "main.h"
/**
 * _puts - Prints a string
 * @s: The string to be printed
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
