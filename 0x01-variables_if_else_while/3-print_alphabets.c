#include <stdio.h>

/**
* main - Prints alphabets
*
* Description: Using only the main function
* This program prints alphabets in lowercase and uppercase
* Return: Always 0
*/
int main(void)
{
	char lowerCase = 'a', upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase++);
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase++);
	}
	putchar('\n');
	return (0);
}
