#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat -  concatenates two strings
 * @s1: The concatinating string
 * @s2: The concatinated string
 *
 * Return: a pointer to s2 concatinated to s1
 */
char *str_concat(char *s1, char *s2)
{
	int s1Len, s2Len, i, j;
	char *s1s2Conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1Len = strlen(s1);
	s2Len = strlen(s2);
	s1s2Conc = malloc(sizeof(char) * (s1Len + s2Len) + 1);
	if (s1s2Conc == NULL)
		return (NULL);
	for (j = 0; *(s1 + j) != '\0'; j++)
	{
		s1s2Conc[j] = s1[j];
	}


	for (i = 0; i < s2Len; i++)
	{
		s1s2Conc[s1Len] = s2[i];
		s1Len++;
	}
	s1s2Conc[s1Len] = '\0';
	return (s1s2Conc);
}
