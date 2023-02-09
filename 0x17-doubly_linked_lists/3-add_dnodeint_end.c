#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head pointer
 * @n: The new element of the node to be added in the end
 *
 * Return: The new_node added
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_tail = malloc(sizeof(dlistint_t));

	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;

	if ((*head) == NULL)
	{
		new_tail->prev = NULL;
		new_tail->next = NULL;

		return (new_tail);
	}

	new_tail->prev = (*head);
	new_tail->next = NULL;
	(*head) = new_tail;

	return (new_tail);
}
