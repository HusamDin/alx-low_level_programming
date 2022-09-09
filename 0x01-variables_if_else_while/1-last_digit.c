#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the last digit stored in n
*
* Description: Using the main function
* This program prints the last digit stored in n
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n", n % 10);
	return (0);
}
