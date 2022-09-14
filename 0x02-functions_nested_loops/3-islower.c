#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: the character to be checked
 *
 * Return: If successful 1, otherwise 0
 */

int _islower(int c)
{
	int capA = 65;

	while (capA <= 90)
	{
		if (capA == c)
	      		return 0;
		else
		{
			if (capA == 90)
				return 1;
			else
				capA++;
		}
	}
}
