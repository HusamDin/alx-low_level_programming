#include <stdio.h>
/**
* main - Prints all possible combinations of 2 digits
*
* Return: 0
*/
int main(void)
{
	int ln, hn;

	for (ln = 48; ln <= 57; ln++)
	{
		for (hn = 49; hn <= 57; hn++)
		{
			if (hn > ln)
			{
				putchar(ln);
				putchar(hn);
				if (ln == 56  && hn == 57)
				{
					putchar('\n');
					ln++;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
