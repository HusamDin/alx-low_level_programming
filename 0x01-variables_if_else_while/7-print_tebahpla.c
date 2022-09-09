#include <stdio.h>
/**
* main - Prints alphabet in lowercase reversed
*
* Description: Using only main function
* This program prints alphabet in lowercase in a reverse order
* Return: 0(Succesful)
*/
int main(void)
{
	char z = 'z';

	while (z >= 'a')
		putchar(z--);
	putchar('\n');
	return (0);
}
