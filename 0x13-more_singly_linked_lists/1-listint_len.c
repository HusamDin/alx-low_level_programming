#include <stddef.h>
#include "lists.h"
/**
 * listint_t_len - returns the number of elements in a linked listint_t list
 * @h: a pointer to a list_int
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n += 1;
	}
	return (n);
}
