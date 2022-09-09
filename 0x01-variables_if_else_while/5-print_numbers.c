#include <stdio.h>
/**
* main - Prints all base-ten digits
*
* Description: Using only the main function
* This program prints all base-ten digits starting from 0 to ten
* Return: Always 0 (Successful)
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
		printf("%d", i++);
	putchar('\n');
	return (0);
}
