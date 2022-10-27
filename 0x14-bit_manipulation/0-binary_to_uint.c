#include <string.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *    there is one or more chars in the string b that is not 0 or 1
 *    b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, len;
	unsigned int dec, tmp;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] < 48 || b[i] > 49)
			return (0);

	len = strlen(b) - 1;
	dec = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == 48)
			tmp = 0;
		else
			tmp = 1;
		for (j = 0; j < len; j++)
			tmp *= 2;
		dec += tmp;
		len--;
	}
	return (dec);

}
