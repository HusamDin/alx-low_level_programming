#include "main.h"

/**
 * _isalpha - Checks for an alphabetic letter
 * @c: The character to check
 *
 * Return: 1 if successful
 * or 0 if condition isn't met
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
