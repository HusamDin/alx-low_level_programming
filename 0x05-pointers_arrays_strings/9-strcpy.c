#include <string.h>
#include "main.h"

/**
 * _strcpy - Copies a string to a string
 * @dest: the buffer
 * @src: the string to get copied
 *
 * Return: the buffer
 */

char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i = 0;

	while (i <= len)
	{
		(dest[i] = src[i]);
		i++;
	}
	return (dest);
	_putchar('\n');
}
