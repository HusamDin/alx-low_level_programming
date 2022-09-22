#include <string.h>
/**
 * _strncpy - Copies a string
 * @dest: The substituted string
 * @src: The substituting(copied) string
 * @n: The number of characters of the copied string
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
