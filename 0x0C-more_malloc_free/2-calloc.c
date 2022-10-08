#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: Number of elements of an array
 * @size: The number of bytes for each element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);

	return (c);
}
