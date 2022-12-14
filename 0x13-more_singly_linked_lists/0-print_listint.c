#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%i\n", h->n);
		n += 1;
	}
	return (n);
}
