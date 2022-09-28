/**
 * _strstr - finds the first occurrence of the second string in the first one
 * @haystack: The searched in string
 * @needle: The searched for string
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0, l = 0, m = 1;

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (needle[i] == haystack[j + k])
			{
				k += j + 1;
				l = k - m;
				m++;
				break;
			}
			if (i >= 1)
				return ('\0');
		}
		if (haystack[j] == '\0')
		return ('\0'); 
	}
	if (needle[i] == '\0')
		return (haystack + l);
	return ('\0');
}
