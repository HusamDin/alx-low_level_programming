#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: The minimum value the array contains
 * @max: The maximum value the array contains
 *
 * Return: an array of integers if successful
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
