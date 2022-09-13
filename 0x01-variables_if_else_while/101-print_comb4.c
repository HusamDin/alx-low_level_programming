#include <stdio.h>
/**
* main - Prints all combination of 3 digits
*
* Return: 0
*/
int main(void)
{
	int ln, mn, hn;

	for (ln = 48; ln <= 55; ln++)
	{
		for (mn = 49; mn <= 56; mn++)
		{
			for (hn = 50; hn <= 57; hn++)
			{
				if (hn > mn)
				{
					putchar(ln);
					putchar(mn);
					putchar(hn);
					if (ln == 55 && mn == 56 && hn == 57)
					{
						putchar(' ');
						hn++;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
