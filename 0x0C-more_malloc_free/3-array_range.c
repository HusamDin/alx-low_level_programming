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
	int *arr, arrSize = 0, i;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arrSize++;
	}

	arr = malloc(sizeof (int) * arrSize);

	if (arr == NULL)
		return (NULL);
	return (arr);
}
