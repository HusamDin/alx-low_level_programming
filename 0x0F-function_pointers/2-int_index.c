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
	int i, index;
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			i = cmp(array[index]);
			if (i > 0)
				return (index);
		}
	}
	if (index == size)
		return (-1);
	return (index);
}
