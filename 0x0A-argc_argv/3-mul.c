#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: The number of arguments passed to main
 * @argv: The strings passed to main
 *
 * Return: 0(successful)
 * Or 1(failure)
 */
int main(int argc, char *argv[])
{
	int count;
       	int mul = 1;

	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
		{
			mul *= atoi(argv[count]);
		}
		printf("%d\n", mul);
		return (0);
       	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
