#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A pointer to the head pointer
 * @idx: The index of the list where the new node should be added
 * @n: The data of the new node to be added
 *
 * Return: The address of the new node or
 * NULL if it is not possible to add the new node at index
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *bef_new_node = (*h);
	dlistint_t *aft_new_node;
	unsigned int index = 0;

	if ((*h) == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = (*h);
		(*h)->prev = new_node;
		(*h) = new_node;

		return (new_node);
	}

	while (bef_new_node != NULL && index < idx - 1)
	{
		bef_new_node = bef_new_node->next;
		index++;
	}

	aft_new_node = bef_new_node->next;

	new_node->next = aft_new_node;
	bef_new_node->next = new_node;
	new_node->prev = bef_new_node;

	aft_new_node->prev = new_node;

	return (new_node);
}