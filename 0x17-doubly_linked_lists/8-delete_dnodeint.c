#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at any index of a linked list
 * @head: A pointer to the head node pointer
 * @index: The index of the node that should be deleted
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = (*head);
	dlistint_t *bef_temp;
	dlistint_t *aft_temp;
	unsigned int idx = 0;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = temp->next;
		free(temp);
		return (1);
	}

	while (idx < index)
	{
		temp = temp->next;
		idx++;
	}

	bef_temp = temp->prev;
	aft_temp = temp->next;

	bef_temp->next = aft_temp;
	aft_temp->prev = bef_temp;

	free(temp);

	return (1);
}
