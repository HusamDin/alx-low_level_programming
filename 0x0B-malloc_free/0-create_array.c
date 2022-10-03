#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a specific
 * char
 * @size: The size of the array
 * @c: The character initalizing the array with
 *
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
		return ('\0');
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}
	else
		return ('\0');
	return (s);
}
