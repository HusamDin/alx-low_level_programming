#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a linked dlistint_t list.
 * @h: A pointer to the head pointer of dlistint_t
 *
 * Return: n: The number of elements of dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
		n++;

	return (n);
}
