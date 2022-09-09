#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Prints a positive or negative number
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is 0\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
