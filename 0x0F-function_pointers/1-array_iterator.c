#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: an array of integers
 * @size: the size of the array
 * @action: a pointer to a function to be executed on each array element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
