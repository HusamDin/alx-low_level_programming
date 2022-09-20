#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int n = strlen(s);
	char c;

	while (i < n - 1)
	{
		c = s[i];
		s[i] = s[n - 1];
		s[n - 1] = c;
		i++, n--;
	}
}
