#include <stdio.h>
/**
* main - Prints all combination of single digit numbers
*
* Return: 0
*/
int main(void)
{
	for (int ln = 48; ln <= 57; ln++)
	{
		for (int hn = 48; hn <= 57; hn++)
		{
			putchar(ln);
			putchar(hn);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
