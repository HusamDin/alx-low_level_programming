#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to calculate its length
 *
 * Return: The length of s
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}
