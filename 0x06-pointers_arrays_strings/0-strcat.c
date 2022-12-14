#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate its length
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * _strcat - Concatenates two strings
 * @dest: The appended string by src
 * @src: The appending string to dest
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destLen = _strlen(dest);
	int srcLen = _strlen(src);
	int i = 0;

	while (i < srcLen)
	{
		dest[destLen] += src[i];
		i++, destLen++;
	}

	return (dest);
}
