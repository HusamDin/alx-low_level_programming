#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: the searched string for a prefix substring
 * @accept: the prefix substring
 *
 * Return: the length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				k = 1;
				break;
			}
		}
		if (k == 0)
			break;
	}
		return (i);
}
