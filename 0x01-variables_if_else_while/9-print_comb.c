#include <stdio.h>
/**
* main - Prints all combination of single digit numbers
*
* Return: 0
*/
int main(void)
{
	int ln;

	for (ln = 48; ln <= 57; ln++)
	{
		putchar(ln);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
