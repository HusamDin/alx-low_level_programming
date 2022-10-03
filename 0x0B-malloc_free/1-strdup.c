#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: a string copy with a newly allocated space in memory
 *
 * Return: str
 */

char *_strdup(char *str)
{
	int i;
	char *s;
	int len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
