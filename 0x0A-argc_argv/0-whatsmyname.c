#include <stdio.h>
/**
 * main - Prints the name of the exe file
 * @argc: The number of arguments inside argv
 * @argv: The array storing the arguments
 *
 * Return: 0
 */

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
