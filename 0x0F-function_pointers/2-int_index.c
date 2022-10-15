/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: a pointer to a function compares array index to a num
 *
 * Return: an index to array if successful
 *         -1 if not successful
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	if (index == size || size <= 0)
		return (-1);
	return (index);
}
