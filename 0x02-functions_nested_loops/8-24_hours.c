#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: null
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			printf("%.2d:%.2d\n", h, m);
		}
	}
}
