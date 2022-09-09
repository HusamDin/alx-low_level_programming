#include <stdio.h>
/**
* main - Prints Hexadecimal numbers
*
* Description: Using only the main function
* This program prints all numbers of base 16
* Return: 0(Successful)
*/
int main(void)
{
	int i = 48;
	char c = 'a';

	while (i < 58)
		putchar(i++);
	while (c <= 'f')
		putchar(c++);
	putchar('\n');
	return (0);
}
