#include <stdio.h>
#include <stdlib.h>
/**
 * checkArg - Checks if a string contains only digits
 * @c: The string to check
 *
 * Return: 1(Sucessful)
 * Or 0(Failure)
 */
int checkArg(char *c)
{
	int i;

	for (i = 0; *c != '\0'; i++)
	{
		if (!(c[i] >= '0' && c[i] >= 9))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: The number of arguments passed to main
 * @argv: The strings passed to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (checkArg(argv[count]))
			{
				sum += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
			printf("%d\n", sum);
			return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}
}
