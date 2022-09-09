#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the alphabet from a to z
*
* Description: Using the main function
* This program prints the alphabet in lowercase from a to z
* Return: Always 0 (Sucessful)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter++);
		putchar('\n');
	}
	return (0);
}
