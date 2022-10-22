#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer to list_t
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
		n += 1;
	return (n);
}
