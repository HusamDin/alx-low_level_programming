#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Prints a positive or negative number
*
* Description: Using the main function
* this program checks an int if positive, is negative, or is zero
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
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
