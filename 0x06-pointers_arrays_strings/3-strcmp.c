/**
 * _strcmp - Compares two strings
 * @s1: The first compared string
  *@s2: The second compared string
 *
 * Return: 0 if identical
 * Or the difference in Ascii if not identical
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++, s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);

}
