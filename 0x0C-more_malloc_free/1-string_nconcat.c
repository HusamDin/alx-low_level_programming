#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: The concatinating string
 * @s2: The concatinated string
 * @n: the first n bytes of s2 to be concatinated
 *
 * Return: s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int s1Len, s2Len;
	char *s3;

	if (s2 == NULL)
		s2 = "";

	s1Len = strlen(s1);
	s2Len = strlen(s2);
	s3 = malloc(sizeof(char) * (s1Len + s2Len) + 1);

	if (s3 == NULL)
		return ('\0');

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		s3[s1Len] = s2[i];
		s1Len++;
	}

	s3[s1Len] = '\0';
	return (s3);
}
