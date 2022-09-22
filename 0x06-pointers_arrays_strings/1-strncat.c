#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: The appended string by src
 * @src: The appending string to dest
 * @n: The maximum number of bytes to read from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen = strlen(dest);
	int i = 0;

	while (i < n)
	{
		dest[destLen] += src[i];
		i++, destLen++;
	}

	return (dest);
}
