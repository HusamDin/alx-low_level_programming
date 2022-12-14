/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The searched in string
 * @accept: The searched for string
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
				return (s + i);
			}
		}
	}
	if (k == 0)
		return ('\0');
	return (s + i);
}
