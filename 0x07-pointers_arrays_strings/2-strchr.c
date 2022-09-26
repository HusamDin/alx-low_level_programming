/**
 * _strchr - locates a character in a string
 * @s: The string to search in
 * @c: The character to search for
 *
 * Return: s starting from c
 */

char *_strchr(char *s, char c)
{
	int i, cond = 1;

	for (i = 0; cond; i++)
	{
		if (s[i] == c)
			cond = 0;
		else
			i++;
	}

	if (*s == '\0')
		return (0);
	else
		return (s + i - 1);

}
