#include <stdio.h>

/**
 * main - Implements the "Fizz-Buzz test"
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			puts("Fizz Buzz");
		else if (i % 3 == 0)
			puts("Fizz");
		else if (i % 5 == 0)
			puts("Buzz");
		else
			printf("%d\n", i);
	}
	return (0);
}
