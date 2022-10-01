#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: The number of arguments passed to main
 * argv: The strings passed to main
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
			if (atoi(argv[count]) > 0)
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
	}
	else
	{
		printf("0\n");
	}
	return (0);
}