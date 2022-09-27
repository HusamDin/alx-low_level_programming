/**
 * _strchr - locates a character in a string
 * @s: The string to search in
 * @c: The character to search for
 *
 * Return: s starting from c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
