#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments passed to main
 * @argv: The strings passed to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
